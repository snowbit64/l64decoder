// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_89
// Entry Point: 00ecf118
// Size: 60 bytes
// Signature: undefined _INIT_89(void)


void _INIT_89(void)

{
  if ((Luau::AstRtti<Luau::AstStatLocal>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatLocal>::value = 1;
    Luau::AstRtti<Luau::AstStatLocal>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatLocal>::value;
  }
  return;
}


