// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pack_five_trits
// Entry Point: 00e50b84
// Size: 448 bytes
// Signature: undefined __cdecl pack_five_trits(uint * param_1, int * param_2, int * param_3, int param_4)


/* pack_five_trits(unsigned int*, int*, int*, int) */

void pack_five_trits(uint *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  
  iVar6 = param_2[2];
  iVar7 = param_2[3];
  iVar8 = param_2[4];
  iVar2 = *param_2 >> (param_4 & 0x1fU);
  iVar3 = param_2[1] >> (param_4 & 0x1fU);
  iVar4 = iVar6 >> (param_4 & 0x1fU);
  iVar5 = iVar7 >> (param_4 & 0x1fU);
  if ((iVar3 == 2) && (iVar4 == 2)) {
    uVar13 = iVar2 + 0xc;
  }
  else if (iVar4 == 2) {
    uVar13 = iVar2 * 4 + iVar3 * 0x10 | 3;
  }
  else {
    uVar13 = iVar4 * 0x10 + iVar3 * 4 + iVar2;
  }
  iVar12 = iVar8 >> (param_4 & 0x1fU);
  if ((iVar5 == 2) && (iVar12 == 2)) {
    uVar13 = (uVar13 & 0x1c) << 3 | uVar13 & 3 | 0x1c;
  }
  else if (iVar12 == 2) {
    uVar13 = uVar13 & 0x1f | iVar5 << 7 | 0x60;
  }
  else {
    uVar13 = iVar12 * 0x80 + iVar5 * 0x20 | uVar13 & 0x1f;
  }
  uVar9 = *param_3;
  uVar1 = uVar9 + 7;
  if (-1 < (int)uVar9) {
    uVar1 = uVar9;
  }
  lVar11 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  iVar10 = param_4 * 2;
  *(uint *)((long)param_1 + lVar11) =
       ((uVar13 & 3) << (ulong)(param_4 & 0x1f) | *param_2 - (iVar2 << (ulong)(param_4 & 0x1f)) |
       param_2[1] - (iVar3 << (ulong)(param_4 & 0x1f)) << (ulong)(param_4 + 2U & 0x1f)) <<
       (ulong)(uVar9 & 7) | *(uint *)((long)param_1 + lVar11);
  uVar1 = iVar10 + *param_3 + 2;
  uVar9 = iVar10 + *param_3 + 9;
  if (-1 < (int)uVar1) {
    uVar9 = uVar1;
  }
  lVar11 = (long)((ulong)uVar9 << 0x20) >> 0x23;
  *param_3 = uVar1;
  *(uint *)((long)param_1 + lVar11) =
       ((uVar13 >> 5 & 3) << (ulong)(iVar10 + 3U & 0x1f) |
        (uVar13 >> 4 & 1) << (ulong)(param_4 + 2U & 0x1f) |
        (uVar13 >> 7 & 1) << (ulong)(param_4 * 3 + 5U & 0x1f) |
        uVar13 >> 2 & 3 | (iVar6 - (iVar4 << (ulong)(param_4 & 0x1f))) * 4 |
        iVar7 - (iVar5 << (ulong)(param_4 & 0x1f)) << (ulong)(param_4 + 3U & 0x1f) |
       iVar8 - (iVar12 << (ulong)(param_4 & 0x1f)) << (ulong)(iVar10 + 5U & 0x1f)) <<
       (ulong)(uVar1 & 7) | *(uint *)((long)param_1 + lVar11);
  *param_3 = param_4 * 3 + *param_3 + 6;
  return;
}


