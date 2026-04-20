#!/usr/bin/env python3
"""
Rebuild FS23 scripts by enriching the raw `luauc64` output with semantic
identifier names taken from the matching hand-decompiled FS22 script.

Workflow
--------
1. For every `scripts/**/*.l64`, we assume `scripts/**/*.luau` is already
   present (produced by `luauc64 decompile -d scripts -r --overwrite
   --keep-going`).  If it is not, the file is skipped with a warning.
2. The matching FS22 reference is looked up at
   `fs22-decompiled-scripts/<same-relative-path>.lua`.  Missing matches
   are still emitted (without renaming) so the rebuilt tree mirrors the
   FS23 corpus.
3. The tool walks both files in parallel:
     * It detects every top-level `function Foo.bar(...) ... end`,
       `function Foo:bar(...) ... end` and `local function foo(...) ... end`
       declaration.
     * When the same qualified name exists on both sides, the FS23
       parameter list (`v1, v2, …`) is rewritten to match the FS22 names.
       Methods already have `self` in the FS23 header so they line up
       with FS22 methods (where the first parameter is elided via `:`).
     * Module-scope `local vN = <expr>` statements whose `<expr>` appears
       verbatim (post-self-rename) on the FS22 side are paired with the
       corresponding `local name = <expr>` there and renamed file-wide.
4. The rebuilt source is written to `fs23-scripts-rebuilt/<same-relative-path>.lua`.

Matching is intentionally conservative: any rename is applied at the
whole-scope it was learned in (function body for params, file for top-
level locals) and only when the target identifier is still the bare
`vN` token — so identifiers that were never matched remain as `vN` and
can be improved in future runs.

The goal is not a perfect rebuild; it is a high-value 80/20 step that
(a) makes the FS23 tree visibly closer to the original source for easy
hand-editing, and (b) surfaces patterns that should be folded back into
`luauc64` core.
"""

from __future__ import annotations

import argparse
import os
import re
import sys
from dataclasses import dataclass, field
from typing import Dict, List, Optional, Tuple


# -------------------------- function extraction ---------------------------

# function Foo.bar(a, b, c)  ->  qualified="Foo.bar" method=False params=[a,b,c]
# function Foo:bar(a, b, c)  ->  qualified="Foo:bar" method=True  params=[a,b,c]
# local function foo(a, b)   ->  qualified="foo"     method=False params=[a,b]
FUNC_DECL_RE = re.compile(
    r"""
    ^(?P<indent>\s*)
    (?:local\s+)?
    function\s+
    (?P<name>[A-Za-z_][A-Za-z0-9_.:]*)
    \s*\(
    (?P<params>[^)]*)
    \)\s*$
    """,
    re.VERBOSE | re.MULTILINE,
)

# function( ... )  (anonymous; we don't touch these).
ANON_FUNC_RE = re.compile(r"\bfunction\s*\(")


@dataclass
class FuncDecl:
    """A single `function <qualified>(<params>) ... end` block."""
    qualified: str
    params: List[str]
    header_line_idx: int  # index into file lines
    body_start: int  # inclusive, first line after the header
    body_end: int  # exclusive, the `end` line


def _split_params(raw: str) -> List[str]:
    raw = raw.strip()
    if not raw:
        return []
    return [p.strip() for p in raw.split(",")]


def extract_functions(lines: List[str]) -> List[FuncDecl]:
    """Return all top-level-ish function declarations in dependency order.

    "Top-level-ish" = any `function X(...)` header that sits at the outer
    indentation level of its block, tracked by a naive brace counter
    (since Lua uses `do`/`end` pairs).  Nested closures are recognised
    by the `function(` (no name) form and count as open blocks so we
    don't stumble into them.
    """
    decls: List[FuncDecl] = []

    # A cheap block depth tracker.  We increment on keywords that open a
    # block and decrement on `end` at the same indentation level.  This
    # is not a full Lua parser but is good enough to find the matching
    # `end` for a named `function` declaration in both our output and
    # the FS22 sources.
    for idx, line in enumerate(lines):
        m = FUNC_DECL_RE.match(line)
        if not m:
            continue
        header_line = idx
        qualified = m.group("name")
        params = _split_params(m.group("params"))

        depth = 1  # we are inside the function
        i = idx + 1
        n = len(lines)
        while i < n and depth > 0:
            stripped = lines[i].strip()
            if stripped.startswith("--"):
                i += 1
                continue
            # Very rough block-opener detection.  We only need the net
            # depth to find our matching `end`, not perfect accuracy.
            opens = _count_block_openers(stripped)
            closes = _count_block_closers(stripped)
            depth += opens - closes
            i += 1
        body_end = i  # line index of one-past-`end` (or EOF)
        decls.append(
            FuncDecl(
                qualified=qualified,
                params=params,
                header_line_idx=header_line,
                body_start=header_line + 1,
                body_end=body_end - 1,  # point at the `end` line itself
            )
        )
    return decls


