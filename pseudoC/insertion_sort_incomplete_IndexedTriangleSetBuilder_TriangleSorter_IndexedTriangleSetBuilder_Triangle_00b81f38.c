// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
// Entry Point: 00b81f38
// Size: 672 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>(Triangle * param_1, Triangle * param_2, TriangleSorter * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<IndexedTriangleSetBuilder::TriangleSorter&,
   IndexedTriangleSetBuilder::Triangle*>(IndexedTriangleSetBuilder::Triangle*,
   IndexedTriangleSetBuilder::Triangle*, IndexedTriangleSetBuilder::TriangleSorter&) */

bool std::__ndk1::
     __insertion_sort_incomplete<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
               (Triangle *param_1,Triangle *param_2,TriangleSorter *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar4 = tpidr_el0;
  lVar10 = *(long *)(lVar4 + 0x28);
  uVar6 = (long)param_2 - (long)param_1 >> 4;
  if (5 < uVar6) {
    __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
              (param_1,param_1 + 0x10,param_1 + 0x20,param_3);
    if (param_1 + 0x30 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      puVar7 = (undefined8 *)(param_1 + 0x30);
      puVar13 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar11 = puVar7;
        uVar3 = *(uint *)((long)puVar11 + 0xc);
        if (uVar3 < *(uint *)((long)puVar13 + 0xc)) {
          uVar12 = *(uint *)puVar11;
LAB_00b82088:
          uVar1 = *(uint *)((long)puVar11 + 4);
          uVar2 = *(uint *)(puVar11 + 1);
          uVar16 = *puVar13;
          puVar11[1] = puVar13[1];
          *puVar11 = uVar16;
          puVar7 = (undefined8 *)param_1;
          lVar15 = lVar8;
          if (puVar13 != (undefined8 *)param_1) {
            do {
              if (*(uint *)(param_1 + lVar15 + 0x1c) <= uVar3) {
                puVar7 = puVar13;
                if (*(uint *)(param_1 + lVar15 + 0x1c) < uVar3) break;
                if (*(uint *)(param_1 + lVar15 + 0x10) <= uVar12) {
                  if (*(uint *)(param_1 + lVar15 + 0x10) < uVar12) break;
                  if (*(uint *)(param_1 + lVar15 + 0x14) <= uVar1) {
                    if (*(uint *)(param_1 + lVar15 + 0x14) < uVar1) break;
                    if (*(uint *)(param_1 + lVar15 + 0x18) <= uVar2) {
                      puVar7 = (undefined8 *)(param_1 + lVar15 + 0x20);
                      break;
                    }
                  }
                }
              }
              puVar13 = puVar13 + -2;
              lVar14 = lVar15 + -0x10;
              *(undefined8 *)(param_1 + lVar15 + 0x28) = *(undefined8 *)(param_1 + lVar15 + 0x18);
              *(undefined8 *)(param_1 + lVar15 + 0x20) = *(undefined8 *)(param_1 + lVar15 + 0x10);
              puVar7 = (undefined8 *)param_1;
              lVar15 = lVar14;
            } while (lVar14 != -0x20);
          }
          iVar9 = iVar9 + 1;
          *(uint *)puVar7 = uVar12;
          *(uint *)((long)puVar7 + 4) = uVar1;
          *(uint *)(puVar7 + 1) = uVar2;
          *(uint *)((long)puVar7 + 0xc) = uVar3;
          if (iVar9 == 8) {
            bVar5 = puVar11 + 2 == (undefined8 *)param_2;
            goto switchD_00b81f8c_caseD_0;
          }
        }
        else if (uVar3 <= *(uint *)((long)puVar13 + 0xc)) {
          uVar12 = *(uint *)puVar11;
          if (uVar12 < *(uint *)puVar13) goto LAB_00b82088;
          if (uVar12 <= *(uint *)puVar13) {
            if ((*(uint *)((long)puVar11 + 4) < *(uint *)((long)puVar13 + 4)) ||
               ((*(uint *)((long)puVar11 + 4) <= *(uint *)((long)puVar13 + 4) &&
                (*(uint *)(puVar11 + 1) < *(uint *)(puVar13 + 1))))) goto LAB_00b82088;
          }
        }
        lVar8 = lVar8 + 0x10;
        puVar7 = puVar11 + 2;
        puVar13 = puVar11;
      } while (puVar11 + 2 != (undefined8 *)param_2);
    }
    goto LAB_00b8215c;
  }
  bVar5 = true;
  switch(uVar6) {
  case 2:
    puVar7 = (undefined8 *)(param_2 + -0x10);
    if (*(uint *)(param_2 + -4) < *(uint *)(param_1 + 0xc)) {
LAB_00b81fe0:
      uVar16 = *puVar7;
      bVar5 = true;
      uVar18 = *(undefined8 *)(param_1 + 8);
      uVar17 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)param_1 = uVar16;
      *(undefined8 *)(param_2 + -8) = uVar18;
      *puVar7 = uVar17;
    }
    else {
      if (*(uint *)(param_2 + -4) <= *(uint *)(param_1 + 0xc)) {
        if (*(uint *)puVar7 < *(uint *)param_1) goto LAB_00b81fe0;
        if (*(uint *)puVar7 <= *(uint *)param_1) {
          if ((*(uint *)(param_2 + -0xc) < *(uint *)(param_1 + 4)) ||
             ((*(uint *)(param_2 + -0xc) <= *(uint *)(param_1 + 4) &&
              (*(uint *)(param_2 + -8) < *(uint *)(param_1 + 8))))) goto LAB_00b81fe0;
        }
      }
LAB_00b8215c:
      bVar5 = true;
    }
    break;
  case 3:
    __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
              (param_1,param_1 + 0x10,param_2 + -0x10,param_3);
    bVar5 = true;
    break;
  case 4:
    __sort4<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
              (param_1,param_1 + 0x10,param_1 + 0x20,param_2 + -0x10,param_3);
    bVar5 = true;
    break;
  case 5:
    FUN_00b81bcc(param_1,param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_2 + -0x10);
    bVar5 = true;
  }
switchD_00b81f8c_caseD_0:
  if (*(long *)(lVar4 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


