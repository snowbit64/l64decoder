// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtDistancePtSegSqr2D
// Entry Point: 00dcd9e0
// Size: 152 bytes
// Signature: undefined __cdecl dtDistancePtSegSqr2D(float * param_1, float * param_2, float * param_3, float * param_4)


/* dtDistancePtSegSqr2D(float const*, float const*, float const*, float&) */

undefined4 dtDistancePtSegSqr2D(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_3[2] - param_2[2];
  fVar1 = *param_3 - *param_2;
  fVar5 = (float)NEON_fmadd(fVar1,fVar1,fVar3 * fVar3);
  fVar4 = (float)NEON_fmadd(fVar1,*param_1 - *param_2,fVar3 * (param_1[2] - param_2[2]));
  if (fVar5 <= 0.0) {
    fVar5 = 1.0;
  }
  fVar4 = fVar4 / fVar5;
  *param_4 = fVar4;
  fVar5 = 0.0;
  if ((fVar4 < 0.0) || (fVar5 = 1.0, 1.0 < fVar4)) {
    fVar4 = fVar5;
    *param_4 = fVar4;
  }
  fVar3 = (float)NEON_fmadd(fVar4,fVar3,param_2[2]);
  fVar1 = (float)NEON_fmadd(fVar4,fVar1,*param_2);
  uVar2 = NEON_fmadd(fVar1 - *param_1,fVar1 - *param_1,(fVar3 - param_1[2]) * (fVar3 - param_1[2]));
  return uVar2;
}


