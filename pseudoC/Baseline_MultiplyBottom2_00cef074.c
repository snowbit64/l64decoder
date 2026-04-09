// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_MultiplyBottom2
// Entry Point: 00cef074
// Size: 44 bytes
// Signature: undefined __cdecl Baseline_MultiplyBottom2(uint * param_1, uint * param_2, uint * param_3)


/* CryptoPP::Baseline_MultiplyBottom2(unsigned int*, unsigned int const*, unsigned int const*) */

void CryptoPP::Baseline_MultiplyBottom2(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulong)uVar2 * (ulong)uVar1);
  param_1[1] = (int)((ulong)uVar2 * (ulong)uVar1 >> 0x20) + param_3[1] * *param_2 +
               *param_3 * param_2[1];
  return;
}


