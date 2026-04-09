// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00af1924
// Size: 104 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AdsProviderManager::getInstance() */

undefined8 * AdsProviderManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02113be0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02113be0), iVar1 != 0)) {
    DAT_02113bd8 = 0;
    __cxa_atexit(~AdsProviderManager,&DAT_02113bd8,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02113be0);
  }
  return &DAT_02113bd8;
}


