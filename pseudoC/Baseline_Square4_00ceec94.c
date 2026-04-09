// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_Square4
// Entry Point: 00ceec94
// Size: 216 bytes
// Signature: undefined __cdecl Baseline_Square4(uint * param_1, uint * param_2)


/* CryptoPP::Baseline_Square4(unsigned int*, unsigned int const*) */

void CryptoPP::Baseline_Square4(uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)*param_2 * (ulong)*param_2;
  *param_1 = (uint)uVar6;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar6 = (ulong)(uint)((int)((ulong)uVar3 * (ulong)uVar2) << 1) + (uVar6 >> 0x20);
  param_1[1] = (uint)uVar6;
  uVar4 = param_2[2];
  uVar5 = *param_2;
  uVar7 = (ulong)(uint)((int)((ulong)uVar4 * (ulong)uVar5) << 1) +
          (ulong)param_2[1] * (ulong)param_2[1];
  uVar6 = (uVar6 >> 0x20) + ((ulong)uVar3 * (ulong)uVar2 >> 0x1f) + (uVar7 & 0xffffffff);
  param_1[2] = (uint)uVar6;
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = (ulong)param_2[2] * (ulong)param_2[1] + ((ulong)uVar3 * (ulong)uVar2 & 0xffffffff);
  uVar6 = (uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar5 >> 0x1f) + (uVar6 >> 0x20) +
          (ulong)(uint)((int)uVar1 << 1);
  param_1[3] = (uint)uVar6;
  uVar4 = param_2[3];
  uVar5 = param_2[1];
  uVar7 = (ulong)(uint)((int)((ulong)uVar4 * (ulong)uVar5) << 1) +
          (ulong)param_2[2] * (ulong)param_2[2];
  uVar6 = (uVar1 >> 0x1f & 1 | ((uVar1 >> 0x20) + ((ulong)uVar3 * (ulong)uVar2 >> 0x20)) * 2) +
          (uVar6 >> 0x20) + (uVar7 & 0xffffffff);
  param_1[4] = (uint)uVar6;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar6 = (uVar7 >> 0x20) + ((ulong)uVar4 * (ulong)uVar5 >> 0x1f) + (uVar6 >> 0x20) +
          (ulong)(uint)((int)((ulong)uVar3 * (ulong)uVar2) << 1);
  param_1[5] = (uint)uVar6;
  *(ulong *)(param_1 + 6) =
       (ulong)param_2[3] * (ulong)param_2[3] + ((ulong)uVar3 * (ulong)uVar2 >> 0x1f) +
       (uVar6 >> 0x20);
  return;
}


