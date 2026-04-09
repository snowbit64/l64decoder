// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_86
// Entry Point: 00ecf064
// Size: 60 bytes
// Signature: undefined _INIT_86(void)


void _INIT_86(void)

{
  if ((Luau::AstRtti<Luau::AstStatContinue>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatContinue>::value = 1;
    Luau::AstRtti<Luau::AstStatContinue>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatContinue>::value;
  }
  return;
}


