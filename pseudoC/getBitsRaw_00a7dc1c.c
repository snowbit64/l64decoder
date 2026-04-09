// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBitsRaw
// Entry Point: 00a7dc1c
// Size: 44 bytes
// Signature: undefined __cdecl getBitsRaw(ulonglong * param_1, uint * param_2, uint param_3)


/* BC6BC7Util::getBitsRaw(unsigned long long&, unsigned int&, unsigned int) */

uint BC6BC7Util::getBitsRaw(ulonglong *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  *param_1 = uVar2 >> ((ulong)param_3 & 0x3f);
  *param_2 = uVar1 + param_3;
  return (uint)uVar2 & (-1 << (ulong)(param_3 & 0x1f) ^ 0xffffffffU);
}


