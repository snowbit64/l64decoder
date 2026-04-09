// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Multiply8
// Entry Point: 00cee7dc
// Size: 1152 bytes
// Signature: undefined __cdecl Baseline_Multiply8(uint * param_1, uint * param_2, uint * param_3)


/* CryptoPP::Baseline_Multiply8(unsigned int*, unsigned int const*, unsigned int const*) */

void CryptoPP::Baseline_Multiply8(uint *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = *param_2;
  uVar11 = *param_3;
  *param_1 = (uint)((ulong)uVar11 * (ulong)uVar10);
  uVar3 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar11 * (ulong)uVar10 >> 0x20);
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
  uVar6 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20);
  param_1[3] = (uint)uVar4;
  uVar1 = (ulong)param_3[4] * (ulong)*param_2 + (uVar6 & 0xffffffff);
  uVar3 = (ulong)param_3[3] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[2] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[1] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)*param_3 * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar7 = (uVar1 >> 0x20) + (uVar6 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20);
  param_1[4] = (uint)uVar5;
  uVar1 = (ulong)param_3[5] * (ulong)*param_2 + (uVar7 & 0xffffffff);
  uVar3 = (ulong)param_3[4] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[3] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[2] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[1] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)*param_3 * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar8 = (uVar1 >> 0x20) + (uVar7 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20);
  param_1[5] = (uint)uVar6;
  uVar1 = (ulong)param_3[6] * (ulong)*param_2 + (uVar8 & 0xffffffff);
  uVar3 = (ulong)param_3[5] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[4] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[3] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[2] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[1] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)*param_3 * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar9 = (uVar1 >> 0x20) + (uVar8 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20);
  param_1[6] = (uint)uVar7;
  uVar1 = (ulong)param_3[7] * (ulong)*param_2 + (uVar9 & 0xffffffff);
  uVar3 = (ulong)param_3[6] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[5] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[3] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[2] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[1] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)*param_3 * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (uVar1 >> 0x20) + (uVar9 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20);
  param_1[7] = (uint)uVar8;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[1] + (uVar9 & 0xffffffff);
  uVar3 = (ulong)param_3[6] * (ulong)param_2[2] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[5] * (ulong)param_2[3] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[4] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[3] * (ulong)param_2[5] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[2] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[1] * (ulong)param_2[7] + (uVar6 & 0xffffffff);
  uVar8 = (uVar1 >> 0x20) + (uVar9 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20);
  param_1[8] = (uint)uVar7;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[2] + (uVar8 & 0xffffffff);
  uVar3 = (ulong)param_3[6] * (ulong)param_2[3] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[5] * (ulong)param_2[4] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[5] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[3] * (ulong)param_2[6] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[2] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  uVar7 = (uVar1 >> 0x20) + (uVar8 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20);
  param_1[9] = (uint)uVar6;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[3] + (uVar7 & 0xffffffff);
  uVar3 = (ulong)param_3[6] * (ulong)param_2[4] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[5] * (ulong)param_2[5] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[6] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[3] * (ulong)param_2[7] + (uVar4 & 0xffffffff);
  uVar6 = (uVar1 >> 0x20) + (uVar7 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20);
  param_1[10] = (uint)uVar5;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[4] + (uVar6 & 0xffffffff);
  uVar3 = (ulong)param_3[6] * (ulong)param_2[5] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[5] * (ulong)param_2[6] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[7] + (uVar2 & 0xffffffff);
  uVar5 = (uVar1 >> 0x20) + (uVar6 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20);
  param_1[0xb] = (uint)uVar4;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar3 = (ulong)param_3[6] * (ulong)param_2[6] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[5] * (ulong)param_2[7] + (uVar3 & 0xffffffff);
  uVar4 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20);
  param_1[0xc] = (uint)uVar2;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[6] + (uVar4 & 0xffffffff);
  uVar3 = (ulong)param_3[6] * (ulong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[0xd] = (uint)uVar3;
  *(ulong *)(param_1 + 0xe) =
       (ulong)param_3[7] * (ulong)param_2[7] + (uVar4 >> 0x20) + (uVar1 >> 0x20) + (uVar3 >> 0x20);
  return;
}


