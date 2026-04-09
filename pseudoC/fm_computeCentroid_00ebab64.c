// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeCentroid
// Entry Point: 00ebab64
// Size: 124 bytes
// Signature: undefined __cdecl fm_computeCentroid(uint param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_computeCentroid(unsigned int, float const*, float*) */

bool FLOAT_MATH::fm_computeCentroid(uint param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 != 0) {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    *(undefined8 *)param_3 = 0;
    param_3[2] = 0.0;
    uVar2 = param_1;
    do {
      uVar2 = uVar2 - 1;
      fVar5 = *param_2 + fVar5;
      *param_3 = fVar5;
      fVar4 = param_2[1] + fVar4;
      param_3[1] = fVar4;
      pfVar1 = param_2 + 2;
      param_2 = param_2 + 3;
      fVar3 = *pfVar1 + fVar3;
      param_3[2] = fVar3;
    } while (uVar2 != 0);
    fVar6 = 1.0 / (float)(ulong)param_1;
    *param_3 = fVar6 * fVar5;
    param_3[1] = fVar6 * fVar4;
    param_3[2] = fVar6 * fVar3;
  }
  return param_1 != 0;
}


