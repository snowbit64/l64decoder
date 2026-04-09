// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_MultiplyTop2
// Entry Point: 00cef3a8
// Size: 48 bytes
// Signature: undefined __cdecl Baseline_MultiplyTop2(uint * param_1, uint * param_2, uint * param_3, uint param_4)


/* CryptoPP::Baseline_MultiplyTop2(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

void CryptoPP::Baseline_MultiplyTop2(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)*param_3 * (ulong)*param_2 >> 0x20);
  *(ulong *)param_1 =
       (ulong)param_2[1] * (ulong)param_3[1] + (uVar1 >> 0x20) +
       ((ulong)param_2[1] * (ulong)*param_3 + (uVar1 & 0xffffffff) >> 0x20);
  return;
}


