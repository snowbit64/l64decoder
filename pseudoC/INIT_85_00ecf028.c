// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_85
// Entry Point: 00ecf028
// Size: 60 bytes
// Signature: undefined _INIT_85(void)


void _INIT_85(void)

{
  if ((Luau::AstRtti<Luau::AstStatBreak>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatBreak>::value = 1;
    Luau::AstRtti<Luau::AstStatBreak>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatBreak>::value;
  }
  return;
}


