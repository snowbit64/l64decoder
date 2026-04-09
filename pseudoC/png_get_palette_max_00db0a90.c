// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_palette_max
// Entry Point: 00db0a90
// Size: 24 bytes
// Signature: undefined png_get_palette_max(void)


undefined4 png_get_palette_max(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x294);
  }
  return uVar1;
}


