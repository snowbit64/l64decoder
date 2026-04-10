# luauc64

`luauc64` is a CLI tool for Farming Simulator `.l64` script files.

It supports three workflows:

- **decompile**: `file.l64 -> file.lb -> file.luau`
- **decipher**: `file.l64 -> file.lb`
- **compile**: `file.lb/.lua/.luau -> file.l64`

---

## Build

```bash
cd luauc64
cargo build --release
```

---

## Commands

### 1) Full pipeline (`decompile`)

```bash
luauc64 decompile [OPTIONS]
```

This command deciphers `.l64` bytecode and then decompiles it to `.luau`.

### 2) Bytecode only (`decipher`)

```bash
luauc64 decipher [OPTIONS]
```

This command only deciphers `.l64` into `.lb`.

### 3) Compile to `.l64` (`compile`)

```bash
luauc64 compile [OPTIONS]
```

This command compiles/encodes into `.l64`:
- `.lb` input: directly encodes Luau bytecode to `.l64`
- `.lua`/`.luau` input: runs an external compiler template, then encodes to `.l64`

---

## Common options

Both commands share the same input options:

- `-f, --file <FILE>`: process a single file
- `-d, --dir <DIR>`: process all matching files inside a directory
- `-b, --batch <FILE...>`: process multiple files explicitly
- `-r, --recursive`: recursive directory scan (used with `--dir`)
- `-o, --output <OUTPUT>`: custom output path (**file mode only**)
- `--overwrite`: overwrite output files if they already exist
- `--keep-going`: continue batch/dir execution even when one file fails
- `-v, --verbose`: print extra processing details
- `--emit-json`: emit sidecar metadata JSON (`<output>.json`)

> `--output` is ignored when `--dir` or `--batch` is used.

Compile-specific options:

- `--variant <key2|key3>`: choose GE10 variant (default: `key2`)
- `--marker <BYTE>`: second header byte (default: `239`, i.e. `0xEF`)
- `--compiler-template <TEMPLATE>`: required for `.lua/.luau`; shell template with `{input}` and `{output}` placeholders

---

## Examples

### Decompile one file

```bash
luauc64 decompile -f scripts/StartParams.l64
```

Generates:

- `scripts/StartParams.lb`
- `scripts/StartParams.luau`

### Decompile one file to a custom destination

```bash
luauc64 decompile -f scripts/StartParams.l64 -o out/StartParams.luau
```

To also emit metadata:

```bash
luauc64 decompile -f scripts/StartParams.l64 --emit-json
```

### Decipher one file

```bash
luauc64 decipher -f scripts/StartParams.l64
```

Generates:

- `scripts/StartParams.lb`

### Decompile an entire directory recursively

```bash
luauc64 decompile -d scripts -r --keep-going --verbose
```

### Decipher a batch of files

```bash
luauc64 decipher -b scripts/A.l64 scripts/B.l64 scripts/C.l64 --overwrite
```

---

## Notes

- `decompile` accepts `.l64` and `.lb` as input.
- `decipher` accepts only `.l64`.
- For `.l64`, the tool applies the known GE10 decode logic and writes Luau bytecode.
- The decompiler is still evolving; some opcodes may be emitted as `UNKNOWN_OPCODE_*` until full opcode mapping is implemented.

---

## CI build artifacts

This repository includes a GitHub Actions workflow that builds and uploads artifacts (without creating a GitHub Release) for:

- Windows (`x86_64-pc-windows-msvc`)
- Android (`aarch64-linux-android`)

## Documentação de engenharia reversa

- `ANALISE_INICIAL.md`: visão geral inicial do pipeline.
- `ANALISE_PSEUDOC_LUAU.md`: achados aprofundados de pseudoC sobre loader/compilador Luau no jogo.


### Compile one .lb file to .l64

```bash
luauc64 compile -f scripts/StartParams.lb
```

### Compile one .luau file to .l64 (via external compiler)

```bash
luauc64 compile -f scripts/StartParams.luau \
  --compiler-template "luau-compile --binary {input} -o {output}"
```
