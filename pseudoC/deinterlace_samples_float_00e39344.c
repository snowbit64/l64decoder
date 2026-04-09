// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinterlace_samples_float
// Entry Point: 00e39344
// Size: 88 bytes
// Signature: undefined __cdecl deinterlace_samples_float(float * param_1, float * param_2, uint param_3, uint param_4)


/* SoLoud::deinterlace_samples_float(float const*, float*, unsigned int, unsigned int) */

void SoLoud::deinterlace_samples_float(float *param_1,float *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_4 != 0) {
    iVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (uVar4 < param_3) {
        iVar5 = 0;
        do {
          uVar1 = iVar2 + iVar5;
          iVar5 = iVar5 + param_4;
          param_2[uVar3] = param_1[uVar1];
          uVar3 = uVar3 + 1;
        } while (uVar4 + iVar5 < param_3);
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 2;
    } while (uVar4 != param_4);
  }
  return;
}


