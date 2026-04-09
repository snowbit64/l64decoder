// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_80
// Entry Point: 00eceefc
// Size: 60 bytes
// Signature: undefined _INIT_80(void)


void _INIT_80(void)

{
  if ((Luau::AstRtti<Luau::AstExprInterpString>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprInterpString>::value = 1;
    Luau::AstRtti<Luau::AstExprInterpString>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprInterpString>::value;
  }
  return;
}


