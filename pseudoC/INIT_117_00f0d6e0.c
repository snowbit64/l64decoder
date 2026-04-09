// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_117
// Entry Point: 00f0d6e0
// Size: 44 bytes
// Signature: undefined _INIT_117(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_117(void)

{
  DAT_02124860 = Luau::FValue<bool>::list;
  _LuauBetterThreadMark = 0;
  Luau::FValue<bool>::list = &FFlag::LuauBetterThreadMark;
  DAT_02124858 = "LuauBetterThreadMark";
  return;
}


