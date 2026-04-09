// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quickSortInternal<btUnionFindElementSortPredicate>
// Entry Point: 00f5744c
// Size: 244 bytes
// Signature: void __thiscall quickSortInternal<btUnionFindElementSortPredicate>(btAlignedObjectArray<btElement> * this, btUnionFindElementSortPredicate * param_1, int param_2, int param_3)


/* void 
   btAlignedObjectArray<btElement>::quickSortInternal<btUnionFindElementSortPredicate>(btUnionFindElementSortPredicate
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btElement>::quickSortInternal<btUnionFindElementSortPredicate>
          (btAlignedObjectArray<btElement> *this,btUnionFindElementSortPredicate *param_1,
          int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  
LAB_00f57478:
  iVar12 = param_2 + param_3;
  lVar8 = *(long *)(this + 0x10);
  if (iVar12 < 0) {
    iVar12 = iVar12 + 1;
  }
  uVar4 = (ulong)(uint)param_3;
  uVar7 = *(undefined8 *)(lVar8 + (long)(iVar12 >> 1) * 8);
  iVar12 = param_2;
  do {
    puVar9 = (undefined8 *)(lVar8 + (long)iVar12 * 8 + -8);
    do {
      iVar13 = iVar12;
      puVar9 = puVar9 + 1;
      iVar12 = iVar13 + 1;
      iVar6 = (int)uVar7;
    } while (*(int *)puVar9 < iVar6);
    uVar10 = -(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3;
    do {
      uVar5 = uVar4;
      piVar1 = (int *)(lVar8 + uVar10);
      uVar10 = uVar10 - 8;
      uVar3 = (uint)uVar5;
      uVar2 = uVar3 - 1;
      uVar4 = (ulong)uVar2;
    } while (iVar6 < *piVar1);
    if ((int)uVar3 < iVar13) {
      uVar4 = uVar5;
      iVar12 = iVar13;
      if ((int)uVar3 < iVar13) break;
    }
    else {
      uVar11 = *puVar9;
      *puVar9 = *(undefined8 *)(lVar8 + uVar10 + 8);
      *(undefined8 *)(*(long *)(this + 0x10) + uVar10 + 8) = uVar11;
      uVar3 = uVar2;
      iVar13 = iVar12;
      if ((int)uVar2 < iVar12) break;
    }
    lVar8 = *(long *)(this + 0x10);
  } while( true );
  if (param_2 < (int)uVar3) {
    quickSortInternal<btUnionFindElementSortPredicate>(this,param_1,param_2,uVar3);
  }
  param_2 = iVar13;
  if (param_3 <= iVar13) {
    return;
  }
  goto LAB_00f57478;
}