_OPEN_RE = re.compile(
    r"""
    (?<![A-Za-z0-9_])
    (?:
        function\b (?! \s* [A-Za-z_.:] ) |  # anon function(
        function\s+[A-Za-z_][A-Za-z0-9_.:]*\s*\( |
        \bdo\b |
        \bthen\b |
        \brepeat\b
    )
    """,
    re.VERBOSE,
)
_CLOSE_RE = re.compile(r"(?<![A-Za-z0-9_])(?:\bend\b|\buntil\b)")


def _count_block_openers(line: str) -> int:
    # Strip string literals so `"then"` doesn't count.
    scrubbed = _strip_strings_and_comments(line)
    return len(_OPEN_RE.findall(scrubbed))


def _count_block_closers(line: str) -> int:
    scrubbed = _strip_strings_and_comments(line)
    return len(_CLOSE_RE.findall(scrubbed))


_STRING_RE = re.compile(
    r"""
    "(?:\\.|[^"\\])*" |
    '(?:\\.|[^'\\])*' |
    \[\[.*?\]\]
    """,
    re.VERBOSE | re.DOTALL,
)
_LINE_COMMENT_RE = re.compile(r"--[^\n]*")


def _strip_strings_and_comments(line: str) -> str:
    line = _STRING_RE.sub('""', line)
    line = _LINE_COMMENT_RE.sub("", line)
    return line


# ---------------------------- token rewriting ----------------------------

_IDENT_RE = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")


def substitute_identifiers(
    text: str, mapping: Dict[str, str]
) -> str:
    """Replace bare identifiers in `text` using `mapping`, preserving
    string literals and `--` comments.  The match is whole-token only
    (so `v1` does not touch `v10` or `foov1`)."""
    if not mapping:
        return text
    out: List[str] = []
    n = len(text)
    i = 0
    while i < n:
        c = text[i]
        # Line comments.
        if c == "-" and i + 1 < n and text[i + 1] == "-":
            j = text.find("\n", i)
            if j == -1:
                j = n
            out.append(text[i:j])
            i = j
            continue
        # Double-quoted string.
        if c == '"':
            j = i + 1
            while j < n:
                if text[j] == "\\" and j + 1 < n:
                    j += 2
                    continue
                if text[j] == '"':
                    j += 1
                    break
                j += 1
            out.append(text[i:j])
            i = j
            continue
        # Single-quoted string.
        if c == "'":
            j = i + 1
            while j < n:
                if text[j] == "\\" and j + 1 < n:
                    j += 2
                    continue
                if text[j] == "'":
                    j += 1
                    break
                j += 1
            out.append(text[i:j])
            i = j
            continue
        # Identifier.
        if c.isalpha() or c == "_":
            j = i
            while j < n and (text[j].isalnum() or text[j] == "_"):
                j += 1
            tok = text[i:j]
            out.append(mapping.get(tok, tok))
            i = j
            continue
        out.append(c)
        i += 1
    return "".join(out)


# ----------------------------- file rebuild ------------------------------

VN_RE = re.compile(r"^v\d+$")


def pair_params(fs23: List[str], fs22: List[str]) -> Dict[str, str]:
    """Build a `{vN: fs22_name}` mapping for a pair of parameter lists
    of the same length where the FS23 side is all `vN` tokens."""
    if len(fs23) != len(fs22):
        return {}
    m: Dict[str, str] = {}
    for a, b in zip(fs23, fs22):
        a = a.strip()
        b = b.strip()
        # FS22 param might itself be `self` — skip, since our method
        # emitter already produced `self`.
        if a == b:
            continue
        if VN_RE.match(a) and _is_valid_lua_name(b):
            m[a] = b
    return m


