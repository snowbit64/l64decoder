// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_111
// Entry Point: 00ecf640
// Size: 60 bytes
// Signature: undefined _INIT_111(void)


void _INIT_111(void)

{
  if ((Luau::AstRtti<Luau::AstTypePackExplicit>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypePackExplicit>::value = 1;
    Luau::AstRtti<Luau::AstTypePackExplicit>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypePackExplicit>::value;
  }
  return;
}


