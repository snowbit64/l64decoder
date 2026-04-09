// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_MultiplyBottom4
// Entry Point: 00cef0a0
// Size: 168 bytes
// Signature: undefined __cdecl Baseline_MultiplyBottom4(uint * param_1, uint * param_2, uint * param_3)


/* CryptoPP::Baseline_MultiplyBottom4(unsigned int*, unsigned int const*, unsigned int const*) */

void CryptoPP::Baseline_MultiplyBottom4(uint *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *param_2;
  uVar6 = *param_3;
  *param_1 = (uint)((ulong)uVar6 * (ulong)uVar5);
  uVar3 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar6 * (ulong)uVar5 >> 0x20);
  uVar1 = (ulong)*param_3 * (ulong)param_2[1] + (uVar3 & 0xffffffff);
  param_1[1] = (uint)uVar1;
  uVar4 = (uVar1 >> 0x20) + (uVar3 >> 0x20);
  uVar1 = (ulong)*param_3 * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar3 = (ulong)param_3[1] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  lVar2 = (ulong)param_3[2] * (ulong)*param_2 + (uVar3 & 0xffffffff);
  param_1[2] = (uint)lVar2;
  param_1[3] = param_3[3] * *param_2 + param_3[2] * param_2[1] +
               (int)(uVar1 >> 0x20) + (int)(uVar4 >> 0x20) + (int)(uVar3 >> 0x20) +
               (int)((ulong)lVar2 >> 0x20) + param_3[1] * param_2[2] + *param_3 * param_2[3];
  return;
}


