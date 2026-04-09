// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_79
// Entry Point: 00eceec0
// Size: 60 bytes
// Signature: undefined _INIT_79(void)


void _INIT_79(void)

{
  if ((Luau::AstRtti<Luau::AstExprIfElse>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprIfElse>::value = 1;
    Luau::AstRtti<Luau::AstExprIfElse>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprIfElse>::value;
  }
  return;
}


