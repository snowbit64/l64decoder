// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_110
// Entry Point: 00ecf604
// Size: 60 bytes
// Signature: undefined _INIT_110(void)


void _INIT_110(void)

{
  if ((Luau::AstRtti<Luau::AstTypeSingletonString>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeSingletonString>::value = 1;
    Luau::AstRtti<Luau::AstTypeSingletonString>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeSingletonString>::value;
  }
  return;
}


