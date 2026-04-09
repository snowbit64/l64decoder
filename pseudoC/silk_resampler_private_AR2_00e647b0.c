// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_resampler_private_AR2
// Entry Point: 00e647b0
// Size: 84 bytes
// Signature: undefined silk_resampler_private_AR2(void)


void silk_resampler_private_AR2
               (int *param_1,int *param_2,short *param_3,short *param_4,uint param_5)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  
  if (0 < (int)param_5) {
    sVar1 = *param_4;
    uVar3 = (ulong)param_5;
    sVar2 = param_4[1];
    iVar4 = *param_1;
    do {
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + *param_3 * 0x100;
      lVar5 = (long)(iVar4 * 4);
      *param_2 = iVar4;
      iVar4 = param_1[1] + (int)((ulong)(lVar5 * sVar1) >> 0x10);
      *param_1 = iVar4;
      param_1[1] = (int)((ulong)(sVar2 * lVar5) >> 0x10);
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}


