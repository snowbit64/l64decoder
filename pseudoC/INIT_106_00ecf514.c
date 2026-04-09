// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_106
// Entry Point: 00ecf514
// Size: 60 bytes
// Signature: undefined _INIT_106(void)


void _INIT_106(void)

{
  if ((Luau::AstRtti<Luau::AstExprError>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstExprError>::value = 1;
    Luau::AstRtti<Luau::AstExprError>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstExprError>::value;
  }
  return;
}


