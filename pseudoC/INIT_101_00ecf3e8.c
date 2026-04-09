// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_101
// Entry Point: 00ecf3e8
// Size: 60 bytes
// Signature: undefined _INIT_101(void)


void _INIT_101(void)

{
  if ((Luau::AstRtti<Luau::AstTypeTable>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeTable>::value = 1;
    Luau::AstRtti<Luau::AstTypeTable>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeTable>::value;
  }
  return;
}


