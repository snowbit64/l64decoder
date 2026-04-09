// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_102
// Entry Point: 00ecf424
// Size: 60 bytes
// Signature: undefined _INIT_102(void)


void _INIT_102(void)

{
  if ((Luau::AstRtti<Luau::AstTypeFunction>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeFunction>::value = 1;
    Luau::AstRtti<Luau::AstTypeFunction>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeFunction>::value;
  }
  return;
}


