// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitPlane
// Entry Point: 00ebe0e0
// Size: 472 bytes
// Signature: undefined __cdecl fm_computeBestFitPlane(uint param_1, double * param_2, uint param_3, double * param_4, uint param_5, double * param_6, double * param_7)


/* FLOAT_MATH::fm_computeBestFitPlane(unsigned int, double const*, unsigned int, double const*,
   unsigned int, double*, double*) */

undefined8
FLOAT_MATH::fm_computeBestFitPlane
          (uint param_1,double *param_2,uint param_3,double *param_4,uint param_5,double *param_6,
          double *param_7)

{
  double *pdVar1;
  uint uVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar4 = tpidr_el0;
  dVar10 = 0.0;
  dVar11 = 0.0;
  dVar12 = 0.0;
  dVar9 = 0.0;
  lVar5 = *(long *)(lVar4 + 0x28);
  if (param_1 != 0) {
    dVar9 = 0.0;
    dVar12 = 0.0;
    dVar11 = 0.0;
    dVar10 = 0.0;
    pdVar6 = param_2 + 2;
    pdVar7 = param_4;
    uVar2 = param_1;
    do {
      if (pdVar7 == (double *)0x0) {
        dVar14 = 1.0;
      }
      else {
        dVar14 = *pdVar7;
        pdVar7 = (double *)((long)pdVar7 + (ulong)param_5);
      }
      pdVar1 = pdVar6 + -2;
      pdVar3 = pdVar6 + -1;
      dVar9 = dVar9 + dVar14;
      uVar2 = uVar2 - 1;
      dVar18 = *pdVar6;
      pdVar6 = (double *)((long)pdVar6 + (ulong)param_3);
      dVar12 = (double)NEON_fmadd(*pdVar1,dVar14,dVar12);
      dVar11 = (double)NEON_fmadd(*pdVar3,dVar14,dVar11);
      dVar10 = (double)NEON_fmadd(dVar18,dVar14,dVar10);
    } while (uVar2 != 0);
  }
  dVar9 = 1.0 / dVar9;
  dVar15 = 0.0;
  dVar12 = dVar12 * dVar9;
  dVar11 = dVar11 * dVar9;
  dVar10 = dVar10 * dVar9;
  dVar18 = 0.0;
  dVar14 = 0.0;
  *param_7 = dVar12;
  param_7[1] = dVar11;
  param_7[2] = dVar10;
  if (param_1 != 0) {
    dVar14 = 0.0;
    dVar18 = 0.0;
    uVar13 = 0;
    dVar15 = 0.0;
    uVar16 = 0;
    uVar8 = 0;
    pdVar6 = param_2 + 2;
    do {
      if (param_4 == (double *)0x0) {
        dVar17 = 1.0;
      }
      else {
        dVar17 = *param_4;
        param_4 = (double *)((long)param_4 + (ulong)param_5);
      }
      pdVar7 = pdVar6 + -2;
      pdVar1 = pdVar6 + -1;
      param_1 = param_1 - 1;
      dVar21 = *pdVar6;
      pdVar6 = (double *)((long)pdVar6 + (ulong)param_3);
      dVar19 = dVar17 * (*pdVar7 - dVar12);
      dVar20 = dVar17 * (*pdVar1 - dVar11);
      dVar17 = dVar17 * (dVar21 - dVar10);
      uVar8 = NEON_fmadd(dVar19,dVar19,uVar8);
      uVar16 = NEON_fmadd(dVar19,dVar20,uVar16);
      dVar15 = (double)NEON_fmadd(dVar19,dVar17,dVar15);
      uVar13 = NEON_fmadd(dVar20,dVar20,uVar13);
      dVar18 = (double)NEON_fmadd(dVar20,dVar17,dVar18);
      dVar14 = (double)NEON_fmadd(dVar17,dVar17,dVar14);
    } while (param_1 != 0);
  }
  Eigen<double>::DecrSortEigenStuff();
  *param_6 = dVar9 * dVar15;
  param_6[1] = dVar9 * dVar18;
  uVar8 = NEON_fmadd(dVar9 * dVar15,dVar12,dVar11 * dVar9 * dVar18);
  dVar10 = (double)NEON_fmadd(dVar9 * dVar14,dVar10,uVar8);
  param_6[2] = dVar9 * dVar14;
  param_6[3] = 0.0 - dVar10;
  if (*(long *)(lVar4 + 0x28) == lVar5) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


