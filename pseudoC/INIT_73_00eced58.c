// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_73
// Entry Point: 00eced58
// Size: 60 bytes
// Signature: undefined _INIT_73(void)


void _INIT_73(void)

{
  if ((Luau::AstRtti<Luau::AstExprIndexExpr>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprIndexExpr>::value = 1;
    Luau::AstRtti<Luau::AstExprIndexExpr>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprIndexExpr>::value;
  }
  return;
}


