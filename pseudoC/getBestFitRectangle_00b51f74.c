// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBestFitRectangle
// Entry Point: 00b51f74
// Size: 348 bytes
// Signature: undefined __cdecl getBestFitRectangle(float * param_1, uint param_2, float * param_3, float * param_4)


/* ConvexHull2DUtil::getBestFitRectangle(float const*, unsigned int, float*, float (*) [2]) */

void ConvexHull2DUtil::getBestFitRectangle
               (float *param_1,uint param_2,float *param_3,float *param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  float in_s0;
  float in_s1;
  float fVar6;
  float in_s2;
  float in_s3;
  float fVar7;
  float in_s4;
  float in_s5;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_2 != 0) {
    fVar6 = 9.999999e+27;
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      uVar5 = 0;
      uVar2 = 0;
      if (uVar3 != param_2 - 1) {
        uVar2 = (int)uVar1 << 1;
      }
      fVar7 = -9.999999e+27;
      fVar11 = 9.999999e+27;
      fVar9 = param_1[uVar2 | 1] - param_1[(int)uVar3 << 1 | 1];
      fVar8 = param_1[uVar2] - param_1[(uint)((int)uVar3 << 1)];
      fVar10 = (float)NEON_fmadd(fVar8,fVar8,fVar9 * fVar9);
      fVar8 = fVar8 / SQRT(fVar10);
      fVar9 = fVar9 / SQRT(fVar10);
      fVar10 = fVar7;
      fVar12 = fVar11;
      do {
        iVar4 = (int)uVar5;
        uVar3 = uVar5 & 0xffffffff;
        uVar5 = uVar5 + 2;
        fVar14 = (float)NEON_fmadd(param_1[uVar3],fVar8,fVar9 * param_1[iVar4 + 1]);
        fVar13 = (float)NEON_fmadd(param_1[uVar3],fVar9,param_1[iVar4 + 1] * -fVar8);
        if (fVar14 < fVar12) {
          fVar12 = fVar14;
        }
        if (fVar10 < fVar14) {
          fVar10 = fVar14;
        }
        if (fVar13 < fVar11) {
          fVar11 = fVar13;
        }
        if (fVar7 < fVar13) {
          fVar7 = fVar13;
        }
      } while ((ulong)param_2 * 2 - uVar5 != 0);
      fVar13 = (fVar10 - fVar12) * (fVar7 - fVar11);
      if (fVar13 < fVar6) {
        in_s0 = fVar7;
        in_s1 = fVar11;
        in_s2 = fVar9;
        in_s3 = fVar12;
        in_s4 = fVar8;
        in_s5 = fVar10;
        fVar6 = fVar13;
      }
      uVar3 = uVar1;
    } while (uVar1 != param_2);
  }
  fVar6 = (float)NEON_fmadd(in_s3,in_s4,in_s1 * in_s2);
  fVar7 = (float)NEON_fmadd(in_s3,in_s2,in_s1 * -in_s4);
  *param_3 = fVar6;
  param_3[1] = fVar7;
  *param_4 = (in_s5 - in_s3) * in_s4;
  param_4[1] = (in_s5 - in_s3) * in_s2;
  param_4[2] = (in_s0 - in_s1) * in_s2;
  param_4[3] = (in_s0 - in_s1) * -in_s4;
  return;
}


