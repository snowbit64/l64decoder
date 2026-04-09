// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_107
// Entry Point: 00ecf550
// Size: 60 bytes
// Signature: undefined _INIT_107(void)


void _INIT_107(void)

{
  if ((Luau::AstRtti<Luau::AstStatError>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatError>::value = 1;
    Luau::AstRtti<Luau::AstStatError>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatError>::value;
  }
  return;
}


