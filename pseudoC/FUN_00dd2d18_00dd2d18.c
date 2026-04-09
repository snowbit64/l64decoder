// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dd2d18
// Entry Point: 00dd2d18
// Size: 24 bytes
// Signature: undefined FUN_00dd2d18(void)


uint FUN_00dd2d18(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


