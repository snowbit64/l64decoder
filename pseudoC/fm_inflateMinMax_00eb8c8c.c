// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_inflateMinMax
// Entry Point: 00eb8c8c
// Size: 108 bytes
// Signature: undefined __cdecl fm_inflateMinMax(float * param_1, float * param_2, float param_3)


/* FLOAT_MATH::fm_inflateMinMax(float*, float*, float) */

void FLOAT_MATH::fm_inflateMinMax(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar1 = param_1[1] - param_2[1];
  fVar3 = *param_1 - *param_2;
  uVar2 = NEON_fmadd(fVar3,fVar3,fVar1 * fVar1);
  fVar1 = param_1[2] - param_2[2];
  fVar1 = (float)NEON_fmadd(fVar1,fVar1,uVar2);
  fVar1 = SQRT(fVar1) * 0.5 * param_3;
  *param_1 = *param_1 - fVar1;
  param_1[1] = param_1[1] - fVar1;
  param_1[2] = param_1[2] - fVar1;
  *(ulong *)param_2 =
       CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) + fVar1,
                (float)*(undefined8 *)param_2 + fVar1);
  param_2[2] = fVar1 + param_2[2];
  return;
}


