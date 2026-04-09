// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_103
// Entry Point: 00ecf460
// Size: 60 bytes
// Signature: undefined _INIT_103(void)


void _INIT_103(void)

{
  if ((Luau::AstRtti<Luau::AstTypeTypeof>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeTypeof>::value = 1;
    Luau::AstRtti<Luau::AstTypeTypeof>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeTypeof>::value;
  }
  return;
}


