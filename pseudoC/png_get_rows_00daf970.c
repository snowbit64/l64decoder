// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_rows
// Entry Point: 00daf970
// Size: 24 bytes
// Signature: undefined png_get_rows(void)


undefined8 png_get_rows(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x160);
  }
  return uVar1;
}


