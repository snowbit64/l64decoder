// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_ana_filt_bank_1
// Entry Point: 00e84fe8
// Size: 200 bytes
// Signature: undefined silk_ana_filt_bank_1(void)


void silk_ana_filt_bank_1
               (long param_1,int *param_2,undefined2 *param_3,undefined2 *param_4,uint param_5)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  short *psVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
  if (1 < (int)param_5) {
    iVar12 = *param_2;
    iVar14 = param_2[1];
    uVar10 = (ulong)(param_5 >> 1);
    psVar11 = (short *)(param_1 + 2);
    do {
      psVar1 = psVar11 + -1;
      sVar7 = *psVar11;
      psVar11 = psVar11 + 2;
      lVar13 = (long)*psVar1 * 0x400 - (long)iVar12;
      iVar2 = (int)((long)*psVar1 * 0x400) + (int)((ulong)(lVar13 * -0x5ee2) >> 0x10);
      iVar9 = (int)((ulong)(((long)sVar7 * 0x400 - (long)iVar14) * 0x2a24) >> 0x10);
      iVar14 = iVar14 + iVar9;
      iVar12 = iVar2 + (int)lVar13;
      uVar3 = iVar14 + iVar2;
      uVar8 = iVar14 - iVar2;
      uVar4 = 0x8000;
      if (-0x4000401 < (int)uVar3) {
        uVar4 = (short)((uVar3 >> 10) + 1 >> 1);
      }
      uVar5 = 0x7fff;
      if ((int)uVar3 < 0x3fffc00) {
        uVar5 = uVar4;
      }
      uVar4 = 0x8000;
      if (-0x4000401 < (int)uVar8) {
        uVar4 = (short)((uVar8 >> 10) + 1 >> 1);
      }
      iVar14 = (int)((long)sVar7 * 0x400) + iVar9;
      uVar6 = 0x7fff;
      if ((int)uVar8 < 0x3fffc00) {
        uVar6 = uVar4;
      }
      uVar10 = uVar10 - 1;
      *param_3 = uVar5;
      *param_4 = uVar6;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (uVar10 != 0);
    *param_2 = iVar12;
    param_2[1] = iVar14;
  }
  return;
}


