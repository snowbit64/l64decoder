// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_74
// Entry Point: 00eced94
// Size: 60 bytes
// Signature: undefined _INIT_74(void)


void _INIT_74(void)

{
  if ((Luau::AstRtti<Luau::AstExprFunction>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprFunction>::value = 1;
    Luau::AstRtti<Luau::AstExprFunction>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprFunction>::value;
  }
  return;
}


