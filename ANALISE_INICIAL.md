# Análise inicial do pipeline `.l64 -> bytecode Luau -> script reconstruído`

## Objetivo
Construir o `luauc64` em duas fases:
1. **Descifrador `.l64`** (FS23 alvo, aproveitando lógica do FS25).
2. **Decompilador Luau** sobre o bytecode já decifrado.

## O que foi confirmado

### 1) Lógica de descifração no repositório de referência (FS25)
A implementação pública de referência usa duas chaves (`ge10_key2` e `ge10_key3`) e decide o algoritmo pelo cabeçalho inicial do arquivo (`0x02` ou `0x03`, combinado com `0xEF`/`0xFD`). Depois reescreve os dois primeiros bytes para `0x01 0x03` e opcionalmente remove o primeiro byte para compatibilidade com certos decompiladores Luau.

### 2) Padrão dos arquivos de amostra neste repositório
As amostras em `scripts/` começam com `02 ef`, o que bate com o fluxo `ge10_key2`.

### 3) Base atual do `luauc64`
O projeto já tinha parser/decompilador inicial de bytecode Luau, mas sem etapa de descifração `.l64` e com vários TODOs de parsing (typeinfo, child protos, decoding de instruções AUX).

## Mudanças implementadas nesta etapa

### Descifrador `.l64` integrado ao `luauc64`
Foi criado um módulo dedicado de decoding com:
- detecção de variantes por cabeçalho (`Ge10Key2` / `Ge10Key3`);
- transformação byte-a-byte compatível com o script de referência;
- normalização de cabeçalho para `0x01 0x03`;
- opção de saída com header compatível para decompiladores Luau.

### CLI atualizada para pipeline completo
A entrada agora aceita `.l64` diretamente; quando for `.l64`, o binário:
1. decifra para bytecode Luau;
2. opcionalmente salva o bytecode intermediário (`--bytecode-output`);
3. passa o buffer para o parser/decompilador já existente.

## Próximos passos recomendados
1. **Sanidade do descifrador**: salvar bytecode intermediário e validar com ferramentas externas (`medal`) em amostras pequenas.
2. **Parser robusto**: implementar parsing completo de child protos, `typeinfo` e campos `AUX` conforme versão real usada no FS23.
3. **IR intermediária**: transformar instruções em uma IR de alto nível (blocos básicos, CFG, use-def).
4. **Reconstrução semântica**: reconstituir estruturas Lua/Luau (if/while/for, calls, tables, closures, upvalues).
5. **Validação cruzada com pseudoC**: focar inicialmente em trechos de script system (`LuauScriptSystem`, `luau_load`, `luau_compile`) para alinhar suposições de runtime.
