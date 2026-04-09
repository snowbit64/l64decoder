// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: arcLengthQuadraticBezier
// Entry Point: 00742294
// Size: 312 bytes
// Signature: undefined __cdecl arcLengthQuadraticBezier(Vector2 * param_1, float param_2, float param_3)


/* arcLengthQuadraticBezier(Vector2 const*, float, float) */

float arcLengthQuadraticBezier(Vector2 *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8) - *(float *)param_1;
  fVar9 = (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0xc)) - fVar5;
  fVar8 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 8)) - fVar2;
  fVar1 = (float)NEON_fmadd(fVar8,fVar8,fVar9 * fVar9);
  if (0.0001 <= fVar1) {
    fVar8 = (float)NEON_fmadd(fVar2,fVar8,fVar5 * fVar9);
    uVar3 = NEON_fmadd(fVar2,fVar2,fVar5 * fVar5);
    fVar7 = (float)NEON_fmadd(fVar1,param_3,fVar8);
    uVar4 = NEON_fmadd(fVar1,param_2,fVar8 + fVar8);
    uVar6 = NEON_fmadd(fVar1,param_3,fVar8 + fVar8);
    fVar5 = (float)NEON_fmadd(param_2,uVar4,uVar3);
    fVar9 = (float)NEON_fmadd(param_3,uVar6,uVar3);
    fVar2 = (float)NEON_fmadd(fVar1,param_2,fVar8);
    fVar8 = (float)NEON_fmadd(fVar1,uVar3,fVar8 * -fVar8);
    fVar5 = (fVar7 * SQRT(fVar9)) / fVar1 - (fVar2 * SQRT(fVar5)) / fVar1;
    if (0.0001 < fVar8) {
      fVar9 = 1.0 / (fVar1 * SQRT(fVar1));
      fVar1 = asinhf(fVar2 * (1.0 / SQRT(fVar8)));
      fVar2 = asinhf(fVar7 * (1.0 / SQRT(fVar8)));
      fVar5 = fVar5 + (fVar9 * fVar8 * fVar2 - fVar9 * fVar8 * fVar1);
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x10) - *(float *)param_1;
    fVar2 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 4);
    fVar1 = (float)NEON_fmadd(fVar2,fVar2,fVar1 * fVar1);
    fVar5 = (param_3 - param_2) * SQRT(fVar1);
  }
  return fVar5;
}


