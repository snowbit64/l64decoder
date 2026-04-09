// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: malloc
// Entry Point: 00d5b240
// Size: 300 bytes
// Signature: undefined __thiscall malloc(MyMicroAllocator * this, ulong param_1)


/* HACD::MyMicroAllocator::malloc(unsigned long) */

undefined8 * __thiscall HACD::MyMicroAllocator::malloc(MyMicroAllocator *this,ulong param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  MemoryChunk *pMVar8;
  long lVar9;
  
  if (0x100 < param_1) {
    return (undefined8 *)0x0;
  }
  puVar6 = (undefined8 *)(this + 8);
  lVar9 = *(long *)(this + param_1 * 8 + 0x28);
  pMVar8 = *(MemoryChunk **)(lVar9 + 0x10);
  puVar4 = *(undefined8 **)(undefined8 *)(lVar9 + 0x18);
  if (*(long *)(pMVar8 + 8) == 0) {
    uVar2 = *(uint *)(lVar9 + 0x20);
    iVar3 = *(int *)(lVar9 + 0x24);
    ppcVar7 = (code **)*puVar4;
    *pMVar8 = (MemoryChunk)0x1;
    puVar5 = (undefined8 *)(**ppcVar7)(puVar4,(ulong)(iVar3 * uVar2));
    lVar1 = (long)puVar5 + (ulong)(iVar3 * uVar2);
    *(uint *)(pMVar8 + 0x28) = uVar2;
    *(undefined8 **)(pMVar8 + 8) = puVar5;
    *(long *)(pMVar8 + 0x10) = lVar1;
    *(undefined8 **)(pMVar8 + 0x20) = puVar5;
    puVar4 = puVar5;
    while (iVar3 = iVar3 + -1, iVar3 != 0) {
      *puVar4 = (undefined8 *)((long)puVar4 + (ulong)uVar2);
      puVar4 = (undefined8 *)((long)puVar4 + (ulong)uVar2);
    }
    ppcVar7 = (code **)*puVar6;
    *puVar4 = 0;
    (**ppcVar7)(puVar6,puVar5,lVar1,pMVar8);
    puVar4 = *(undefined8 **)(pMVar8 + 0x20);
  }
  else {
    puVar4 = *(undefined8 **)(pMVar8 + 0x20);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(pMVar8 + 0x20) = *puVar4;
    *(int *)(pMVar8 + 0x18) = *(int *)(pMVar8 + 0x18) + 1;
    return puVar4;
  }
  puVar6 = (undefined8 *)
           MemoryChunkChunk::allocate
                     ((MemoryChunkChunk *)(undefined8 *)(lVar9 + 0x18),
                      (MemoryChunk **)(lVar9 + 0x10),(MicroChunkUpdate *)puVar6);
  return puVar6;
}


