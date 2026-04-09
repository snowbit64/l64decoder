// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: maxCurvatureQuadraticBezier
// Entry Point: 007421f0
// Size: 164 bytes
// Signature: undefined __cdecl maxCurvatureQuadraticBezier(Vector2 * param_1)


/* maxCurvatureQuadraticBezier(Vector2 const*) */

float maxCurvatureQuadraticBezier(Vector2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8) - *(float *)param_1;
  fVar1 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 8);
  fVar5 = fVar1 - fVar3;
  fVar6 = fVar4 - fVar2;
  fVar8 = (float)NEON_fnmadd(fVar2,fVar6,-(fVar3 * fVar5));
  fVar9 = (float)NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
  fVar10 = (float)NEON_fmin(fVar8 / fVar9,0x3f800000);
  fVar7 = 0.0;
  if (0.0 <= fVar8 / fVar9) {
    fVar7 = fVar10;
  }
  fVar5 = fVar3 + fVar5 * fVar7;
  fVar7 = fVar2 + fVar6 * fVar7;
  fVar7 = (float)NEON_fmadd(fVar7,fVar7,fVar5 * fVar5);
  if (fVar7 != 0.0) {
    fVar1 = (float)NEON_fmadd(fVar2,fVar1,fVar4 * -fVar3);
    return ABS((fVar1 * 0.5) / (fVar7 * SQRT(fVar7)));
  }
  return INFINITY;
}


