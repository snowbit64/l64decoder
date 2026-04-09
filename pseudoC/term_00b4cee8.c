// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: term
// Entry Point: 00b4cee8
// Size: 184 bytes
// Signature: undefined term(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericSaveGameUtil::term() */

void GenericSaveGameUtil::term(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar3 = DAT_0211c588;
  if (DAT_0211c588 != s_saveGames) {
    uVar5 = 0;
    lVar2 = DAT_0211c588;
    lVar3 = s_saveGames;
    do {
      pvVar4 = *(void **)(lVar3 + uVar5 * 8);
      if (pvVar4 != (void *)0x0) {
        if (*(void **)((long)pvVar4 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar4 + 8));
        }
        if (*(void **)((long)pvVar4 + 0x10) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar4 + 0x10));
        }
        operator_delete(pvVar4);
        lVar2 = DAT_0211c588;
        lVar3 = s_saveGames;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(lVar2 - lVar3 >> 3));
  }
  DAT_0211c588 = lVar3;
  CloudDeviceManager::getInstance();
  plVar1 = (long *)CloudDeviceManager::getCloudDevice();
  if ((plVar1 != (long *)0x0) && (s_pCloudSession != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b4cf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  return;
}


