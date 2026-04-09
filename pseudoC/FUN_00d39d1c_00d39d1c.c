// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39d1c
// Entry Point: 00d39d1c
// Size: 176 bytes
// Signature: undefined FUN_00d39d1c(void)


undefined8 FUN_00d39d1c(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = 0x27;
  switch(param_2) {
  case 0xf:
    goto switchD_00d39d40_caseD_f;
  default:
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
    uVar1 = 0xffffffff;
    pcVar2 = FUN_00d383e8;
    break;
  case 0x12:
  case 0x29:
    uVar1 = 0x33;
    pcVar2 = FUN_00d39dcc;
    break;
  case 0x17:
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    return 0x2c;
  case 0x1e:
    uVar1 = 0x35;
    pcVar2 = FUN_00d39dcc;
    break;
  case 0x1f:
    uVar1 = 0x34;
    pcVar2 = FUN_00d39dcc;
    break;
  case 0x20:
    uVar1 = 0x36;
    pcVar2 = FUN_00d39dcc;
  }
  *param_1 = pcVar2;
switchD_00d39d40_caseD_f:
  return uVar1;
}


