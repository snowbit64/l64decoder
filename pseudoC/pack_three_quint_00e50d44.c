// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pack_three_quint
// Entry Point: 00e50d44
// Size: 272 bytes
// Signature: undefined __cdecl pack_three_quint(uint * param_1, int * param_2, int * param_3, int param_4)


/* pack_three_quint(unsigned int*, int*, int*, int) */

void pack_three_quint(uint *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  iVar1 = *param_2 >> (param_4 & 0x1fU);
  iVar2 = param_2[1] >> (param_4 & 0x1fU);
  uVar3 = param_2[2] >> (param_4 & 0x1fU);
  if ((iVar1 == 4) && (iVar2 == 4)) {
    uVar7 = (uVar3 & 3) << 3 | uVar3 >> 2 & 1 | 6;
  }
  else {
    uVar7 = iVar1 << 3 | 5;
    if (iVar2 != 4) {
      uVar7 = iVar1 + iVar2 * 8;
    }
    if (uVar3 == 4) {
      uVar7 = uVar7 & 0x1f | (~uVar7 & 6) << 4 | 6;
    }
    else {
      uVar7 = uVar7 & 0x1f | uVar3 << 5;
    }
  }
  uVar5 = *param_3;
  uVar4 = uVar5 + 7;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  lVar6 = (long)((ulong)uVar4 << 0x20) >> 0x23;
  *(uint *)((long)param_1 + lVar6) =
       ((uVar7 & 7) << (ulong)(param_4 & 0x1f) | *param_2 - (iVar1 << (ulong)(param_4 & 0x1f)) |
        param_2[1] - (iVar2 << (ulong)(param_4 & 0x1f)) << (ulong)(param_4 + 3U & 0x1f) |
        (uVar7 >> 3 & 3) << (ulong)(param_4 * 2 + 3U & 0x1f) |
        (uVar7 >> 5 & 3) << (ulong)(param_4 * 3 + 5U & 0x1f) |
       param_2[2] - (uVar3 << (ulong)(param_4 & 0x1f)) << (ulong)(param_4 * 2 + 5U & 0x1f)) <<
       (ulong)(uVar5 & 7) | *(uint *)((long)param_1 + lVar6);
  *param_3 = param_4 * 3 + *param_3 + 7;
  return;
}


