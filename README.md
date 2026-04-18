# luauc64

**`luauc64`** é uma ferramenta CLI em Rust para **descriptografar, decompilar e recompilar** os
arquivos `.l64` da **GIANTS Engine** usados em *Farming Simulator 2023* (FS23).
O projeto reúne em um único binário todo o fluxo necessário para transformar os
scripts `.l64` embarcados no jogo em código legível (Luau) e de volta em
`.l64` compatível com o runtime.

```
┌────────┐   decipher    ┌──────┐   decompile   ┌────────┐
│ .l64   │ ────────────▶ │ .lb  │ ────────────▶ │ .luau  │
└────────┘               └──────┘               └────────┘
     ▲                       ▲                       │
     │         compile       │        compile        │
     └───────────────────────┴───────────────────────┘
```

- `.l64` — container criptografado da GIANTS Engine 10 (GE10).
- `.lb`  — bytecode Luau bruto, pronto para `luau_load` (começa com `01 03`).
- `.luau` — disassembly + reconstrução pseudo-Lua gerada pelo decompilador.

---

## Índice

- [Contexto: scripts da GIANTS Engine](#contexto-scripts-da-giants-engine)
- [Formato `.l64`](#formato-l64)
  - [Cabeçalho](#cabeçalho)
  - [Chaves GE10\_KEY2 e GE10\_KEY3](#chaves-ge10_key2-e-ge10_key3)
  - [Algoritmo de decifração](#algoritmo-de-decifração)
  - [Sentinela `0x01` e `luau_load`](#sentinela-0x01-e-luau_load)
- [Bytecode Luau v3 usado pelo FS23](#bytecode-luau-v3-usado-pelo-fs23)
- [Arquitetura do repositório](#arquitetura-do-repositório)
- [Build](#build)
- [Uso da CLI](#uso-da-cli)
- [Testes](#testes)
- [CI](#ci)
- [Referências](#referências)

---

## Contexto: scripts da GIANTS Engine

A GIANTS Engine historicamente usou três formatos para scripts Lua:

| Formato | Engine     | Conteúdo                                       |
|---------|------------|------------------------------------------------|
| `.lua`  | Todos      | Fonte Lua/Luau.                                |
| `.l32`  | GE9 e anteriores | Bytecode Lua 5.1 empacotado/cifrado.        |
| `.l64`  | GE10 (FS22, FS23) | Bytecode **Luau** cifrado com GE10\_KEY2/KEY3. |

Este repositório trata especificamente do **`.l64` usado em FS23** (GIANTS
Engine 10). A análise parte de pseudocódigo C obtido por descompilação da
biblioteca nativa do jogo — veja [`pseudoC/`](pseudoC/) e o documento
[`ANALISE_PSEUDOC_LUAU.md`](ANALISE_PSEUDOC_LUAU.md).

As funções-chave estudadas são:

| pseudoC                                   | Papel                                                              |
|-------------------------------------------|--------------------------------------------------------------------|
| `loadBuffer_00bb6f84.c`                   | Lê o `.l64`, decifra, valida o byte sentinela e chama `luau_load`. |
| `luau_load_00f2508c.c`                    | Parser oficial do bytecode Luau no runtime do jogo.                |
| `luau_compile_00ece974.c`                 | Entrada pública do compilador Luau embutido.                       |
| `compileBufferAndSaveToFile_00bb7c60.c`   | Fluxo de build usado pelo jogo para escrever `.l64` em disco.      |

---

## Formato `.l64`

### Cabeçalho

Todo `.l64` começa com dois bytes que identificam a variante de chave e o
marcador de versão:

```
offset 0 :  0x02  (GE10_KEY2)   ou  0x03  (GE10_KEY3)
offset 1 :  0xEF  ou  0xFD       (marcador interno de versão)
offset 2 :  ...   payload cifrado
```

| Byte 0 | Byte 1        | Chave usada | Tamanho da chave |
|--------|---------------|-------------|------------------|
| `0x02` | `0xEF`/`0xFD` | GE10\_KEY2  | 8 bytes          |
| `0x03` | `0xEF`/`0xFD` | GE10\_KEY3  | 16 bytes         |

### Chaves GE10\_KEY2 e GE10\_KEY3

As chaves são tabelas de bytes lineares. Exatamente como estão no runtime do
jogo e em [`luauc64/src/l64.rs`](luauc64/src/l64.rs):

```rust
const GE10_KEY2: [u8; 8] = [
    0x14, 0x0B, 0x09, 0x02, 0x08, 0x03, 0x03, 0x03,
];

const GE10_KEY3: [u8; 16] = [
    0x05, 0x0F, 0x0B, 0x01, 0x08, 0x02, 0x03, 0x03,
    0x08, 0x04, 0x03, 0x01, 0x04, 0x07, 0x08, 0x14,
];
```

### Algoritmo de decifração

Decifração é uma soma com chave e posição (sem XOR), aplicada a partir do
byte 2 em diante:

```
# GE10_KEY2 (key de 8 bytes)
for i in 2..len:
    x = i - 1
    plain[i] = cipher[i] + (x as u8) + GE10_KEY2[x % 8]   (mod 256)

# GE10_KEY3 (key de 16 bytes)
for i in 2..len:
    plain[i] = cipher[i] + (i as u8) + GE10_KEY3[(i - 1) % 16]   (mod 256)
```

A **cifração** é simétrica (mesma fórmula com subtração). É isto que
`encode_l64` faz ao reconstruir um `.l64` a partir de bytecode `.lb`.

Após decifrar, os dois primeiros bytes são sobrescritos por `01 03`, que é
a forma canônica esperada pelo loader do runtime:

```rust
decoded[0] = 0x01;   // sentinela luau_load
decoded[1] = 0x03;   // Luau bytecode version
```

### Sentinela `0x01` e `luau_load`

O pseudoC [`loadBuffer_00bb6f84.c`](pseudoC/loadBuffer_00bb6f84.c) mostra
que o jogo **lê o primeiro byte (`0x01`) como marcador e só então passa o
restante para `luau_load`**. `luau_load` por sua vez exige que o primeiro
byte do buffer que ele recebe seja a **versão do bytecode Luau**, e aceita
apenas **versão 3** (`LBC_VERSION_MIN == LBC_VERSION_MAX == 3`).

`luauc64` reproduz esse comportamento:

- `decode_l64(..., luau_compatible_header=true)` remove o byte `0x01` e
  devolve um buffer que começa em `0x03` — formato aceito diretamente
  por `luau_load`.
- `decode_l64(..., luau_compatible_header=false)` mantém `01 03 …` — o
  formato canônico também salvo como `.lb`.
- O parser (`BytecodeReader`) detecta automaticamente o padrão `01 03 …` e
  pula o byte sentinela, então qualquer variação funciona sem configuração.

---

## Bytecode Luau v3 usado pelo FS23

Após a decifração, o blob é **bytecode Luau** com algumas restrições que o
runtime do jogo impõe:

- **Versão**: apenas `3`. Qualquer outro valor produz
  `bytecode version mismatch (expected [3..3], got N)`.
- **Tags de constantes**: apenas `0..6`.
  - `0` – nil
  - `1` – bool
  - `2` – `f64`
  - `3` – string (índice varint na tabela de strings)
  - `4` – **import** (`u32` empacotado)
  - `5` – table
  - `6` – closure
  - `7`/`8`/`9` (vector/table-with-consts/integer) são **rejeitados**
    porque a engine FS23 não os implementa.
- **LOP\_GETIMPORT**: o `aux` (u32) é decodificado como caminho de import:

  ```
  count = (aux >> 30) & 0x3       # 1..3 segmentos
  id0   = (aux >> 20) & 0x3FF     # índice na tabela de constantes string
  id1   = (aux >> 10) & 0x3FF
  id2   =  aux        & 0x3FF
  ```

  Cada `idN` aponta para uma string no `proto.k` e o caminho final é
  `"a.b.c"`. O disassembly do `luauc64` já imprime esse caminho resolvido
  ao lado do opcode.

---

## Arquitetura do repositório

```
.
├── luauc64/                 # crate Rust (CLI + lib)
│   ├── src/
│   │   ├── l64.rs           # decifração/cifração GE10_KEY2/KEY3 (.l64 <-> .lb)
│   │   ├── bytecode.rs      # parser do bytecode Luau v3 (reader + estruturas)
│   │   ├── decompiler.rs    # disassembly + reconstrução pseudo-Lua
│   │   ├── main.rs          # CLI (decompile/decipher/compile)
│   │   └── lib.rs
│   └── tests/
│       ├── fixtures.rs      # testes de integração
│       └── fixtures/        # .l64 reais copiados do diretório `scripts/`
├── scripts/                 # 1318 scripts .l64 do jogo (dataset de teste)
├── pseudoC/                 # pseudocódigo C obtido por descompilação do binário do jogo
├── ANALISE_INICIAL.md       # visão geral inicial do pipeline
├── ANALISE_PSEUDOC_LUAU.md  # achados aprofundados sobre o loader/compilador
└── .github/workflows/ci.yml # CI (build + test + clippy + fmt)
```

---

## Build

Requisitos:

- Rust **1.95.0+** (o crate usa `edition = "2024"`).

```bash
cd luauc64
cargo build --release
```

O binário fica em `luauc64/target/release/luauc64`.

---

## Uso da CLI

```
luauc64 <COMMAND>

Commands:
  decompile  Pipeline completo: .l64 -> .lb -> .luau
  decipher   Somente decifrar:  .l64 -> .lb
  compile    Compilar/codificar origem em .l64
```

### Opções comuns

| Flag                 | Descrição                                                          |
|----------------------|--------------------------------------------------------------------|
| `-f, --file <FILE>`  | processa um único arquivo                                          |
| `-d, --dir <DIR>`    | processa todos os arquivos compatíveis dentro do diretório         |
| `-b, --batch <A B C>`| processa um lote explícito de arquivos                             |
| `-r, --recursive`    | varredura recursiva (junto com `--dir`)                            |
| `-o, --output <OUT>` | caminho de saída customizado (**modo file apenas**)                |
| `--overwrite`        | sobrescreve saídas existentes                                      |
| `--keep-going`       | continua o lote mesmo quando um item falha                         |
| `-v, --verbose`      | imprime detalhes extras do processamento                           |
| `--emit-json`        | emite metadados JSON em `<output>.json`                            |

### Opções específicas de `compile`

| Flag                             | Descrição                                                               |
|----------------------------------|-------------------------------------------------------------------------|
| `--variant <key2\|key3>`         | escolhe a variante GE10 (padrão: `key2`)                                |
| `--marker <BYTE>`                | segundo byte do cabeçalho (padrão: `239`, ou seja `0xEF`)               |
| `--compiler-template <TEMPLATE>` | obrigatório para `.lua/.luau`; shell com `{input}` e `{output}`         |

### Exemplos

Decompilar um único arquivo:

```bash
./luauc64 decompile -f scripts/StartParams.l64
# gera: scripts/StartParams.lb e scripts/StartParams.luau
```

Decompilar recursivamente **todos** os `.l64` do jogo de uma só vez:

```bash
./luauc64 decompile -d scripts -r --overwrite --keep-going -v
```

Decifrar (sem decompilar):

```bash
./luauc64 decipher -f scripts/StartParams.l64
# gera: scripts/StartParams.lb
```

Recompilar bytecode `.lb` para `.l64` usando a chave GE10\_KEY3:

```bash
./luauc64 compile -f out/StartParams.lb --variant key3 --marker 0xEF
```

Compilar `.luau` → `.l64` delegando a um compilador Luau externo:

```bash
./luauc64 compile -f out/StartParams.luau \
    --compiler-template "luau-compile --binary {input} -o {output}"
```

---

## Testes

O crate tem testes unitários (parser, cifra) e testes de integração contra
`.l64` reais do jogo copiados em `luauc64/tests/fixtures/`:

```bash
cd luauc64
cargo test
```

Saída esperada:

```
running 11 tests
test bytecode::tests::ensure_rejects_oob ... ok
test bytecode::tests::read_var_int_roundtrip ... ok
test bytecode::tests::read_var_int_truncated ... ok
test bytecode::tests::bytecode_version_must_be_three ... ok
test bytecode::tests::bytecode_compile_error_payload ... ok
test bytecode::tests::sentinel_01_03_is_stripped ... ok
test l64::tests::roundtrip_key2 ... ok
test l64::tests::roundtrip_key3 ... ok
test l64::tests::decode_strips_leading_sentinel_when_requested ... ok
test l64::tests::decode_rejects_unknown_header ... ok
test l64::tests::decode_rejects_too_short ... ok

running 2 tests
test startparams_decodes_and_parses_as_v3 ... ok
test achievement_manager_decodes_and_parses_as_v3 ... ok
```

Além disso, um smoke-test completo contra **todos os 1318 `.l64`** do
repositório passa sem falhas:

```bash
./luauc64/target/release/luauc64 decompile -d scripts -r --overwrite --keep-going
find scripts -name "*.luau" | wc -l    # -> 1318
```

---

## CI

GitHub Actions em [`.github/workflows/ci.yml`](.github/workflows/ci.yml)
roda em cada push/PR para `main`:

- `cargo build --verbose`
- `cargo test --verbose`
- `cargo clippy --all-targets -- -D warnings` (*soft-fail*)
- `cargo fmt --all -- --check` (*soft-fail*)

Os cargos de release para Windows/Android continuam disponíveis via
`workflow_dispatch`.

---

## Referências

- [`ANALISE_INICIAL.md`](ANALISE_INICIAL.md) — visão geral do pipeline.
- [`ANALISE_PSEUDOC_LUAU.md`](ANALISE_PSEUDOC_LUAU.md) — achados dos
  pseudoC sobre loader/compilador Luau embutido no runtime FS23.
- [`pseudoC/`](pseudoC/) — dumps de descompilação da biblioteca nativa do
  jogo (arquivos C). Os mais relevantes para este repositório são:
  - `loadBuffer_00bb6f84.c`
  - `luau_load_00f2508c.c`
  - `luau_compile_00ece974.c`
  - `compileBufferAndSaveToFile_00bb7c60.c`
- Luau (projeto oficial): <https://luau-lang.org/>
