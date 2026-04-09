// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e1db58
// Entry Point: 00e1db58
// Size: 468 bytes
// Signature: undefined FUN_00e1db58(void)


ulong FUN_00e1db58(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_64;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x10) != 1) {
    uVar5 = 0xffffff7d;
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_00e1dd18;
    goto LAB_00e1dcdc;
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
  if (*(int *)(param_1 + 1) == 0) {
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x10) = 3;
    if (*(long *)(lVar1 + 0x28) == local_58) goto LAB_00e1dcdc;
    goto LAB_00e1dd18;
  }
  uVar8 = param_1[0x44];
  uVar7 = *(undefined8 *)param_1[10];
  local_60 = 0xffffffffffffffff;
  local_64 = (int)uVar8;
  lVar3 = FUN_00e21a78(param_1,param_1[0xd]);
  if (((code *)param_1[0x73] == (code *)0x0) || (param_1[0x75] == 0)) {
    uVar5 = 0xffffff7d;
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0xffffffffffffffff;
LAB_00e1dcc0:
    *param_1 = 0;
    ov_clear(param_1);
  }
  else {
    (*(code *)param_1[0x73])(*param_1,0,2);
    lVar4 = (*(code *)param_1[0x75])(*param_1);
    param_1[2] = lVar4;
    param_1[3] = lVar4;
    if (lVar4 == -1) {
      uVar5 = 0xffffff7d;
      goto LAB_00e1dcc0;
    }
    uVar5 = FUN_00e21ba4(param_1,lVar4,param_1[0xb] + 0x10,*(undefined4 *)(param_1[0xb] + 8),
                         &local_64,&local_60);
    if (-1 < (long)uVar5) {
      iVar2 = FUN_00e21e64(param_1,0,uVar7,uVar5,local_60,local_64,param_1[0xb] + 0x10,
                           *(undefined4 *)(param_1[0xb] + 8),0);
      if (iVar2 < 0) {
        uVar5 = 0xffffff80;
        goto LAB_00e1dcc0;
      }
      *(undefined8 *)param_1[9] = 0;
      *(long *)param_1[0xb] = (long)(int)uVar8;
      *(undefined8 *)param_1[10] = uVar7;
      plVar6 = (long *)param_1[0xc];
      *plVar6 = lVar3;
      plVar6[1] = plVar6[1] - lVar3 & (plVar6[1] - lVar3 >> 0x3f ^ 0xffffffffffffffffU);
      uVar5 = ov_raw_seek(param_1,uVar7);
      uVar5 = uVar5 & 0xffffffff;
    }
    if ((int)uVar5 != 0) goto LAB_00e1dcc0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_00e1dd18:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00e1dcdc:
  return uVar5 & 0xffffffff;
}


