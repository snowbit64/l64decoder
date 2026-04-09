// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_98
// Entry Point: 00ecf334
// Size: 60 bytes
// Signature: undefined _INIT_98(void)


void _INIT_98(void)

{
  if ((Luau::AstRtti<Luau::AstStatDeclareFunction>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatDeclareFunction>::value = 1;
    Luau::AstRtti<Luau::AstStatDeclareFunction>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatDeclareFunction>::value;
  }
  return;
}


