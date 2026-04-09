// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveAlphaCosThetaPlusBetaSinThetaPlusREqualsZero
// Entry Point: 00a24620
// Size: 184 bytes
// Signature: undefined __cdecl solveAlphaCosThetaPlusBetaSinThetaPlusREqualsZero(float param_1, float param_2, float param_3, float * param_4, float * param_5)


/* ReflectionRenderController::solveAlphaCosThetaPlusBetaSinThetaPlusREqualsZero(float, float,
   float, float&, float&) */

bool ReflectionRenderController::solveAlphaCosThetaPlusBetaSinThetaPlusREqualsZero
               (float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2 / param_3;
  fVar2 = param_1 / param_3;
  fVar1 = (float)NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
  fVar1 = SQRT(fVar1);
  fVar2 = atan2f(fVar3,fVar2);
  if ((fVar1 <= -1.001) || (1.001 <= fVar1)) {
    fVar3 = acosf(-1.0 / fVar1);
    *param_4 = fVar2 + fVar3;
    *param_5 = fVar2 - fVar3;
  }
  return fVar1 <= -1.001 || 1.001 <= fVar1;
}


