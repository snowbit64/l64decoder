// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_113
// Entry Point: 00ecf6b8
// Size: 60 bytes
// Signature: undefined _INIT_113(void)


void _INIT_113(void)

{
  if ((Luau::AstRtti<Luau::AstTypePackGeneric>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypePackGeneric>::value = 1;
    Luau::AstRtti<Luau::AstTypePackGeneric>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypePackGeneric>::value;
  }
  return;
}


