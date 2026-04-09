// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_67
// Entry Point: 00ecebf0
// Size: 60 bytes
// Signature: undefined _INIT_67(void)


void _INIT_67(void)

{
  if ((Luau::AstRtti<Luau::AstExprConstantString>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprConstantString>::value = 1;
    Luau::AstRtti<Luau::AstExprConstantString>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprConstantString>::value;
  }
  return;
}


