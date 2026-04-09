// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_k2a
// Entry Point: 00e8ad28
// Size: 156 bytes
// Signature: undefined silk_k2a(void)


void silk_k2a(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (0 < (int)param_3) {
    lVar5 = -4;
    uVar6 = 0;
    do {
      sVar4 = *(short *)(param_2 + uVar6 * 2);
      uVar1 = uVar6 + 1;
      if (uVar6 != 0) {
        uVar7 = 0;
        lVar8 = lVar5;
        do {
          lVar9 = uVar7 * 4;
          iVar2 = *(int *)(param_1 + lVar8);
          uVar7 = uVar7 + 1;
          iVar3 = *(int *)(param_1 + lVar9);
          *(int *)(param_1 + lVar9) =
               iVar3 + (int)((ulong)((long)(iVar2 << 1) * (long)sVar4) >> 0x10);
          *(int *)(param_1 + lVar8) =
               iVar2 + (int)((ulong)((long)(iVar3 << 1) * (long)sVar4) >> 0x10);
          lVar8 = lVar8 + -4;
        } while (uVar7 < (uVar1 >> 1 & 0x7fffffff));
      }
      lVar5 = lVar5 + 4;
      *(int *)(param_1 + uVar6 * 4) = sVar4 * -0x200;
      uVar6 = uVar1;
    } while (uVar1 != param_3);
  }
  return;
}


