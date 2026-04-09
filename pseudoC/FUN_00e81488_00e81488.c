// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e81488
// Entry Point: 00e81488
// Size: 300 bytes
// Signature: undefined FUN_00e81488(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void FUN_00e81488(long param_1,long param_2,short param_3,short param_4,int param_5,uint param_6,
                 uint param_7,short *param_8,int param_9)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = 0;
  if (param_9 != 0) {
    uVar5 = 48000 / param_9;
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = param_5 / (int)uVar5;
  }
  uVar7 = (ulong)uVar6;
  if ((int)uVar6 < 1) {
    uVar7 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    lVar8 = 0;
    uVar10 = uVar7;
    do {
      sVar3 = *param_8;
      psVar1 = (short *)(param_1 + lVar8);
      param_8 = (short *)((long)param_8 +
                         (-(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1));
      uVar10 = uVar10 - 1;
      iVar4 = (int)sVar3 * (int)sVar3;
      psVar2 = (short *)(param_2 + lVar8);
      lVar8 = lVar8 + (-(ulong)(param_7 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_7 << 1);
      sVar3 = (short)((((iVar4 * 2 >> 0x10) * (int)(short)(0x7fff - param_4) +
                       ((int)(0x7fff0000 - (iVar4 * 2 & 0xffff0000U)) >> 0x10) *
                       (int)(short)(0x7fff - param_3)) * 2 >> 0x10) *
                      ((uint)((int)*psVar1 - (int)psVar1[1]) >> 1) >> 0xf);
      *psVar2 = *psVar2 - sVar3;
      psVar2[1] = psVar2[1] + sVar3;
    } while (uVar10 != 0);
    if ((int)param_6 <= (int)uVar6) {
      return;
    }
  }
  lVar9 = param_6 - uVar7;
  lVar8 = (long)(int)param_7 * uVar7 * 2;
  do {
    psVar1 = (short *)(param_1 + lVar8);
    psVar2 = (short *)(param_2 + lVar8);
    lVar8 = lVar8 + (-(ulong)(param_7 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_7 << 1);
    lVar9 = lVar9 + -1;
    sVar3 = (short)(((uint)((int)*psVar1 - (int)psVar1[1]) >> 1) * (int)(short)(0x7fff - param_4) >>
                   0xf);
    *psVar2 = *psVar2 - sVar3;
    psVar2[1] = psVar2[1] + sVar3;
  } while (lVar9 != 0);
  return;
}


