// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_87
// Entry Point: 00ecf0a0
// Size: 60 bytes
// Signature: undefined _INIT_87(void)


void _INIT_87(void)

{
  if ((Luau::AstRtti<Luau::AstStatReturn>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatReturn>::value = 1;
    Luau::AstRtti<Luau::AstStatReturn>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatReturn>::value;
  }
  return;
}


