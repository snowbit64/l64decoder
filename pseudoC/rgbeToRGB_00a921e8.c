// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rgbeToRGB
// Entry Point: 00a921e8
// Size: 112 bytes
// Signature: undefined __cdecl rgbeToRGB(uchar * param_1, float * param_2)


/* HDRUtil::rgbeToRGB(unsigned char const*, float*) */

void HDRUtil::rgbeToRGB(uchar *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1[3] == 0) {
    fVar1 = 0.0;
    *(undefined8 *)param_2 = 0;
  }
  else {
    fVar1 = ldexpf(1.0,param_1[3] - 0x88);
    fVar2 = (float)NEON_ucvtf((uint)*param_1);
    *param_2 = fVar1 * fVar2;
    fVar2 = (float)NEON_ucvtf((uint)param_1[1]);
    param_2[1] = fVar1 * fVar2;
    fVar2 = (float)NEON_ucvtf((uint)param_1[2]);
    fVar1 = fVar1 * fVar2;
  }
  param_2[2] = fVar1;
  return;
}


