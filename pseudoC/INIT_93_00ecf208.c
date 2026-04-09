// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_93
// Entry Point: 00ecf208
// Size: 60 bytes
// Signature: undefined _INIT_93(void)


void _INIT_93(void)

{
  if ((Luau::AstRtti<Luau::AstStatCompoundAssign>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatCompoundAssign>::value = 1;
    Luau::AstRtti<Luau::AstStatCompoundAssign>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatCompoundAssign>::value;
  }
  return;
}


