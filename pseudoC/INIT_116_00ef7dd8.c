// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_116
// Entry Point: 00ef7dd8
// Size: 248 bytes
// Signature: undefined _INIT_116(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_116(void)

{
  FInt::LuauRecursionLimit = 1000;
  DAT_02123784 = 0;
  DAT_02123788 = "LuauRecursionLimit";
  DAT_02123790 = Luau::FValue<int>::list;
  FInt::LuauParseErrorLimit = 100;
  DAT_0212379c = 0;
  DAT_021237a0 = "LuauParseErrorLimit";
  DAT_021237a8 = &FInt::LuauRecursionLimit;
  Luau::FValue<int>::list = &FInt::LuauParseErrorLimit;
  FFlag::LuauFixNamedFunctionParse = 0;
  DAT_021237b8 = "LuauFixNamedFunctionParse";
  DAT_021237c0 = Luau::FValue<bool>::list;
  DFFlag::LuaReportParseWrongNamedType = 0x100;
  DAT_021237d0 = "LuaReportParseWrongNamedType";
  DAT_021237d8 = &FFlag::LuauFixNamedFunctionParse;
  _LuauErrorDoubleHexPrefix = 0;
  DAT_021237f0 = "LuauErrorDoubleHexPrefix";
  DAT_021237f8 = &DFFlag::LuaReportParseWrongNamedType;
  _LuaReportParseIntegerIssues = 0x100;
  DAT_02123808 = "LuaReportParseIntegerIssues";
  DAT_02123810 = &FFlag::LuauErrorDoubleHexPrefix;
  _LuauInterpolatedStringBaseSupport = 0;
  DAT_02123820 = "LuauInterpolatedStringBaseSupport";
  DAT_02123828 = &DFFlag::LuaReportParseIntegerIssues;
  FFlag::LuauTypeAnnotationLocationChange = 0;
  Luau::FValue<bool>::list = &FFlag::LuauTypeAnnotationLocationChange;
  DAT_02123838 = "LuauTypeAnnotationLocationChange";
  DAT_02123840 = &FFlag::LuauInterpolatedStringBaseSupport;
  return;
}


