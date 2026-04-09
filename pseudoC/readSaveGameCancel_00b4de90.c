// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readSaveGameCancel
// Entry Point: 00b4de90
// Size: 60 bytes
// Signature: undefined readSaveGameCancel(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericSaveGameUtil::readSaveGameCancel() */

void GenericSaveGameUtil::readSaveGameCancel(void)

{
  long *plVar1;
  
  CloudDeviceManager::getInstance();
  plVar1 = (long *)CloudDeviceManager::getCloudDevice();
  if ((plVar1 != (long *)0x0) && (s_pReadFileOperation != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b4dec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))();
    return;
  }
  return;
}


