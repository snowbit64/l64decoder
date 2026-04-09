// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_hIST
// Entry Point: 00db0548
// Size: 48 bytes
// Signature: undefined png_get_hIST(void)


undefined8 png_get_hIST(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar1 = 0, param_3 != (undefined8 *)0x0)) &&
     ((*(uint *)(param_2 + 8) >> 6 & 1) != 0)) {
    uVar1 = 0x40;
    *param_3 = *(undefined8 *)(param_2 + 0x100);
  }
  return uVar1;
}


