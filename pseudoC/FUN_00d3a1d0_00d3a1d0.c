// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3a1d0
// Entry Point: 00d3a1d0
// Size: 156 bytes
// Signature: undefined FUN_00d3a1d0(void)


undefined8 FUN_00d3a1d0(code **param_1,int param_2)

{
  code *pcVar1;
  
  if (param_2 == 0xf) {
    return 0x11;
  }
  if (param_2 == 0x11) {
    pcVar1 = FUN_00d38e90;
    if (*(int *)((long)param_1 + 0x14) != 0) {
      pcVar1 = FUN_00d38538;
    }
    *param_1 = pcVar1;
    return 0x14;
  }
  if (param_2 == 0x1b) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x11;
    *param_1 = FUN_00d38db0;
    return 0x13;
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


