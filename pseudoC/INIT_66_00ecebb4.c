// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_66
// Entry Point: 00ecebb4
// Size: 60 bytes
// Signature: undefined _INIT_66(void)


void _INIT_66(void)

{
  if ((Luau::AstRtti<Luau::AstExprConstantNumber>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprConstantNumber>::value = 1;
    Luau::AstRtti<Luau::AstExprConstantNumber>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprConstantNumber>::value;
  }
  return;
}


