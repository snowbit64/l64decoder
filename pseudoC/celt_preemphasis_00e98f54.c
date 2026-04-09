// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_preemphasis
// Entry Point: 00e98f54
// Size: 396 bytes
// Signature: undefined celt_preemphasis(void)


void celt_preemphasis(short *param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                     short *param_6,int *param_7,int param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  short *psVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  uVar12 = (ulong)param_3;
  sVar1 = *param_6;
  iVar13 = *param_7;
  if (((param_8 == 0) && (param_5 == 1)) && (param_6[1] == 0)) {
    if (0 < (int)param_3) {
      do {
        sVar2 = *param_1;
        param_1 = (short *)((long)param_1 +
                           (-(ulong)(param_4 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_4 << 1));
        uVar12 = uVar12 - 1;
        uVar4 = sVar2 * 0x1000 - iVar13;
        iVar13 = (int)sVar2 * (int)sVar1 >> 3;
        *param_2 = uVar4;
        param_2 = param_2 + 1;
      } while (uVar12 != 0);
    }
    goto LAB_00e990c0;
  }
  uVar4 = 0;
  if (param_5 != 0) {
    uVar4 = (int)param_3 / param_5;
  }
  uVar14 = (ulong)uVar4;
  if (param_5 != 1) {
    memset(param_2,0,-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2);
  }
  if (0 < (int)uVar4) {
    uVar12 = 0;
    lVar6 = (long)(int)param_4;
    lVar8 = (long)param_5;
    if ((uVar4 != 1) && (param_5 == 1)) {
      uVar12 = uVar14 & 0xfffffffe;
      uVar10 = uVar12;
      puVar9 = param_2;
      psVar11 = param_1;
      do {
        sVar2 = *psVar11;
        uVar10 = uVar10 - 2;
        sVar3 = psVar11[lVar6];
        psVar11 = psVar11 + lVar6 * 2;
        *puVar9 = (int)sVar2;
        puVar9[lVar8] = (int)sVar3;
        puVar9 = puVar9 + lVar8 * 2;
      } while (uVar10 != 0);
      if (uVar12 == uVar14) goto LAB_00e99090;
    }
    lVar7 = uVar14 - uVar12;
    puVar9 = param_2 + uVar12 * lVar8;
    param_1 = param_1 + uVar12 * lVar6;
    do {
      sVar2 = *param_1;
      param_1 = param_1 + lVar6;
      lVar7 = lVar7 + -1;
      *puVar9 = (int)sVar2;
      puVar9 = puVar9 + lVar8;
    } while (lVar7 != 0);
  }
LAB_00e99090:
  if (0 < (int)param_3) {
    uVar12 = (ulong)param_3;
    do {
      uVar4 = *param_2;
      uVar12 = uVar12 - 1;
      uVar5 = (-(uVar4 >> 0xf & 1) & 0xf0000000 | (uVar4 & 0xffff) << 0xc) - iVar13;
      iVar13 = (int)(short)uVar4 * (int)sVar1 >> 3;
      *param_2 = uVar5;
      param_2 = param_2 + 1;
    } while (uVar12 != 0);
  }
LAB_00e990c0:
  *param_7 = iVar13;
  return;
}


