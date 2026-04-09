// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: curvatureQuadraticBezier
// Entry Point: 00742178
// Size: 120 bytes
// Signature: undefined __cdecl curvatureQuadraticBezier(float param_1, Vector2 * param_2)


/* curvatureQuadraticBezier(float, Vector2 const*) */

float curvatureQuadraticBezier(float param_1,Vector2 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14) - *(float *)(param_2 + 0xc);
  fVar3 = *(float *)(param_2 + 8) - *(float *)param_2;
  fVar5 = *(float *)(param_2 + 0x10) - *(float *)(param_2 + 8);
  fVar6 = fVar4 + (fVar2 - fVar4) * param_1;
  fVar1 = fVar3 + (fVar5 - fVar3) * param_1;
  fVar1 = (float)NEON_fmadd(fVar1,fVar1,fVar6 * fVar6);
  if (fVar1 != 0.0) {
    fVar2 = (float)NEON_fmadd(fVar3,fVar2,fVar5 * -fVar4);
    return (fVar2 * 0.5) / (fVar1 * SQRT(fVar1));
  }
  return INFINITY;
}


