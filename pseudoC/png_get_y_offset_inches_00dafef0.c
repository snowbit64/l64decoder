// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_y_offset_inches
// Entry Point: 00dafef0
// Size: 64 bytes
// Signature: undefined png_get_y_offset_inches(void)


float png_get_y_offset_inches(long param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) &&
     (*(char *)(param_2 + 0xdc) == '\x01')) {
    fVar1 = (float)(long)*(int *)(param_2 + 0xd8) * 3.937e-05;
  }
  return fVar1;
}


