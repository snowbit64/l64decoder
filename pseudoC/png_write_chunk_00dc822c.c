// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_chunk
// Entry Point: 00dc822c
// Size: 12 bytes
// Signature: undefined png_write_chunk(void)


void png_write_chunk(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  FUN_00dc8238(param_1,uVar1 >> 0x10 | uVar1 << 0x10);
  return;
}


