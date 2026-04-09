// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_112
// Entry Point: 00ecf67c
// Size: 60 bytes
// Signature: undefined _INIT_112(void)


void _INIT_112(void)

{
  if ((Luau::AstRtti<Luau::AstTypePackVariadic>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypePackVariadic>::value = 1;
    Luau::AstRtti<Luau::AstTypePackVariadic>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypePackVariadic>::value;
  }
  return;
}


