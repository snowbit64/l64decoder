// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_82
// Entry Point: 00ecef74
// Size: 60 bytes
// Signature: undefined _INIT_82(void)


void _INIT_82(void)

{
  if ((Luau::AstRtti<Luau::AstStatIf>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatIf>::value = 1;
    Luau::AstRtti<Luau::AstStatIf>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatIf>::value;
  }
  return;
}


