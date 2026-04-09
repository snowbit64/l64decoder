// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Multiply16
// Entry Point: 00cef768
// Size: 4400 bytes
// Signature: undefined __cdecl Baseline_Multiply16(uint * param_1, uint * param_2, uint * param_3)


/* CryptoPP::Baseline_Multiply16(unsigned int*, unsigned int const*, unsigned int const*) */

void CryptoPP::Baseline_Multiply16(uint *param_1,uint *param_2,uint *param_3)

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
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar18 = *param_2;
  uVar19 = *param_3;
  *param_1 = (uint)((ulong)uVar19 * (ulong)uVar18);
  uVar3 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar19 * (ulong)uVar18 >> 0x20);
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
  uVar10 = (uVar1 >> 0x20) + (uVar9 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
           (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20);
  param_1[7] = (uint)uVar8;
  uVar1 = (ulong)param_3[8] * (ulong)*param_2 + (uVar10 & 0xffffffff);
  uVar3 = (ulong)param_3[7] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[6] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[5] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[4] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[3] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[2] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[1] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)*param_3 * (ulong)param_2[8] + (uVar8 & 0xffffffff);
  uVar11 = (uVar1 >> 0x20) + (uVar10 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
  ;
  param_1[8] = (uint)uVar9;
  uVar1 = (ulong)param_3[9] * (ulong)*param_2 + (uVar11 & 0xffffffff);
  uVar3 = (ulong)param_3[8] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[7] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[6] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[5] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[4] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[3] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[2] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[1] * (ulong)param_2[8] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)*param_3 * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar12 = (uVar1 >> 0x20) + (uVar11 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20);
  param_1[9] = (uint)uVar10;
  uVar1 = (ulong)param_3[10] * (ulong)*param_2 + (uVar12 & 0xffffffff);
  uVar3 = (ulong)param_3[9] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[8] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[7] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[6] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[5] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[4] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[3] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[2] * (ulong)param_2[8] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[1] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)*param_3 * (ulong)param_2[10] + (uVar10 & 0xffffffff);
  uVar13 = (uVar1 >> 0x20) + (uVar12 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20);
  param_1[10] = (uint)uVar11;
  uVar1 = (ulong)param_3[0xb] * (ulong)*param_2 + (uVar13 & 0xffffffff);
  uVar3 = (ulong)param_3[10] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[9] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[8] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[7] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[6] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[5] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[4] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[3] * (ulong)param_2[8] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[2] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[1] * (ulong)param_2[10] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)*param_3 * (ulong)param_2[0xb] + (uVar11 & 0xffffffff);
  uVar14 = (uVar1 >> 0x20) + (uVar13 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20);
  param_1[0xb] = (uint)uVar12;
  uVar1 = (ulong)param_3[0xc] * (ulong)*param_2 + (uVar14 & 0xffffffff);
  uVar3 = (ulong)param_3[0xb] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[10] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[9] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[8] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[7] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[6] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[5] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[4] * (ulong)param_2[8] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[3] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[2] * (ulong)param_2[10] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[1] * (ulong)param_2[0xb] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)*param_3 * (ulong)param_2[0xc] + (uVar12 & 0xffffffff);
  uVar15 = (uVar1 >> 0x20) + (uVar14 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20);
  param_1[0xc] = (uint)uVar13;
  uVar1 = (ulong)param_3[0xd] * (ulong)*param_2 + (uVar15 & 0xffffffff);
  uVar3 = (ulong)param_3[0xc] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xb] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[10] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[9] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[8] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[7] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[6] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[5] * (ulong)param_2[8] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[4] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[3] * (ulong)param_2[10] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[2] * (ulong)param_2[0xb] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[1] * (ulong)param_2[0xc] + (uVar12 & 0xffffffff);
  uVar14 = (ulong)*param_3 * (ulong)param_2[0xd] + (uVar13 & 0xffffffff);
  param_1[0xd] = (uint)uVar14;
  uVar16 = (uVar1 >> 0x20) + (uVar15 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
           (uVar14 >> 0x20);
  uVar1 = (ulong)param_3[0xe] * (ulong)*param_2 + (uVar16 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xc] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xb] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[10] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[9] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[8] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[7] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[6] * (ulong)param_2[8] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[5] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[4] * (ulong)param_2[10] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[3] * (ulong)param_2[0xb] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[2] * (ulong)param_2[0xc] + (uVar12 & 0xffffffff);
  uVar14 = (ulong)param_3[1] * (ulong)param_2[0xd] + (uVar13 & 0xffffffff);
  uVar15 = (ulong)*param_3 * (ulong)param_2[0xe] + (uVar14 & 0xffffffff);
  uVar17 = (uVar1 >> 0x20) + (uVar16 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
           (uVar14 >> 0x20) + (uVar15 >> 0x20);
  param_1[0xe] = (uint)uVar15;
  uVar1 = (ulong)param_3[0xf] * (ulong)*param_2 + (uVar17 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[4] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[6] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[8] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[10] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[4] * (ulong)param_2[0xb] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[3] * (ulong)param_2[0xc] + (uVar12 & 0xffffffff);
  uVar14 = (ulong)param_3[2] * (ulong)param_2[0xd] + (uVar13 & 0xffffffff);
  uVar15 = (ulong)param_3[1] * (ulong)param_2[0xe] + (uVar14 & 0xffffffff);
  uVar16 = (ulong)*param_3 * (ulong)param_2[0xf] + (uVar15 & 0xffffffff);
  uVar17 = (uVar1 >> 0x20) + (uVar17 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
           (uVar14 >> 0x20) + (uVar15 >> 0x20) + (uVar16 >> 0x20);
  param_1[0xf] = (uint)uVar16;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[1] + (uVar17 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[2] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[3] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[4] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[5] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[6] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[7] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[8] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[9] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[10] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[0xb] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[4] * (ulong)param_2[0xc] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[3] * (ulong)param_2[0xd] + (uVar12 & 0xffffffff);
  uVar14 = (ulong)param_3[2] * (ulong)param_2[0xe] + (uVar13 & 0xffffffff);
  uVar15 = (ulong)param_3[1] * (ulong)param_2[0xf] + (uVar14 & 0xffffffff);
  uVar16 = (uVar1 >> 0x20) + (uVar17 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
           (uVar14 >> 0x20) + (uVar15 >> 0x20);
  param_1[0x10] = (uint)uVar15;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[2] + (uVar16 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[3] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[4] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[5] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[6] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[8] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[9] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[10] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xb] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[0xc] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[4] * (ulong)param_2[0xd] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[3] * (ulong)param_2[0xe] + (uVar12 & 0xffffffff);
  uVar14 = (ulong)param_3[2] * (ulong)param_2[0xf] + (uVar13 & 0xffffffff);
  uVar15 = (uVar1 >> 0x20) + (uVar16 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
           (uVar14 >> 0x20);
  param_1[0x11] = (uint)uVar14;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[3] + (uVar15 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[4] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[5] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[6] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[7] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[8] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[9] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[10] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xb] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xc] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[0xd] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[4] * (ulong)param_2[0xe] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[3] * (ulong)param_2[0xf] + (uVar12 & 0xffffffff);
  uVar14 = (uVar1 >> 0x20) + (uVar15 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20);
  param_1[0x12] = (uint)uVar13;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[4] + (uVar14 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[5] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[6] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[7] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[8] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[9] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[10] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xb] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xc] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xd] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[0xe] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[4] * (ulong)param_2[0xf] + (uVar11 & 0xffffffff);
  uVar13 = (uVar1 >> 0x20) + (uVar14 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20);
  param_1[0x13] = (uint)uVar12;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[5] + (uVar13 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[6] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[7] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[8] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[9] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[10] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xb] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xc] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xd] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xe] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[0xf] + (uVar10 & 0xffffffff);
  uVar12 = (uVar1 >> 0x20) + (uVar13 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20);
  param_1[0x14] = (uint)uVar11;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[6] + (uVar12 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[7] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[8] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[9] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[10] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xb] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xc] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xd] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xe] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xf] + (uVar9 & 0xffffffff);
  uVar11 = (uVar1 >> 0x20) + (uVar12 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20);
  param_1[0x15] = (uint)uVar10;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[7] + (uVar11 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[8] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[9] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[10] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xb] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xc] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xd] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xe] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xf] + (uVar8 & 0xffffffff);
  uVar10 = (uVar1 >> 0x20) + (uVar11 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
  ;
  param_1[0x16] = (uint)uVar9;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[8] + (uVar10 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[9] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[10] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xb] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xc] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xd] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xe] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xf] + (uVar7 & 0xffffffff);
  uVar9 = (uVar1 >> 0x20) + (uVar10 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20);
  param_1[0x17] = (uint)uVar8;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[10] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[0xb] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xc] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xd] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xe] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xf] + (uVar6 & 0xffffffff);
  uVar8 = (uVar1 >> 0x20) + (uVar9 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20);
  param_1[0x18] = (uint)uVar7;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[10] + (uVar8 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[0xb] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[0xc] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xd] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xe] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xf] + (uVar5 & 0xffffffff);
  uVar7 = (uVar1 >> 0x20) + (uVar8 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20);
  param_1[0x19] = (uint)uVar6;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[0xb] + (uVar7 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[0xc] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[0xd] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xe] + (uVar2 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xf] + (uVar4 & 0xffffffff);
  uVar6 = (uVar1 >> 0x20) + (uVar7 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20);
  param_1[0x1a] = (uint)uVar5;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[0xc] + (uVar6 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[0xd] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[0xe] + (uVar3 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xf] + (uVar2 & 0xffffffff);
  uVar5 = (uVar1 >> 0x20) + (uVar6 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20) + (uVar4 >> 0x20);
  param_1[0x1b] = (uint)uVar4;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[0xd] + (uVar5 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[0xe] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xd] * (ulong)param_2[0xf] + (uVar3 & 0xffffffff);
  uVar4 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar3 >> 0x20) + (uVar2 >> 0x20);
  param_1[0x1c] = (uint)uVar2;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[0xe] + (uVar4 & 0xffffffff);
  uVar3 = (ulong)param_3[0xe] * (ulong)param_2[0xf] + (uVar1 & 0xffffffff);
  param_1[0x1d] = (uint)uVar3;
  *(ulong *)(param_1 + 0x1e) =
       (ulong)param_3[0xf] * (ulong)param_2[0xf] + (uVar4 >> 0x20) + (uVar1 >> 0x20) +
       (uVar3 >> 0x20);
  return;
}


