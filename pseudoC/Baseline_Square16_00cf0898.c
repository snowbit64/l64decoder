// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Square16
// Entry Point: 00cf0898
// Size: 2664 bytes
// Signature: undefined __cdecl Baseline_Square16(uint * param_1, uint * param_2)


/* CryptoPP::Baseline_Square16(unsigned int*, unsigned int const*) */

void CryptoPP::Baseline_Square16(uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
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
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar7 = (ulong)*param_2 * (ulong)*param_2;
  *param_1 = (uint)uVar7;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar7 = (ulong)(uint)((int)((ulong)uVar3 * (ulong)uVar2) << 1) + (uVar7 >> 0x20);
  param_1[1] = (uint)uVar7;
  uVar4 = param_2[2];
  uVar6 = *param_2;
  uVar9 = (ulong)(uint)((int)((ulong)uVar4 * (ulong)uVar6) << 1) +
          (ulong)param_2[1] * (ulong)param_2[1];
  uVar7 = (uVar7 >> 0x20) + ((ulong)uVar3 * (ulong)uVar2 >> 0x1f) + (uVar9 & 0xffffffff);
  param_1[2] = (uint)uVar7;
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar13 = (ulong)param_2[2] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar9 = (uVar9 >> 0x20) + ((ulong)uVar4 * (ulong)uVar6 >> 0x1f) + (uVar7 >> 0x20) +
          (ulong)(uint)((int)uVar13 << 1);
  param_1[3] = (uint)uVar9;
  uVar4 = param_2[4];
  uVar3 = *param_2;
  uVar7 = (ulong)param_2[3] * (ulong)param_2[1] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar10 = (ulong)(uint)((int)uVar7 << 1) + (ulong)param_2[2] * (ulong)param_2[2];
  uVar13 = (uVar13 >> 0x1f & 1 | ((uVar13 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20)) * 2) +
           (uVar9 >> 0x20) + (uVar10 & 0xffffffff);
  param_1[4] = (uint)uVar13;
  uVar2 = *param_2;
  uVar5 = param_2[5];
  uVar9 = (ulong)param_2[4] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar1 = (ulong)param_2[3] * (ulong)param_2[2] + (uVar9 & 0xffffffff);
  uVar10 = (uVar7 >> 0x1f & 1 | ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20)) * 2) +
           (uVar10 >> 0x20) + (uVar13 >> 0x20) + (ulong)(uint)((int)uVar1 << 1);
  param_1[5] = (uint)uVar10;
  uVar4 = param_2[6];
  uVar3 = *param_2;
  uVar7 = (ulong)param_2[5] * (ulong)param_2[1] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[4] * (ulong)param_2[2] + (uVar7 & 0xffffffff);
  uVar14 = (ulong)(uint)((int)uVar13 << 1) + (ulong)param_2[3] * (ulong)param_2[3];
  uVar9 = (uVar1 >> 0x1f & 1 |
          ((uVar9 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar1 >> 0x20)) * 2) +
          (uVar10 >> 0x20) + (uVar14 & 0xffffffff);
  param_1[6] = (uint)uVar9;
  uVar2 = *param_2;
  uVar5 = param_2[7];
  uVar1 = (ulong)param_2[6] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar10 = (ulong)param_2[5] * (ulong)param_2[2] + (uVar1 & 0xffffffff);
  uVar18 = (ulong)param_2[4] * (ulong)param_2[3] + (uVar10 & 0xffffffff);
  uVar14 = (uVar13 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20)) * 2) +
           (uVar14 >> 0x20) + (uVar9 >> 0x20) + (ulong)(uint)((int)uVar18 << 1);
  param_1[7] = (uint)uVar14;
  uVar4 = param_2[8];
  uVar3 = *param_2;
  uVar7 = (ulong)param_2[7] * (ulong)param_2[1] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[6] * (ulong)param_2[2] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_2[5] * (ulong)param_2[3] + (uVar13 & 0xffffffff);
  uVar11 = (ulong)(uint)((int)uVar9 << 1) + (ulong)param_2[4] * (ulong)param_2[4];
  uVar1 = (uVar18 >> 0x1f & 1 |
          ((uVar1 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar10 >> 0x20) +
          (uVar18 >> 0x20)) * 2) + (uVar14 >> 0x20) + (uVar11 & 0xffffffff);
  param_1[8] = (uint)uVar1;
  uVar2 = *param_2;
  uVar5 = param_2[9];
  uVar10 = (ulong)param_2[8] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar18 = (ulong)param_2[7] * (ulong)param_2[2] + (uVar10 & 0xffffffff);
  uVar14 = (ulong)param_2[6] * (ulong)param_2[3] + (uVar18 & 0xffffffff);
  uVar17 = (ulong)param_2[5] * (ulong)param_2[4] + (uVar14 & 0xffffffff);
  uVar11 = (uVar9 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20) +
           (uVar9 >> 0x20)) * 2) + (uVar11 >> 0x20) + (uVar1 >> 0x20) +
           (ulong)(uint)((int)uVar17 << 1);
  param_1[9] = (uint)uVar11;
  uVar4 = param_2[10];
  uVar3 = *param_2;
  uVar7 = (ulong)param_2[9] * (ulong)param_2[1] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[8] * (ulong)param_2[2] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_2[7] * (ulong)param_2[3] + (uVar13 & 0xffffffff);
  uVar1 = (ulong)param_2[6] * (ulong)param_2[4] + (uVar9 & 0xffffffff);
  uVar15 = (ulong)(uint)((int)uVar1 << 1) + (ulong)param_2[5] * (ulong)param_2[5];
  uVar10 = (uVar17 >> 0x1f & 1 |
           ((uVar10 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar18 >> 0x20) +
            (uVar14 >> 0x20) + (uVar17 >> 0x20)) * 2) + (uVar11 >> 0x20) + (uVar15 & 0xffffffff);
  param_1[10] = (uint)uVar10;
  uVar2 = *param_2;
  uVar5 = param_2[0xb];
  uVar18 = (ulong)param_2[10] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar14 = (ulong)param_2[9] * (ulong)param_2[2] + (uVar18 & 0xffffffff);
  uVar17 = (ulong)param_2[8] * (ulong)param_2[3] + (uVar14 & 0xffffffff);
  uVar11 = (ulong)param_2[7] * (ulong)param_2[4] + (uVar17 & 0xffffffff);
  uVar12 = (ulong)param_2[6] * (ulong)param_2[5] + (uVar11 & 0xffffffff);
  uVar15 = (uVar1 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20) +
            (uVar9 >> 0x20) + (uVar1 >> 0x20)) * 2) + (uVar15 >> 0x20) + (uVar10 >> 0x20) +
           (ulong)(uint)((int)uVar12 << 1);
  param_1[0xb] = (uint)uVar15;
  uVar4 = param_2[0xc];
  uVar3 = *param_2;
  uVar7 = (ulong)param_2[0xb] * (ulong)param_2[1] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[10] * (ulong)param_2[2] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_2[9] * (ulong)param_2[3] + (uVar13 & 0xffffffff);
  uVar1 = (ulong)param_2[8] * (ulong)param_2[4] + (uVar9 & 0xffffffff);
  uVar10 = (ulong)param_2[7] * (ulong)param_2[5] + (uVar1 & 0xffffffff);
  uVar20 = (ulong)(uint)((int)uVar10 << 1) + (ulong)param_2[6] * (ulong)param_2[6];
  uVar18 = (uVar12 >> 0x1f & 1 |
           ((uVar18 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar14 >> 0x20) +
            (uVar17 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20)) * 2) + (uVar15 >> 0x20) +
           (uVar20 & 0xffffffff);
  param_1[0xc] = (uint)uVar18;
  uVar2 = *param_2;
  uVar5 = param_2[0xd];
  uVar14 = (ulong)param_2[0xc] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar17 = (ulong)param_2[0xb] * (ulong)param_2[2] + (uVar14 & 0xffffffff);
  uVar11 = (ulong)param_2[10] * (ulong)param_2[3] + (uVar17 & 0xffffffff);
  uVar12 = (ulong)param_2[9] * (ulong)param_2[4] + (uVar11 & 0xffffffff);
  uVar15 = (ulong)param_2[8] * (ulong)param_2[5] + (uVar12 & 0xffffffff);
  uVar19 = (ulong)param_2[7] * (ulong)param_2[6] + (uVar15 & 0xffffffff);
  uVar20 = (uVar10 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20) +
            (uVar9 >> 0x20) + (uVar1 >> 0x20) + (uVar10 >> 0x20)) * 2) + (uVar20 >> 0x20) +
           (uVar18 >> 0x20) + (ulong)(uint)((int)uVar19 << 1);
  param_1[0xd] = (uint)uVar20;
  uVar4 = param_2[0xe];
  uVar3 = *param_2;
  uVar7 = (ulong)param_2[0xd] * (ulong)param_2[1] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[0xc] * (ulong)param_2[2] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_2[0xb] * (ulong)param_2[3] + (uVar13 & 0xffffffff);
  uVar1 = (ulong)param_2[10] * (ulong)param_2[4] + (uVar9 & 0xffffffff);
  uVar10 = (ulong)param_2[9] * (ulong)param_2[5] + (uVar1 & 0xffffffff);
  uVar18 = (ulong)param_2[8] * (ulong)param_2[6] + (uVar10 & 0xffffffff);
  uVar8 = (ulong)(uint)((int)uVar18 << 1) + (ulong)param_2[7] * (ulong)param_2[7];
  uVar14 = (uVar19 >> 0x1f & 1 |
           ((uVar14 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar17 >> 0x20) +
            (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar15 >> 0x20) + (uVar19 >> 0x20)) * 2) +
           (uVar20 >> 0x20) + (uVar8 & 0xffffffff);
  param_1[0xe] = (uint)uVar14;
  uVar2 = *param_2;
  uVar5 = param_2[0xf];
  uVar17 = (ulong)param_2[0xe] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar11 = (ulong)param_2[0xd] * (ulong)param_2[2] + (uVar17 & 0xffffffff);
  uVar12 = (ulong)param_2[0xc] * (ulong)param_2[3] + (uVar11 & 0xffffffff);
  uVar15 = (ulong)param_2[0xb] * (ulong)param_2[4] + (uVar12 & 0xffffffff);
  uVar19 = (ulong)param_2[10] * (ulong)param_2[5] + (uVar15 & 0xffffffff);
  uVar20 = (ulong)param_2[9] * (ulong)param_2[6] + (uVar19 & 0xffffffff);
  uVar16 = (ulong)param_2[8] * (ulong)param_2[7] + (uVar20 & 0xffffffff);
  uVar14 = (uVar18 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20) +
            (uVar9 >> 0x20) + (uVar1 >> 0x20) + (uVar10 >> 0x20) + (uVar18 >> 0x20)) * 2) +
           (uVar8 >> 0x20) + (uVar14 >> 0x20) + (ulong)(uint)((int)uVar16 << 1);
  param_1[0xf] = (uint)uVar14;
  uVar4 = param_2[0xf];
  uVar3 = param_2[1];
  uVar7 = (ulong)param_2[0xe] * (ulong)param_2[2] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[0xd] * (ulong)param_2[3] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_2[0xc] * (ulong)param_2[4] + (uVar13 & 0xffffffff);
  uVar1 = (ulong)param_2[0xb] * (ulong)param_2[5] + (uVar9 & 0xffffffff);
  uVar10 = (ulong)param_2[10] * (ulong)param_2[6] + (uVar1 & 0xffffffff);
  uVar18 = (ulong)param_2[9] * (ulong)param_2[7] + (uVar10 & 0xffffffff);
  uVar8 = (ulong)(uint)((int)uVar18 << 1) + (ulong)param_2[8] * (ulong)param_2[8];
  uVar14 = (uVar16 >> 0x1f & 1 |
           ((uVar17 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar11 >> 0x20) +
            (uVar12 >> 0x20) + (uVar15 >> 0x20) + (uVar19 >> 0x20) + (uVar20 >> 0x20) +
           (uVar16 >> 0x20)) * 2) + (uVar14 >> 0x20) + (uVar8 & 0xffffffff);
  param_1[0x10] = (uint)uVar14;
  uVar2 = param_2[2];
  uVar5 = param_2[0xf];
  uVar17 = (ulong)param_2[0xe] * (ulong)param_2[3] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar11 = (ulong)param_2[0xd] * (ulong)param_2[4] + (uVar17 & 0xffffffff);
  uVar12 = (ulong)param_2[0xc] * (ulong)param_2[5] + (uVar11 & 0xffffffff);
  uVar15 = (ulong)param_2[0xb] * (ulong)param_2[6] + (uVar12 & 0xffffffff);
  uVar19 = (ulong)param_2[10] * (ulong)param_2[7] + (uVar15 & 0xffffffff);
  uVar20 = (ulong)param_2[9] * (ulong)param_2[8] + (uVar19 & 0xffffffff);
  uVar18 = (uVar18 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20) +
            (uVar9 >> 0x20) + (uVar1 >> 0x20) + (uVar10 >> 0x20) + (uVar18 >> 0x20)) * 2) +
           (uVar8 >> 0x20) + (uVar14 >> 0x20) + (ulong)(uint)((int)uVar20 << 1);
  param_1[0x11] = (uint)uVar18;
  uVar4 = param_2[0xf];
  uVar3 = param_2[3];
  uVar7 = (ulong)param_2[0xe] * (ulong)param_2[4] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[0xd] * (ulong)param_2[5] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_2[0xc] * (ulong)param_2[6] + (uVar13 & 0xffffffff);
  uVar1 = (ulong)param_2[0xb] * (ulong)param_2[7] + (uVar9 & 0xffffffff);
  uVar10 = (ulong)param_2[10] * (ulong)param_2[8] + (uVar1 & 0xffffffff);
  uVar16 = (ulong)(uint)((int)uVar10 << 1) + (ulong)param_2[9] * (ulong)param_2[9];
  uVar18 = (uVar20 >> 0x1f & 1 |
           ((uVar17 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar11 >> 0x20) +
            (uVar12 >> 0x20) + (uVar15 >> 0x20) + (uVar19 >> 0x20) + (uVar20 >> 0x20)) * 2) +
           (uVar18 >> 0x20) + (uVar16 & 0xffffffff);
  param_1[0x12] = (uint)uVar18;
  uVar2 = param_2[4];
  uVar5 = param_2[0xf];
  uVar14 = (ulong)param_2[0xe] * (ulong)param_2[5] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar17 = (ulong)param_2[0xd] * (ulong)param_2[6] + (uVar14 & 0xffffffff);
  uVar11 = (ulong)param_2[0xc] * (ulong)param_2[7] + (uVar17 & 0xffffffff);
  uVar12 = (ulong)param_2[0xb] * (ulong)param_2[8] + (uVar11 & 0xffffffff);
  uVar15 = (ulong)param_2[10] * (ulong)param_2[9] + (uVar12 & 0xffffffff);
  uVar10 = (uVar10 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20) +
            (uVar9 >> 0x20) + (uVar1 >> 0x20) + (uVar10 >> 0x20)) * 2) + (uVar16 >> 0x20) +
           (uVar18 >> 0x20) + (ulong)(uint)((int)uVar15 << 1);
  param_1[0x13] = (uint)uVar10;
  uVar4 = param_2[0xf];
  uVar3 = param_2[5];
  uVar7 = (ulong)param_2[0xe] * (ulong)param_2[6] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[0xd] * (ulong)param_2[7] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_2[0xc] * (ulong)param_2[8] + (uVar13 & 0xffffffff);
  uVar1 = (ulong)param_2[0xb] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar19 = (ulong)(uint)((int)uVar1 << 1) + (ulong)param_2[10] * (ulong)param_2[10];
  uVar10 = (uVar15 >> 0x1f & 1 |
           ((uVar14 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar17 >> 0x20) +
            (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar15 >> 0x20)) * 2) + (uVar10 >> 0x20) +
           (uVar19 & 0xffffffff);
  param_1[0x14] = (uint)uVar10;
  uVar2 = param_2[6];
  uVar5 = param_2[0xf];
  uVar18 = (ulong)param_2[0xe] * (ulong)param_2[7] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar14 = (ulong)param_2[0xd] * (ulong)param_2[8] + (uVar18 & 0xffffffff);
  uVar17 = (ulong)param_2[0xc] * (ulong)param_2[9] + (uVar14 & 0xffffffff);
  uVar11 = (ulong)param_2[0xb] * (ulong)param_2[10] + (uVar17 & 0xffffffff);
  uVar1 = (uVar1 >> 0x1f & 1 |
          ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20) +
           (uVar9 >> 0x20) + (uVar1 >> 0x20)) * 2) + (uVar19 >> 0x20) + (uVar10 >> 0x20) +
          (ulong)(uint)((int)uVar11 << 1);
  param_1[0x15] = (uint)uVar1;
  uVar4 = param_2[0xf];
  uVar3 = param_2[7];
  uVar7 = (ulong)param_2[0xe] * (ulong)param_2[8] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[0xd] * (ulong)param_2[9] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_2[0xc] * (ulong)param_2[10] + (uVar13 & 0xffffffff);
  uVar12 = (ulong)(uint)((int)uVar9 << 1) + (ulong)param_2[0xb] * (ulong)param_2[0xb];
  uVar1 = (uVar11 >> 0x1f & 1 |
          ((uVar18 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar14 >> 0x20) +
           (uVar17 >> 0x20) + (uVar11 >> 0x20)) * 2) + (uVar1 >> 0x20) + (uVar12 & 0xffffffff);
  param_1[0x16] = (uint)uVar1;
  uVar2 = param_2[8];
  uVar5 = param_2[0xf];
  uVar10 = (ulong)param_2[0xe] * (ulong)param_2[9] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar18 = (ulong)param_2[0xd] * (ulong)param_2[10] + (uVar10 & 0xffffffff);
  uVar14 = (ulong)param_2[0xc] * (ulong)param_2[0xb] + (uVar18 & 0xffffffff);
  uVar9 = (uVar9 >> 0x1f & 1 |
          ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20) +
          (uVar9 >> 0x20)) * 2) + (uVar12 >> 0x20) + (uVar1 >> 0x20) +
          (ulong)(uint)((int)uVar14 << 1);
  param_1[0x17] = (uint)uVar9;
  uVar4 = param_2[0xf];
  uVar3 = param_2[9];
  uVar7 = (ulong)param_2[0xe] * (ulong)param_2[10] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar13 = (ulong)param_2[0xd] * (ulong)param_2[0xb] + (uVar7 & 0xffffffff);
  uVar17 = (ulong)(uint)((int)uVar13 << 1) + (ulong)param_2[0xc] * (ulong)param_2[0xc];
  uVar9 = (uVar14 >> 0x1f & 1 |
          ((uVar10 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar18 >> 0x20) +
          (uVar14 >> 0x20)) * 2) + (uVar9 >> 0x20) + (uVar17 & 0xffffffff);
  param_1[0x18] = (uint)uVar9;
  uVar2 = param_2[10];
  uVar5 = param_2[0xf];
  uVar1 = (ulong)param_2[0xe] * (ulong)param_2[0xb] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar10 = (ulong)param_2[0xd] * (ulong)param_2[0xc] + (uVar1 & 0xffffffff);
  uVar13 = (uVar13 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar13 >> 0x20)) * 2) +
           (uVar17 >> 0x20) + (uVar9 >> 0x20) + (ulong)(uint)((int)uVar10 << 1);
  param_1[0x19] = (uint)uVar13;
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xb];
  uVar7 = (ulong)param_2[0xe] * (ulong)param_2[0xc] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar18 = (ulong)(uint)((int)uVar7 << 1) + (ulong)param_2[0xd] * (ulong)param_2[0xd];
  uVar13 = (uVar10 >> 0x1f & 1 |
           ((uVar1 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar10 >> 0x20)) * 2) +
           (uVar13 >> 0x20) + (uVar18 & 0xffffffff);
  param_1[0x1a] = (uint)uVar13;
  uVar2 = param_2[0xc];
  uVar5 = param_2[0xf];
  uVar9 = (ulong)param_2[0xe] * (ulong)param_2[0xd] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar7 = (uVar7 >> 0x1f & 1 | ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20)) * 2) +
          (uVar18 >> 0x20) + (uVar13 >> 0x20) + (ulong)(uint)((int)uVar9 << 1);
  param_1[0x1b] = (uint)uVar7;
  uVar3 = param_2[0xf];
  uVar6 = param_2[0xd];
  uVar13 = (ulong)(uint)((int)((ulong)uVar3 * (ulong)uVar6) << 1) +
           (ulong)param_2[0xe] * (ulong)param_2[0xe];
  uVar7 = (uVar9 >> 0x1f & 1 | ((uVar9 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20)) * 2) +
          (uVar7 >> 0x20) + (uVar13 & 0xffffffff);
  param_1[0x1c] = (uint)uVar7;
  uVar2 = param_2[0xe];
  uVar4 = param_2[0xf];
  uVar7 = (uVar13 >> 0x20) + ((ulong)uVar3 * (ulong)uVar6 >> 0x1f) + (uVar7 >> 0x20) +
          (ulong)(uint)((int)((ulong)uVar4 * (ulong)uVar2) << 1);
  param_1[0x1d] = (uint)uVar7;
  *(ulong *)(param_1 + 0x1e) =
       (ulong)param_2[0xf] * (ulong)param_2[0xf] + ((ulong)uVar4 * (ulong)uVar2 >> 0x1f) +
       (uVar7 >> 0x20);
  return;
}


