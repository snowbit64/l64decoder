// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a2b738
// Entry Point: 00a2b738
// Size: 656 bytes
// Signature: undefined FUN_00a2b738(void)


void FUN_00a2b738(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
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
          __sort3<std::__ndk1::__less<LightListRasterizer::ZExtent,LightListRasterizer::ZExtent>&,LightListRasterizer::ZExtent*>
                    ((ZExtent *)param_1,(ZExtent *)param_2,(ZExtent *)param_3,param_6);
  if ((*(uint *)((long)param_4 + 4) < *(uint *)((long)param_3 + 4)) ||
     ((uVar5 = uVar4, *(uint *)((long)param_4 + 4) <= *(uint *)((long)param_3 + 4) &&
      (*(uint *)(param_4 + 1) < *(uint *)(param_3 + 1))))) {
    uVar1 = *(undefined4 *)(param_4 + 1);
    uVar7 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *param_3 = *param_4;
    *(undefined4 *)(param_3 + 1) = uVar1;
    *param_4 = uVar7;
    *(undefined4 *)(param_4 + 1) = uVar2;
    if ((*(uint *)((long)param_3 + 4) < *(uint *)((long)param_2 + 4)) ||
       ((uVar5 = uVar4 + 1, *(uint *)((long)param_3 + 4) <= *(uint *)((long)param_2 + 4) &&
        (*(uint *)(param_3 + 1) < *(uint *)(param_2 + 1))))) {
      uVar1 = *(undefined4 *)(param_3 + 1);
      uVar7 = *param_2;
      uVar2 = *(undefined4 *)(param_2 + 1);
      *param_2 = *param_3;
      *(undefined4 *)(param_2 + 1) = uVar1;
      *param_3 = uVar7;
      *(undefined4 *)(param_3 + 1) = uVar2;
      if ((*(uint *)((long)param_2 + 4) < *(uint *)((long)param_1 + 4)) ||
         ((uVar5 = uVar4 + 2, *(uint *)((long)param_2 + 4) <= *(uint *)((long)param_1 + 4) &&
          (*(uint *)(param_2 + 1) < *(uint *)(param_1 + 1))))) {
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
  if ((*(uint *)((long)param_5 + 4) < *(uint *)((long)param_4 + 4)) ||
     ((uVar4 = uVar5, *(uint *)((long)param_5 + 4) <= *(uint *)((long)param_4 + 4) &&
      (*(uint *)(param_5 + 1) < *(uint *)(param_4 + 1))))) {
    uVar1 = *(undefined4 *)(param_5 + 1);
    uVar7 = *param_4;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *param_4 = *param_5;
    *(undefined4 *)(param_4 + 1) = uVar1;
    *param_5 = uVar7;
    *(undefined4 *)(param_5 + 1) = uVar2;
    if ((*(uint *)((long)param_4 + 4) < *(uint *)((long)param_3 + 4)) ||
       ((uVar4 = uVar5 + 1, *(uint *)((long)param_4 + 4) <= *(uint *)((long)param_3 + 4) &&
        (*(uint *)(param_4 + 1) < *(uint *)(param_3 + 1))))) {
      uVar1 = *(undefined4 *)(param_4 + 1);
      uVar7 = *param_3;
      uVar2 = *(undefined4 *)(param_3 + 1);
      *param_3 = *param_4;
      *(undefined4 *)(param_3 + 1) = uVar1;
      *param_4 = uVar7;
      *(undefined4 *)(param_4 + 1) = uVar2;
      if ((*(uint *)((long)param_3 + 4) < *(uint *)((long)param_2 + 4)) ||
         ((uVar4 = uVar5 + 2, *(uint *)((long)param_3 + 4) <= *(uint *)((long)param_2 + 4) &&
          (*(uint *)(param_3 + 1) < *(uint *)(param_2 + 1))))) {
        uVar1 = *(undefined4 *)(param_3 + 1);
        uVar7 = *param_2;
        uVar2 = *(undefined4 *)(param_2 + 1);
        *param_2 = *param_3;
        *(undefined4 *)(param_2 + 1) = uVar1;
        *param_3 = uVar7;
        *(undefined4 *)(param_3 + 1) = uVar2;
        if ((*(uint *)((long)param_2 + 4) < *(uint *)((long)param_1 + 4)) ||
           ((uVar4 = uVar5 + 3, *(uint *)((long)param_2 + 4) <= *(uint *)((long)param_1 + 4) &&
            (*(uint *)(param_2 + 1) < *(uint *)(param_1 + 1))))) {
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


