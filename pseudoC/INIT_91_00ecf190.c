// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_91
// Entry Point: 00ecf190
// Size: 60 bytes
// Signature: undefined _INIT_91(void)


void _INIT_91(void)

{
  if ((Luau::AstRtti<Luau::AstStatForIn>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatForIn>::value = 1;
    Luau::AstRtti<Luau::AstStatForIn>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatForIn>::value;
  }
  return;
}


