// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quickSortInternal<btSortConstraintOnIslandPredicate>
// Entry Point: 00f37580
// Size: 408 bytes
// Signature: void __thiscall quickSortInternal<btSortConstraintOnIslandPredicate>(btAlignedObjectArray<btTypedConstraint*> * this, btSortConstraintOnIslandPredicate * param_1, int param_2, int param_3)


/* void 
   btAlignedObjectArray<btTypedConstraint*>::quickSortInternal<btSortConstraintOnIslandPredicate>(btSortConstraintOnIslandPredicate
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btTypedConstraint*>::quickSortInternal<btSortConstraintOnIslandPredicate>
          (btAlignedObjectArray<btTypedConstraint*> *this,btSortConstraintOnIslandPredicate *param_1
          ,int param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  uVar10 = (ulong)(uint)param_2;
  do {
    iVar9 = (int)uVar10;
    iVar2 = iVar9 + param_3;
    lVar5 = *(long *)(this + 0x10);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = (ulong)(uint)param_3;
    lVar4 = *(long *)(lVar5 + (long)(iVar2 >> 1) * 8);
    while( true ) {
      iVar2 = *(int *)(*(long *)(lVar4 + 0x28) + 0xe4);
      if (iVar2 < 0) {
        lVar7 = (long)(int)uVar10;
        do {
          lVar6 = *(long *)(lVar5 + lVar7 * 8);
          iVar8 = *(int *)(*(long *)(lVar6 + 0x28) + 0xe4);
          if (iVar8 < 0) {
            iVar8 = *(int *)(*(long *)(lVar6 + 0x30) + 0xe4);
          }
          lVar7 = lVar7 + 1;
        } while (iVar8 < *(int *)(*(long *)(lVar4 + 0x30) + 0xe4));
      }
      else {
        lVar7 = (long)(int)uVar10;
        do {
          lVar6 = *(long *)(lVar5 + lVar7 * 8);
          iVar8 = *(int *)(*(long *)(lVar6 + 0x28) + 0xe4);
          if (iVar8 < 0) {
            iVar8 = *(int *)(*(long *)(lVar6 + 0x30) + 0xe4);
          }
          lVar7 = lVar7 + 1;
        } while (iVar8 < iVar2);
      }
      uVar10 = lVar7 - 1;
      if (iVar2 < 0) {
        uVar1 = (long)(int)uVar3;
        do {
          uVar3 = uVar1;
          lVar7 = *(long *)(lVar5 + uVar3 * 8);
          iVar2 = *(int *)(*(long *)(lVar7 + 0x28) + 0xe4);
          if (iVar2 < 0) {
            iVar2 = *(int *)(*(long *)(lVar7 + 0x30) + 0xe4);
          }
          uVar1 = uVar3 - 1;
        } while (*(int *)(*(long *)(lVar4 + 0x30) + 0xe4) < iVar2);
        iVar2 = (int)uVar3;
      }
      else {
        uVar1 = (long)(int)uVar3;
        do {
          uVar3 = uVar1;
          lVar7 = *(long *)(lVar5 + uVar3 * 8);
          iVar8 = *(int *)(*(long *)(lVar7 + 0x28) + 0xe4);
          if (iVar8 < 0) {
            iVar8 = *(int *)(*(long *)(lVar7 + 0x30) + 0xe4);
          }
          uVar1 = uVar3 - 1;
        } while (iVar2 < iVar8);
        iVar2 = (int)uVar3;
      }
      if ((int)uVar10 <= iVar2) {
        *(long *)(lVar5 + uVar10 * 8) = lVar7;
        uVar10 = (ulong)((int)uVar10 + 1);
        *(long *)(*(long *)(this + 0x10) + uVar3 * 8) = lVar6;
        uVar3 = (ulong)((int)uVar3 - 1);
      }
      iVar2 = (int)uVar3;
      if (iVar2 < (int)uVar10) break;
      lVar5 = *(long *)(this + 0x10);
    }
    if (iVar9 < iVar2) {
      quickSortInternal<btSortConstraintOnIslandPredicate>(this,param_1,iVar9,iVar2);
    }
  } while ((int)uVar10 < param_3);
  return;
}


