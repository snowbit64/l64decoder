// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_88
// Entry Point: 00ecf0dc
// Size: 60 bytes
// Signature: undefined _INIT_88(void)


void _INIT_88(void)

{
  if ((Luau::AstRtti<Luau::AstStatExpr>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatExpr>::value = 1;
    Luau::AstRtti<Luau::AstStatExpr>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatExpr>::value;
  }
  return;
}


