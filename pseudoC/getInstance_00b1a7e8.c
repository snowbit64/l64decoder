// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00b1a7e8
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DeviceMappingManager::getInstance() */

undefined * DeviceMappingManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02118628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02118628), iVar1 != 0)) {
                    /* try { // try from 00b1a828 to 00b1a833 has its CatchHandler @ 00b1a860 */
    DeviceMappingManager((DeviceMappingManager *)&DAT_02116e48);
    __cxa_atexit(~DeviceMappingManager,&DAT_02116e48,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02118628);
  }
  return &DAT_02116e48;
}


