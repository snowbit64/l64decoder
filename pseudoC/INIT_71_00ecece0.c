// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_71
// Entry Point: 00ecece0
// Size: 60 bytes
// Signature: undefined _INIT_71(void)


void _INIT_71(void)

{
  if ((Luau::AstRtti<Luau::AstExprCall>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprCall>::value = 1;
    Luau::AstRtti<Luau::AstExprCall>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprCall>::value;
  }
  return;
}


