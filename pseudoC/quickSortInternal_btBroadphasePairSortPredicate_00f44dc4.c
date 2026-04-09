// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quickSortInternal<btBroadphasePairSortPredicate>
// Entry Point: 00f44dc4
// Size: 548 bytes
// Signature: void __thiscall quickSortInternal<btBroadphasePairSortPredicate>(btAlignedObjectArray<btBroadphasePair> * this, btBroadphasePairSortPredicate * param_1, int param_2, int param_3)


/* void 
   btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>(btBroadphasePairSortPredicate
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btBroadphasePair>::quickSortInternal<btBroadphasePairSortPredicate>
          (btAlignedObjectArray<btBroadphasePair> *this,btBroadphasePairSortPredicate *param_1,
          int param_2,int param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
LAB_00f44df0:
  uVar1 = param_2 + param_3;
  lVar9 = *(long *)(this + 0x10);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 1;
  }
  puVar10 = (ulong *)(lVar9 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20);
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar8 = puVar10[2];
  iVar7 = param_3;
  iVar18 = param_2;
LAB_00f44e18:
  puVar10 = (ulong *)(lVar9 + (long)iVar18 * 0x20 + 0x10);
  do {
    uVar11 = puVar10[-2];
    if (uVar11 == 0) {
      iVar13 = -1;
      if (uVar3 == 0) goto LAB_00f44e70;
LAB_00f44e44:
      iVar15 = *(int *)(uVar3 + 0x18);
      uVar12 = puVar10[-1];
      if (uVar12 != 0) goto LAB_00f44e50;
LAB_00f44e7c:
      iVar17 = -1;
      if (uVar4 == 0) goto LAB_00f44e84;
LAB_00f44e58:
      iVar5 = *(int *)(uVar4 + 0x18);
      if (iVar13 <= iVar15) {
LAB_00f44e90:
        if ((uVar11 == uVar3 && iVar5 < iVar17) || (uVar11 != uVar3)) {
          if (uVar11 != uVar3 || iVar5 >= iVar17) break;
        }
        else if ((uVar12 != uVar4) || (uVar12 = uVar4, *puVar10 <= uVar8)) break;
      }
    }
    else {
      iVar13 = *(int *)(uVar11 + 0x18);
      if (uVar3 != 0) goto LAB_00f44e44;
LAB_00f44e70:
      iVar15 = -1;
      uVar12 = puVar10[-1];
      if (uVar12 == 0) goto LAB_00f44e7c;
LAB_00f44e50:
      iVar17 = *(int *)(uVar12 + 0x18);
      if (uVar4 != 0) goto LAB_00f44e58;
LAB_00f44e84:
      iVar5 = -1;
      if (iVar13 <= iVar15) goto LAB_00f44e90;
    }
    puVar10 = puVar10 + 4;
    iVar18 = iVar18 + 1;
  } while( true );
  uVar14 = (long)iVar7 << 5 | 0x18;
  do {
    if (uVar3 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = *(int *)(uVar3 + 0x18);
    }
    uVar16 = *(ulong *)(lVar9 + uVar14 + -0x18);
    if (uVar16 == 0) {
      iVar15 = -1;
      if (uVar4 == 0) goto LAB_00f44f18;
LAB_00f44f08:
      iVar17 = *(int *)(uVar4 + 0x18);
    }
    else {
      iVar15 = *(int *)(uVar16 + 0x18);
      if (uVar4 != 0) goto LAB_00f44f08;
LAB_00f44f18:
      iVar17 = -1;
    }
    uVar6 = *(ulong *)(lVar9 + uVar14 + -0x10);
    if (uVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(uVar6 + 0x18);
    }
    if (iVar13 <= iVar15) {
      if ((uVar3 == uVar16 && iVar5 < iVar17) || (uVar3 != uVar16)) {
        if (uVar3 != uVar16 || iVar5 >= iVar17) break;
      }
      else if ((uVar4 != uVar6) || (uVar8 <= *(ulong *)(lVar9 + uVar14 + -8))) break;
    }
    uVar14 = uVar14 - 0x20;
    iVar7 = iVar7 + -1;
  } while( true );
  if (iVar18 <= iVar7) {
    puVar2 = (ulong *)(lVar9 + uVar14);
    iVar18 = iVar18 + 1;
    iVar7 = iVar7 + -1;
    uVar19 = puVar2[-3];
    uVar21 = *puVar2;
    uVar20 = puVar2[-1];
    uVar16 = *puVar10;
    uVar6 = puVar10[1];
    puVar10[-1] = puVar2[-2];
    puVar10[-2] = uVar19;
    puVar10[1] = uVar21;
    *puVar10 = uVar20;
    puVar10 = (ulong *)(*(long *)(this + 0x10) + uVar14);
    puVar10[-3] = uVar11;
    puVar10[-2] = uVar12;
    puVar10[-1] = uVar16;
    *puVar10 = uVar6;
  }
  if (iVar7 < iVar18) goto LAB_00f44fc0;
  lVar9 = *(long *)(this + 0x10);
  goto LAB_00f44e18;
LAB_00f44fc0:
  if (param_2 < iVar7) {
    quickSortInternal<btBroadphasePairSortPredicate>(this,param_1,param_2,iVar7);
  }
  param_2 = iVar18;
  if (param_3 <= iVar18) {
    return;
  }
  goto LAB_00f44df0;
}


