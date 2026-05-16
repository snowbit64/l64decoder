# Problemas do luauc64 observados em `scripts/ExtraContentSystem.l64`

Arquivo bruto de saída: `scripts/ExtraContentSystem.luau`.
Arquivo reconstruído: `fs23-scripts-rebuilt/ExtraContentSystem.lua`.

## Problemas encontrados

1. **Perda de referência de tabela no bootstrap de constantes**
   - Saiu `for v3 in v0:gmatch(".") do` em vez de iterar `ExtraContentSystem.VALID_CHARS_STRING:gmatch(".")`.

2. **Construtor com `setmetatable` quebrado**
   - `local v2 = v2(v3, v4)` no lugar do padrão `local self = setmetatable({}, customMt or ExtraContentSystem_mt)`.

3. **Método declarado com sintaxe incorreta**
   - `function ExtraContentSystem.loadFromXML(v0, v1)` (sem `:`), perdendo o `self` implícito.

4. **Capturas de closure inválidas em leitura de XML**
   - Uso de `v2:getString(...)`/`v3:getString(...)` etc. com variáveis locais sobrescritas, gerando auto-referência inválida.

5. **Fluxo de controle parcialmente perdido**
   - Exemplo: comentário `-- if v2 == ExtraContentSystem.KEY_LENGTH then goto L17 end` sem reconstrução de `if` válido.

6. **Chamadas truncadas**
   - Exemplo: `v2:setBool(...)` e `Logging.warning(...)` sem argumentos completos.

7. **Variáveis temporárias sem inicialização consistente**
   - Casos como `if 0 < #self.items and v8 then` com `v8` sem definição confiável no escopo decompilado.

8. **Retornos usando registradores incorretos**
   - Exemplo: `return v2` em `getItemByCode` quando o esperado é `return nil`.

## Ação aplicada nesta rodada

- Reconstrução manual de `ExtraContentSystem.lua` com base estrutural do FS22 para restaurar:
  - nomes de funções e parâmetros,
  - fluxo de controle,
  - chamadas de API/XML,
  - estrutura de dados de itens e perfil.
