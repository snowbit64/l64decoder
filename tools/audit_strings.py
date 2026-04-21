#!/usr/bin/env python3
"""Audit script: compare FS23 bytecode string sets against FS22 source strings+identifiers.

Reads .lb (Luau bytecode v3) string tables and classifies each FS23 script as
IDENTICAL (FS23 strings ⊆ FS22 source strings+identifiers) or DIVERGENT.
"""
import sys
import re
import os
from pathlib import Path


def read_varint(data, pos):
    result = 0
    shift = 0
    while True:
        b = data[pos]
        pos += 1
        result |= (b & 0x7F) << shift
        if (b & 0x80) == 0:
            break
        shift += 7
    return result, pos


def extract_lb_strings(path):
    data = Path(path).read_bytes()
    pos = 0
    # Skip the 0x01 sentinel prefix if present (game's loadBuffer strips it).
    if data[0] == 0x01 and data[1] == 0x03:
        pos = 1
    version = data[pos]; pos += 1
    # Luau v4+ has a types_version byte; v3 does not.
    if version >= 4:
        pos += 1
    count, pos = read_varint(data, pos)
    strings = []
    for _ in range(count):
        length, pos = read_varint(data, pos)
        s = data[pos:pos+length]
        pos += length
        try:
            strings.append(s.decode('utf-8'))
        except UnicodeDecodeError:
            strings.append(s.decode('latin-1'))
    return strings


IDENT_RE = re.compile(r'[A-Za-z_][A-Za-z0-9_]*')
STRING_RE = re.compile(r'"((?:[^"\\]|\\.)*)"|\'((?:[^\'\\]|\\.)*)\'')


def extract_fs22_tokens(path):
    src = Path(path).read_text(encoding='utf-8', errors='replace')
    idents = set(IDENT_RE.findall(src))
    strings = set()
    for m in STRING_RE.finditer(src):
        raw = m.group(1) if m.group(1) is not None else m.group(2)
        strings.add(raw)
        # Escape-resolved form (FS22 source has \\n that runtime resolves to \n).
        try:
            strings.add(raw.encode('latin-1', 'backslashreplace').decode('unicode_escape'))
        except (UnicodeDecodeError, UnicodeEncodeError):
            pass
    # Also add long-bracket strings [[...]] and [=[...]=] etc.
    for m in re.finditer(r'\[(=*)\[(.*?)\]\1\]', src, re.DOTALL):
        body = m.group(2)
        strings.add(body)
        # Lua spec: a leading newline immediately after [[ is stripped at runtime.
        if body.startswith('\n'):
            strings.add(body[1:])
        if body.startswith('\r\n'):
            strings.add(body[2:])
    return idents, strings


def audit(fs23_dir, fs22_dir):
    fs23_dir = Path(fs23_dir)
    fs22_dir = Path(fs22_dir)
    results = []
    for lb in sorted(fs23_dir.glob('*.lb')):
        name = lb.stem
        fs22 = fs22_dir / f'{name}.lua'
        if not fs22.exists():
            results.append((name, 'FS23-ONLY', [], 0))
            continue
        fs23_strs = extract_lb_strings(lb)
        idents, fs22_strs = extract_fs22_tokens(fs22)
        known = idents | fs22_strs
        missing = []
        for s in fs23_strs:
            if s in known:
                continue
            # Try ident-only match for short tokens.
            if IDENT_RE.fullmatch(s) and s in idents:
                continue
            missing.append(s)
        status = 'IDENTICAL' if not missing else 'DIVERGENT'
        results.append((name, status, missing, len(fs23_strs)))
    return results


if __name__ == '__main__':
    fs23 = sys.argv[1] if len(sys.argv) > 1 else 'scripts/utils'
    fs22 = sys.argv[2] if len(sys.argv) > 2 else 'fs22-decompiled-scripts/utils'
    results = audit(fs23, fs22)
    for name, status, missing, total in results:
        if status == 'FS23-ONLY':
            print(f'{name:40s} FS23-ONLY')
        elif status == 'IDENTICAL':
            print(f'{name:40s} IDENTICAL ({total} strings)')
        else:
            print(f'{name:40s} DIVERGENT ({len(missing)}/{total} unknown)')
            for s in missing[:20]:
                print(f'   - {s!r}')
            if len(missing) > 20:
                print(f'   ... and {len(missing)-20} more')
