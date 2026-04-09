// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Multiply4
// Entry Point: 00cee6ac
// Size: 304 bytes
// Signature: undefined __cdecl Baseline_Multiply4(uint * param_1, uint * param_2, uint * param_3)


/* CryptoPP::Baseline_Multiply4(unsigned int*, unsigned int const*, unsigned int const*) */

void CryptoPP::Baseline_Multiply4(uint *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = *param_2;
  uVar7 = *param_3;
  *param_1 = (uint)((ulong)uVar7 * (ulong)uVar6);
  uVar3 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar7 * (ulong)uVar6 >> 0x20);
  uVar1 = (ulong)*param_3 * (ulong)param_2[1] + (uVar3 & 0xffffffff);
  param_1[1] = (uint)uVar1;
  uVar4 = (uVar1 >> 0x20) + (uVar3 >> 0x20);
  uVar1 = (ulong)param_3[2] * (ulong)*param_2 + (uVar4 & 0xffffffff);
  uVar3 = (ulong)param_3[1] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)*param_3 * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar5 = (uVar1 >> 0x20) + (uVar4 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20);
  param_1[2] = (uint)uVar2;
  uVar1 = (ulong)param_3[3] * (ulong)*param_2 + (uVar5 & 0xffffffff);
  uVar3 = (ulong)param_3[2] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[1] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)*param_3 * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20);
  param_1[3] = (uint)uVar4;
  uVar1 = (ulong)param_3[3] * (ulong)param_2[1] + (uVar5 & 0xffffffff);
  uVar3 = (ulong)param_3[2] * (ulong)param_2[2] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[1] * (ulong)param_2[3] + (uVar3 & 0xffffffff);
  uVar4 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20);
  param_1[4] = (uint)uVar2;
  uVar1 = (ulong)param_3[3] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar3 = (ulong)param_3[2] * (ulong)param_2[3] + (uVar1 & 0xffffffff);
  param_1[5] = (uint)uVar3;
  *(ulong *)(param_1 + 6) =
       (ulong)param_3[3] * (ulong)param_2[3] + (uVar4 >> 0x20) + (uVar1 >> 0x20) + (uVar3 >> 0x20);
  return;
}


