// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_resampler_down2
// Entry Point: 00e8cdb0
// Size: 156 bytes
// Signature: undefined silk_resampler_down2(void)


void silk_resampler_down2(int *param_1,undefined2 *param_2,long param_3,uint param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  if (1 < (int)param_4) {
    iVar10 = *param_1;
    iVar9 = param_1[1];
    uVar7 = (ulong)(param_4 >> 1);
    psVar8 = (short *)(param_3 + 2);
    do {
      psVar1 = psVar8 + -1;
      sVar5 = *psVar8;
      psVar8 = psVar8 + 2;
      lVar11 = (long)*psVar1 * 0x400 - (long)iVar10;
      iVar2 = (int)((long)*psVar1 * 0x400) + (int)((ulong)(lVar11 * -0x647f) >> 0x10);
      iVar10 = iVar2 + (int)lVar11;
      iVar6 = (int)((ulong)(((long)sVar5 * 0x400 - (long)iVar9) * 0x2690) >> 0x10);
      iVar2 = iVar2 + iVar9 + iVar6;
      iVar3 = (iVar2 >> 10) + 1 >> 1;
      if (iVar3 == -0x8000 || iVar3 + 0x8000 < 0 != SCARRY4(iVar3,0x8000)) {
        iVar3 = -0x8000;
      }
      iVar9 = (int)((long)sVar5 * 0x400) + iVar6;
      uVar4 = 0x7fff;
      if (iVar2 < 0x3fffc00) {
        uVar4 = (short)iVar3;
      }
      uVar7 = uVar7 - 1;
      *param_2 = uVar4;
      param_2 = param_2 + 1;
    } while (uVar7 != 0);
    *param_1 = iVar10;
    param_1[1] = iVar9;
  }
  return;
}


