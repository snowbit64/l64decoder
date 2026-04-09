// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_reset_crc
// Entry Point: 00da8a24
// Size: 48 bytes
// Signature: undefined png_reset_crc(void)


void png_reset_crc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = crc32(0,0,0);
  *(undefined4 *)(param_1 + 0x284) = uVar1;
  return;
}


