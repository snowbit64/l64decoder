// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cartesianToPolar
// Entry Point: 00b59030
// Size: 280 bytes
// Signature: undefined __cdecl cartesianToPolar(Vector3 * param_1, float * param_2, float * param_3)


/* MathUtil::cartesianToPolar(Vector3 const&, float&, float&) */

void MathUtil::cartesianToPolar(Vector3 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)param_1;
  fVar1 = *(float *)(param_1 + 4);
  uVar4 = NEON_fmadd(fVar3,fVar3,fVar1 * fVar1);
  fVar2 = *(float *)(param_1 + 8);
  fVar6 = (float)NEON_fmadd(fVar2,fVar2,uVar4);
  fVar5 = 1.0;
  if (1e-06 < fVar6) {
    fVar5 = 1.0 / SQRT(fVar6);
  }
  fVar3 = fVar3 * fVar5;
  fVar2 = fVar2 * fVar5;
  fVar1 = acosf(fVar1 * fVar5);
  fVar5 = (float)NEON_fmadd(fVar3,fVar3,fVar2 * fVar2);
  *param_2 = fVar1;
  fVar3 = fVar3 * (1.0 / SQRT(fVar5));
  fVar2 = fVar2 * (1.0 / SQRT(fVar5));
  if ((fVar3 < 0.0) || (fVar2 < 0.0)) {
    if ((0.0 <= fVar3) || (fVar2 < 0.0)) {
      if ((0.0 <= fVar3) || (0.0 <= fVar2)) {
        fVar3 = asinf(-fVar2);
        fVar1 = 1.570796;
      }
      else {
        fVar3 = asinf(-fVar3);
        fVar1 = 3.141593;
      }
    }
    else {
      fVar3 = asinf(fVar2);
      fVar1 = 4.712389;
    }
    fVar3 = fVar3 + fVar1;
  }
  else {
    fVar3 = asinf(fVar3);
  }
  *param_3 = fVar3;
  return;
}


