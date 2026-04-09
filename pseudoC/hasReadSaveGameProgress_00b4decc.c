// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasReadSaveGameProgress
// Entry Point: 00b4decc
// Size: 44 bytes
// Signature: undefined hasReadSaveGameProgress(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericSaveGameUtil::hasReadSaveGameProgress() */

void GenericSaveGameUtil::hasReadSaveGameProgress(void)

{
  long *plVar1;
  
  CloudDeviceManager::getInstance();
  plVar1 = (long *)CloudDeviceManager::getCloudDevice();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b4deec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))();
    return;
  }
  return;
}


