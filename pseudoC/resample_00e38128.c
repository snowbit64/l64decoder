// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resample
// Entry Point: 00e38128
// Size: 88 bytes
// Signature: undefined __cdecl resample(float * param_1, float * param_2, float * param_3, int param_4, int param_5, float param_6, float param_7, int param_8)


/* SoLoud::resample(float*, float*, float*, int, int, float, float, int) */

float SoLoud::resample(float *param_1,float *param_2,float *param_3,int param_4,int param_5,
                      float param_6,float param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  ulong uVar5;
  
  if (0 < param_5) {
    uVar5 = (ulong)(uint)param_5;
    do {
      iVar2 = param_4 >> 0x14;
      bVar4 = 0xfffff < (uint)param_4;
      uVar1 = param_4 & 0xfffff;
      param_4 = param_4 + param_8;
      pfVar3 = param_2 + 0x1ff;
      if (bVar4) {
        pfVar3 = param_1 + iVar2 + -1;
      }
      uVar5 = uVar5 - 1;
      param_6 = (float)NEON_fmadd((param_1[iVar2] - *pfVar3) * (float)uVar1,0x35800000,*pfVar3);
      *param_3 = param_6;
      param_3 = param_3 + 1;
    } while (uVar5 != 0);
  }
  return param_6;
}


