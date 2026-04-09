// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_99
// Entry Point: 00ecf370
// Size: 60 bytes
// Signature: undefined _INIT_99(void)


void _INIT_99(void)

{
  if ((Luau::AstRtti<Luau::AstStatDeclareClass>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatDeclareClass>::value = 1;
    Luau::AstRtti<Luau::AstStatDeclareClass>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatDeclareClass>::value;
  }
  return;
}


