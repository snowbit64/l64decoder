// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: normalise_bands
// Entry Point: 00e71c44
// Size: 400 bytes
// Signature: undefined normalise_bands(void)


void normalise_bands(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6,
                    int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((int)param_5 < 2) {
    param_5 = 1;
  }
  uVar4 = *(int *)(param_1 + 0x28) * param_7;
  uVar8 = 0;
  lVar9 = *(long *)(param_1 + 0x18);
  if ((int)param_6 < 2) {
    param_6 = 1;
  }
  do {
    uVar7 = 0;
    do {
      iVar3 = *(int *)(param_4 + (long)((int)uVar7 + *(int *)(param_1 + 8) * (int)uVar8) * 4);
      iVar1 = 0;
      if (0 < iVar3) {
        iVar1 = 0x1f - (int)LZCOUNT(iVar3);
      }
      uVar2 = iVar3 >> (iVar1 - 0xdU & 0x1f);
      if (iVar1 - 0xdU == 0 || iVar1 < 0xd) {
        uVar2 = iVar3 << (ulong)(0xdU - iVar1 & 0x1f);
      }
      sVar5 = celt_rcp(-(uVar2 >> 0xf & 1) & 0xfff80000 | (uVar2 & 0xffff) << 3);
      lVar6 = uVar7 * 2;
      uVar7 = uVar7 + 1;
      lVar6 = (long)(*(short *)(lVar9 + lVar6) * param_7);
      if (iVar1 - 0xeU == 0 || iVar1 < 0xe) {
        do {
          *(short *)(param_3 + lVar6 * 2) =
               (short)((uint)((int)(short)(*(int *)(param_2 + lVar6 * 4) <<
                                          (ulong)(0xeU - iVar1 & 0x1f)) * (int)sVar5) >> 0xf);
          lVar6 = lVar6 + 1;
        } while (lVar6 < (long)*(short *)(lVar9 + uVar7 * 2) * (long)param_7);
      }
      else {
        do {
          *(short *)(param_3 + lVar6 * 2) =
               (short)((uint)((int)(short)(*(int *)(param_2 + lVar6 * 4) >> (iVar1 - 0xeU & 0x1f)) *
                             (int)sVar5) >> 0xf);
          lVar6 = lVar6 + 1;
        } while (lVar6 < (long)*(short *)(lVar9 + uVar7 * 2) * (long)param_7);
      }
    } while (uVar7 != param_5);
    uVar8 = uVar8 + 1;
    param_3 = param_3 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1);
    param_2 = param_2 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
  } while (uVar8 != param_6);
  return;
}


