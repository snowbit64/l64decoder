// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_72
// Entry Point: 00eced1c
// Size: 60 bytes
// Signature: undefined _INIT_72(void)


void _INIT_72(void)

{
  if ((Luau::AstRtti<Luau::AstExprIndexName>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprIndexName>::value = 1;
    Luau::AstRtti<Luau::AstExprIndexName>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprIndexName>::value;
  }
  return;
}


