// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b01a88
// Size: 108 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SaveHelperManager::getInstance() */

undefined8 * SaveHelperManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02115238 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02115238), iVar1 != 0)) {
    DAT_02115220 = 0;
    DAT_02115228 = 0;
    DAT_02115230 = 0;
    __cxa_atexit(~SaveHelperManager,&DAT_02115220,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02115238);
  }
  return &DAT_02115220;
}


