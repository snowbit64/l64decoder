// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00ac4f48
// Size: 108 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DxcManager::getInstance() */

undefined4 * DxcManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02113bd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02113bd0), iVar1 != 0)) {
    DAT_02113bc0 = 0;
    DAT_02113bc8 = 0;
    __cxa_atexit(~DxcManager,&DAT_02113bc0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02113bd0);
  }
  return &DAT_02113bc0;
}


