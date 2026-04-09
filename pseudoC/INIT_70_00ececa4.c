// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_70
// Entry Point: 00ececa4
// Size: 60 bytes
// Signature: undefined _INIT_70(void)


void _INIT_70(void)

{
  if ((Luau::AstRtti<Luau::AstExprVarargs>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprVarargs>::value = 1;
    Luau::AstRtti<Luau::AstExprVarargs>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprVarargs>::value;
  }
  return;
}


