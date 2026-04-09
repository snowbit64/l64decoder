// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39f80
// Entry Point: 00d39f80
// Size: 136 bytes
// Signature: undefined FUN_00d39f80(void)


undefined8 FUN_00d39f80(code **param_1,int param_2)

{
  if (param_2 == 0xf) {
    return 0x27;
  }
  if (param_2 == 0x15) {
    *param_1 = FUN_00d39f24;
    return 0x27;
  }
  if (param_2 == 0x24) {
    *(undefined4 *)((long)param_1 + 0xc) = 0x27;
    *param_1 = FUN_00d38db0;
    return 0x2e;
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


