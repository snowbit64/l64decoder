// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
// Entry Point: 00b817f4
// Size: 560 bytes
// Signature: uint __cdecl __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>(Triangle * param_1, Triangle * param_2, Triangle * param_3, TriangleSorter * param_4)


/* unsigned int std::__ndk1::__sort3<IndexedTriangleSetBuilder::TriangleSorter&,
   IndexedTriangleSetBuilder::Triangle*>(IndexedTriangleSetBuilder::Triangle*,
   IndexedTriangleSetBuilder::Triangle*, IndexedTriangleSetBuilder::Triangle*,
   IndexedTriangleSetBuilder::TriangleSorter&) */

uint std::__ndk1::
     __sort3<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
               (Triangle *param_1,Triangle *param_2,Triangle *param_3,TriangleSorter *param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 <= uVar3) {
    if (uVar1 > uVar3 || uVar3 == uVar1) {
      if (*(uint *)param_2 < *(uint *)param_1) goto LAB_00b8181c;
      if (*(uint *)param_2 <= *(uint *)param_1) {
        if ((*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) ||
           ((*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4) &&
            (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8))))) goto LAB_00b8181c;
      }
    }
    if (uVar3 <= *(uint *)(param_3 + 0xc)) {
      if (*(uint *)(param_3 + 0xc) <= uVar3) {
        if (*(uint *)param_3 < *(uint *)param_2) goto LAB_00b81888;
        if (*(uint *)param_3 <= *(uint *)param_2) {
          if ((*(uint *)(param_3 + 4) < *(uint *)(param_2 + 4)) ||
             ((*(uint *)(param_3 + 4) <= *(uint *)(param_2 + 4) &&
              (*(uint *)(param_3 + 8) < *(uint *)(param_2 + 8))))) goto LAB_00b81888;
        }
      }
      uVar3 = 0;
      goto LAB_00b819c4;
    }
LAB_00b81888:
    uVar5 = *(undefined8 *)param_3;
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)param_2;
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar5;
    *(undefined8 *)(param_3 + 8) = uVar7;
    *(undefined8 *)param_3 = uVar6;
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc)) {
LAB_00b818a8:
      uVar5 = *(undefined8 *)param_2;
      uVar3 = 2;
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar6 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)param_1 = uVar5;
      *(undefined8 *)(param_2 + 8) = uVar7;
      *(undefined8 *)param_2 = uVar6;
      goto LAB_00b819c4;
    }
    if (*(uint *)(param_2 + 0xc) <= *(uint *)(param_1 + 0xc)) {
      if (*(uint *)param_2 < *(uint *)param_1) goto LAB_00b818a8;
      if (*(uint *)param_2 <= *(uint *)param_1) {
        if ((*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) ||
           ((*(uint *)(param_2 + 4) <= *(uint *)(param_1 + 4) &&
            (*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8))))) goto LAB_00b818a8;
      }
    }
    goto LAB_00b819c0;
  }
LAB_00b8181c:
  uVar1 = *(uint *)(param_3 + 0xc);
  if (uVar3 <= uVar1) {
    if (uVar3 > uVar1 || uVar1 == uVar3) {
      if (*(uint *)param_3 < *(uint *)param_2) goto LAB_00b81828;
      if (*(uint *)param_3 <= *(uint *)param_2) {
        if ((*(uint *)(param_3 + 4) < *(uint *)(param_2 + 4)) ||
           ((*(uint *)(param_3 + 4) <= *(uint *)(param_2 + 4) &&
            (*(uint *)(param_3 + 8) < *(uint *)(param_2 + 8))))) goto LAB_00b81828;
      }
    }
    uVar5 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)param_1;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = uVar5;
    *(undefined8 *)(param_2 + 8) = uVar7;
    *(undefined8 *)param_2 = uVar6;
    uVar3 = *(uint *)(param_3 + 0xc);
    uVar1 = *(uint *)(param_2 + 0xc);
    if (uVar1 <= uVar3) {
      if (uVar1 > uVar3 || uVar3 == uVar1) {
        if (*(uint *)param_3 < *(uint *)param_2) goto LAB_00b818e4;
        if (*(uint *)param_3 <= *(uint *)param_2) {
          if ((*(uint *)(param_3 + 4) < *(uint *)(param_2 + 4)) ||
             ((*(uint *)(param_3 + 4) <= *(uint *)(param_2 + 4) &&
              (*(uint *)(param_3 + 8) < *(uint *)(param_2 + 8))))) goto LAB_00b818e4;
        }
      }
LAB_00b819c0:
      uVar3 = 1;
      goto LAB_00b819c4;
    }
LAB_00b818e4:
    uVar5 = *(undefined8 *)param_3;
    uVar3 = 2;
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)param_2;
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar5;
  }
  else {
LAB_00b81828:
    uVar5 = *(undefined8 *)param_3;
    uVar3 = 1;
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)param_1;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_1 = uVar5;
  }
  *(undefined8 *)(param_3 + 8) = uVar7;
  *(undefined8 *)param_3 = uVar6;
LAB_00b819c4:
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


