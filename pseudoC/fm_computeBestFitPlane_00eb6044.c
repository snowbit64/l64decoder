// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitPlane
// Entry Point: 00eb6044
// Size: 484 bytes
// Signature: undefined __cdecl fm_computeBestFitPlane(uint param_1, float * param_2, uint param_3, float * param_4, uint param_5, float * param_6, float * param_7)


/* FLOAT_MATH::fm_computeBestFitPlane(unsigned int, float const*, unsigned int, float const*,
   unsigned int, float*, float*) */

undefined8
FLOAT_MATH::fm_computeBestFitPlane
          (uint param_1,float *param_2,uint param_3,float *param_4,uint param_5,float *param_6,
          float *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  
  lVar3 = tpidr_el0;
  fVar8 = 0.0;
  fVar7 = 0.0;
  fVar9 = 0.0;
  fVar11 = 0.0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_1 != 0) {
    fVar7 = 0.0;
    fVar8 = 0.0;
    pfVar5 = param_2 + 2;
    pfVar6 = param_4;
    fVar16 = 0.0;
    fVar10 = 0.0;
    uVar2 = param_1;
    do {
      fVar11 = fVar10;
      fVar9 = fVar16;
      if (pfVar6 == (float *)0x0) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = *pfVar6;
        pfVar6 = (float *)((long)pfVar6 + (ulong)param_5);
      }
      puVar1 = (undefined8 *)(pfVar5 + -2);
      fVar16 = *pfVar5;
      fVar7 = fVar7 + fVar12;
      pfVar5 = (float *)((long)pfVar5 + (ulong)param_3);
      uVar2 = uVar2 - 1;
      fVar13 = (float)*puVar1;
      fVar14 = (float)((ulong)*puVar1 >> 0x20);
      fVar8 = (float)NEON_fmadd(fVar16,fVar12,fVar8);
      fVar16 = fVar9 + fVar13 * fVar12;
      fVar10 = fVar11 + fVar14 * fVar12;
    } while (uVar2 != 0);
    fVar9 = fVar9 + fVar12 * fVar13;
    fVar11 = fVar11 + fVar12 * fVar14;
  }
  fVar7 = 1.0 / fVar7;
  fVar9 = fVar9 * fVar7;
  fVar11 = fVar11 * fVar7;
  fVar8 = fVar8 * fVar7;
  fVar16 = 0.0;
  fVar10 = 0.0;
  fVar12 = 0.0;
  *(ulong *)param_7 = CONCAT44(fVar11,fVar9);
  param_7[2] = fVar8;
  if (param_1 != 0) {
    fVar16 = 0.0;
    pfVar5 = param_2 + 2;
    fVar13 = 0.0;
    fVar14 = 0.0;
    do {
      fVar12 = fVar14;
      fVar10 = fVar13;
      if (param_4 == (float *)0x0) {
        fVar13 = 1.0;
      }
      else {
        fVar13 = *param_4;
        param_4 = (float *)((long)param_4 + (ulong)param_5);
      }
      puVar1 = (undefined8 *)(pfVar5 + -2);
      fVar14 = *pfVar5;
      param_1 = param_1 - 1;
      pfVar5 = (float *)((long)pfVar5 + (ulong)param_3);
      fVar15 = fVar13 * (fVar14 - fVar8);
      uVar17 = NEON_rev64(CONCAT44(((float)((ulong)*puVar1 >> 0x20) - fVar11) * fVar13,
                                   ((float)*puVar1 - fVar9) * fVar13),4);
      fVar16 = (float)NEON_fmadd(fVar15,fVar15,fVar16);
      fVar18 = (float)((ulong)uVar17 >> 0x20);
      fVar13 = fVar10 + (float)uVar17 * fVar15;
      fVar14 = fVar12 + fVar18 * fVar15;
    } while (param_1 != 0);
    fVar10 = fVar10 + fVar15 * (float)uVar17;
    fVar12 = fVar12 + fVar15 * fVar18;
  }
  Eigen<float>::DecrSortEigenStuff();
  param_6[1] = fVar10 * fVar7;
  *param_6 = fVar12 * fVar7;
  param_6[2] = fVar7 * fVar16;
  fVar7 = (float)NEON_fmadd(fVar7 * fVar16,fVar8,fVar10 * fVar7 * fVar11 + fVar12 * fVar7 * fVar9);
  param_6[3] = 0.0 - fVar7;
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


