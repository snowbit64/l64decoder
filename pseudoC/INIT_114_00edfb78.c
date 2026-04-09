// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_114
// Entry Point: 00edfb78
// Size: 172 bytes
// Signature: undefined _INIT_114(void)


void _INIT_114(void)

{
  FInt::LuauCompileLoopUnrollThreshold = 0x19;
  DAT_021236dc = 0;
  DAT_021236e0 = "LuauCompileLoopUnrollThreshold";
  DAT_021236e8 = Luau::FValue<int>::list;
  FInt::LuauCompileLoopUnrollThresholdMaxBoost = 300;
  DAT_021236f4 = 0;
  DAT_021236f8 = "LuauCompileLoopUnrollThresholdMaxBoost";
  DAT_02123700 = &FInt::LuauCompileLoopUnrollThreshold;
  FInt::LuauCompileInlineThreshold = 0x19;
  DAT_0212370c = 0;
  DAT_02123710 = "LuauCompileInlineThreshold";
  DAT_02123718 = &FInt::LuauCompileLoopUnrollThresholdMaxBoost;
  FInt::LuauCompileInlineThresholdMaxBoost = 300;
  DAT_02123724 = 0;
  DAT_02123728 = "LuauCompileInlineThresholdMaxBoost";
  DAT_02123730 = &FInt::LuauCompileInlineThreshold;
  FInt::LuauCompileInlineDepth = 5;
  DAT_0212373c = 0;
  DAT_02123740 = "LuauCompileInlineDepth";
  DAT_02123748 = &FInt::LuauCompileInlineThresholdMaxBoost;
  Luau::FValue<int>::list = &FInt::LuauCompileInlineDepth;
  return;
}


