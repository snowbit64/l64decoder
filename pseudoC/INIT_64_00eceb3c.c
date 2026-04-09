// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_64
// Entry Point: 00eceb3c
// Size: 60 bytes
// Signature: undefined _INIT_64(void)


void _INIT_64(void)

{
  if ((Luau::AstRtti<Luau::AstExprConstantNil>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprConstantNil>::value = 1;
    Luau::AstRtti<Luau::AstExprConstantNil>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprConstantNil>::value;
  }
  return;
}


