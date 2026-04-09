// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dd2d30
// Entry Point: 00dd2d30
// Size: 24 bytes
// Signature: undefined FUN_00dd2d30(void)


uint FUN_00dd2d30(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ushort *)(param_2 + 2) < *(ushort *)(param_1 + 2));
  if (*(ushort *)(param_1 + 2) < *(ushort *)(param_2 + 2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


