// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 006f5460
// Size: 112 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StatsOverlayManager::getInstance() */

undefined8 * StatsOverlayManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_01052220 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01052220), iVar1 != 0)) {
    DAT_01052200 = 0;
    DAT_01052208 = 0;
    DAT_01052218 = 0;
    DAT_01052210 = 0;
    __cxa_atexit(~StatsOverlayManager,&DAT_01052200,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_01052220);
  }
  return &DAT_01052200;
}


