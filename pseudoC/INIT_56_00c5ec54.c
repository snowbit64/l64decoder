// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_56
// Entry Point: 00c5ec54
// Size: 44 bytes
// Signature: undefined _INIT_56(void)


void _INIT_56(void)

{
  DAT_0211f550 = 0;
  DAT_0211f548 = 0;
  LibraryUtil::s_handleMap = &DAT_0211f548;
  __cxa_atexit(FUN_00c5e9a0,&LibraryUtil::s_handleMap,&PTR_LOOP_00fd8de0);
  return;
}


