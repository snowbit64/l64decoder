// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_consume_input
// Entry Point: 00d6e0d0
// Size: 688 bytes
// Signature: undefined jpeg_consume_input(void)


undefined8 jpeg_consume_input(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code **ppcVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  
  uVar5 = 1;
  switch(*(undefined4 *)((long)param_1 + 0x24)) {
  case 200:
    break;
  case 0xc9:
    goto switchD_00d6e108_caseD_c9;
  case 0xca:
    goto switchD_00d6e108_caseD_ca;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
                    /* WARNING: Could not recover jumptable at 0x00d6e120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)param_1[0x48])(param_1);
    return uVar5;
  default:
    lVar9 = *param_1;
    *(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)((long)param_1 + 0x24);
    ppcVar7 = (code **)*param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x15;
    (**ppcVar7)(param_1);
    uVar5 = 0;
    goto switchD_00d6e108_caseD_ca;
  }
  (**(code **)(param_1[0x48] + 8))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  *(undefined4 *)((long)param_1 + 0x24) = 0xc9;
switchD_00d6e108_caseD_c9:
  uVar5 = (**(code **)param_1[0x48])(param_1);
  if ((int)uVar5 != 1) {
switchD_00d6e108_caseD_ca:
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 7);
  if (iVar1 == 1) {
    uVar6 = 1;
    uVar8 = 1;
    goto LAB_00d6e2b4;
  }
  if (iVar1 == 4) {
    if ((*(char *)(param_1 + 0x2d) == '\0') ||
       (bVar4 = *(byte *)((long)param_1 + 0x169), bVar4 == 0)) {
      uVar6 = 4;
      uVar8 = 4;
    }
    else {
      if (bVar4 != 2) {
        lVar10 = *param_1;
        *(uint *)(lVar10 + 0x2c) = (uint)bVar4;
        lVar9 = *param_1;
        *(undefined4 *)(lVar10 + 0x28) = 0x74;
        (**(code **)(lVar9 + 8))(param_1,0xffffffff);
      }
      uVar8 = 4;
      uVar6 = 5;
    }
    goto LAB_00d6e2b4;
  }
  if (iVar1 != 3) {
    uVar6 = 0;
    uVar8 = 0;
    goto LAB_00d6e2b4;
  }
  piVar11 = (int *)param_1[0x24];
  iVar1 = *piVar11;
  iVar2 = piVar11[0x18];
  iVar3 = piVar11[0x30];
  if (((iVar1 != 1) || (iVar2 != 2)) || (iVar3 != 3)) {
    if (((iVar1 == 1) && (iVar2 == 0x22)) && (iVar3 == 0x23)) {
      uVar8 = 2;
      uVar6 = 7;
      goto LAB_00d6e2b4;
    }
    if (((iVar1 == 0x52) && (iVar2 == 0x47)) && (iVar3 == 0x42)) {
LAB_00d6e288:
      uVar6 = 2;
      uVar8 = 2;
      goto LAB_00d6e2b4;
    }
    if (((iVar1 == 0x72) && (iVar2 == 0x67)) && (iVar3 == 0x62)) {
      uVar8 = 2;
      uVar6 = 6;
      goto LAB_00d6e2b4;
    }
    if (*(char *)(param_1 + 0x2c) == '\0') {
      if (*(char *)(param_1 + 0x2d) == '\0') {
        lVar9 = *param_1;
        *(int *)(lVar9 + 0x30) = iVar2;
        *(int *)(lVar9 + 0x34) = iVar3;
        *(undefined4 *)(lVar9 + 0x28) = 0x71;
        *(int *)(lVar9 + 0x2c) = iVar1;
        (**(code **)(lVar9 + 8))(param_1,1);
      }
      else {
        bVar4 = *(byte *)((long)param_1 + 0x169);
        if (bVar4 == 0) goto LAB_00d6e288;
        if (bVar4 != 1) {
          lVar10 = *param_1;
          *(uint *)(lVar10 + 0x2c) = (uint)bVar4;
          lVar9 = *param_1;
          *(undefined4 *)(lVar10 + 0x28) = 0x74;
          (**(code **)(lVar9 + 8))(param_1,0xffffffff);
        }
      }
    }
  }
  uVar8 = 2;
  uVar6 = 3;
LAB_00d6e2b4:
  *(undefined4 *)((long)param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 8) = uVar8;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[10] = 0x3ff0000000000000;
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_1 + 0x20c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0x20c);
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  *(undefined4 *)((long)param_1 + 100) = 2;
  *(undefined *)((long)param_1 + 0x62) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x100;
  *(undefined *)(param_1 + 0xd) = 1;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined *)((long)param_1 + 0x72) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0xca;
  return 1;
}


