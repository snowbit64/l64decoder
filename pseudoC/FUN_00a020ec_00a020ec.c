// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a020ec
// Entry Point: 00a020ec
// Size: 420 bytes
// Signature: undefined FUN_00a020ec(void)


uint FUN_00a020ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,CompareLightSourceShadowsFirst *param_6)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar3 = std::__ndk1::__sort4<LightList::CompareLightSourceShadowsFirst&,LightSourceQueueItem*>
                    ((LightSourceQueueItem *)param_1,(LightSourceQueueItem *)param_2,
                     (LightSourceQueueItem *)param_3,(LightSourceQueueItem *)param_4,param_6);
  uVar4 = uVar3;
  if ((param_5[1] != 0) &&
     ((param_4[1] == 0 ||
      (*(uint *)(*(long *)(param_4[1] + 8) + 8) < *(uint *)(*(long *)(param_5[1] + 8) + 8))))) {
    uVar8 = *param_5;
    uVar7 = param_5[3];
    uVar6 = param_5[2];
    uVar10 = param_4[1];
    uVar9 = *param_4;
    uVar12 = param_4[3];
    uVar11 = param_4[2];
    uVar1 = *(undefined4 *)(param_5 + 4);
    param_4[1] = param_5[1];
    *param_4 = uVar8;
    param_4[3] = uVar7;
    param_4[2] = uVar6;
    uVar6 = param_4[4];
    *(undefined4 *)(param_4 + 4) = uVar1;
    uVar4 = uVar3 + 1;
    param_5[1] = uVar10;
    *param_5 = uVar9;
    param_5[3] = uVar12;
    param_5[2] = uVar11;
    *(int *)(param_5 + 4) = (int)uVar6;
    if ((param_4[1] != 0) &&
       ((param_3[1] == 0 ||
        (*(uint *)(*(long *)(param_3[1] + 8) + 8) < *(uint *)(*(long *)(param_4[1] + 8) + 8))))) {
      uVar8 = *param_4;
      uVar7 = param_4[3];
      uVar6 = param_4[2];
      uVar10 = param_3[1];
      uVar9 = *param_3;
      uVar12 = param_3[3];
      uVar11 = param_3[2];
      uVar1 = *(undefined4 *)(param_4 + 4);
      param_3[1] = param_4[1];
      *param_3 = uVar8;
      param_3[3] = uVar7;
      param_3[2] = uVar6;
      uVar6 = param_3[4];
      *(undefined4 *)(param_3 + 4) = uVar1;
      uVar4 = uVar3 + 2;
      param_4[1] = uVar10;
      *param_4 = uVar9;
      param_4[3] = uVar12;
      param_4[2] = uVar11;
      *(int *)(param_4 + 4) = (int)uVar6;
      if ((param_3[1] != 0) &&
         ((param_2[1] == 0 ||
          (*(uint *)(*(long *)(param_2[1] + 8) + 8) < *(uint *)(*(long *)(param_3[1] + 8) + 8))))) {
        uVar8 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        uVar10 = param_2[1];
        uVar9 = *param_2;
        uVar12 = param_2[3];
        uVar11 = param_2[2];
        uVar1 = *(undefined4 *)(param_3 + 4);
        param_2[1] = param_3[1];
        *param_2 = uVar8;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        uVar6 = param_2[4];
        *(undefined4 *)(param_2 + 4) = uVar1;
        uVar4 = uVar3 + 3;
        param_3[1] = uVar10;
        *param_3 = uVar9;
        param_3[3] = uVar12;
        param_3[2] = uVar11;
        *(int *)(param_3 + 4) = (int)uVar6;
        if ((param_2[1] != 0) &&
           ((param_1[1] == 0 ||
            (*(uint *)(*(long *)(param_1[1] + 8) + 8) < *(uint *)(*(long *)(param_2[1] + 8) + 8)))))
        {
          uVar8 = *param_2;
          uVar7 = param_2[3];
          uVar6 = param_2[2];
          uVar1 = *(undefined4 *)(param_2 + 4);
          uVar10 = param_1[1];
          uVar9 = *param_1;
          uVar12 = param_1[3];
          uVar11 = param_1[2];
          param_1[1] = param_2[1];
          *param_1 = uVar8;
          param_1[3] = uVar7;
          param_1[2] = uVar6;
          uVar6 = param_1[4];
          *(undefined4 *)(param_1 + 4) = uVar1;
          uVar4 = uVar3 + 4;
          param_2[1] = uVar10;
          *param_2 = uVar9;
          param_2[3] = uVar12;
          param_2[2] = uVar11;
          *(int *)(param_2 + 4) = (int)uVar6;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


