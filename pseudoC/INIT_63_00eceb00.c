// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_63
// Entry Point: 00eceb00
// Size: 60 bytes
// Signature: undefined _INIT_63(void)


void _INIT_63(void)

{
  if ((Luau::AstRtti<Luau::AstExprGroup>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprGroup>::value = 1;
    Luau::AstRtti<Luau::AstExprGroup>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprGroup>::value;
  }
  return;
}


