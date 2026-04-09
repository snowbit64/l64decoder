// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_fft_c
// Entry Point: 00e7c4cc
// Size: 92 bytes
// Signature: undefined opus_fft_c(void)


void opus_fft_c(uint *param_1,long param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  ulong uVar6;
  short *psVar7;
  
  uVar6 = (ulong)*param_1;
  if (0 < (int)*param_1) {
    uVar4 = param_1[2];
    param_2 = param_2 + 4;
    sVar5 = *(short *)(param_1 + 1);
    psVar7 = *(short **)(param_1 + 0xc);
    do {
      piVar1 = (int *)(param_2 + -4);
      iVar3 = *(int *)(param_2 + 4);
      param_2 = param_2 + 8;
      uVar6 = uVar6 - 1;
      piVar2 = (int *)(param_3 + (long)*psVar7 * 8);
      *piVar2 = (int)((ulong)((long)*piVar1 * (long)sVar5) >> 0x10) >> (uVar4 - 1 & 0x1f);
      piVar2[1] = (int)((ulong)((long)iVar3 * (long)sVar5) >> 0x10) >> (uVar4 - 1 & 0x1f);
      psVar7 = psVar7 + 1;
    } while (uVar6 != 0);
  }
  opus_fft_impl(param_1,param_3);
  return;
}


