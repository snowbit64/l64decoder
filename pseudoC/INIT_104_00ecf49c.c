// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_104
// Entry Point: 00ecf49c
// Size: 60 bytes
// Signature: undefined _INIT_104(void)


void _INIT_104(void)

{
  if ((Luau::AstRtti<Luau::AstTypeUnion>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeUnion>::value = 1;
    Luau::AstRtti<Luau::AstTypeUnion>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeUnion>::value;
  }
  return;
}


