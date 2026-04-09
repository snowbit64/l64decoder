// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sphereAABBIntersect
// Entry Point: 00b59664
// Size: 272 bytes
// Signature: undefined __cdecl sphereAABBIntersect(float * param_1, float param_2, float * param_3, float * param_4)


/* MathUtil::sphereAABBIntersect(float const*, float, float const*, float const*) */

bool MathUtil::sphereAABBIntersect(float *param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = -param_2;
  fVar1 = *param_1 - *param_3;
  if (0.0 <= fVar1) {
    fVar3 = *param_1 - *param_4;
    fVar1 = 0.0;
    if (0.0 < fVar3) {
      if (param_2 < fVar3) {
        return false;
      }
      fVar1 = (float)NEON_fmadd(fVar3,fVar3,0);
    }
  }
  else {
    if (fVar1 < fVar2) {
      return false;
    }
    fVar1 = (float)NEON_fmadd(fVar1,fVar1,0);
  }
  fVar3 = param_1[1] - param_3[1];
  if (0.0 <= fVar3) {
    fVar3 = param_1[1] - param_4[1];
    if (0.0 < fVar3) {
      if (param_2 < fVar3) {
        return false;
      }
      fVar1 = (float)NEON_fmadd(fVar3,fVar3,fVar1);
    }
  }
  else {
    if (fVar3 < fVar2) {
      return false;
    }
    fVar1 = (float)NEON_fmadd(fVar3,fVar3,fVar1);
  }
  fVar3 = param_1[2] - param_3[2];
  if (0.0 <= fVar3) {
    fVar2 = param_1[2] - param_4[2];
    if (0.0 < fVar2) {
      if (param_2 < fVar2) {
        return false;
      }
      fVar1 = (float)NEON_fmadd(fVar2,fVar2,fVar1);
    }
  }
  else {
    if (fVar3 < fVar2) {
      return false;
    }
    fVar1 = (float)NEON_fmadd(fVar3,fVar3,fVar1);
  }
  return fVar1 <= param_2 * param_2;
}


