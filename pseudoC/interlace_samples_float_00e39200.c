// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: interlace_samples_float
// Entry Point: 00e39200
// Size: 76 bytes
// Signature: undefined __cdecl interlace_samples_float(float * param_1, float * param_2, uint param_3, uint param_4)


/* SoLoud::interlace_samples_float(float const*, float*, unsigned int, unsigned int) */

void SoLoud::interlace_samples_float(float *param_1,float *param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 != 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = uVar3;
    do {
      for (; uVar3 < param_4 * param_3; uVar3 = uVar3 + param_4) {
        uVar1 = (ulong)uVar2;
        uVar2 = uVar2 + 1;
        param_2[uVar3] = param_1[uVar1];
      }
      uVar3 = uVar4 + 1;
      uVar4 = uVar3;
    } while (uVar3 != param_4);
  }
  return;
}


