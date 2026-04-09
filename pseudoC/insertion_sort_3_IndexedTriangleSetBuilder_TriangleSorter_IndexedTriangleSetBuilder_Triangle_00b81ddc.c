// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
// Entry Point: 00b81ddc
// Size: 348 bytes
// Signature: void __cdecl __insertion_sort_3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>(Triangle * param_1, Triangle * param_2, TriangleSorter * param_3)


/* void std::__ndk1::__insertion_sort_3<IndexedTriangleSetBuilder::TriangleSorter&,
   IndexedTriangleSetBuilder::Triangle*>(IndexedTriangleSetBuilder::Triangle*,
   IndexedTriangleSetBuilder::Triangle*, IndexedTriangleSetBuilder::TriangleSorter&) */

void std::__ndk1::
     __insertion_sort_3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
               (Triangle *param_1,Triangle *param_2,TriangleSorter *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
            (param_1,param_1 + 0x10,param_1 + 0x20,param_3);
  if (param_1 + 0x30 != param_2) {
    lVar4 = 0;
    puVar8 = (undefined8 *)(param_1 + 0x30);
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar5 = puVar8;
      uVar3 = *(uint *)((long)puVar5 + 0xc);
      if (uVar3 < *(uint *)((long)puVar7 + 0xc)) {
        uVar6 = *(uint *)puVar5;
LAB_00b81e54:
        uVar1 = *(uint *)((long)puVar5 + 4);
        uVar2 = *(uint *)(puVar5 + 1);
        uVar11 = *puVar7;
        puVar5[1] = puVar7[1];
        *puVar5 = uVar11;
        puVar8 = (undefined8 *)param_1;
        lVar10 = lVar4;
        if (puVar7 != (undefined8 *)param_1) {
          do {
            if (*(uint *)(param_1 + lVar10 + 0x1c) <= uVar3) {
              puVar8 = puVar7;
              if (*(uint *)(param_1 + lVar10 + 0x1c) < uVar3) break;
              if (*(uint *)(param_1 + lVar10 + 0x10) <= uVar6) {
                if (*(uint *)(param_1 + lVar10 + 0x10) < uVar6) break;
                if (*(uint *)(param_1 + lVar10 + 0x14) <= uVar1) {
                  if (*(uint *)(param_1 + lVar10 + 0x14) < uVar1) break;
                  if (*(uint *)(param_1 + lVar10 + 0x18) <= uVar2) {
                    puVar8 = (undefined8 *)(param_1 + lVar10 + 0x20);
                    break;
                  }
                }
              }
            }
            puVar7 = puVar7 + -2;
            lVar9 = lVar10 + -0x10;
            *(undefined8 *)(param_1 + lVar10 + 0x28) = *(undefined8 *)(param_1 + lVar10 + 0x18);
            *(undefined8 *)(param_1 + lVar10 + 0x20) = *(undefined8 *)(param_1 + lVar10 + 0x10);
            puVar8 = (undefined8 *)param_1;
            lVar10 = lVar9;
          } while (lVar9 != -0x20);
        }
        *(uint *)puVar8 = uVar6;
        *(uint *)((long)puVar8 + 4) = uVar1;
        *(uint *)(puVar8 + 1) = uVar2;
        *(uint *)((long)puVar8 + 0xc) = uVar3;
      }
      else if (uVar3 <= *(uint *)((long)puVar7 + 0xc)) {
        uVar6 = *(uint *)puVar5;
        if (uVar6 < *(uint *)puVar7) goto LAB_00b81e54;
        if (uVar6 <= *(uint *)puVar7) {
          if ((*(uint *)((long)puVar5 + 4) < *(uint *)((long)puVar7 + 4)) ||
             ((*(uint *)((long)puVar5 + 4) <= *(uint *)((long)puVar7 + 4) &&
              (*(uint *)(puVar5 + 1) < *(uint *)(puVar7 + 1))))) goto LAB_00b81e54;
        }
      }
      lVar4 = lVar4 + 0x10;
      puVar8 = puVar5 + 2;
      puVar7 = puVar5;
    } while (puVar5 + 2 != (undefined8 *)param_2);
  }
  return;
}


