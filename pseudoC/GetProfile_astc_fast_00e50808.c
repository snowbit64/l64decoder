// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetProfile_astc_fast
// Entry Point: 00e50808
// Size: 28 bytes
// Signature: undefined GetProfile_astc_fast(void)


void GetProfile_astc_fast(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = 0x500000003;
  param_1[4] = 2;
  return;
}


