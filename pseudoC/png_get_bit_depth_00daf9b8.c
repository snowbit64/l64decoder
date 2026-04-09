// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_bit_depth
// Entry Point: 00daf9b8
// Size: 24 bytes
// Signature: undefined png_get_bit_depth(void)


undefined png_get_bit_depth(long param_1,long param_2)

{
  undefined uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(undefined *)(param_2 + 0x24);
  }
  return uVar1;
}


