// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39c74
// Entry Point: 00d39c74
// Size: 168 bytes
// Signature: undefined FUN_00d39c74(void)


undefined8 FUN_00d39c74(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = 0x27;
  switch(param_2) {
  case 0xf:
    goto switchD_00d39c98_caseD_f;
  default:
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
    uVar1 = 0xffffffff;
    pcVar2 = FUN_00d383e8;
    break;
  case 0x15:
    uVar1 = 0x27;
    pcVar2 = FUN_00d39f24;
    break;
  case 0x18:
    *param_1 = FUN_00d38db0;
    *(undefined4 *)((long)param_1 + 0xc) = 0x27;
    return 0x2d;
  case 0x24:
    *param_1 = FUN_00d38db0;
    *(undefined4 *)((long)param_1 + 0xc) = 0x27;
    return 0x2e;
  }
  *param_1 = pcVar2;
switchD_00d39c98_caseD_f:
  return uVar1;
}


