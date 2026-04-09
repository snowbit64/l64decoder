// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUploadState
// Entry Point: 00b4ea40
// Size: 184 bytes
// Signature: undefined __cdecl getUploadState(uint param_1)


/* GenericSaveGameUtil::getUploadState(unsigned int) */

void GenericSaveGameUtil::getUploadState(uint param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined auStack_238 [512];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  CloudDeviceManager::getInstance();
  plVar4 = (long *)CloudDeviceManager::getCloudDevice();
  if (plVar4 != (long *)0x0) {
    FUN_00b4d19c(auStack_238,0x200,0x200,"%s_%u",CLOUD_FILE_NAME,param_1);
    iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,s_pCloudSession,auStack_238);
    uVar1 = (uint)(iVar3 == 2) << 1;
    if (iVar3 == 1) {
      uVar1 = 1;
    }
    plVar4 = (long *)(ulong)uVar1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


