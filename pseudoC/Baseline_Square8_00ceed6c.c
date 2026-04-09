// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Square8
// Entry Point: 00ceed6c
// Size: 776 bytes
// Signature: undefined __cdecl Baseline_Square8(uint * param_1, uint * param_2)


/* CryptoPP::Baseline_Square8(unsigned int*, unsigned int const*) */

void CryptoPP::Baseline_Square8(uint *param_1,uint *param_2)

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
  
  uVar7 = (ulong)*param_2 * (ulong)*param_2;
  *param_1 = (uint)uVar7;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar7 = (ulong)(uint)((int)((ulong)uVar3 * (ulong)uVar2) << 1) + (uVar7 >> 0x20);
  param_1[1] = (uint)uVar7;
  uVar4 = param_2[2];
  uVar6 = *param_2;
  uVar8 = (ulong)(uint)((int)((ulong)uVar4 * (ulong)uVar6) << 1) +
          (ulong)param_2[1] * (ulong)param_2[1];
  uVar7 = (uVar7 >> 0x20) + ((ulong)uVar3 * (ulong)uVar2 >> 0x1f) + (uVar8 & 0xffffffff);
  param_1[2] = (uint)uVar7;
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar10 = (ulong)param_2[2] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar8 = (uVar8 >> 0x20) + ((ulong)uVar4 * (ulong)uVar6 >> 0x1f) + (uVar7 >> 0x20) +
          (ulong)(uint)((int)uVar10 << 1);
  param_1[3] = (uint)uVar8;
  uVar4 = param_2[4];
  uVar3 = *param_2;
  uVar7 = (ulong)param_2[3] * (ulong)param_2[1] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar9 = (ulong)(uint)((int)uVar7 << 1) + (ulong)param_2[2] * (ulong)param_2[2];
  uVar10 = (uVar10 >> 0x1f & 1 | ((uVar10 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20)) * 2) +
           (uVar8 >> 0x20) + (uVar9 & 0xffffffff);
  param_1[4] = (uint)uVar10;
  uVar2 = *param_2;
  uVar5 = param_2[5];
  uVar8 = (ulong)param_2[4] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar1 = (ulong)param_2[3] * (ulong)param_2[2] + (uVar8 & 0xffffffff);
  uVar9 = (uVar7 >> 0x1f & 1 | ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20)) * 2) +
          (uVar9 >> 0x20) + (uVar10 >> 0x20) + (ulong)(uint)((int)uVar1 << 1);
  param_1[5] = (uint)uVar9;
  uVar4 = param_2[6];
  uVar3 = *param_2;
  uVar7 = (ulong)param_2[5] * (ulong)param_2[1] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar10 = (ulong)param_2[4] * (ulong)param_2[2] + (uVar7 & 0xffffffff);
  uVar11 = (ulong)(uint)((int)uVar10 << 1) + (ulong)param_2[3] * (ulong)param_2[3];
  uVar8 = (uVar1 >> 0x1f & 1 |
          ((uVar8 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar1 >> 0x20)) * 2) +
          (uVar9 >> 0x20) + (uVar11 & 0xffffffff);
  param_1[6] = (uint)uVar8;
  uVar2 = *param_2;
  uVar5 = param_2[7];
  uVar1 = (ulong)param_2[6] * (ulong)param_2[1] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar9 = (ulong)param_2[5] * (ulong)param_2[2] + (uVar1 & 0xffffffff);
  uVar12 = (ulong)param_2[4] * (ulong)param_2[3] + (uVar9 & 0xffffffff);
  uVar8 = (uVar10 >> 0x1f & 1 |
          ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar10 >> 0x20)) * 2) +
          (uVar11 >> 0x20) + (uVar8 >> 0x20) + (ulong)(uint)((int)uVar12 << 1);
  param_1[7] = (uint)uVar8;
  uVar4 = param_2[7];
  uVar3 = param_2[1];
  uVar7 = (ulong)param_2[6] * (ulong)param_2[2] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar10 = (ulong)param_2[5] * (ulong)param_2[3] + (uVar7 & 0xffffffff);
  uVar11 = (ulong)(uint)((int)uVar10 << 1) + (ulong)param_2[4] * (ulong)param_2[4];
  uVar8 = (uVar12 >> 0x1f & 1 |
          ((uVar1 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar9 >> 0x20) +
          (uVar12 >> 0x20)) * 2) + (uVar8 >> 0x20) + (uVar11 & 0xffffffff);
  param_1[8] = (uint)uVar8;
  uVar2 = param_2[2];
  uVar5 = param_2[7];
  uVar1 = (ulong)param_2[6] * (ulong)param_2[3] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar9 = (ulong)param_2[5] * (ulong)param_2[4] + (uVar1 & 0xffffffff);
  uVar10 = (uVar10 >> 0x1f & 1 |
           ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20) + (uVar10 >> 0x20)) * 2) +
           (uVar11 >> 0x20) + (uVar8 >> 0x20) + (ulong)(uint)((int)uVar9 << 1);
  param_1[9] = (uint)uVar10;
  uVar4 = param_2[7];
  uVar3 = param_2[3];
  uVar7 = (ulong)param_2[6] * (ulong)param_2[4] + ((ulong)uVar4 * (ulong)uVar3 & 0xffffffff);
  uVar12 = (ulong)(uint)((int)uVar7 << 1) + (ulong)param_2[5] * (ulong)param_2[5];
  uVar10 = (uVar9 >> 0x1f & 1 |
           ((uVar1 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20) + (uVar9 >> 0x20)) * 2) +
           (uVar10 >> 0x20) + (uVar12 & 0xffffffff);
  param_1[10] = (uint)uVar10;
  uVar2 = param_2[4];
  uVar5 = param_2[7];
  uVar8 = (ulong)param_2[6] * (ulong)param_2[5] + ((ulong)uVar5 * (ulong)uVar2 & 0xffffffff);
  uVar7 = (uVar7 >> 0x1f & 1 | ((uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar3 >> 0x20)) * 2) +
          (uVar12 >> 0x20) + (uVar10 >> 0x20) + (ulong)(uint)((int)uVar8 << 1);
  param_1[0xb] = (uint)uVar7;
  uVar3 = param_2[7];
  uVar6 = param_2[5];
  uVar10 = (ulong)(uint)((int)((ulong)uVar3 * (ulong)uVar6) << 1) +
           (ulong)param_2[6] * (ulong)param_2[6];
  uVar7 = (uVar8 >> 0x1f & 1 | ((uVar8 >> 0x20) + ((ulong)uVar5 * (ulong)uVar2 >> 0x20)) * 2) +
          (uVar7 >> 0x20) + (uVar10 & 0xffffffff);
  param_1[0xc] = (uint)uVar7;
  uVar2 = param_2[6];
  uVar4 = param_2[7];
  uVar7 = (uVar10 >> 0x20) + ((ulong)uVar3 * (ulong)uVar6 >> 0x1f) + (uVar7 >> 0x20) +
          (ulong)(uint)((int)((ulong)uVar4 * (ulong)uVar2) << 1);
  param_1[0xd] = (uint)uVar7;
  *(ulong *)(param_1 + 0xe) =
       (ulong)param_2[7] * (ulong)param_2[7] + ((ulong)uVar4 * (ulong)uVar2 >> 0x1f) +
       (uVar7 >> 0x20);
  return;
}


