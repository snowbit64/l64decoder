// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_92
// Entry Point: 00ecf1cc
// Size: 60 bytes
// Signature: undefined _INIT_92(void)


void _INIT_92(void)

{
  if ((Luau::AstRtti<Luau::AstStatAssign>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatAssign>::value = 1;
    Luau::AstRtti<Luau::AstStatAssign>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatAssign>::value;
  }
  return;
}


