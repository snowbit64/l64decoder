// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e5f914
// Entry Point: 00e5f914
// Size: 156 bytes
// Signature: undefined FUN_00e5f914(void)


void FUN_00e5f914(long param_1,long param_2,long param_3,uint param_4,uint param_5,short *param_6,
                 int param_7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  short *psVar7;
  
  if ((0 < (int)param_5) && (0 < (int)param_4)) {
    uVar4 = 0;
    uVar3 = 0;
    if (param_7 != 0) {
      uVar3 = 48000 / param_7;
    }
    do {
      lVar5 = 0;
      uVar6 = (ulong)param_4;
      psVar7 = param_6;
      do {
        sVar1 = *psVar7;
        psVar7 = (short *)((long)psVar7 +
                          (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1));
        uVar6 = uVar6 - 1;
        iVar2 = (int)sVar1 * (int)sVar1;
        *(short *)(param_3 + lVar5) =
             (short)((uint)((iVar2 * 2 >> 0x10) * (int)*(short *)(param_2 + lVar5) +
                           ((int)(0x7fff0000 - (iVar2 * 2 & 0xffff0000U)) >> 0x10) *
                           (int)*(short *)(param_1 + lVar5)) >> 0xf);
        lVar5 = lVar5 + (ulong)param_5 * 2;
      } while (uVar6 != 0);
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
      param_3 = param_3 + 2;
    } while (uVar4 != param_5);
  }
  return;
}


