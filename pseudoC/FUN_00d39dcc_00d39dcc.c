// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39dcc
// Entry Point: 00d39dcc
// Size: 344 bytes
// Signature: undefined FUN_00d39dcc(void)


undefined8 FUN_00d39dcc(code **param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = 0x27;
  switch(param_2) {
  case 0xf:
    goto switchD_00d39df0_caseD_f;
  default:
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
    uVar2 = 0xffffffff;
    pcVar3 = FUN_00d383e8;
    break;
  case 0x15:
    uVar2 = 0x31;
    pcVar3 = FUN_00d39d1c;
    break;
  case 0x18:
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = iVar1 + -1;
    if (iVar1 + -1 != 0) {
      return 0x2d;
    }
    *param_1 = FUN_00d38db0;
    *(undefined4 *)((long)param_1 + 0xc) = 0x27;
    return 0x2d;
  case 0x23:
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = iVar1 + -1;
    if (iVar1 + -1 != 0) {
      return 0x2f;
    }
    *param_1 = FUN_00d38db0;
    *(undefined4 *)((long)param_1 + 0xc) = 0x27;
    return 0x2f;
  case 0x24:
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = iVar1 + -1;
    if (iVar1 + -1 != 0) {
      return 0x2e;
    }
    *param_1 = FUN_00d38db0;
    *(undefined4 *)((long)param_1 + 0xc) = 0x27;
    return 0x2e;
  case 0x25:
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = iVar1 + -1;
    if (iVar1 + -1 != 0) {
      return 0x30;
    }
    *param_1 = FUN_00d38db0;
    *(undefined4 *)((long)param_1 + 0xc) = 0x27;
    return 0x30;
  case 0x26:
    uVar2 = 0x32;
    pcVar3 = FUN_00d39d1c;
  }
  *param_1 = pcVar3;
switchD_00d39df0_caseD_f:
  return uVar2;
}


