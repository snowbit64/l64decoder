// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_MultiplyBottom16
// Entry Point: 00cf1300
// Size: 2280 bytes
// Signature: undefined __cdecl Baseline_MultiplyBottom16(uint * param_1, uint * param_2, uint * param_3)


/* CryptoPP::Baseline_MultiplyBottom16(unsigned int*, unsigned int const*, unsigned int const*) */

void CryptoPP::Baseline_MultiplyBottom16(uint *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
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
  uint uVar17;
  uint uVar18;
  
  uVar17 = *param_2;
  uVar18 = *param_3;
  *param_1 = (uint)((ulong)uVar18 * (ulong)uVar17);
  uVar4 = (ulong)param_3[1] * (ulong)*param_2 + ((ulong)uVar18 * (ulong)uVar17 >> 0x20);
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
  uVar9 = (uVar1 >> 0x20) + (uVar8 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20) +
          (uVar6 >> 0x20) + (uVar7 >> 0x20);
  param_1[5] = (uint)uVar7;
  uVar1 = (ulong)param_3[6] * (ulong)*param_2 + (uVar9 & 0xffffffff);
  uVar4 = (ulong)param_3[5] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[4] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[3] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[2] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[1] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)*param_3 * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar10 = (uVar1 >> 0x20) + (uVar9 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20) +
           (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20);
  param_1[6] = (uint)uVar8;
  uVar1 = (ulong)param_3[7] * (ulong)*param_2 + (uVar10 & 0xffffffff);
  uVar4 = (ulong)param_3[6] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[5] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[4] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[3] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[2] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[1] * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)*param_3 * (ulong)param_2[7] + (uVar8 & 0xffffffff);
  uVar11 = (uVar1 >> 0x20) + (uVar10 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20)
           + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20);
  param_1[7] = (uint)uVar9;
  uVar1 = (ulong)param_3[8] * (ulong)*param_2 + (uVar11 & 0xffffffff);
  uVar4 = (ulong)param_3[7] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[6] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[5] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[4] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[3] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[2] * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[1] * (ulong)param_2[7] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)*param_3 * (ulong)param_2[8] + (uVar9 & 0xffffffff);
  uVar12 = (uVar1 >> 0x20) + (uVar11 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20)
           + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20) +
           (uVar10 >> 0x20);
  param_1[8] = (uint)uVar10;
  uVar1 = (ulong)param_3[9] * (ulong)*param_2 + (uVar12 & 0xffffffff);
  uVar4 = (ulong)param_3[8] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[7] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[6] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[5] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[4] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[3] * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[2] * (ulong)param_2[7] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[1] * (ulong)param_2[8] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)*param_3 * (ulong)param_2[9] + (uVar10 & 0xffffffff);
  uVar13 = (uVar1 >> 0x20) + (uVar12 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20)
           + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20) +
           (uVar10 >> 0x20) + (uVar11 >> 0x20);
  param_1[9] = (uint)uVar11;
  uVar1 = (ulong)param_3[10] * (ulong)*param_2 + (uVar13 & 0xffffffff);
  uVar4 = (ulong)param_3[9] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[8] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[7] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[6] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[5] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[4] * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[3] * (ulong)param_2[7] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[2] * (ulong)param_2[8] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[1] * (ulong)param_2[9] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)*param_3 * (ulong)param_2[10] + (uVar11 & 0xffffffff);
  uVar14 = (uVar1 >> 0x20) + (uVar13 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20)
           + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20) +
           (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20);
  param_1[10] = (uint)uVar12;
  uVar1 = (ulong)param_3[0xb] * (ulong)*param_2 + (uVar14 & 0xffffffff);
  uVar4 = (ulong)param_3[10] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[9] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[8] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[7] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[6] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[5] * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[4] * (ulong)param_2[7] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[3] * (ulong)param_2[8] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[2] * (ulong)param_2[9] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[1] * (ulong)param_2[10] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)*param_3 * (ulong)param_2[0xb] + (uVar12 & 0xffffffff);
  uVar15 = (uVar1 >> 0x20) + (uVar14 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20)
           + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20) +
           (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20);
  param_1[0xb] = (uint)uVar13;
  uVar1 = (ulong)param_3[0xc] * (ulong)*param_2 + (uVar15 & 0xffffffff);
  uVar4 = (ulong)param_3[0xb] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[10] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[9] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[8] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[7] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[6] * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[5] * (ulong)param_2[7] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[4] * (ulong)param_2[8] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[3] * (ulong)param_2[9] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[2] * (ulong)param_2[10] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[1] * (ulong)param_2[0xb] + (uVar12 & 0xffffffff);
  uVar14 = (ulong)*param_3 * (ulong)param_2[0xc] + (uVar13 & 0xffffffff);
  uVar16 = (uVar1 >> 0x20) + (uVar15 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20)
           + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20) +
           (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
           (uVar14 >> 0x20);
  param_1[0xc] = (uint)uVar14;
  uVar1 = (ulong)param_3[0xd] * (ulong)*param_2 + (uVar16 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xb] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[10] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[9] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[8] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[7] * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[6] * (ulong)param_2[7] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[5] * (ulong)param_2[8] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[4] * (ulong)param_2[9] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[3] * (ulong)param_2[10] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[2] * (ulong)param_2[0xb] + (uVar12 & 0xffffffff);
  uVar14 = (ulong)param_3[1] * (ulong)param_2[0xc] + (uVar13 & 0xffffffff);
  uVar15 = (ulong)*param_3 * (ulong)param_2[0xd] + (uVar14 & 0xffffffff);
  param_1[0xd] = (uint)uVar15;
  uVar16 = (uVar1 >> 0x20) + (uVar16 >> 0x20) + (uVar4 >> 0x20) + (uVar2 >> 0x20) + (uVar5 >> 0x20)
           + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20) +
           (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
           (uVar14 >> 0x20) + (uVar15 >> 0x20);
  uVar1 = (ulong)param_3[0xe] * (ulong)*param_2 + (uVar16 & 0xffffffff);
  uVar4 = (ulong)param_3[0xd] * (ulong)param_2[1] + (uVar1 & 0xffffffff);
  uVar2 = (ulong)param_3[0xc] * (ulong)param_2[2] + (uVar4 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[3] + (uVar2 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[4] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[5] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[6] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[7] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[8] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[9] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[4] * (ulong)param_2[10] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[3] * (ulong)param_2[0xb] + (uVar12 & 0xffffffff);
  uVar14 = (ulong)param_3[2] * (ulong)param_2[0xc] + (uVar13 & 0xffffffff);
  uVar15 = (ulong)param_3[1] * (ulong)param_2[0xd] + (uVar14 & 0xffffffff);
  lVar3 = (ulong)*param_3 * (ulong)param_2[0xe] + (uVar15 & 0xffffffff);
  param_1[0xe] = (uint)lVar3;
  param_1[0xf] = param_3[0xf] * *param_2 + param_3[0xe] * param_2[1] + param_3[0xd] * param_2[2] +
                 param_3[0xc] * param_2[3] + param_3[0xb] * param_2[4] + param_3[10] * param_2[5] +
                 param_3[9] * param_2[6] + param_3[8] * param_2[7] +
                 (int)(uVar1 >> 0x20) + (int)(uVar16 >> 0x20) + (int)(uVar4 >> 0x20) +
                 (int)(uVar2 >> 0x20) + (int)(uVar5 >> 0x20) + (int)(uVar6 >> 0x20) +
                 (int)(uVar7 >> 0x20) + (int)(uVar8 >> 0x20) + (int)(uVar9 >> 0x20) +
                 (int)(uVar10 >> 0x20) + (int)(uVar11 >> 0x20) + (int)(uVar12 >> 0x20) +
                 (int)(uVar13 >> 0x20) + (int)(uVar14 >> 0x20) + (int)(uVar15 >> 0x20) +
                 (int)((ulong)lVar3 >> 0x20) + param_3[7] * param_2[8] + param_3[6] * param_2[9] +
                 param_3[5] * param_2[10] + param_3[4] * param_2[0xb] + param_3[3] * param_2[0xc] +
                 param_3[2] * param_2[0xd] + param_3[1] * param_2[0xe] + *param_3 * param_2[0xf];
  return;
}


