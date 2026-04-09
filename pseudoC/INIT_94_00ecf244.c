// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_94
// Entry Point: 00ecf244
// Size: 60 bytes
// Signature: undefined _INIT_94(void)


void _INIT_94(void)

{
  if ((Luau::AstRtti<Luau::AstStatFunction>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatFunction>::value = 1;
    Luau::AstRtti<Luau::AstStatFunction>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatFunction>::value;
  }
  return;
}


