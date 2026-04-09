// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d392d0
// Entry Point: 00d392d0
// Size: 140 bytes
// Signature: undefined FUN_00d392d0(void)


undefined8 FUN_00d392d0(code **param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = 0x21;
  uVar1 = 0x16;
  pcVar3 = FUN_00d3935c;
  switch(param_2) {
  case 0xf:
    goto switchD_00d39300_caseD_f;
  default:
    uVar1 = 0xffffffff;
    pcVar3 = FUN_00d383e8;
    if ((param_2 == 0x1c) && (pcVar3 = FUN_00d383e8, *(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
    break;
  case 0x11:
    pcVar3 = FUN_00d38e90;
    if (*(int *)((long)param_1 + 0x14) != 0) {
      pcVar3 = FUN_00d38538;
    }
    uVar1 = 0x21;
    break;
  case 0x12:
  case 0x29:
    break;
  }
  uVar2 = uVar1;
  *param_1 = pcVar3;
switchD_00d39300_caseD_f:
  return uVar2;
}


