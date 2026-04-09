// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 008a357c
// Size: 236 bytes
// Signature: undefined load(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisResource::load() */

undefined LoopSynthesisResource::load(void)

{
  char *pcVar1;
  int iVar2;
  long in_x0;
  long *plVar3;
  ulong uVar4;
  uchar *puVar5;
  
  pcVar1 = (char *)(in_x0 + 0x31);
  if ((*(byte *)(in_x0 + 0x30) & 1) != 0) {
    pcVar1 = *(char **)(in_x0 + 0x40);
  }
  plVar3 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar1,0,
                                    false);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x48))();
    if (uVar4 < 0x7fffffff) {
      puVar5 = (uchar *)operator_new__(uVar4);
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,puVar5,uVar4 & 0xffffffff);
      if (uVar4 == (long)iVar2) {
        pcVar1 = (char *)(in_x0 + 0x31);
        if ((*(byte *)(in_x0 + 0x30) & 1) != 0) {
          pcVar1 = *(char **)(in_x0 + 0x40);
        }
        iVar2 = LoopSynthesisDataExchanger::importData
                          ((LoopSynthesisDataExchanger *)(in_x0 + 0x48),pcVar1,puVar5,(uint)uVar4);
        if (uVar4 == (long)iVar2) {
          *(undefined *)(in_x0 + 0x20) = 1;
        }
      }
      operator_delete__(puVar5);
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return *(undefined *)(in_x0 + 0x20);
}


