// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_84
// Entry Point: 00ecefec
// Size: 60 bytes
// Signature: undefined _INIT_84(void)


void _INIT_84(void)

{
  if ((Luau::AstRtti<Luau::AstStatRepeat>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatRepeat>::value = 1;
    Luau::AstRtti<Luau::AstStatRepeat>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatRepeat>::value;
  }
  return;
}


