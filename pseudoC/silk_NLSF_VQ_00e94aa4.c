// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NLSF_VQ
// Entry Point: 00e94aa4
// Size: 212 bytes
// Signature: undefined silk_NLSF_VQ(void)


void silk_NLSF_VQ(void *param_1,long param_2,long param_3,long param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  if (0 < (int)param_5) {
    if (param_6 < 2) {
      memset(param_1,0,(ulong)param_5 << 2);
      return;
    }
    uVar7 = 0;
    do {
      iVar9 = 0;
      iVar8 = 0;
      iVar10 = param_6 + 2;
      do {
        uVar2 = iVar10 - 3;
        uVar3 = iVar10 - 4;
        lVar11 = (ulong)uVar2 * 2;
        lVar6 = (ulong)uVar3 * 2;
        iVar10 = iVar10 + -2;
        iVar1 = (int)(short)(*(short *)(param_2 + lVar11) +
                            (ushort)*(byte *)(param_3 + (ulong)uVar2) * -0x80) *
                (int)*(short *)(param_4 + lVar11);
        iVar4 = iVar1 - (iVar9 >> 1);
        iVar9 = (int)(short)(*(short *)(param_2 + lVar6) +
                            (ushort)*(byte *)(param_3 + (ulong)uVar3) * -0x80) *
                (int)*(short *)(param_4 + lVar6);
        iVar5 = iVar9 - (iVar1 >> 1);
        iVar1 = -iVar4;
        if (-1 < iVar4) {
          iVar1 = iVar4;
        }
        iVar4 = -iVar5;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        iVar8 = iVar1 + iVar8 + iVar4;
      } while (3 < iVar10);
      *(int *)((long)param_1 + uVar7 * 4) = iVar8;
      param_3 = param_3 + param_6;
      param_4 = param_4 + (long)param_6 * 2;
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_5);
  }
  return;
}


