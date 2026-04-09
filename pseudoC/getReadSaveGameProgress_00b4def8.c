// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getReadSaveGameProgress
// Entry Point: 00b4def8
// Size: 64 bytes
// Signature: undefined getReadSaveGameProgress(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericSaveGameUtil::getReadSaveGameProgress() */

undefined  [16] GenericSaveGameUtil::getReadSaveGameProgress(void)

{
  long *plVar1;
  undefined auVar2 [16];
  
  CloudDeviceManager::getInstance();
  plVar1 = (long *)CloudDeviceManager::getCloudDevice();
  if ((plVar1 != (long *)0x0) && (s_pReadFileOperation != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b4df28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(*plVar1 + 0x78))();
    return auVar2;
  }
  return ZEXT816(0);
}


