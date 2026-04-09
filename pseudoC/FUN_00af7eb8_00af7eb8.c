// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00af7eb8
// Entry Point: 00af7eb8
// Size: 924 bytes
// Signature: undefined FUN_00af7eb8(void)


void FUN_00af7eb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,SortFileInfoByModifiedType *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined6 local_78;
  undefined2 uStack_72;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  uVar6 = std::__ndk1::__sort4<GiantsAdsProvider::SortFileInfoByModifiedType&,GsFileInfo*>
                    ((GsFileInfo *)param_1,(GsFileInfo *)param_2,(GsFileInfo *)param_3,
                     (GsFileInfo *)param_4,param_6);
  if ((ulong)param_5[5] < (ulong)param_4[5]) {
    uVar3 = *(undefined *)param_4;
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    param_4[1] = 0;
    param_4[2] = 0;
    uVar4 = *(undefined *)((long)param_4 + 1);
    *param_4 = 0;
    uVar9 = param_4[5];
    uVar10 = *param_5;
    local_78 = (undefined6)*(undefined8 *)((long)param_4 + 2);
    uVar8 = param_5[2];
    uStack_72 = (undefined2)uVar1;
    param_4[1] = param_5[1];
    *param_4 = uVar10;
    uVar11 = param_4[4];
    uVar10 = param_4[3];
    param_4[2] = uVar8;
    uVar12 = param_5[3];
    *(undefined2 *)param_5 = 0;
    uVar8 = param_5[5];
    param_4[4] = param_5[4];
    param_4[3] = uVar12;
    param_4[5] = uVar8;
    if ((*(byte *)param_5 & 1) != 0) {
      operator_delete((void *)param_5[2]);
    }
    *(undefined *)param_5 = uVar3;
    *(undefined *)((long)param_5 + 1) = uVar4;
    *(ulong *)((long)param_5 + 2) = CONCAT26(uStack_72,local_78);
    param_5[1] = uVar1;
    param_5[2] = uVar2;
    param_5[4] = uVar11;
    param_5[3] = uVar10;
    param_5[5] = uVar9;
    if ((ulong)param_4[5] < (ulong)param_3[5]) {
      uVar3 = *(undefined *)param_3;
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      param_3[1] = 0;
      param_3[2] = 0;
      uVar4 = *(undefined *)((long)param_3 + 1);
      *param_3 = 0;
      uVar9 = param_3[5];
      uVar10 = *param_4;
      local_78 = (undefined6)*(undefined8 *)((long)param_3 + 2);
      uVar8 = param_4[2];
      uStack_72 = (undefined2)uVar1;
      param_3[1] = param_4[1];
      *param_3 = uVar10;
      uVar11 = param_3[4];
      uVar10 = param_3[3];
      param_3[2] = uVar8;
      uVar12 = param_4[3];
      *(undefined2 *)param_4 = 0;
      uVar8 = param_4[5];
      param_3[4] = param_4[4];
      param_3[3] = uVar12;
      param_3[5] = uVar8;
      if ((*(byte *)param_4 & 1) != 0) {
        operator_delete((void *)param_4[2]);
      }
      *(undefined *)param_4 = uVar3;
      *(undefined *)((long)param_4 + 1) = uVar4;
      param_4[2] = uVar2;
      *(undefined8 *)((long)param_4 + 2) = CONCAT26(uStack_72,local_78);
      param_4[1] = uVar1;
      param_4[4] = uVar11;
      param_4[3] = uVar10;
      param_4[5] = uVar9;
      if ((ulong)param_3[5] < (ulong)param_2[5]) {
        uVar3 = *(undefined *)param_2;
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        param_2[1] = 0;
        param_2[2] = 0;
        uVar4 = *(undefined *)((long)param_2 + 1);
        *param_2 = 0;
        uVar9 = param_2[5];
        uVar10 = *param_3;
        local_78 = (undefined6)*(undefined8 *)((long)param_2 + 2);
        uVar8 = param_3[2];
        uStack_72 = (undefined2)uVar1;
        param_2[1] = param_3[1];
        *param_2 = uVar10;
        uVar11 = param_2[4];
        uVar10 = param_2[3];
        param_2[2] = uVar8;
        uVar12 = param_3[3];
        *(undefined2 *)param_3 = 0;
        uVar8 = param_3[5];
        param_2[4] = param_3[4];
        param_2[3] = uVar12;
        param_2[5] = uVar8;
        if ((*(byte *)param_3 & 1) != 0) {
          operator_delete((void *)param_3[2]);
        }
        *(undefined *)param_3 = uVar3;
        *(undefined *)((long)param_3 + 1) = uVar4;
        param_3[2] = uVar2;
        *(undefined8 *)((long)param_3 + 2) = CONCAT26(uStack_72,local_78);
        param_3[1] = uVar1;
        param_3[4] = uVar11;
        param_3[3] = uVar10;
        param_3[5] = uVar9;
        if ((ulong)param_2[5] < (ulong)param_1[5]) {
          uVar3 = *(undefined *)param_1;
          uVar1 = param_1[1];
          uVar2 = param_1[2];
          uVar4 = *(undefined *)((long)param_1 + 1);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          uVar9 = param_1[5];
          uVar10 = *param_2;
          uVar8 = param_2[2];
          local_78 = (undefined6)*(undefined8 *)((long)param_1 + 2);
          uStack_72 = (undefined2)uVar1;
          param_1[1] = param_2[1];
          *param_1 = uVar10;
          uVar11 = param_1[4];
          uVar10 = param_1[3];
          param_1[2] = uVar8;
          uVar12 = param_2[3];
          *(undefined2 *)param_2 = 0;
          uVar8 = param_2[5];
          param_1[4] = param_2[4];
          param_1[3] = uVar12;
          param_1[5] = uVar8;
          if ((*(byte *)param_2 & 1) != 0) {
            operator_delete((void *)param_2[2]);
          }
          uVar6 = uVar6 + 4;
          *(undefined *)param_2 = uVar3;
          *(undefined *)((long)param_2 + 1) = uVar4;
          *(undefined8 *)((long)param_2 + 2) = CONCAT26(uStack_72,local_78);
          param_2[1] = uVar1;
          param_2[2] = uVar2;
          param_2[4] = uVar11;
          param_2[3] = uVar10;
          param_2[5] = uVar9;
        }
        else {
          uVar6 = uVar6 + 3;
        }
      }
      else {
        uVar6 = uVar6 + 2;
      }
    }
    else {
      uVar6 = uVar6 + 1;
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


