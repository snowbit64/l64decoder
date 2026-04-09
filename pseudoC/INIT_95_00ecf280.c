// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_95
// Entry Point: 00ecf280
// Size: 60 bytes
// Signature: undefined _INIT_95(void)


void _INIT_95(void)

{
  if ((Luau::AstRtti<Luau::AstStatLocalFunction>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatLocalFunction>::value = 1;
    Luau::AstRtti<Luau::AstStatLocalFunction>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatLocalFunction>::value;
  }
  return;
}


