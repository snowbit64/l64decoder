// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_compression_type
// Entry Point: 00dafa18
// Size: 24 bytes
// Signature: undefined png_get_compression_type(void)


undefined png_get_compression_type(long param_1,long param_2)

{
  undefined uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(undefined *)(param_2 + 0x26);
  }
  return uVar1;
}


