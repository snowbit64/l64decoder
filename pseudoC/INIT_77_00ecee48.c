// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_77
// Entry Point: 00ecee48
// Size: 60 bytes
// Signature: undefined _INIT_77(void)


void _INIT_77(void)

{
  if ((Luau::AstRtti<Luau::AstExprBinary>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprBinary>::value = 1;
    Luau::AstRtti<Luau::AstExprBinary>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprBinary>::value;
  }
  return;
}


