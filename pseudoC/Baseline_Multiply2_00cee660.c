// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Multiply2
// Entry Point: 00cee660
// Size: 76 bytes
// Signature: undefined __cdecl Baseline_Multiply2(uint * param_1, uint * param_2, uint * param_3)


/* CryptoPP::Baseline_Multiply2(unsigned int*, unsigned int const*, unsigned int const*) */

void CryptoPP::Baseline_Multiply2(uint *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar4 = *param_3;
  *param_1 = (uint)((ulong)uVar4 * (ulong)uVar3);
  uVar2 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar4 * (ulong)uVar3 >> 0x20);
  uVar1 = (ulong)*param_3 * (ulong)param_2[1] + (uVar2 & 0xffffffff);
  param_1[1] = (uint)uVar1;
  *(ulong *)(param_1 + 2) =
       (uVar1 >> 0x20) + (uVar2 >> 0x20) + (ulong)param_3[1] * (ulong)param_2[1];
  return;
}


