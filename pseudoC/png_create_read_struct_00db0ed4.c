// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_create_read_struct
// Entry Point: 00db0ed4
// Size: 96 bytes
// Signature: undefined png_create_read_struct(void)


long png_create_read_struct(void)

{
  long lVar1;
  
  lVar1 = png_create_png_struct();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x164) = 0x8000;
    *(undefined4 *)(lVar1 + 0x4a8) = 0x2000;
    *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) | 0x300000;
    png_set_read_fn(lVar1,0,0);
  }
  return lVar1;
}


