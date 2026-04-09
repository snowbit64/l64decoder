// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_isMeshCoplanar
// Entry Point: 00ec0a0c
// Size: 488 bytes
// Signature: undefined __cdecl fm_isMeshCoplanar(uint param_1, uint * param_2, double * param_3, bool param_4)


/* FLOAT_MATH::fm_isMeshCoplanar(unsigned int, unsigned int const*, double const*, bool) */

uint FLOAT_MATH::fm_isMeshCoplanar(uint param_1,uint *param_2,double *param_3,bool param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  uint *puVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  if (param_1 != 0) {
    pdVar1 = param_3 + param_2[1] * 3;
    pdVar2 = param_3 + param_2[2] * 3;
    pdVar3 = param_3 + *param_2 * 3;
    dVar9 = *pdVar1 - *pdVar2;
    dVar13 = pdVar1[1] - pdVar2[1];
    dVar8 = pdVar3[1] - pdVar1[1];
    dVar12 = pdVar1[2] - pdVar2[2];
    dVar11 = pdVar3[2] - pdVar1[2];
    dVar6 = *pdVar3 - *pdVar1;
    dVar10 = (double)NEON_fmadd(dVar12,dVar6,dVar11 * -dVar9);
    dVar11 = (double)NEON_fmadd(dVar13,dVar11,dVar8 * -dVar12);
    dVar9 = (double)NEON_fmadd(dVar9,dVar8,dVar6 * -dVar13);
    uVar7 = NEON_fmadd(dVar11,dVar11,dVar10 * dVar10);
    dVar8 = (double)NEON_fmadd(dVar9,dVar9,uVar7);
    dVar6 = 0.0;
    if (9.999999974752427e-07 <= SQRT(dVar8)) {
      dVar6 = 1.0 / SQRT(dVar8);
    }
    iVar4 = param_1 - 1;
    if (iVar4 == 0) {
      return param_1;
    }
    puVar5 = param_2 + 5;
    uVar7 = NEON_fmadd(dVar11 * dVar6,*pdVar3,pdVar3[1] * dVar10 * dVar6);
    dVar8 = (double)NEON_fmadd(dVar9 * dVar6,pdVar3[2],uVar7);
    do {
      pdVar1 = param_3 + puVar5[-1] * 3;
      pdVar2 = param_3 + *puVar5 * 3;
      pdVar3 = param_3 + puVar5[-2] * 3;
      dVar14 = *pdVar1 - *pdVar2;
      dVar15 = pdVar1[1] - pdVar2[1];
      dVar13 = pdVar3[1] - pdVar1[1];
      dVar17 = pdVar1[2] - pdVar2[2];
      dVar16 = pdVar3[2] - pdVar1[2];
      dVar12 = *pdVar3 - *pdVar1;
      dVar18 = (double)NEON_fmadd(dVar17,dVar12,dVar16 * -dVar14);
      dVar16 = (double)NEON_fmadd(dVar15,dVar16,dVar13 * -dVar17);
      dVar14 = (double)NEON_fmadd(dVar14,dVar13,dVar12 * -dVar15);
      uVar7 = NEON_fmadd(dVar16,dVar16,dVar18 * dVar18);
      dVar13 = (double)NEON_fmadd(dVar14,dVar14,uVar7);
      dVar12 = 0.0;
      if (9.999999974752427e-07 <= SQRT(dVar13)) {
        dVar12 = 1.0 / SQRT(dVar13);
      }
      uVar7 = NEON_fmadd(dVar16 * dVar12,*pdVar3,pdVar3[1] * dVar18 * dVar12);
      dVar13 = (double)NEON_fmadd(dVar14 * dVar12,pdVar3[2],uVar7);
      if (0.001000000047497451 <= ABS((0.0 - dVar8) - (0.0 - dVar13))) {
        return 0;
      }
      uVar7 = NEON_fmadd(dVar11 * dVar6,dVar16 * dVar12,dVar10 * dVar6 * dVar18 * dVar12);
      dVar13 = (double)NEON_fmadd(dVar9 * dVar6,dVar14 * dVar12,uVar7);
      dVar12 = ABS(dVar13);
      if (!param_4) {
        dVar12 = dVar13;
      }
      if (dVar12 < 0.9900000002235174) {
        return 0;
      }
      if (1.009999999776483 < dVar12) {
        return 0;
      }
      iVar4 = iVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (iVar4 != 0);
  }
  return 1;
}


