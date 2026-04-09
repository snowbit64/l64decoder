// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_apply_sine_window
// Entry Point: 00e8a840
// Size: 272 bytes
// Signature: undefined silk_apply_sine_window(void)


void silk_apply_sine_window(long param_1,long param_2,int param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  short *psVar7;
  undefined2 *puVar8;
  
  sVar2 = *(short *)(&DAT_00568f24 + (long)((int)param_4 >> 2) * 2);
  iVar3 = 0x10000;
  iVar5 = ((int)param_4 >> 4) + ((int)sVar2 * (int)-sVar2 >> 0x11) + 0x10000;
  if (param_3 == 1) {
    iVar3 = 0;
    iVar5 = (int)sVar2 + ((int)param_4 >> 3);
  }
  if (0 < (int)param_4) {
    uVar4 = 0;
    lVar6 = (long)(short)((uint)((int)sVar2 * (int)-sVar2) >> 0x10);
    psVar7 = (short *)(param_2 + 4);
    puVar8 = (undefined2 *)(param_1 + 4);
    do {
      uVar4 = uVar4 + 4;
      puVar8[-2] = (short)((uint)((int)psVar7[-2] * (iVar5 + iVar3 >> 1)) >> 0x10);
      iVar3 = (iVar5 * 2 - iVar3) + (int)((ulong)(lVar6 * iVar5) >> 0x10);
      if (0xfffe < iVar3) {
        iVar3 = 0xffff;
      }
      iVar3 = iVar3 + 1;
      puVar8[-1] = (short)((uint)(psVar7[-1] * iVar5) >> 0x10);
      *puVar8 = (short)((uint)((int)*psVar7 * (iVar3 + iVar5 >> 1)) >> 0x10);
      psVar1 = psVar7 + 1;
      psVar7 = psVar7 + 4;
      iVar5 = (iVar3 * 2 - iVar5) + (int)((ulong)(lVar6 * iVar3) >> 0x10);
      if (0xffff < iVar5) {
        iVar5 = 0x10000;
      }
      puVar8[1] = (short)((uint)(*psVar1 * iVar3) >> 0x10);
      puVar8 = puVar8 + 4;
    } while (uVar4 < param_4);
  }
  return;
}


