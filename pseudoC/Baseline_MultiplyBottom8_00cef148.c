// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_MultiplyBottom8
// Entry Point: 00cef148
// Size: 608 bytes
// Signature: undefined __cdecl Baseline_MultiplyBottom8(uint * param_1, uint * param_2, uint * param_3)


/* CryptoPP::Baseline_MultiplyBottom8(unsigned int*, unsigned int const*, unsigned int const*) */

void CryptoPP::Baseline_MultiplyBottom8(uint *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *param_2;
  uVar10 = *param_3;
  *param_1 = (uint)((ulong)uVar10 * (ulong)uVar9);
  uVar4 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar10 * (ulong)uVar9 >> 0x20);
  uVar1 = (ulong)*param_3 * (ulong)param_2[1] + (uVar4 & 0xffffffff);
  param_1[1] = (uint)uVar1;
  uVar5 = (uVar1 >> 0x20) + (uVar4 >> 0x20);
  uVar1 = (ulong)param_3[2] * (ulong)*param_2 + (uVar5 & 0xffffffff);
  uVar4 = (ulong)param_3[1] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)*param_3 * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar6 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20);
  param_1[2] = (uint)uVar2;
  uVar1 = (ulong)param_3[3] * (ulong)*param_2 + (uVar6 & 0xffffffff);
  uVar4 = (ulong)param_3[2] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[1] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)*param_3 * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar7 = (uVar1 >> 0x20) + (uVar6 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20);
  param_1[3] = (uint)uVar5;
  uVar1 = (ulong)param_3[4] * (ulong)*param_2 + (uVar7 & 0xffffffff);
  uVar4 = (ulong)param_3[3] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[2] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[1] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)*param_3 * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar8 = (uVar1 >> 0x20) + (uVar7 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20) +
          (uVar6 >> 0x20);
  param_1[4] = (uint)uVar6;
  uVar1 = (ulong)param_3[5] * (ulong)*param_2 + (uVar8 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[3] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[2] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[1] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)*param_3 * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (uVar1 >> 0x20) + (uVar8 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20) +
          (uVar6 >> 0x20) + (uVar7 >> 0x20);
  param_1[5] = (uint)uVar7;
  uVar1 = (ulong)param_3[6] * (ulong)*param_2 + (uVar8 & 0xffffffff);
  uVar4 = (ulong)param_3[5] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[4] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[3] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[2] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[1] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  lVar3 = (ulong)*param_3 * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  param_1[6] = (uint)lVar3;
  param_1[7] = param_3[7] * *param_2 + param_3[6] * param_2[1] + param_3[5] * param_2[2] +
               param_3[4] * param_2[3] +
               (int)(uVar1 >> 0x20) + (int)(uVar8 >> 0x20) + (int)(uVar4 >> 0x20) +
               (int)(uVar2 >> 0x20) + (int)(uVar5 >> 0x20) + (int)(uVar6 >> 0x20) +
               (int)(uVar7 >> 0x20) + (int)((ulong)lVar3 >> 0x20) + param_3[3] * param_2[4] +
               param_3[2] * param_2[5] + param_3[1] * param_2[6] + *param_3 * param_2[7];
  return;
}