def _is_valid_lua_name(s: str) -> bool:
    if not s:
        return False
    if s in _LUA_KEYWORDS:
        return False
    return bool(re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", s))


_LUA_KEYWORDS = {
    "and", "break", "continue", "do", "else", "elseif", "end", "false",
    "for", "function", "goto", "if", "in", "local", "nil", "not", "or",
    "repeat", "return", "self", "then", "true", "until", "while",
}


@dataclass
class RebuildStats:
    files_total: int = 0
    files_with_match: int = 0
    funcs_matched: int = 0
    params_renamed: int = 0
    top_locals_renamed: int = 0


_MODULE_LOCAL_RE = re.compile(
    r"^(?P<indent>\s*)local\s+(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*=\s*(?P<rhs>.+?)\s*$"
)

_ANY_LOCAL_RE = re.compile(
    r"^\s*local\s+(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*=\s*(?P<rhs>.+?)\s*$"
)


def _match_inner_locals(fs23_body: str, fs22_body: str) -> Dict[str, str]:
    """Build a `{vN: fs22_name}` mapping by scanning single-name
    `local` declarations in both bodies and pairing them by RHS
    equality.  Conservative: only returns unambiguous pairings and
    skips any FS22 name that already exists as an identifier in the
    FS23 body."""

    def _collect(text: str) -> List[Tuple[str, str]]:
        out: List[Tuple[str, str]] = []
        for line in text.splitlines():
            m = _ANY_LOCAL_RE.match(line)
            if not m:
                continue
            out.append((m.group("name"), _canonical_rhs(m.group("rhs"))))
        return out

    fs23_locals = _collect(fs23_body)
    fs22_locals = _collect(fs22_body)
    if not fs23_locals or not fs22_locals:
        return {}

    # Count how often each RHS appears on each side — only 1:1 mappings
    # are accepted.
    from collections import Counter
    fs23_counts = Counter(rhs for _, rhs in fs23_locals)
    fs22_counts = Counter(rhs for _, rhs in fs22_locals)
    fs22_by_rhs = {rhs: name for name, rhs in fs22_locals}

    existing_idents = set(_IDENT_RE.findall(fs23_body))

    mapping: Dict[str, str] = {}
    for name, rhs in fs23_locals:
        if not VN_RE.match(name):
            continue
        if fs23_counts[rhs] != 1 or fs22_counts.get(rhs, 0) != 1:
            continue
        ref = fs22_by_rhs.get(rhs)
        if ref is None or not _is_valid_lua_name(ref):
            continue
        if ref in existing_idents:
            continue
        mapping[name] = ref
    return mapping


def extract_top_level_locals(lines: List[str]) -> List[Tuple[int, str, str]]:
    """Return `(line_idx, name, rhs_canonical)` for every `local x = expr`
    statement that appears at the outermost indentation level (i.e. the
    line has no leading whitespace).  Only simple single-name locals are
    captured; multi-name `local a, b = ...` forms are ignored.
    """
    out: List[Tuple[int, str, str]] = []
    for idx, line in enumerate(lines):
        if line.startswith(" ") or line.startswith("\t"):
            continue
        m = _MODULE_LOCAL_RE.match(line.rstrip("\n"))
        if not m:
            continue
        rhs = _canonical_rhs(m.group("rhs"))
        out.append((idx, m.group("name"), rhs))
    return out


def _canonical_rhs(rhs: str) -> str:
    """Normalise whitespace so that two RHS expressions that differ only
    in spacing compare equal."""
    return re.sub(r"\s+", "", rhs)


def rebuild_file(
    fs23_text: str,
    fs22_text: Optional[str],
    stats: RebuildStats,
) -> str:
    """Return the rebuilt FS23 source text."""
    fs23_lines = fs23_text.splitlines(keepends=True)
    if fs22_text is None:
        return fs23_text
    fs22_lines = fs22_text.splitlines(keepends=True)

    fs23_funcs = extract_functions(fs23_lines)
    fs22_funcs = extract_functions(fs22_lines)
    fs22_by_name: Dict[str, FuncDecl] = {f.qualified: f for f in fs22_funcs}

    # Apply per-function param renames in reverse order so earlier line
    # numbers stay valid.
    for fd in sorted(fs23_funcs, key=lambda f: f.header_line_idx, reverse=True):
        ref = fs22_by_name.get(fd.qualified)
        if ref is None:
            continue
        mapping = dict(pair_params(fd.params, ref.params))
        if mapping:
            stats.funcs_matched += 1
            stats.params_renamed += len(mapping)

            # Rewrite the header line: replace the parens' contents with the
            # paired names where we have a mapping.
            header = fs23_lines[fd.header_line_idx]
            new_params = [mapping.get(p.strip(), p.strip()) for p in fd.params]
            fs23_lines[fd.header_line_idx] = re.sub(
                r"\(([^)]*)\)",
                f"({', '.join(new_params)})",
                header,
                count=1,
            )

        # Rewrite identifiers inside the body using the current mapping.
        body_join = "".join(fs23_lines[fd.body_start : fd.body_end])
        if mapping:
            body_join = substitute_identifiers(body_join, mapping)

        # In-body local matching: within the FS22 function body, extract
        # every `local <name> = <rhs>` (single-name) and canonicalise
        # the RHS.  In the FS23 body (already param-renamed above), do
        # the same for `local vN = <rhs>` and rename when the RHS
        # matches verbatim.  Only valid FS22 identifiers that don't
        # already exist in the FS23 body are accepted.
        body_rename = _match_inner_locals(
            body_join,
            "".join(fs22_lines[ref.body_start : ref.body_end]),
        )
        if body_rename:
            stats.params_renamed += 0  # no-op, kept for clarity
            body_join = substitute_identifiers(body_join, body_rename)

        new_body_lines = body_join.splitlines(keepends=True)
        fs23_lines[fd.body_start : fd.body_end] = new_body_lines

    stats.files_total += 1
    if any(f.qualified in fs22_by_name for f in fs23_funcs):
        stats.files_with_match += 1

    # Top-level local matching.  After the param renames above, the RHS
    # of module-scope locals often matches the FS22 source verbatim
    # (e.g. `Class(Foo)`, `setmetatable({}, Foo_mt)`).  Pair them up and
    # rename file-wide.
    fs23_locals = extract_top_level_locals(fs23_lines)
    fs22_locals = extract_top_level_locals(fs22_lines)
    fs22_rhs_to_name: Dict[str, str] = {}
    for _, name, rhs in fs22_locals:
        fs22_rhs_to_name.setdefault(rhs, name)

    file_rename: Dict[str, str] = {}
    for _, name, rhs in fs23_locals:
        if not VN_RE.match(name):
            continue
        ref_name = fs22_rhs_to_name.get(rhs)
        if ref_name is None or not _is_valid_lua_name(ref_name):
            continue
        # Don't collide with an identifier that already exists in FS23.
        if ref_name in {n for _, n, _ in fs23_locals}:
            continue
        file_rename[name] = ref_name

    if file_rename:
        # Only rename at module scope — inside function bodies `vN`
        # refers to a different register.  We do this by walking the
        # line list and only touching lines that sit outside any
        # `function … end` block.
        fs23_funcs_after = extract_functions(fs23_lines)
        in_func = [False] * len(fs23_lines)
        for fd in fs23_funcs_after:
            for i in range(fd.header_line_idx, min(fd.body_end + 1, len(fs23_lines))):
                in_func[i] = True
        for i, line in enumerate(fs23_lines):
            if in_func[i]:
                continue
            fs23_lines[i] = substitute_identifiers(line, file_rename)
        stats.top_locals_renamed += len(file_rename)

    return "".join(fs23_lines)


# --------------------------------- CLI ---------------------------------


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--fs23-dir", default="scripts")
    ap.add_argument("--fs22-dir", default="fs22-decompiled-scripts")
    ap.add_argument("--output-dir", default="fs23-scripts-rebuilt")
    ap.add_argument(
        "--limit",
        type=int,
        default=0,
        help="if >0, process only the first N files (for smoke testing)",
    )
    ap.add_argument("--quiet", action="store_true")
    args = ap.parse_args()

    stats = RebuildStats()
    processed = 0

    for root, _, files in os.walk(args.fs23_dir):
        for name in sorted(files):
            if not name.endswith(".luau"):
                continue
            if args.limit and processed >= args.limit:
                break
            rel_dir = os.path.relpath(root, args.fs23_dir)
            rel = os.path.normpath(os.path.join(rel_dir, name))
            fs23_path = os.path.join(root, name)
            # FS22 lookup: same relative path, `.lua` instead of `.luau`.
            fs22_rel = rel[:-5] + ".lua"
            fs22_path = os.path.join(args.fs22_dir, fs22_rel)
            out_path = os.path.join(args.output_dir, fs22_rel)

            with open(fs23_path, "r", encoding="utf-8", errors="replace") as f:
                fs23_text = f.read()
            fs22_text: Optional[str] = None
            if os.path.isfile(fs22_path):
                with open(fs22_path, "r", encoding="utf-8", errors="replace") as f:
                    fs22_text = f.read()

            rebuilt = rebuild_file(fs23_text, fs22_text, stats)

            os.makedirs(os.path.dirname(out_path), exist_ok=True)
            with open(out_path, "w", encoding="utf-8") as f:
                f.write(rebuilt)
            processed += 1

    if not args.quiet:
        print(
            f"rebuilt={processed} files_with_match={stats.files_with_match} "
            f"funcs_matched={stats.funcs_matched} "
            f"params_renamed={stats.params_renamed}"
        )
    return 0


if __name__ == "__main__":
    sys.exit(main())
