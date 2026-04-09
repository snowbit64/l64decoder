// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBitsRaw
// Entry Point: 00a7dbf4
// Size: 40 bytes
// Signature: undefined __cdecl getBitsRaw(uint * param_1, uint * param_2, uint param_3)


/* BC6BC7Util::getBitsRaw(unsigned int&, unsigned int&, unsigned int) */

uint BC6BC7Util::getBitsRaw(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 >> (ulong)(param_3 & 0x1f);
  *param_2 = *param_2 + param_3;
  return uVar1 & (-1 << (ulong)(param_3 & 0x1f) ^ 0xffffffffU);
}


