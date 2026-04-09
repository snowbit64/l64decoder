// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: heap_malloc
// Entry Point: 00d5af7c
// Size: 308 bytes
// Signature: undefined __cdecl heap_malloc(HeapManager * param_1, ulong param_2)


/* HACD::heap_malloc(HACD::HeapManager*, unsigned long) */

void HACD::heap_malloc(HeapManager *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  MemoryChunk *pMVar8;
  long lVar9;
  
  if (0x100 < param_2) {
    malloc(param_2);
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
  lVar9 = *(long *)(*(long *)(param_1 + 8) + param_2 * 8 + 0x28);
  pMVar8 = *(MemoryChunk **)(lVar9 + 0x10);
  puVar5 = *(undefined8 **)(undefined8 *)(lVar9 + 0x18);
  if (*(long *)(pMVar8 + 8) == 0) {
    uVar3 = *(uint *)(lVar9 + 0x20);
    iVar4 = *(int *)(lVar9 + 0x24);
    ppcVar7 = (code **)*puVar5;
    *pMVar8 = (MemoryChunk)0x1;
    puVar6 = (undefined8 *)(**ppcVar7)(puVar5,(ulong)(iVar4 * uVar3));
    lVar2 = (long)puVar6 + (ulong)(iVar4 * uVar3);
    *(uint *)(pMVar8 + 0x28) = uVar3;
    *(undefined8 **)(pMVar8 + 8) = puVar6;
    *(long *)(pMVar8 + 0x10) = lVar2;
    *(undefined8 **)(pMVar8 + 0x20) = puVar6;
    puVar5 = puVar6;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      *puVar5 = (undefined8 *)((long)puVar5 + (ulong)uVar3);
      puVar5 = (undefined8 *)((long)puVar5 + (ulong)uVar3);
    }
    ppcVar7 = (code **)*puVar1;
    *puVar5 = 0;
    (**ppcVar7)(puVar1,puVar6,lVar2,pMVar8);
    puVar5 = *(undefined8 **)(pMVar8 + 0x20);
  }
  else {
    puVar5 = *(undefined8 **)(pMVar8 + 0x20);
  }
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(pMVar8 + 0x20) = *puVar5;
    *(int *)(pMVar8 + 0x18) = *(int *)(pMVar8 + 0x18) + 1;
    return;
  }
  MemoryChunkChunk::allocate
            ((MemoryChunkChunk *)(undefined8 *)(lVar9 + 0x18),(MemoryChunk **)(lVar9 + 0x10),
             (MicroChunkUpdate *)puVar1);
  return;
}


