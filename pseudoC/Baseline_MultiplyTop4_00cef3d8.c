// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Baseline_MultiplyTop4
// Entry Point: 00cef3d8
// Size: 208 bytes
// Signature: undefined __cdecl Baseline_MultiplyTop4(uint * param_1, uint * param_2, uint * param_3, uint param_4)


/* CryptoPP::Baseline_MultiplyTop4(unsigned int*, unsigned int const*, unsigned int const*, unsigned
   int) */

void CryptoPP::Baseline_MultiplyTop4(uint *param_1,uint *param_2,uint *param_3,uint param_4)

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
  
  uVar6 = (ulong)param_3[1];
  uVar8 = (ulong)param_3[2];
  uVar9 = (ulong)param_2[1];
  uVar7 = (ulong)param_2[2];
  uVar5 = (uVar6 * uVar9 >> 0x20) + (uVar8 * *param_2 >> 0x20) + (*param_3 * uVar7 >> 0x20);
  uVar1 = (ulong)param_3[3] * (ulong)*param_2 + (uVar5 & 0xffffffff);
  uVar2 = uVar9 * uVar8 + (uVar1 & 0xffffffff);
  uVar3 = uVar7 * uVar6 + (uVar2 & 0xffffffff);
  uVar4 = (ulong)param_2[3] * (ulong)*param_3 + (uVar3 & 0xffffffff);
  uVar1 = (uVar1 >> 0x20) + (uVar5 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20);
  if (param_4 < (uint)uVar4) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = param_3[3] * uVar9 + (uVar1 & 0xffffffff);
  uVar3 = uVar7 * uVar8 + (uVar2 & 0xffffffff);
  uVar4 = param_2[3] * uVar6 + (uVar3 & 0xffffffff);
  uVar3 = (uVar2 >> 0x20) + (uVar1 >> 0x20) + (uVar3 >> 0x20) + (uVar4 >> 0x20);
  *param_1 = (uint)uVar4;
  uVar1 = (ulong)param_3[3] * (ulong)param_2[2] + (uVar3 & 0xffffffff);
  uVar2 = (ulong)param_3[2] * (ulong)param_2[3] + (uVar1 & 0xffffffff);
  param_1[1] = (uint)uVar2;
  *(ulong *)(param_1 + 2) =
       (ulong)param_3[3] * (ulong)param_2[3] + (uVar3 >> 0x20) + (uVar1 >> 0x20) + (uVar2 >> 0x20);
  return;
}


