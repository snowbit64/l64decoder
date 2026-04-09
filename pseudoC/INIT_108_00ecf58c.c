// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_108
// Entry Point: 00ecf58c
// Size: 60 bytes
// Signature: undefined _INIT_108(void)


void _INIT_108(void)

{
  if ((Luau::AstRtti<Luau::AstTypeError>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeError>::value = 1;
    Luau::AstRtti<Luau::AstTypeError>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeError>::value;
  }
  return;
}


