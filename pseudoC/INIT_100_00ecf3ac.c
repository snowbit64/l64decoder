// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_100
// Entry Point: 00ecf3ac
// Size: 60 bytes
// Signature: undefined _INIT_100(void)


void _INIT_100(void)

{
  if ((Luau::AstRtti<Luau::AstTypeReference>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeReference>::value = 1;
    Luau::AstRtti<Luau::AstTypeReference>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeReference>::value;
  }
  return;
}


