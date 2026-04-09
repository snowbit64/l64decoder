// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_MultiplyTop8
// Entry Point: 00cef4a8
// Size: 704 bytes
// Signature: undefined __cdecl Baseline_MultiplyTop8(uint * param_1, uint * param_2, uint * param_3, uint param_4)


/* CryptoPP::Baseline_MultiplyTop8(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

void CryptoPP::Baseline_MultiplyTop8(uint *param_1,uint *param_2,uint *param_3,uint param_4)

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
  
  uVar10 = (ulong)param_3[5];
  uVar16 = (ulong)param_3[6];
  uVar17 = (ulong)param_2[1];
  uVar11 = (ulong)param_3[3];
  uVar18 = (ulong)param_3[4];
  uVar12 = (ulong)param_2[2];
  uVar19 = (ulong)param_2[3];
  uVar13 = (ulong)param_2[4];
  uVar20 = (ulong)param_2[5];
  uVar14 = (ulong)param_3[1];
  uVar21 = (ulong)param_3[2];
  uVar15 = (ulong)param_2[6];
  uVar9 = (uVar10 * uVar17 >> 0x20) + (uVar16 * *param_2 >> 0x20) + (uVar18 * uVar12 >> 0x20) +
          (uVar11 * uVar19 >> 0x20) + (uVar21 * uVar13 >> 0x20) + (uVar14 * uVar20 >> 0x20) +
          (*param_3 * uVar15 >> 0x20);
  uVar1 = (ulong)param_3[7] * (ulong)*param_2 + (uVar9 & 0xffffffff);
  uVar2 = uVar17 * uVar16 + (uVar1 & 0xffffffff);
  uVar3 = uVar12 * uVar10 + (uVar2 & 0xffffffff);
  uVar4 = uVar19 * uVar18 + (uVar3 & 0xffffffff);
  uVar5 = uVar13 * uVar11 + (uVar4 & 0xffffffff);
  uVar6 = uVar20 * uVar21 + (uVar5 & 0xffffffff);
  uVar7 = uVar15 * uVar14 + (uVar6 & 0xffffffff);
  uVar8 = (ulong)param_2[7] * (ulong)*param_3 + (uVar7 & 0xffffffff);
  uVar1 = (uVar1 >> 0x20) + (uVar9 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20);
  if (param_4 < (uint)uVar8) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = param_3[7] * uVar17 + (uVar1 & 0xffffffff);
  uVar3 = uVar12 * uVar16 + (uVar2 & 0xffffffff);
  uVar4 = uVar19 * uVar10 + (uVar3 & 0xffffffff);
  uVar5 = uVar13 * uVar18 + (uVar4 & 0xffffffff);
  uVar6 = uVar20 * uVar11 + (uVar5 & 0xffffffff);
  uVar7 = uVar15 * uVar21 + (uVar6 & 0xffffffff);
  uVar8 = param_2[7] * uVar14 + (uVar7 & 0xffffffff);
  uVar7 = (uVar2 >> 0x20) + (uVar1 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) + (uVar5 >> 0x20) +
          (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar8 >> 0x20);
  *param_1 = (uint)uVar8;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[2] + (uVar7 & 0xffffffff);
  uVar2 = (ulong)param_3[6] * (ulong)param_2[3] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[5] * (ulong)param_2[4] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[5] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[3] * (ulong)param_2[6] + (uVar4 & 0xffffffff);
  uVar6 = (ulong)param_3[2] * (ulong)param_2[7] + (uVar5 & 0xffffffff);
  uVar7 = (uVar1 >> 0x20) + (uVar7 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20) + (uVar6 >> 0x20);
  param_1[1] = (uint)uVar6;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[3] + (uVar7 & 0xffffffff);
  uVar2 = (ulong)param_3[6] * (ulong)param_2[4] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[5] * (ulong)param_2[5] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[6] + (uVar3 & 0xffffffff);
  uVar5 = (ulong)param_3[3] * (ulong)param_2[7] + (uVar4 & 0xffffffff);
  uVar6 = (uVar1 >> 0x20) + (uVar7 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20) +
          (uVar5 >> 0x20);
  param_1[2] = (uint)uVar5;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[4] + (uVar6 & 0xffffffff);
  uVar2 = (ulong)param_3[6] * (ulong)param_2[5] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[5] * (ulong)param_2[6] + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_3[4] * (ulong)param_2[7] + (uVar3 & 0xffffffff);
  uVar5 = (uVar1 >> 0x20) + (uVar6 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20);
  param_1[3] = (uint)uVar4;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[5] + (uVar5 & 0xffffffff);
  uVar2 = (ulong)param_3[6] * (ulong)param_2[6] + (uVar1 & 0xffffffff);
  uVar3 = (ulong)param_3[5] * (ulong)param_2[7] + (uVar2 & 0xffffffff);
  uVar4 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20);
  param_1[4] = (uint)uVar3;
  uVar1 = (ulong)param_3[7] * (ulong)param_2[6] + (uVar4 & 0xffffffff);
  uVar2 = (ulong)param_3[6] * (ulong)param_2[7] + (uVar1 & 0xffffffff);
  param_1[5] = (uint)uVar2;
  *(ulong *)(param_1 + 6) =
       (ulong)param_3[7] * (ulong)param_2[7] + (uVar4 >> 0x20) + (uVar1 >> 0x20) + (uVar2 >> 0x20);
  return;
}


