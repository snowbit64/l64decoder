// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Square2
// Entry Point: 00ceec5c
// Size: 56 bytes
// Signature: undefined __cdecl Baseline_Square2(uint * param_1, uint * param_2)


/* CryptoPP::Baseline_Square2(unsigned int*, unsigned int const*) */

void CryptoPP::Baseline_Square2(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*param_2 * (ulong)*param_2;
  *param_1 = (uint)uVar3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (ulong)(uint)((int)((ulong)uVar2 * (ulong)uVar1) << 1) + (uVar3 >> 0x20);
  param_1[1] = (uint)uVar3;
  *(ulong *)(param_1 + 2) =
       (ulong)param_2[1] * (ulong)param_2[1] + ((ulong)uVar2 * (ulong)uVar1 >> 0x1f) +
       (uVar3 >> 0x20);
  return;
}


