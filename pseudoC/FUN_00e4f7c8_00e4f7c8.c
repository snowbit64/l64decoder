// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f7c8
// Entry Point: 00e4f7c8
// Size: 24 bytes
// Signature: undefined FUN_00e4f7c8(void)


uint FUN_00e4f7c8(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


