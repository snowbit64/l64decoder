// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006eaacc
// Entry Point: 006eaacc
// Size: 68 bytes
// Signature: undefined FUN_006eaacc(void)


void FUN_006eaacc(char *param_1)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = *param_1;
  CloudDeviceManager::getInstance();
  plVar2 = (long *)CloudDeviceManager::getCloudDevice();
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006eab00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,cVar1 != '\0');
    return;
  }
  return;
}


