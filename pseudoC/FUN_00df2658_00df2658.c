// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df2658
// Entry Point: 00df2658
// Size: 44 bytes
// Signature: undefined FUN_00df2658(void)


uint FUN_00df2658(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = oc_pack_read(param_1,6);
  return ((int)uVar1 >> 1) - (uVar1 & 1) ^ -(uVar1 & 1);
}


