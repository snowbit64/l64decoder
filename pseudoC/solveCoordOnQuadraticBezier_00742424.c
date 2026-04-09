// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveCoordOnQuadraticBezier
// Entry Point: 00742424
// Size: 264 bytes
// Signature: undefined __cdecl solveCoordOnQuadraticBezier(float * param_1, float * param_2, Vector2 * param_3, int param_4, float param_5, float param_6, float param_7)


/* solveCoordOnQuadraticBezier(float*, float*, Vector2 const*, int, float, float, float) */

uint solveCoordOnQuadraticBezier
               (float *param_1,float *param_2,Vector2 *param_3,int param_4,float param_5,
               float param_6,float param_7)

{
  float *pfVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  pfVar1 = (float *)(param_3 + (long)param_4 * 4);
  fVar7 = pfVar1[2];
  fVar5 = fVar7 - *pfVar1;
  fVar9 = pfVar1[4] - fVar7;
  fVar6 = fVar9 - fVar5;
  if (0.0001 <= ABS(fVar9 - fVar5)) {
    uVar8 = NEON_fmadd(fVar7,fVar7,pfVar1[4] * -*pfVar1);
    fVar9 = (float)NEON_fmadd(fVar6,param_5,uVar8);
    if (0.0 < fVar9) {
      fVar10 = (1.0 / fVar6) * (SQRT(fVar9) - fVar5);
      fVar9 = (1.0 / fVar6) * (-fVar5 - SQRT(fVar9));
      fVar7 = fVar10;
      if (fVar10 <= fVar9) {
        fVar7 = fVar9;
        fVar9 = fVar10;
      }
      bVar2 = param_6 < fVar9 && fVar9 < param_7;
      if (bVar2) {
        fVar10 = (float)NEON_fmadd(fVar6,fVar9,fVar5);
        *param_1 = fVar9;
        *param_2 = fVar10;
      }
      uVar3 = (uint)bVar2;
      uVar4 = uVar3;
      if (param_6 < fVar7 && fVar7 < param_7) {
        fVar9 = (float)NEON_fmadd(fVar6,fVar7,fVar5);
        uVar4 = uVar3 + 1;
        param_1[uVar3] = fVar7;
        param_2[uVar3] = fVar9;
      }
      return uVar4;
    }
  }
  else {
    fVar9 = (((param_5 - fVar7) + fVar9) * 0.5) / fVar9;
    if (param_6 < fVar9 && fVar9 < param_7) {
      fVar5 = (float)NEON_fmadd(fVar6,fVar9,fVar5);
      *param_1 = fVar9;
      *param_2 = fVar5;
      return 1;
    }
  }
  return 0;
}


