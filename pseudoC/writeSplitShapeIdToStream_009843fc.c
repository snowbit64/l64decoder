// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSplitShapeIdToStream
// Entry Point: 009843fc
// Size: 224 bytes
// Signature: undefined __thiscall writeSplitShapeIdToStream(MeshSplitManager * this, GsBitStream * param_1, MeshSplitShape * param_2)


/* MeshSplitManager::writeSplitShapeIdToStream(GsBitStream*, MeshSplitShape*) */

undefined8 __thiscall
MeshSplitManager::writeSplitShapeIdToStream
          (MeshSplitManager *this,GsBitStream *param_1,MeshSplitShape *param_2)

{
  uint uVar1;
  long lVar2;
  MeshSplitManager *pMVar3;
  MeshSplitManager *pMVar4;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((byte)param_2[0x210] >> 6 & 1) == 0) {
    pMVar4 = *(MeshSplitManager **)(this + 0x140);
    local_3c = *(uint *)(param_2 + 0x208);
    if (pMVar4 != (MeshSplitManager *)0x0) {
      pMVar3 = this + 0x140;
      do {
        if (*(uint *)(pMVar4 + 0x1c) >= local_3c) {
          pMVar3 = pMVar4;
        }
        pMVar4 = *(MeshSplitManager **)(pMVar4 + (ulong)(*(uint *)(pMVar4 + 0x1c) < local_3c) * 8);
      } while (pMVar4 != (MeshSplitManager *)0x0);
      if ((pMVar3 != this + 0x140) && (*(uint *)(pMVar3 + 0x1c) <= local_3c)) {
        local_3c = *(uint *)(pMVar3 + 0x20);
      }
    }
    local_3c = local_3c | 0x80000000;
    uVar1 = *(uint *)(param_2 + 0x20c);
    GsBitStream::writeBits(param_1,(uchar *)&local_3c,0x20,true);
    local_3c = uVar1;
  }
  else {
    local_3c = *(uint *)(param_2 + 0x214);
  }
  GsBitStream::writeBits(param_1,(uchar *)&local_3c,0x20,true);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


