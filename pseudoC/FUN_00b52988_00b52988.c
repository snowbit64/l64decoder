// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b52988
// Entry Point: 00b52988
// Size: 632 bytes
// Signature: undefined FUN_00b52988(void)


void FUN_00b52988(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,__less *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  uVar4 = std::__ndk1::
          __sort3<std::__ndk1::__less<ConvexHull2DUtil::Point,ConvexHull2DUtil::Point>&,ConvexHull2DUtil::Point*>
                    ((Point *)param_1,(Point *)param_2,(Point *)param_3,param_6);
  if ((*(float *)param_4 < *(float *)param_3) ||
     ((uVar5 = uVar4, *(float *)param_4 == *(float *)param_3 &&
      (*(float *)((long)param_4 + 4) < *(float *)((long)param_3 + 4))))) {
    uVar1 = *(undefined4 *)(param_4 + 1);
    uVar7 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *param_3 = *param_4;
    *(undefined4 *)(param_3 + 1) = uVar1;
    *param_4 = uVar7;
    *(undefined4 *)(param_4 + 1) = uVar2;
    if ((*(float *)param_3 < *(float *)param_2) ||
       ((uVar5 = uVar4 + 1, *(float *)param_3 == *(float *)param_2 &&
        (*(float *)((long)param_3 + 4) < *(float *)((long)param_2 + 4))))) {
      uVar1 = *(undefined4 *)(param_3 + 1);
      uVar7 = *param_2;
      uVar2 = *(undefined4 *)(param_2 + 1);
      *param_2 = *param_3;
      *(undefined4 *)(param_2 + 1) = uVar1;
      *param_3 = uVar7;
      *(undefined4 *)(param_3 + 1) = uVar2;
      if ((*(float *)param_2 < *(float *)param_1) ||
         ((uVar5 = uVar4 + 2, *(float *)param_2 == *(float *)param_1 &&
          (*(float *)((long)param_2 + 4) < *(float *)((long)param_1 + 4))))) {
        uVar1 = *(undefined4 *)(param_2 + 1);
        uVar7 = *param_1;
        uVar2 = *(undefined4 *)(param_1 + 1);
        *param_1 = *param_2;
        *(undefined4 *)(param_1 + 1) = uVar1;
        *param_2 = uVar7;
        *(undefined4 *)(param_2 + 1) = uVar2;
        uVar5 = uVar4 + 3;
      }
    }
  }
  if ((*(float *)param_5 < *(float *)param_4) ||
     ((uVar4 = uVar5, *(float *)param_5 == *(float *)param_4 &&
      (*(float *)((long)param_5 + 4) < *(float *)((long)param_4 + 4))))) {
    uVar1 = *(undefined4 *)(param_5 + 1);
    uVar7 = *param_4;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *param_4 = *param_5;
    *(undefined4 *)(param_4 + 1) = uVar1;
    *param_5 = uVar7;
    *(undefined4 *)(param_5 + 1) = uVar2;
    if ((*(float *)param_4 < *(float *)param_3) ||
       ((uVar4 = uVar5 + 1, *(float *)param_4 == *(float *)param_3 &&
        (*(float *)((long)param_4 + 4) < *(float *)((long)param_3 + 4))))) {
      uVar1 = *(undefined4 *)(param_4 + 1);
      uVar7 = *param_3;
      uVar2 = *(undefined4 *)(param_3 + 1);
      *param_3 = *param_4;
      *(undefined4 *)(param_3 + 1) = uVar1;
      *param_4 = uVar7;
      *(undefined4 *)(param_4 + 1) = uVar2;
      if ((*(float *)param_3 < *(float *)param_2) ||
         ((uVar4 = uVar5 + 2, *(float *)param_3 == *(float *)param_2 &&
          (*(float *)((long)param_3 + 4) < *(float *)((long)param_2 + 4))))) {
        uVar1 = *(undefined4 *)(param_3 + 1);
        uVar7 = *param_2;
        uVar2 = *(undefined4 *)(param_2 + 1);
        *param_2 = *param_3;
        *(undefined4 *)(param_2 + 1) = uVar1;
        *param_3 = uVar7;
        *(undefined4 *)(param_3 + 1) = uVar2;
        if ((*(float *)param_2 < *(float *)param_1) ||
           ((uVar4 = uVar5 + 3, *(float *)param_2 == *(float *)param_1 &&
            (*(float *)((long)param_2 + 4) < *(float *)((long)param_1 + 4))))) {
          uVar1 = *(undefined4 *)(param_2 + 1);
          uVar7 = *param_1;
          uVar2 = *(undefined4 *)(param_1 + 1);
          *param_1 = *param_2;
          *(undefined4 *)(param_1 + 1) = uVar1;
          *param_2 = uVar7;
          *(undefined4 *)(param_2 + 1) = uVar2;
          uVar4 = uVar5 + 4;
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


