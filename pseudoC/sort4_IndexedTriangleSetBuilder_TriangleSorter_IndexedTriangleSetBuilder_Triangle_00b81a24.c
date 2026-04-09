// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
// Entry Point: 00b81a24
// Size: 424 bytes
// Signature: uint __cdecl __sort4<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>(Triangle * param_1, Triangle * param_2, Triangle * param_3, Triangle * param_4, TriangleSorter * param_5)


/* unsigned int std::__ndk1::__sort4<IndexedTriangleSetBuilder::TriangleSorter&,
   IndexedTriangleSetBuilder::Triangle*>(IndexedTriangleSetBuilder::Triangle*,
   IndexedTriangleSetBuilder::Triangle*, IndexedTriangleSetBuilder::Triangle*,
   IndexedTriangleSetBuilder::Triangle*, IndexedTriangleSetBuilder::TriangleSorter&) */

uint std::__ndk1::
     __sort4<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
               (Triangle *param_1,Triangle *param_2,Triangle *param_3,Triangle *param_4,
               TriangleSorter *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar2 = __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
                    (param_1,param_2,param_3,param_5);
  if (*(uint *)(param_3 + 0xc) <= *(uint *)(param_4 + 0xc)) {
    uVar3 = uVar2;
    if (*(uint *)(param_3 + 0xc) < *(uint *)(param_4 + 0xc)) goto LAB_00b81b60;
    if (*(uint *)param_3 <= *(uint *)param_4) {
      if (*(uint *)param_3 < *(uint *)param_4) goto LAB_00b81b60;
      if ((*(uint *)(param_3 + 4) <= *(uint *)(param_4 + 4)) &&
         ((*(uint *)(param_3 + 4) < *(uint *)(param_4 + 4) ||
          (*(uint *)(param_3 + 8) <= *(uint *)(param_4 + 8))))) goto LAB_00b81b60;
    }
  }
  uVar5 = *(undefined8 *)param_4;
  uVar7 = *(undefined8 *)(param_3 + 8);
  uVar6 = *(undefined8 *)param_3;
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)param_3 = uVar5;
  *(undefined8 *)(param_4 + 8) = uVar7;
  *(undefined8 *)param_4 = uVar6;
  if (*(uint *)(param_2 + 0xc) <= *(uint *)(param_3 + 0xc)) {
    uVar3 = uVar2 + 1;
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_3 + 0xc)) goto LAB_00b81b60;
    if (*(uint *)param_2 <= *(uint *)param_3) {
      if (*(uint *)param_2 < *(uint *)param_3) goto LAB_00b81b60;
      if ((*(uint *)(param_2 + 4) <= *(uint *)(param_3 + 4)) &&
         ((*(uint *)(param_2 + 4) < *(uint *)(param_3 + 4) ||
          (*(uint *)(param_2 + 8) <= *(uint *)(param_3 + 8))))) goto LAB_00b81b60;
    }
  }
  uVar5 = *(undefined8 *)param_3;
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)param_2;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)param_2 = uVar5;
  *(undefined8 *)(param_3 + 8) = uVar7;
  *(undefined8 *)param_3 = uVar6;
  if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_2 + 0xc)) {
    uVar3 = uVar2 + 2;
    if (*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc)) goto LAB_00b81b60;
    if (*(uint *)param_1 <= *(uint *)param_2) {
      if (*(uint *)param_1 < *(uint *)param_2) goto LAB_00b81b60;
      if ((*(uint *)(param_1 + 4) <= *(uint *)(param_2 + 4)) &&
         ((*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4) ||
          (*(uint *)(param_1 + 8) <= *(uint *)(param_2 + 8))))) goto LAB_00b81b60;
    }
  }
  uVar5 = *(undefined8 *)param_2;
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = uVar5;
  *(undefined8 *)(param_2 + 8) = uVar7;
  *(undefined8 *)param_2 = uVar6;
  uVar3 = uVar2 + 3;
LAB_00b81b60:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


