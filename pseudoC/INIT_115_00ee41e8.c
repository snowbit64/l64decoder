// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_115
// Entry Point: 00ee41e8
// Size: 44 bytes
// Signature: undefined _INIT_115(void)


void _INIT_115(void)

{
  DAT_02123770 = Luau::FValue<bool>::list;
  FFlag::LuauCompileBuiltinMT = 0;
  Luau::FValue<bool>::list = &FFlag::LuauCompileBuiltinMT;
  DAT_02123768 = "LuauCompileBuiltinMT";
  return;
}


