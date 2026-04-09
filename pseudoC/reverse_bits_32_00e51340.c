// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reverse_bits_32
// Entry Point: 00e51340
// Size: 8 bytes
// Signature: undefined __cdecl reverse_bits_32(uint param_1)


/* reverse_bits_32(unsigned int) */

uint reverse_bits_32(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xaaaaaaaa) >> 1 | (param_1 & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


