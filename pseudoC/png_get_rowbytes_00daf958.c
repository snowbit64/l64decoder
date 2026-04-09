// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_rowbytes
// Entry Point: 00daf958
// Size: 24 bytes
// Signature: undefined png_get_rowbytes(void)


undefined8 png_get_rowbytes(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
  }
  return uVar1;
}


