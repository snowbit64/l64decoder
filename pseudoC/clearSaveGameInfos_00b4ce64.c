// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearSaveGameInfos
// Entry Point: 00b4ce64
// Size: 132 bytes
// Signature: undefined clearSaveGameInfos(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GenericSaveGameUtil::clearSaveGameInfos() */

void GenericSaveGameUtil::clearSaveGameInfos(void)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  
  lVar2 = DAT_0211c588;
  if (DAT_0211c588 != s_saveGames) {
    uVar4 = 0;
    lVar1 = DAT_0211c588;
    lVar2 = s_saveGames;
    do {
      pvVar3 = *(void **)(lVar2 + uVar4 * 8);
      if (pvVar3 != (void *)0x0) {
        if (*(void **)((long)pvVar3 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar3 + 8));
        }
        if (*(void **)((long)pvVar3 + 0x10) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar3 + 0x10));
        }
        operator_delete(pvVar3);
        lVar1 = DAT_0211c588;
        lVar2 = s_saveGames;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar1 - lVar2 >> 3));
  }
  DAT_0211c588 = lVar2;
  return;
}


