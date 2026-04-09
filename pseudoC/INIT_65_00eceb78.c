// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_65
// Entry Point: 00eceb78
// Size: 60 bytes
// Signature: undefined _INIT_65(void)


void _INIT_65(void)

{
  if ((Luau::AstRtti<Luau::AstExprConstantBool>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprConstantBool>::value = 1;
    Luau::AstRtti<Luau::AstExprConstantBool>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprConstantBool>::value;
  }
  return;
}


