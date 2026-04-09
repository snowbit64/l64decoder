// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3901c
// Entry Point: 00d3901c
// Size: 96 bytes
// Signature: undefined FUN_00d3901c(void)


undefined8 FUN_00d3901c(code **param_1,int param_2)

{
  if (param_2 != 0xf) {
    if (param_2 != 0x19) {
      if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
        return 0x3b;
      }
      *param_1 = FUN_00d383e8;
      return 0xffffffff;
    }
    *param_1 = FUN_00d38e90;
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  }
  return 0;
}


