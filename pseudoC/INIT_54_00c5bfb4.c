// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_54
// Entry Point: 00c5bfb4
// Size: 44 bytes
// Signature: undefined _INIT_54(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_54(void)

{
  _DAT_0211f2d0 = 0;
  _DAT_0211f2c8 = 0;
  DebugUtil::s_errorCodeMap = &DAT_0211f2c8;
  __cxa_atexit(FUN_00c5bbc8,&DebugUtil::s_errorCodeMap,&PTR_LOOP_00fd8de0);
  return;
}


