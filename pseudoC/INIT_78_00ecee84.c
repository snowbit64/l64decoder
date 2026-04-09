// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_78
// Entry Point: 00ecee84
// Size: 60 bytes
// Signature: undefined _INIT_78(void)


void _INIT_78(void)

{
  if ((Luau::AstRtti<Luau::AstExprTypeAssertion>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprTypeAssertion>::value = 1;
    Luau::AstRtti<Luau::AstExprTypeAssertion>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprTypeAssertion>::value;
  }
  return;
}


