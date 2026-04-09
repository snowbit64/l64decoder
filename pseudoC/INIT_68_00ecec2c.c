// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_68
// Entry Point: 00ecec2c
// Size: 60 bytes
// Signature: undefined _INIT_68(void)


void _INIT_68(void)

{
  if ((Luau::AstRtti<Luau::AstExprLocal>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprLocal>::value = 1;
    Luau::AstRtti<Luau::AstExprLocal>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprLocal>::value;
  }
  return;
}


