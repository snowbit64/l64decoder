// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeCentroid
// Entry Point: 00ec1a50
// Size: 356 bytes
// Signature: undefined __cdecl fm_computeCentroid(uint param_1, double * param_2, uint param_3, uint * param_4, double * param_5)


/* FLOAT_MATH::fm_computeCentroid(unsigned int, double const*, unsigned int, unsigned int const*,
   double*) */

bool FLOAT_MATH::fm_computeCentroid
               (uint param_1,double *param_2,uint param_3,uint *param_4,double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  if (param_1 != 0) {
    *param_5 = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    if (param_3 == 0) {
      dVar7 = 0.0;
      dVar5 = 0.0;
      dVar6 = 0.0;
      dVar4 = 0.0;
    }
    else {
      dVar4 = 0.0;
      dVar6 = 0.0;
      dVar5 = 0.0;
      dVar7 = 0.0;
      uVar3 = 0;
      do {
        dVar17 = 0.0;
        pdVar1 = param_2 + param_4[uVar3 & 0xffffffff] * 3;
        pdVar2 = param_2 + param_4[(int)uVar3 + 1] * 3;
        dVar9 = pdVar1[2];
        dVar10 = *pdVar1;
        dVar8 = pdVar1[1];
        dVar14 = *pdVar2 - dVar10;
        dVar13 = pdVar2[1] - dVar8;
        dVar15 = pdVar2[2] - dVar9;
        pdVar1 = param_2 + param_4[(int)uVar3 + 2] * 3;
        uVar11 = NEON_fmadd(dVar14,dVar14,dVar13 * dVar13);
        dVar12 = (double)NEON_fmadd(dVar15,dVar15,uVar11);
        dVar12 = SQRT(dVar12);
        if (dVar12 != 0.0) {
          dVar17 = pdVar1[1] - dVar8;
          dVar18 = *pdVar1 - dVar10;
          dVar20 = pdVar1[2] - dVar9;
          dVar19 = (double)NEON_fmadd(dVar14,dVar18,dVar13 * dVar17);
          dVar19 = (double)NEON_fnmadd(dVar15,dVar20,-dVar19);
          dVar19 = dVar19 / (dVar12 * dVar12);
          dVar17 = (double)NEON_fmadd(dVar19,dVar13,dVar17);
          uVar11 = NEON_fmadd(dVar19,dVar14,dVar18);
          uVar16 = NEON_fmadd(dVar19,dVar15,dVar20);
          uVar11 = NEON_fmadd(uVar11,uVar11,dVar17 * dVar17);
          dVar17 = (double)NEON_fmadd(uVar16,uVar16,uVar11);
          dVar17 = SQRT(dVar17);
        }
        uVar3 = uVar3 + 3;
        dVar17 = dVar12 * 0.5 * dVar17;
        dVar7 = dVar7 + dVar17;
        dVar4 = (double)NEON_fmadd((dVar10 + *pdVar2 + *pdVar1) / 3.0,dVar17,dVar4);
        dVar6 = (double)NEON_fmadd((dVar8 + pdVar2[1] + pdVar1[1]) / 3.0,dVar17,dVar6);
        dVar5 = (double)NEON_fmadd((dVar9 + pdVar2[2] + pdVar1[2]) / 3.0,dVar17,dVar5);
      } while ((ulong)param_3 + (ulong)param_3 * 2 != uVar3);
    }
    dVar7 = 1.0 / dVar7;
    *param_5 = dVar7 * dVar4;
    param_5[1] = dVar7 * dVar6;
    param_5[2] = dVar5 * dVar7;
  }
  return param_1 != 0;
}


