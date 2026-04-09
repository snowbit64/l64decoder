// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveTangentQuadraticBezier
// Entry Point: 0074290c
// Size: 160 bytes
// Signature: undefined __cdecl solveTangentQuadraticBezier(float * param_1, Vector2 * param_2, Vector2 * param_3)


/* solveTangentQuadraticBezier(float&, Vector2 const*, Vector2 const&) */

undefined4 solveTangentQuadraticBezier(float *param_1,Vector2 *param_2,Vector2 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *(float *)(param_2 + 8) - *(float *)param_2;
  fVar4 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 4);
  fVar5 = (*(float *)(param_2 + 0x10) - *(float *)(param_2 + 8)) - fVar2;
  fVar6 = (*(float *)(param_2 + 0x14) - *(float *)(param_2 + 0xc)) - fVar4;
  fVar3 = (float)NEON_fmadd(*(float *)param_3,fVar6,fVar5 * -*(float *)(param_3 + 4));
  if (ABS(fVar3) < 0.0001) {
    return 0;
  }
  fVar4 = -fVar4;
  uVar1 = 0;
  fVar5 = (float)NEON_fmadd(fVar2,fVar6,fVar5 * fVar4);
  if (0.0 < fVar5 / fVar3) {
    fVar2 = (float)NEON_fmadd(fVar2,*(float *)(param_3 + 4),*(float *)param_3 * fVar4);
    fVar2 = fVar2 / fVar3;
    if (0.0 <= fVar2 && fVar2 < 1.0 || 0.0 <= fVar2 && fVar2 == 1.0) {
      uVar1 = 1;
      *param_1 = fVar2;
    }
  }
  return uVar1;
}


