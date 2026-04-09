// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_pointTestXZ
// Entry Point: 00eb4fa8
// Size: 96 bytes
// Signature: undefined __cdecl fm_pointTestXZ(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_pointTestXZ(float const*, float const*, float const*) */

undefined8 FLOAT_MATH::fm_pointTestXZ(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[2];
  fVar3 = param_1[2];
  fVar2 = param_3[2];
  if (((fVar1 <= fVar3 && fVar3 < fVar2) || (fVar2 <= fVar3 && fVar3 < fVar1)) &&
     (*param_1 < *param_2 + ((fVar3 - fVar1) * (*param_3 - *param_2)) / (fVar2 - fVar1))) {
    return 1;
  }
  return 0;
}


