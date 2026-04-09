// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_90
// Entry Point: 00ecf154
// Size: 60 bytes
// Signature: undefined _INIT_90(void)


void _INIT_90(void)

{
  if ((Luau::AstRtti<Luau::AstStatFor>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstStatFor>::value = 1;
    Luau::AstRtti<Luau::AstStatFor>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstStatFor>::value;
  }
  return;
}


