// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_tIME
// Entry Point: 00db0934
// Size: 48 bytes
// Signature: undefined png_get_tIME(void)


undefined8 png_get_tIME(long param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar1 = 0, param_3 != (long *)0x0)) &&
     ((*(uint *)(param_2 + 8) >> 9 & 1) != 0)) {
    uVar1 = 0x200;
    *param_3 = param_2 + 0xa8;
  }
  return uVar1;
}


