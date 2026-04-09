// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_109
// Entry Point: 00ecf5c8
// Size: 60 bytes
// Signature: undefined _INIT_109(void)


void _INIT_109(void)

{
  if ((Luau::AstRtti<Luau::AstTypeSingletonBool>::value & 1) == 0) {
    Luau::AstRtti<Luau::AstTypeSingletonBool>::value = 1;
    Luau::AstRtti<Luau::AstTypeSingletonBool>::value = Luau::gAstRttiIndex + 1;
    Luau::gAstRttiIndex = Luau::AstRtti<Luau::AstTypeSingletonBool>::value;
  }
  return;
}


