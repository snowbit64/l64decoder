// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_83
// Entry Point: 00ecefb0
// Size: 60 bytes
// Signature: undefined _INIT_83(void)


void _INIT_83(void)

{
  if ((Luau::AstRtti<Luau::AstStatWhile>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatWhile>::value = 1;
    Luau::AstRtti<Luau::AstStatWhile>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatWhile>::value;
  }
  return;
}


