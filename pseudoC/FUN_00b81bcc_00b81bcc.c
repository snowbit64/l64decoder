// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b81bcc
// Entry Point: 00b81bcc
// Size: 528 bytes
// Signature: undefined FUN_00b81bcc(void)


uint FUN_00b81bcc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,TriangleSorter *param_6)

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
  uVar2 = std::__ndk1::
          __sort4<IndexedTriangleSetBuilder::TriangleSorter&,IndexedTriangleSetBuilder::Triangle*>
                    ((Triangle *)param_1,(Triangle *)param_2,(Triangle *)param_3,(Triangle *)param_4
                     ,param_6);
  if (*(uint *)((long)param_4 + 0xc) <= *(uint *)((long)param_5 + 0xc)) {
    uVar3 = uVar2;
    if (*(uint *)((long)param_4 + 0xc) < *(uint *)((long)param_5 + 0xc)) goto LAB_00b81d70;
    if (*(uint *)param_4 <= *(uint *)param_5) {
      if (*(uint *)param_4 < *(uint *)param_5) goto LAB_00b81d70;
      if ((*(uint *)((long)param_4 + 4) <= *(uint *)((long)param_5 + 4)) &&
         ((*(uint *)((long)param_4 + 4) < *(uint *)((long)param_5 + 4) ||
          (*(uint *)(param_4 + 1) <= *(uint *)(param_5 + 1))))) goto LAB_00b81d70;
    }
  }
  uVar5 = *param_5;
  uVar7 = param_4[1];
  uVar6 = *param_4;
  param_4[1] = param_5[1];
  *param_4 = uVar5;
  param_5[1] = uVar7;
  *param_5 = uVar6;
  if (*(uint *)((long)param_3 + 0xc) <= *(uint *)((long)param_4 + 0xc)) {
    uVar3 = uVar2 + 1;
    if (*(uint *)((long)param_3 + 0xc) < *(uint *)((long)param_4 + 0xc)) goto LAB_00b81d70;
    if (*(uint *)param_3 <= *(uint *)param_4) {
      if (*(uint *)param_3 < *(uint *)param_4) goto LAB_00b81d70;
      if ((*(uint *)((long)param_3 + 4) <= *(uint *)((long)param_4 + 4)) &&
         ((*(uint *)((long)param_3 + 4) < *(uint *)((long)param_4 + 4) ||
          (*(uint *)(param_3 + 1) <= *(uint *)(param_4 + 1))))) goto LAB_00b81d70;
    }
  }
  uVar5 = *param_4;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  param_3[1] = param_4[1];
  *param_3 = uVar5;
  param_4[1] = uVar7;
  *param_4 = uVar6;
  if (*(uint *)((long)param_2 + 0xc) <= *(uint *)((long)param_3 + 0xc)) {
    uVar3 = uVar2 + 2;
    if (*(uint *)((long)param_2 + 0xc) < *(uint *)((long)param_3 + 0xc)) goto LAB_00b81d70;
    if (*(uint *)param_2 <= *(uint *)param_3) {
      if (*(uint *)param_2 < *(uint *)param_3) goto LAB_00b81d70;
      if ((*(uint *)((long)param_2 + 4) <= *(uint *)((long)param_3 + 4)) &&
         ((*(uint *)((long)param_2 + 4) < *(uint *)((long)param_3 + 4) ||
          (*(uint *)(param_2 + 1) <= *(uint *)(param_3 + 1))))) goto LAB_00b81d70;
    }
  }
  uVar5 = *param_3;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar5;
  param_3[1] = uVar7;
  *param_3 = uVar6;
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)((long)param_2 + 0xc)) {
    uVar3 = uVar2 + 3;
    if (*(uint *)((long)param_1 + 0xc) < *(uint *)((long)param_2 + 0xc)) goto LAB_00b81d70;
    if (*(uint *)param_1 <= *(uint *)param_2) {
      if (*(uint *)param_1 < *(uint *)param_2) goto LAB_00b81d70;
      if ((*(uint *)((long)param_1 + 4) <= *(uint *)((long)param_2 + 4)) &&
         ((*(uint *)((long)param_1 + 4) < *(uint *)((long)param_2 + 4) ||
          (*(uint *)(param_1 + 1) <= *(uint *)(param_2 + 1))))) goto LAB_00b81d70;
    }
  }
  uVar5 = *param_2;
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_2[1] = uVar7;
  *param_2 = uVar6;
  uVar3 = uVar2 + 4;
LAB_00b81d70:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


