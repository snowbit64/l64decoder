// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishWriteServerEvents
// Entry Point: 009847c8
// Size: 156 bytes
// Signature: undefined finishWriteServerEvents(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MeshSplitManager::finishWriteServerEvents() */

void MeshSplitManager::finishWriteServerEvents(void)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  long in_x0;
  ulong uVar4;
  ulong uVar5;
  
  pvVar2 = *(void **)(in_x0 + 0x150);
  uVar4 = *(long *)(in_x0 + 0x158) - (long)pvVar2;
  uVar5 = uVar4 >> 4 & 0xffffffff;
  if ((uVar4 & 0xfffffffc0) != 0) {
    uVar5 = 4;
  }
  if (uVar5 != 0) {
    pvVar1 = (void *)((long)pvVar2 + uVar5 * 0x10);
    sVar3 = *(long *)(in_x0 + 0x158) - (long)pvVar1;
    if (sVar3 != 0) {
      memmove(pvVar2,pvVar1,sVar3);
    }
    *(size_t *)(in_x0 + 0x158) = (long)pvVar2 + sVar3;
  }
  pvVar2 = *(void **)(in_x0 + 0x168);
  uVar4 = *(long *)(in_x0 + 0x170) - (long)pvVar2;
  uVar5 = uVar4 >> 3 & 0xffffffff;
  if ((uVar4 & 0x7ffffffe0) != 0) {
    uVar5 = 4;
  }
  if (uVar5 != 0) {
    pvVar1 = (void *)((long)pvVar2 + uVar5 * 8);
    sVar3 = *(long *)(in_x0 + 0x170) - (long)pvVar1;
    if (sVar3 != 0) {
      memmove(pvVar2,pvVar1,sVar3);
    }
    *(size_t *)(in_x0 + 0x170) = (long)pvVar2 + sVar3;
  }
  return;
}


