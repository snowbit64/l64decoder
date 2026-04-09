// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00d5ba38
// Size: 512 bytes
// Signature: undefined __thiscall allocate(MemoryChunkChunk * this, MemoryChunk * * param_1, MicroChunkUpdate * param_2)


/* HACD::MemoryChunkChunk::allocate(HACD::MemoryChunk*&, HACD::MicroChunkUpdate*) */

void __thiscall
HACD::MemoryChunkChunk::allocate
          (MemoryChunkChunk *this,MemoryChunk **param_1,MicroChunkUpdate *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  code **ppcVar7;
  undefined8 uVar8;
  long lVar9;
  MemoryChunkChunk *pMVar10;
  MemoryChunkChunk *pMVar11;
  ulong uVar12;
  
  pMVar11 = this;
  do {
    uVar6 = 0;
    do {
      uVar12 = (ulong)uVar6;
      pMVar10 = pMVar11 + (ulong)uVar6 * 0x30 + 0x18;
      if (*(long *)(pMVar11 + (ulong)uVar6 * 0x30 + 0x20) == 0) {
        puVar3 = *(undefined8 **)this;
        uVar1 = *(uint *)(this + 8);
        iVar2 = *(int *)(this + 0xc);
        ppcVar7 = (code **)*puVar3;
        *pMVar10 = (MemoryChunkChunk)0x1;
        puVar4 = (undefined8 *)(**ppcVar7)(puVar3,(ulong)(iVar2 * uVar1));
        lVar9 = (long)puVar4 + (ulong)(iVar2 * uVar1);
        *(undefined8 **)(pMVar11 + (ulong)uVar6 * 0x30 + 0x20) = puVar4;
        *(uint *)(pMVar11 + uVar12 * 0x30 + 0x40) = uVar1;
        *(long *)(pMVar11 + uVar12 * 0x30 + 0x28) = lVar9;
        *(undefined8 **)(pMVar11 + uVar12 * 0x30 + 0x38) = puVar4;
        puVar3 = puVar4;
        while (iVar2 = iVar2 + -1, iVar2 != 0) {
          *puVar3 = (undefined8 *)((long)puVar3 + (ulong)uVar1);
          puVar3 = (undefined8 *)((long)puVar3 + (ulong)uVar1);
        }
        ppcVar7 = *(code ***)param_2;
        *puVar3 = 0;
        (**ppcVar7)(param_2,puVar4,lVar9,pMVar10);
      }
      plVar5 = *(long **)(pMVar11 + uVar12 * 0x30 + 0x38);
      if (plVar5 != (long *)0x0) {
        *(long *)(pMVar11 + uVar12 * 0x30 + 0x38) = *plVar5;
        iVar2 = *(int *)(pMVar11 + uVar12 * 0x30 + 0x30);
        *param_1 = (MemoryChunk *)pMVar10;
        *(int *)(pMVar11 + uVar12 * 0x30 + 0x30) = iVar2 + 1;
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x20);
    pMVar11 = *(MemoryChunkChunk **)(pMVar11 + 0x10);
    if (pMVar11 == (MemoryChunkChunk *)0x0) {
      pMVar11 = (MemoryChunkChunk *)(**(code **)**(undefined8 **)this)(*(undefined8 **)this,0x618);
      MemoryChunkChunk(pMVar11);
      uVar8 = *(undefined8 *)(this + 0x10);
      lVar9 = *(long *)(pMVar11 + 0x20);
      *(MemoryChunkChunk **)(this + 0x10) = pMVar11;
      *(undefined8 *)(pMVar11 + 0x10) = uVar8;
      if (lVar9 == 0) {
        puVar3 = *(undefined8 **)this;
        uVar6 = *(uint *)(this + 8);
        iVar2 = *(int *)(this + 0xc);
        ppcVar7 = (code **)*puVar3;
        pMVar11[0x18] = (MemoryChunkChunk)0x1;
        puVar4 = (undefined8 *)(**ppcVar7)(puVar3,(ulong)(iVar2 * uVar6));
        lVar9 = (long)puVar4 + (ulong)(iVar2 * uVar6);
        *(uint *)(pMVar11 + 0x40) = uVar6;
        *(undefined8 **)(pMVar11 + 0x20) = puVar4;
        *(long *)(pMVar11 + 0x28) = lVar9;
        *(undefined8 **)(pMVar11 + 0x38) = puVar4;
        puVar3 = puVar4;
        while (iVar2 = iVar2 + -1, iVar2 != 0) {
          *puVar3 = (undefined8 *)((long)puVar3 + (ulong)uVar6);
          puVar3 = (undefined8 *)((long)puVar3 + (ulong)uVar6);
        }
        ppcVar7 = *(code ***)param_2;
        *puVar3 = 0;
        (**ppcVar7)(param_2,puVar4,lVar9,pMVar11 + 0x18);
      }
      if (*(undefined8 **)(pMVar11 + 0x38) != (undefined8 *)0x0) {
        *(undefined8 *)(pMVar11 + 0x38) = **(undefined8 **)(pMVar11 + 0x38);
        *(int *)(pMVar11 + 0x30) = *(int *)(pMVar11 + 0x30) + 1;
      }
      *param_1 = (MemoryChunk *)(pMVar11 + 0x18);
      return;
    }
  } while( true );
}


