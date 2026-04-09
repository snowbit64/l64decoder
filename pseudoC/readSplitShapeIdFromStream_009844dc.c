// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readSplitShapeIdFromStream
// Entry Point: 009844dc
// Size: 488 bytes
// Signature: undefined __thiscall readSplitShapeIdFromStream(MeshSplitManager * this, GsBitStream * param_1, MeshSplitShape * * param_2, uint * param_3, uint * param_4)


/* MeshSplitManager::readSplitShapeIdFromStream(GsBitStream*, MeshSplitShape*&, unsigned int&,
   unsigned int&) */

void __thiscall
MeshSplitManager::readSplitShapeIdFromStream
          (MeshSplitManager *this,GsBitStream *param_1,MeshSplitShape **param_2,uint *param_3,
          uint *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  MeshSplitManager **ppMVar4;
  MeshSplitManager *pMVar5;
  MeshSplitManager **ppMVar6;
  MeshSplitManager **ppMVar7;
  MeshSplitManager *pMVar8;
  uint uVar9;
  int local_60;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = GsBitStream::readBits(param_1,(uchar *)&local_5c,0x20,true);
  if ((uVar2 & 1) == 0) goto LAB_0098460c;
  if ((int)local_5c < 0) {
    uVar2 = GsBitStream::readBits(param_1,(uchar *)&local_60,0x20,true);
    if ((uVar2 & 1) == 0) {
LAB_0098460c:
      uVar3 = 0;
      goto LAB_00984610;
    }
    uVar9 = local_5c & 0x7fffffff;
    if (*(long *)(this + 0x130) != 0) {
      pMVar8 = *(MeshSplitManager **)(this + 0x128);
      if (pMVar8 != (MeshSplitManager *)0x0) {
        pMVar5 = this + 0x128;
        do {
          if (*(uint *)(pMVar8 + 0x1c) >= uVar9) {
            pMVar5 = pMVar8;
          }
          pMVar8 = *(MeshSplitManager **)(pMVar8 + (ulong)(*(uint *)(pMVar8 + 0x1c) < uVar9) * 8);
        } while (pMVar8 != (MeshSplitManager *)0x0);
        if ((pMVar5 != this + 0x128) && (*(uint *)(pMVar5 + 0x1c) <= uVar9)) {
          uVar9 = *(uint *)(pMVar5 + 0x20);
          goto LAB_00984648;
        }
      }
      goto LAB_0098460c;
    }
LAB_00984648:
    Mutex::enterCriticalSection();
    for (ppMVar4 = *(MeshSplitManager ***)(this + 0x60);
        ppMVar4 != *(MeshSplitManager ***)(this + 0x68); ppMVar4 = ppMVar4 + 1) {
      pMVar8 = *ppMVar4;
      if (((*(uint *)(pMVar8 + 0x208) == uVar9) && (*(int *)(pMVar8 + 0x20c) == local_60)) &&
         (((byte)pMVar8[0x210] >> 6 & 1) == 0)) goto LAB_009846a0;
    }
    pMVar8 = (MeshSplitManager *)0x0;
LAB_009846a0:
    Mutex::leaveCriticalSection();
    *param_3 = uVar9 + 1;
    *param_4 = local_60 + 1;
  }
  else {
    Mutex::enterCriticalSection();
    ppMVar7 = (MeshSplitManager **)(this + 200);
    ppMVar6 = (MeshSplitManager **)*ppMVar7;
    ppMVar4 = ppMVar7;
    if (ppMVar6 == (MeshSplitManager **)0x0) {
LAB_00984580:
      pMVar8 = (MeshSplitManager *)0x0;
    }
    else {
      do {
        if (*(uint *)(ppMVar6 + 4) >= local_5c) {
          ppMVar4 = ppMVar6;
        }
        ppMVar6 = (MeshSplitManager **)ppMVar6[*(uint *)(ppMVar6 + 4) < local_5c];
      } while (ppMVar6 != (MeshSplitManager **)0x0);
      if ((ppMVar4 == ppMVar7) || (local_5c < *(uint *)(ppMVar4 + 4))) goto LAB_00984580;
      pMVar8 = ppMVar4[5];
    }
    Mutex::leaveCriticalSection();
    *param_3 = local_5c + 1;
    *param_4 = 0;
  }
  uVar3 = 1;
  *param_2 = (MeshSplitShape *)pMVar8;
LAB_00984610:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


