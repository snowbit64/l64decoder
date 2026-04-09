// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_69
// Entry Point: 00ecec68
// Size: 60 bytes
// Signature: undefined _INIT_69(void)


void _INIT_69(void)

{
  if ((Luau::AstRtti<Luau::AstExprGlobal>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprGlobal>::value = 1;
    Luau::AstRtti<Luau::AstExprGlobal>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprGlobal>::value;
  }
  return;
}


