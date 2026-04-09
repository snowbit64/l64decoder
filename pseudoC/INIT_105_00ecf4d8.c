// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_105
// Entry Point: 00ecf4d8
// Size: 60 bytes
// Signature: undefined _INIT_105(void)


void _INIT_105(void)

{
  if ((Luau::AstRtti<Luau::AstTypeIntersection>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeIntersection>::value = 1;
    Luau::AstRtti<Luau::AstTypeIntersection>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeIntersection>::value;
  }
  return;
}


