// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_81
// Entry Point: 00ecef38
// Size: 60 bytes
// Signature: undefined _INIT_81(void)


void _INIT_81(void)

{
  if ((Luau::AstRtti<Luau::AstStatBlock>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatBlock>::value = 1;
    Luau::AstRtti<Luau::AstStatBlock>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatBlock>::value;
  }
  return;
}


