// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_MultiplyTop16
// Entry Point: 00cf1be8
// Size: 2628 bytes
// Signature: undefined __cdecl Baseline_MultiplyTop16(uint * param_1, uint * param_2, uint * param_3, uint param_4)


/* CryptoPP::Baseline_MultiplyTop16(unsigned int*, unsigned int const*, unsigned int const*,
   unsigned int) */

void CryptoPP::Baseline_MultiplyTop16(uint *param_1,uint *param_2,uint *param_3,uint param_4)

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
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  
  uVar18 = (ulong)param_3[0xc];
  uVar30 = (ulong)param_3[0xd];
  uVar31 = (ulong)param_2[1];
  uVar19 = (ulong)param_2[2];
  uVar32 = (ulong)param_2[3];
  uVar20 = (ulong)param_3[0xe];
  uVar21 = (ulong)param_3[10];
  uVar33 = (ulong)param_3[0xb];
  uVar22 = (ulong)param_2[4];
  uVar34 = (ulong)param_2[5];
  uVar23 = (ulong)param_3[8];
  uVar35 = (ulong)param_3[9];
  uVar42 = (ulong)param_2[6];
  uVar24 = (ulong)param_2[7];
  uVar36 = (ulong)param_2[8];
  uVar25 = (ulong)param_3[6];
  uVar37 = (ulong)param_3[7];
  uVar43 = (ulong)param_3[5];
  uVar26 = (ulong)param_2[9];
  uVar38 = (ulong)param_2[10];
  uVar27 = (ulong)param_3[3];
  uVar39 = (ulong)param_3[4];
  uVar44 = (ulong)param_3[2];
  uVar28 = (ulong)param_2[0xb];
  uVar40 = (ulong)param_2[0xc];
  uVar41 = (ulong)param_3[1];
  uVar45 = (ulong)param_2[0xd];
  uVar29 = (ulong)param_2[0xe];
  uVar17 = (uVar30 * uVar31 >> 0x20) + (uVar20 * *param_2 >> 0x20) + (uVar18 * uVar19 >> 0x20) +
           (uVar33 * uVar32 >> 0x20) + (uVar21 * uVar22 >> 0x20) + (uVar35 * uVar34 >> 0x20) +
           (uVar23 * uVar42 >> 0x20) + (uVar37 * uVar24 >> 0x20) + (uVar25 * uVar36 >> 0x20) +
           (uVar43 * uVar26 >> 0x20) + (uVar39 * uVar38 >> 0x20) + (uVar27 * uVar28 >> 0x20) +
           (uVar44 * uVar40 >> 0x20) + (uVar41 * uVar45 >> 0x20) + (*param_3 * uVar29 >> 0x20);
  uVar1 = (ulong)param_3[0xf] * (ulong)*param_2 + (uVar17 & 0xffffffff);
  uVar2 = uVar31 * uVar20 + (uVar1 & 0xffffffff);
  uVar3 = uVar19 * uVar30 + (uVar2 & 0xffffffff);
  uVar4 = uVar32 * uVar18 + (uVar3 & 0xffffffff);
  uVar5 = uVar22 * uVar33 + (uVar4 & 0xffffffff);
  uVar6 = uVar34 * uVar21 + (uVar5 & 0xffffffff);
  uVar7 = uVar42 * uVar35 + (uVar6 & 0xffffffff);
  uVar8 = uVar24 * uVar23 + (uVar7 & 0xffffffff);
  uVar9 = uVar36 * uVar37 + (uVar8 & 0xffffffff);
  uVar10 = uVar26 * uVar25 + (uVar9 & 0xffffffff);
  uVar11 = uVar38 * uVar43 + (uVar10 & 0xffffffff);
  uVar12 = uVar28 * uVar39 + (uVar11 & 0xffffffff);
  uVar13 = uVar40 * uVar27 + (uVar12 & 0xffffffff);
  uVar14 = uVar45 * uVar44 + (uVar13 & 0xffffffff);
  uVar15 = uVar29 * uVar41 + (uVar14 & 0xffffffff);
  uVar16 = (ulong)param_2[0xf] * (ulong)*param_3 + (uVar15 & 0xffffffff);
  uVar1 = (uVar1 >> 0x20) + (uVar17 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20) +
          (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
          (uVar14 >> 0x20) + (uVar15 >> 0x20) + (uVar16 >> 0x20);
  if (param_4 < (uint)uVar16) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = param_3[0xf] * uVar31 + (uVar1 & 0xffffffff);
  uVar3 = uVar19 * uVar20 + (uVar2 & 0xffffffff);
  uVar4 = uVar32 * uVar30 + (uVar3 & 0xffffffff);
  uVar5 = uVar22 * uVar18 + (uVar4 & 0xffffffff);
  uVar6 = uVar34 * uVar33 + (uVar5 & 0xffffffff);
  uVar7 = uVar42 * uVar21 + (uVar6 & 0xffffffff);
  uVar8 = uVar24 * uVar35 + (uVar7 & 0xffffffff);
  uVar9 = uVar36 * uVar23 + (uVar8 & 0xffffffff);
  uVar10 = uVar26 * uVar37 + (uVar9 & 0xffffffff);
  uVar11 = uVar38 * uVar25 + (uVar10 & 0xffffffff);
  uVar12 = uVar28 * uVar43 + (uVar11 & 0xffffffff);
  uVar13 = uVar40 * uVar39 + (uVar12 & 0xffffffff);
  uVar14 = uVar45 * uVar27 + (uVar13 & 0xffffffff);
  uVar15 = uVar29 * uVar44 + (uVar14 & 0xffffffff);
  uVar16 = param_2[0xf] * uVar41 + (uVar15 & 0xffffffff);
  uVar15 = (uVar2 >> 0x20) + (uVar1 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) + (uVar5 >> 0x20) +
           (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20) + (uVar10 >> 0x20)
           + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) + (uVar14 >> 0x20) +
           (uVar15 >> 0x20) + (uVar16 >> 0x20);
  *param_1 = (uint)uVar16;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[2] + (uVar15 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[3] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[4] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[5] + (uVar3 & 0xffffffff);
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
  uVar15 = (uVar1 >> 0x20) + (uVar15 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20) +
           (uVar14 >> 0x20);
  param_1[1] = (uint)uVar14;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[3] + (uVar15 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[4] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[5] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[6] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[7] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[8] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[9] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[10] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xb] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xc] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[0xd] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[4] * (ulong)param_2[0xe] + (uVar11 & 0xffffffff);
  uVar13 = (ulong)param_3[3] * (ulong)param_2[0xf] + (uVar12 & 0xffffffff);
  uVar14 = (uVar1 >> 0x20) + (uVar15 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20) + (uVar13 >> 0x20);
  param_1[2] = (uint)uVar13;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[4] + (uVar14 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[5] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[6] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[7] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[8] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[9] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[10] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xb] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xc] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xd] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[0xe] + (uVar10 & 0xffffffff);
  uVar12 = (ulong)param_3[4] * (ulong)param_2[0xf] + (uVar11 & 0xffffffff);
  uVar13 = (uVar1 >> 0x20) + (uVar14 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20) + (uVar12 >> 0x20);
  param_1[3] = (uint)uVar12;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[5] + (uVar13 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[6] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[7] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[8] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[9] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[10] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xb] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xc] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xd] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xe] + (uVar9 & 0xffffffff);
  uVar11 = (ulong)param_3[5] * (ulong)param_2[0xf] + (uVar10 & 0xffffffff);
  uVar12 = (uVar1 >> 0x20) + (uVar13 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20) + (uVar11 >> 0x20);
  param_1[4] = (uint)uVar11;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[6] + (uVar12 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[7] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[8] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[9] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[10] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xb] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xc] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xd] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xe] + (uVar8 & 0xffffffff);
  uVar10 = (ulong)param_3[6] * (ulong)param_2[0xf] + (uVar9 & 0xffffffff);
  uVar11 = (uVar1 >> 0x20) + (uVar12 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
           + (uVar10 >> 0x20);
  param_1[5] = (uint)uVar10;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[7] + (uVar11 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[8] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[9] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[10] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xb] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xc] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xd] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xe] + (uVar7 & 0xffffffff);
  uVar9 = (ulong)param_3[7] * (ulong)param_2[0xf] + (uVar8 & 0xffffffff);
  uVar10 = (uVar1 >> 0x20) + (uVar11 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20)
           + (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20) + (uVar9 >> 0x20)
  ;
  param_1[6] = (uint)uVar9;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[8] + (uVar10 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[9] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[10] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xb] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xc] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xd] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xe] + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_3[8] * (ulong)param_2[0xf] + (uVar7 & 0xffffffff);
  uVar9 = (uVar1 >> 0x20) + (uVar10 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20);
  param_1[7] = (uint)uVar8;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[9] + (uVar9 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[10] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[0xb] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xc] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xd] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xe] + (uVar5 & 0xffffffff);
  uVar7 = (ulong)param_3[9] * (ulong)param_2[0xf] + (uVar6 & 0xffffffff);
  uVar8 = (uVar1 >> 0x20) + (uVar9 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20);
  param_1[8] = (uint)uVar7;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[10] + (uVar8 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[0xb] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[0xc] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xd] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xe] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[10] * (ulong)param_2[0xf] + (uVar5 & 0xffffffff);
  uVar7 = (uVar1 >> 0x20) + (uVar8 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20);
  param_1[9] = (uint)uVar6;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[0xb] + (uVar7 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[0xc] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[0xd] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xe] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[0xb] * (ulong)param_2[0xf] + (uVar4 & 0xffffffff);
  uVar6 = (uVar1 >> 0x20) + (uVar7 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20);
  param_1[10] = (uint)uVar5;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[0xc] + (uVar6 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[0xd] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[0xe] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[0xc] * (ulong)param_2[0xf] + (uVar3 & 0xffffffff);
  uVar5 = (uVar1 >> 0x20) + (uVar6 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20);
  param_1[0xb] = (uint)uVar4;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[0xd] + (uVar5 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[0xe] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[0xd] * (ulong)param_2[0xf] + (uVar2 & 0xffffffff);
  uVar4 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20);
  param_1[0xc] = (uint)uVar3;
  uVar1 = (ulong)param_3[0xf] * (ulong)param_2[0xe] + (uVar4 & 0xffffffff);
  uVar2 = (ulong)param_3[0xe] * (ulong)param_2[0xf] + (uVar1 & 0xffffffff);
  param_1[0xd] = (uint)uVar2;
  *(ulong *)(param_1 + 0xe) =
       (ulong)param_3[0xf] * (ulong)param_2[0xf] + (uVar4 >> 0x20) + (uVar1 >> 0x20) +
       (uVar2 >> 0x20);
  return;
}


