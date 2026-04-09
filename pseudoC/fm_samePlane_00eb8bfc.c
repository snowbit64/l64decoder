// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_samePlane
// Entry Point: 00eb8bfc
// Size: 108 bytes
// Signature: undefined __cdecl fm_samePlane(float * param_1, float * param_2, float param_3, float param_4, bool param_5)


/* FLOAT_MATH::fm_samePlane(float const*, float const*, float, float, bool) */

bool FLOAT_MATH::fm_samePlane
               (float *param_1,float *param_2,float param_3,float param_4,bool param_5)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  if (ABS(param_1[3] - param_2[3]) < param_4) {
    uVar1 = NEON_fmadd(*param_1,*param_2,param_1[1] * param_2[1]);
    fVar2 = (float)NEON_fmadd(param_1[2],param_2[2],uVar1);
    fVar3 = ABS(fVar2);
    if (!param_5) {
      fVar3 = fVar2;
    }
    return 1.0 - param_3 <= fVar3 && fVar3 <= param_3 + 1.0;
  }
  return false;
}


