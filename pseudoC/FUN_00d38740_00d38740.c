// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d38740
// Entry Point: 00d38740
// Size: 116 bytes
// Signature: undefined FUN_00d38740(void)


undefined8 FUN_00d38740(code **param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_2 - 0xbU >> 1 | (param_2 - 0xbU) * -0x80000000) {
  case 0:
    return 0x37;
  case 1:
    return 0x38;
  case 2:
    goto switchD_00d3876c_caseD_2;
  default:
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
    uVar1 = 0xffffffff;
    break;
  case 9:
    uVar1 = 2;
  }
  *param_1 = FUN_00d383e8;
switchD_00d3876c_caseD_2:
  return uVar1;
}


