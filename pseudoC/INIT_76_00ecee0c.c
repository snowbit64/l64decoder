// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_76
// Entry Point: 00ecee0c
// Size: 60 bytes
// Signature: undefined _INIT_76(void)


void _INIT_76(void)

{
  if ((Luau::AstRtti<Luau::AstExprUnary>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprUnary>::value = 1;
    Luau::AstRtti<Luau::AstExprUnary>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprUnary>::value;
  }
  return;
}


