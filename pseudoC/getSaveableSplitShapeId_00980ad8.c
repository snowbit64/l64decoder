// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSaveableSplitShapeId
// Entry Point: 00980ad8
// Size: 208 bytes
// Signature: undefined __thiscall getSaveableSplitShapeId(MeshSplitManager * this, MeshSplitShape * param_1, uint * param_2, uint * param_3, uint * param_4)


/* MeshSplitManager::getSaveableSplitShapeId(MeshSplitShape const*, unsigned int&, unsigned int&,
   unsigned int&) */

void __thiscall
MeshSplitManager::getSaveableSplitShapeId
          (MeshSplitManager *this,MeshSplitShape *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  MeshSplitShape **ppMVar4;
  MeshSplitShape *pMVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x208);
  uVar2 = *(uint *)(param_1 + 0x20c);
  if (((byte)param_1[0x210] >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    Mutex::enterCriticalSection();
    ppMVar4 = *(MeshSplitShape ***)(this + 0x60);
    if (ppMVar4 == *(MeshSplitShape ***)(this + 0x68)) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      do {
        pMVar5 = *ppMVar4;
        if (pMVar5 == param_1) break;
        if ((*(int *)(pMVar5 + 0x208) == iVar1) && (*(uint *)(pMVar5 + 0x20c) == uVar2)) {
          iVar6 = iVar6 + 1;
        }
        ppMVar4 = ppMVar4 + 1;
      } while (ppMVar4 != *(MeshSplitShape ***)(this + 0x68));
    }
    Mutex::leaveCriticalSection();
    uVar3 = iVar6 + 1;
  }
  *param_4 = uVar3;
  *param_2 = iVar1 + 1;
  *param_3 = uVar2;
  return;
}


