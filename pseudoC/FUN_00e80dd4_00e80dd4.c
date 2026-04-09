// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e80dd4
// Entry Point: 00e80dd4
// Size: 208 bytes
// Signature: undefined FUN_00e80dd4(void)


void FUN_00e80dd4(long param_1,long param_2,long param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  if ((0 < (int)param_5) && (0 < (int)param_4)) {
    uVar7 = (uint)LZCOUNT(param_6 / 0xc);
    uVar6 = 0;
    do {
      lVar4 = 0;
      iVar8 = *(int *)(param_3 + uVar6 * 8);
      uVar5 = (ulong)param_4;
      do {
        iVar3 = *(short *)(param_1 + lVar4) * 0x4000 - iVar8;
        iVar1 = iVar3 + 0x2000 >> 0xe;
        if (iVar1 < -0x7ffe) {
          iVar1 = -0x7fff;
        }
        uVar2 = 0x7fff;
        if (iVar3 < 0x1fffe000) {
          uVar2 = (short)iVar1;
        }
        uVar5 = uVar5 - 1;
        iVar8 = (iVar3 + ((int)(0x80000000U >> (ulong)(uVar7 & 0x1f)) >> 1) >> (0x1f - uVar7 & 0x1f)
                ) + iVar8;
        *(undefined2 *)(param_2 + lVar4) = uVar2;
        lVar4 = lVar4 + (ulong)param_5 * 2;
      } while (uVar5 != 0);
      uVar5 = uVar6 + 1;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      *(int *)(param_3 + uVar6 * 8) = iVar8;
      uVar6 = uVar5;
    } while (uVar5 != param_5);
  }
  return;
}


