// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39268
// Entry Point: 00d39268
// Size: 104 bytes
// Signature: undefined FUN_00d39268(void)


undefined8 FUN_00d39268(code **param_1,int param_2)

{
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x12) {
    *(undefined4 *)((long)param_1 + 0xc) = 0xb;
    *param_1 = FUN_00d38db0;
    return 0x10;
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


