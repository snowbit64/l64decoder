// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelUpdateSaveGameList
// Entry Point: 00b4d69c
// Size: 60 bytes
// Signature: undefined cancelUpdateSaveGameList(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericSaveGameUtil::cancelUpdateSaveGameList() */

void GenericSaveGameUtil::cancelUpdateSaveGameList(void)

{
  long *plVar1;
  
  CloudDeviceManager::getInstance();
  plVar1 = (long *)CloudDeviceManager::getCloudDevice();
  if ((plVar1 != (long *)0x0) && (s_pGetMetaDataOperation != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b4d6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))();
    return;
  }
  return;
}


