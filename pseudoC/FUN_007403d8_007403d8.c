// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007403d8
// Entry Point: 007403d8
// Size: 608 bytes
// Signature: undefined FUN_007403d8(void)


int FUN_007403d8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined3 uStack_30;
  undefined uStack_2d;
  undefined7 uStack_2c;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(param_2 + 1);
  if (*(float *)(param_1 + 1) <= fVar5) {
    if (fVar5 <= *(float *)(param_3 + 1)) {
      iVar3 = 0;
      goto LAB_00740540;
    }
    uVar8 = *param_2;
    uVar6 = *(undefined8 *)((long)param_2 + 0xc);
    uVar7 = *param_3;
    uStack_38 = (undefined4)param_2[1];
    uVar2 = uStack_38;
    uVar11 = *(undefined8 *)((long)param_3 + 0x13);
    uVar9 = *(undefined8 *)((long)param_3 + 0xb);
    uStack_2c = (undefined7)*(undefined8 *)((long)param_2 + 0x14);
    uStack_34 = (undefined4)uVar6;
    uStack_2d = (undefined)((ulong)uVar6 >> 0x38);
    uStack_38._3_1_ = (undefined)((ulong)param_2[1] >> 0x18);
    uStack_30 = (undefined3)((ulong)uVar6 >> 0x20);
    param_2[1] = param_3[1];
    *param_2 = uVar7;
    *(undefined8 *)((long)param_2 + 0x13) = uVar11;
    *(undefined8 *)((long)param_2 + 0xb) = uVar9;
    *(ulong *)((long)param_3 + 0x13) = CONCAT71(uStack_2c,uStack_2d);
    *(ulong *)((long)param_3 + 0xb) = CONCAT35(uStack_30,CONCAT41(uStack_34,uStack_38._3_1_));
    param_3[1] = CONCAT44(uStack_34,uVar2);
    *param_3 = uVar8;
    if (*(float *)(param_2 + 1) < *(float *)(param_1 + 1)) {
      uVar8 = *param_1;
      iVar3 = 2;
      uVar6 = *(undefined8 *)((long)param_1 + 0xc);
      uVar7 = *param_2;
      uStack_38 = (undefined4)param_1[1];
      uVar2 = uStack_38;
      uVar11 = *(undefined8 *)((long)param_2 + 0x13);
      uVar9 = *(undefined8 *)((long)param_2 + 0xb);
      uStack_2c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
      uStack_34 = (undefined4)uVar6;
      uStack_2d = (undefined)((ulong)uVar6 >> 0x38);
      uStack_38._3_1_ = (undefined)((ulong)param_1[1] >> 0x18);
      uStack_30 = (undefined3)((ulong)uVar6 >> 0x20);
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      *(undefined8 *)((long)param_1 + 0x13) = uVar11;
      *(undefined8 *)((long)param_1 + 0xb) = uVar9;
      *(ulong *)((long)param_2 + 0x13) = CONCAT71(uStack_2c,uStack_2d);
      *(ulong *)((long)param_2 + 0xb) = CONCAT35(uStack_30,CONCAT41(uStack_34,uStack_38._3_1_));
      param_2[1] = CONCAT44(uStack_34,uVar2);
      *param_2 = uVar8;
      goto LAB_00740540;
    }
LAB_0074053c:
    iVar3 = 1;
  }
  else {
    if (fVar5 <= *(float *)(param_3 + 1)) {
      uVar8 = *param_1;
      uVar6 = *(undefined8 *)((long)param_1 + 0xc);
      uVar7 = *param_2;
      uStack_38 = (undefined4)param_1[1];
      uVar2 = uStack_38;
      uVar11 = *(undefined8 *)((long)param_2 + 0x13);
      uVar9 = *(undefined8 *)((long)param_2 + 0xb);
      uStack_2c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
      uStack_34 = (undefined4)uVar6;
      uStack_2d = (undefined)((ulong)uVar6 >> 0x38);
      uStack_38._3_1_ = (undefined)((ulong)param_1[1] >> 0x18);
      uStack_30 = (undefined3)((ulong)uVar6 >> 0x20);
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      *(undefined8 *)((long)param_1 + 0x13) = uVar11;
      *(undefined8 *)((long)param_1 + 0xb) = uVar9;
      *(ulong *)((long)param_2 + 0x13) = CONCAT71(uStack_2c,uStack_2d);
      *(ulong *)((long)param_2 + 0xb) = CONCAT35(uStack_30,CONCAT41(uStack_34,uStack_38._3_1_));
      param_2[1] = CONCAT44(uStack_34,uVar2);
      *param_2 = uVar8;
      if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1)) goto LAB_0074053c;
      uVar6 = *param_2;
      iVar3 = 2;
      uVar8 = *(undefined8 *)((long)param_2 + 0xc);
      uVar12 = *param_3;
      uStack_38 = (undefined4)param_2[1];
      uVar2 = uStack_38;
      uVar10 = *(undefined8 *)((long)param_3 + 0x13);
      uVar7 = *(undefined8 *)((long)param_3 + 0xb);
      uStack_2c = (undefined7)*(undefined8 *)((long)param_2 + 0x14);
      uStack_34 = (undefined4)uVar8;
      uStack_2d = (undefined)((ulong)uVar8 >> 0x38);
      uVar11 = CONCAT71(uStack_2c,uStack_2d);
      uStack_38._3_1_ = (undefined)((ulong)param_2[1] >> 0x18);
      uStack_30 = (undefined3)((ulong)uVar8 >> 0x20);
      uVar9 = CONCAT35(uStack_30,CONCAT41(uStack_34,uStack_38._3_1_));
      param_2[1] = param_3[1];
      *param_2 = uVar12;
      uVar8 = CONCAT44(uStack_34,uVar2);
      *(undefined8 *)((long)param_2 + 0x13) = uVar10;
      *(undefined8 *)((long)param_2 + 0xb) = uVar7;
    }
    else {
      uVar6 = *param_1;
      iVar3 = 1;
      uVar8 = *(undefined8 *)((long)param_1 + 0xc);
      uVar12 = *param_3;
      uStack_38 = (undefined4)param_1[1];
      uVar2 = uStack_38;
      uVar10 = *(undefined8 *)((long)param_3 + 0x13);
      uVar7 = *(undefined8 *)((long)param_3 + 0xb);
      uStack_2c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
      uStack_34 = (undefined4)uVar8;
      uStack_2d = (undefined)((ulong)uVar8 >> 0x38);
      uVar11 = CONCAT71(uStack_2c,uStack_2d);
      uStack_38._3_1_ = (undefined)((ulong)param_1[1] >> 0x18);
      uStack_30 = (undefined3)((ulong)uVar8 >> 0x20);
      uVar9 = CONCAT35(uStack_30,CONCAT41(uStack_34,uStack_38._3_1_));
      param_1[1] = param_3[1];
      *param_1 = uVar12;
      uVar8 = CONCAT44(uStack_34,uVar2);
      *(undefined8 *)((long)param_1 + 0x13) = uVar10;
      *(undefined8 *)((long)param_1 + 0xb) = uVar7;
    }
    *(undefined8 *)((long)param_3 + 0x13) = uVar11;
    *(undefined8 *)((long)param_3 + 0xb) = uVar9;
    param_3[1] = uVar8;
    *param_3 = uVar6;
  }
