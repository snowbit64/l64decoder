// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_97
// Entry Point: 00ecf2f8
// Size: 60 bytes
// Signature: undefined _INIT_97(void)


void _INIT_97(void)

{
  if ((Luau::AstRtti<Luau::AstStatDeclareGlobal>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatDeclareGlobal>::value = 1;
    Luau::AstRtti<Luau::AstStatDeclareGlobal>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatDeclareGlobal>::value;
  }
  return;
}


