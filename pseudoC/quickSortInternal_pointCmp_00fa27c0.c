// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quickSortInternal<pointCmp>
// Entry Point: 00fa27c0
// Size: 360 bytes
// Signature: void __thiscall quickSortInternal<pointCmp>(btAlignedObjectArray<btConvexHullInternal::Point32> * this, pointCmp * param_1, int param_2, int param_3)


/* void btAlignedObjectArray<btConvexHullInternal::Point32>::quickSortInternal<pointCmp>(pointCmp
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btConvexHullInternal::Point32>::quickSortInternal<pointCmp>
          (btAlignedObjectArray<btConvexHullInternal::Point32> *this,pointCmp *param_1,int param_2,
          int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
  do {
    iVar13 = param_2 + param_3;
    lVar10 = *(long *)(this + 0x10);
    if (iVar13 < 0) {
      iVar13 = iVar13 + 1;
    }
    uVar8 = (ulong)(uint)param_3;
    piVar1 = (int *)(lVar10 + (long)(iVar13 >> 1) * 0x10);
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    iVar13 = param_2;
    while( true ) {
      for (puVar11 = (undefined8 *)(lVar10 + (long)iVar13 * 0x10);
          (*(int *)((long)puVar11 + 4) < iVar3 ||
          ((*(int *)((long)puVar11 + 4) == iVar3 &&
           ((*(int *)puVar11 < iVar2 ||
            ((*(int *)puVar11 == iVar2 && (*(int *)(puVar11 + 1) < iVar4))))))));
          puVar11 = puVar11 + 2) {
        iVar13 = iVar13 + 1;
      }
      uVar12 = -(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4;
      while( true ) {
        iVar7 = *(int *)(lVar10 + uVar12 + 4);
        iVar6 = (int)uVar8;
        if ((iVar7 <= iVar3) &&
           ((iVar3 != iVar7 ||
            ((*(int *)(lVar10 + uVar12) <= iVar2 &&
             ((iVar2 != *(int *)(lVar10 + uVar12) || (*(int *)(lVar10 + uVar12 + 8) <= iVar4))))))))
        break;
        uVar12 = uVar12 - 0x10;
        uVar8 = (ulong)(iVar6 - 1);
      }
      if (iVar13 <= iVar6) {
        uVar16 = *(undefined8 *)(lVar10 + uVar12);
        iVar13 = iVar13 + 1;
        uVar15 = puVar11[1];
        uVar14 = *puVar11;
        uVar8 = (ulong)(iVar6 - 1);
        puVar11[1] = ((undefined8 *)(lVar10 + uVar12))[1];
        *puVar11 = uVar16;
        lVar10 = *(long *)(this + 0x10);
        ((undefined8 *)(lVar10 + uVar12))[1] = uVar15;
        *(undefined8 *)(lVar10 + uVar12) = uVar14;
      }
      iVar7 = (int)uVar8;
      if (iVar7 < iVar13) break;
      lVar10 = *(long *)(this + 0x10);
    }
    if (param_2 < iVar7) {
      quickSortInternal<pointCmp>(this,param_1,param_2,iVar7);
    }
    param_2 = iVar13;
  } while (iVar13 < param_3);
  if (*(long *)(lVar5 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