LAB_00740540:
  if (*(float *)(param_4 + 1) < *(float *)(param_3 + 1)) {
    uVar8 = *param_3;
    uVar6 = *(undefined8 *)((long)param_3 + 0xc);
    uVar7 = *param_4;
    uStack_38 = (undefined4)param_3[1];
    uVar2 = uStack_38;
    uVar11 = *(undefined8 *)((long)param_4 + 0x13);
    uVar9 = *(undefined8 *)((long)param_4 + 0xb);
    uStack_2c = (undefined7)*(undefined8 *)((long)param_3 + 0x14);
    uStack_34 = (undefined4)uVar6;
    uStack_2d = (undefined)((ulong)uVar6 >> 0x38);
    uStack_38._3_1_ = (undefined)((ulong)param_3[1] >> 0x18);
    uStack_30 = (undefined3)((ulong)uVar6 >> 0x20);
    param_3[1] = param_4[1];
    *param_3 = uVar7;
    *(undefined8 *)((long)param_3 + 0x13) = uVar11;
    *(undefined8 *)((long)param_3 + 0xb) = uVar9;
    *(ulong *)((long)param_4 + 0x13) = CONCAT71(uStack_2c,uStack_2d);
    *(ulong *)((long)param_4 + 0xb) = CONCAT35(uStack_30,CONCAT41(uStack_34,uStack_38._3_1_));
    param_4[1] = CONCAT44(uStack_34,uVar2);
    *param_4 = uVar8;
    if (*(float *)(param_2 + 1) <= *(float *)(param_3 + 1)) {
      iVar3 = iVar3 + 1;
    }
    else {
      uVar8 = *param_2;
      uVar6 = *(undefined8 *)((long)param_2 + 0xc);
      uVar7 = *param_3;
      uStack_38 = (undefined4)param_2[1];
      uVar2 = uStack_38;
      uVar11 = *(undefined8 *)((long)param_3 + 0x13);
      uVar9 = *(undefined8 *)((long)param_3 + 0xb);
      uStack_2c = (undefined7)*(undefined8 *)((long)param_2 + 0x14);
      uStack_34 = (undefined4)uVar6;
      uStack_2d = (undefined)((ulong)uVar6 >> 0x38);
      uStack_38._3_1_ = (undefined)((ulong)param_2[1] >> 0x18);
      uStack_30 = (undefined3)((ulong)uVar6 >> 0x20);
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      *(undefined8 *)((long)param_2 + 0x13) = uVar11;
      *(undefined8 *)((long)param_2 + 0xb) = uVar9;
      *(ulong *)((long)param_3 + 0x13) = CONCAT71(uStack_2c,uStack_2d);
      *(ulong *)((long)param_3 + 0xb) = CONCAT35(uStack_30,CONCAT41(uStack_34,uStack_38._3_1_));
      param_3[1] = CONCAT44(uStack_34,uVar2);
      *param_3 = uVar8;
      if (*(float *)(param_1 + 1) <= *(float *)(param_2 + 1)) {
        iVar3 = iVar3 + 2;
      }
      else {
        uVar8 = *param_1;
        iVar3 = iVar3 + 3;
        uVar6 = *(undefined8 *)((long)param_1 + 0xc);
        uVar7 = *param_2;
        uStack_38 = (undefined4)param_1[1];
        uVar2 = uStack_38;
        uVar11 = *(undefined8 *)((long)param_2 + 0x13);
        uVar9 = *(undefined8 *)((long)param_2 + 0xb);
        uStack_2c = (undefined7)*(undefined8 *)((long)param_1 + 0x14);
        uStack_34 = (undefined4)uVar6;
        uStack_2d = (undefined)((ulong)uVar6 >> 0x38);
        uStack_38._3_1_ = (undefined)((ulong)param_1[1] >> 0x18);
        uStack_30 = (undefined3)((ulong)uVar6 >> 0x20);
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        *(undefined8 *)((long)param_1 + 0x13) = uVar11;
        *(undefined8 *)((long)param_1 + 0xb) = uVar9;
        *(ulong *)((long)param_2 + 0x13) = CONCAT71(uStack_2c,uStack_2d);
        *(ulong *)((long)param_2 + 0xb) = CONCAT35(uStack_30,CONCAT41(uStack_34,uStack_38._3_1_));
        param_2[1] = CONCAT44(uStack_34,uVar2);
        *param_2 = uVar8;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


