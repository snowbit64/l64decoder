// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d38db0
// Entry Point: 00d38db0
// Size: 116 bytes
// Signature: undefined FUN_00d38db0(void)


undefined4 FUN_00d38db0(code **param_1,int param_2)

{
  code *pcVar1;
  
  if (param_2 == 0x11) {
    pcVar1 = FUN_00d38e90;
    if (*(int *)((long)param_1 + 0x14) != 0) {
      pcVar1 = FUN_00d38538;
    }
    *param_1 = pcVar1;
    return *(undefined4 *)((long)param_1 + 0xc);
  }
  if (param_2 == 0xf) {
    return *(undefined4 *)((long)param_1 + 0xc);
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


