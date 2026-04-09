// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_96
// Entry Point: 00ecf2bc
// Size: 60 bytes
// Signature: undefined _INIT_96(void)


void _INIT_96(void)

{
  if ((Luau::AstRtti<Luau::AstStatTypeAlias>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatTypeAlias>::value = 1;
    Luau::AstRtti<Luau::AstStatTypeAlias>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatTypeAlias>::value;
  }
  return;
}


