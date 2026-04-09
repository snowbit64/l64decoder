// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: interlace_samples_s16
// Entry Point: 00e392e4
// Size: 96 bytes
// Signature: undefined __cdecl interlace_samples_s16(float * param_1, short * param_2, uint param_3, uint param_4)


/* SoLoud::interlace_samples_s16(float const*, short*, unsigned int, unsigned int) */

void SoLoud::interlace_samples_s16(float *param_1,short *param_2,uint param_3,uint param_4)

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
        param_2[uVar3] = (short)(int)(param_1[uVar1] * 32767.0);
      }
      uVar3 = uVar4 + 1;
      uVar4 = uVar3;
    } while (uVar3 != param_4);
  }
  return;
}


