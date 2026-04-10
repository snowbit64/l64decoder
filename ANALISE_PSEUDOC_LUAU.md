# Análise aprofundada dos pseudoC: pipeline real de scripts `.l64`/Luau

## Escopo desta rodada
Foco em entender com maior precisão:
- como o jogo carrega script (source vs bytecode);
- qual compilador/formato de bytecode está embutido;
- quais opções de compilação parecem ter sido usadas;
- o que isso implica para aproximar o output do `luauc64` do script original.

Arquivos pseudoC analisados (principais):
- `pseudoC/loadBuffer_00bb6f84.c`
- `pseudoC/compileBufferAndSaveToFile_00bb7c60.c`
- `pseudoC/luau_compile_00ece974.c`
- `pseudoC/luau_load_00f2508c.c`

## 1) Comportamento de carregamento (`LuauScriptSystem::loadBuffer`)

No `loadBuffer`, o runtime diferencia dois casos:

1. **Entrada já em bytecode Luau**
   - Se `param_3 != 0` e `param_2[0] == 0x01`, chama `luau_load(L, chunkName, param_2 + 1, param_3 - 1, 0)`.
   - Isso confirma o padrão já observado nos `.l64` decifrados: header interno `01 03`, e o `luau_load` recebendo o blob a partir do byte da versão.

2. **Entrada em source (texto Lua/Luau)**
   - Chama `luau_compile(source, size, &options, &outSize)` e depois `luau_load` do resultado.
   - Em erro de compilação, o blob retornado começa com `\0` e a mensagem é extraída como string de erro.

**Implicação prática**: o fluxo real é totalmente coerente com o pipeline atual (`.l64` -> bytecode Luau -> decompilação), e o “+1 byte skip” não é gambiarra: reflete o uso real do loader.

## 2) Bytecode version suportada pelo runtime do jogo

No pseudoC de `luau_load`, a mensagem de mismatch aparece com faixa fixa:

- `expected [3..3], got %d`

Ou seja, esse runtime específico aceita **somente bytecode version 3**.

**Conclusão forte**:
- O jogo usa uma build/fork de Luau com alvo de bytecode antigo (v3), diferente de Luau upstream atual (que já opera em faixas mais altas nas versões recentes).
- Para fidelidade máxima, o parser/decompilador deve priorizar semântica de opcode/layout compatível com **LBC v3**.

## 3) Compilador embutido: assinatura e defaults

`luau_compile_00ece974.c` confirma uso da API C típica do Luau:

- assinatura: `luau_compile(const char* source, size_t size, lua_CompileOptions* options, size_t* outsize)`;
- retorno: buffer alocado (malloc) contendo bytecode (ou erro codificado).

Quando `options == NULL`, o código monta defaults equivalentes a:
- `optimizationLevel = 1`
- `debugLevel = 1`
- demais campos zerados/nulos

Isso bate com a estrutura conhecida de `lua_CompileOptions` (API pública do Luau).

## 4) Perfis de compilação observados no jogo

Pelos frames locais em `loadBuffer` e `compileBufferAndSaveToFile`, aparecem dois perfis relevantes:

1. **Compilação para execução imediata (`loadBuffer` em source):**
   - indícios de `debugLevel = 2`
   - otimização aparentemente menor (compatível com priorizar debug)

2. **Compilação para salvar em arquivo (`compileBufferAndSaveToFile`):**
   - indícios de `optimizationLevel = 2`
   - debug reduzido/desligado
   - depois aplica camada de cifra/obfuscação (`LUC_ENCRYPT_SHIFTS1/2`) ao payload salvo.

**Leitura prática**:
- Há separação “perfil debug/runtime” vs “perfil release em arquivo”.
- Isso explica por que alguns blobs podem ter menos metadados de debug (locals/upvalues), dificultando reconstrução textual exata.

## 5) Relação com o formato `.l64`

Do conjunto `compileBufferAndSaveToFile` + decoder já existente:
- byte 0 do arquivo salvo indica variante (2/3);
- payload é bytecode Luau cifrado por deslocamento com tabelas (`shifts`) e índice;
- após desfazer, reaparece cabeçalho `01 03` e fluxo normal de `luau_load`.

Isso reforça que `.l64` é um **container cifrado de bytecode Luau**, não um VM custom separado.

## 6) Direções para deixar o decompilado mais próximo do original

Prioridade alta (curto prazo):
1. **Travar modo de parsing para LBC v3**
   - validar versão e ajustar paths de parse assumindo esse layout primeiro.
2. **Mapeamento completo de opcodes LBC v3**
   - principalmente instruções com AUX/constantes/imports e saltos condicionais.
3. **Reconstrução de fluxo estruturado**
   - identificar blocos `if/elseif/else`, `while/repeat`, `forn/forg` a partir de CFG.

Prioridade média:
4. **Heurística de nomes e comentários de debug**
   - quando houver `debugname/lineinfo`, usar isso para emissão mais legível.
5. **Normalização de padrões Luau do compilador**
   - reconhecer padrões de lowering típicos de `luau_compile` (fastcall/import/captures).

Prioridade avançada:
6. **Perfil de saída por “modo de origem”**
   - modo mais “literal bytecode” (fiel ao VM) e modo “source-like” (mais próximo do script humano).

## 7) Limites atuais (importante)

Mesmo com bom mapeamento, não existe reversão perfeita em todos os casos, porque:
- comentários e formatação originais se perdem;
- nomes locais podem não estar presentes em builds com pouco debug;
- otimizações (ex.: inline/folding) apagam fronteiras sintáticas originais.

Ainda assim, com foco em v3 + CFG + padrões do compilador, dá para aumentar bastante a similaridade estrutural com o código fonte original.
