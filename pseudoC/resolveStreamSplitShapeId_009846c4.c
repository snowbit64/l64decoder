// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveStreamSplitShapeId
// Entry Point: 009846c4
// Size: 228 bytes
// Signature: undefined __thiscall resolveStreamSplitShapeId(MeshSplitManager * this, uint param_1, uint param_2)


/* MeshSplitManager::resolveStreamSplitShapeId(unsigned int, unsigned int) */

MeshSplitManager * __thiscall
MeshSplitManager::resolveStreamSplitShapeId(MeshSplitManager *this,uint param_1,uint param_2)

{
  uint uVar1;
  MeshSplitManager **ppMVar2;
  MeshSplitManager **ppMVar3;
  MeshSplitManager *pMVar4;
  MeshSplitManager **ppMVar5;
  
  if (param_1 == 0) {
    return (MeshSplitManager *)0x0;
  }
  uVar1 = param_1 - 1;
  if (param_2 == 0) {
    Mutex::enterCriticalSection();
    ppMVar5 = (MeshSplitManager **)(this + 200);
    ppMVar3 = (MeshSplitManager **)*ppMVar5;
    ppMVar2 = ppMVar5;
    if (ppMVar3 != (MeshSplitManager **)0x0) {
      do {
        if (*(uint *)(ppMVar3 + 4) >= uVar1) {
          ppMVar2 = ppMVar3;
        }
        ppMVar3 = (MeshSplitManager **)ppMVar3[*(uint *)(ppMVar3 + 4) < uVar1];
      } while (ppMVar3 != (MeshSplitManager **)0x0);
      if ((ppMVar2 != ppMVar5) && (*(uint *)(ppMVar2 + 4) <= uVar1)) {
        pMVar4 = ppMVar2[5];
        goto LAB_00984784;
      }
    }
  }
  else {
    Mutex::enterCriticalSection();
    ppMVar2 = *(MeshSplitManager ***)(this + 0x60);
    if (ppMVar2 != *(MeshSplitManager ***)(this + 0x68)) {
      do {
        pMVar4 = *ppMVar2;
        if (((*(uint *)(pMVar4 + 0x208) == uVar1) && (*(int *)(pMVar4 + 0x20c) == param_2 - 1)) &&
           (((byte)pMVar4[0x210] >> 6 & 1) == 0)) goto LAB_00984784;
        ppMVar2 = ppMVar2 + 1;
      } while (ppMVar2 != *(MeshSplitManager ***)(this + 0x68));
    }
  }
  pMVar4 = (MeshSplitManager *)0x0;
LAB_00984784:
  Mutex::leaveCriticalSection();
  return pMVar4;
}


