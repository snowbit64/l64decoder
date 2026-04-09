// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_consolidatePolygon
// Entry Point: 00ec01e0
// Size: 320 bytes
// Signature: undefined __cdecl fm_consolidatePolygon(uint param_1, double * param_2, uint param_3, double * param_4, double param_5)


/* FLOAT_MATH::fm_consolidatePolygon(unsigned int, double const*, unsigned int, double*, double) */

int FLOAT_MATH::fm_consolidatePolygon
              (uint param_1,double *param_2,uint param_3,double *param_4,double param_5)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if (param_1 < 3) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    pdVar4 = (double *)((long)param_2 + (ulong)param_3);
    pdVar3 = (double *)((long)param_2 + (ulong)((param_1 - 1) * param_3));
    pdVar5 = param_2;
    do {
      dVar11 = 0.0;
      pdVar1 = param_2;
      if (param_1 != 1) {
        pdVar1 = pdVar4;
      }
      dVar10 = 1.0;
      dVar12 = pdVar5[1] - pdVar3[1];
      dVar6 = *pdVar5;
      dVar14 = pdVar5[2] - pdVar3[2];
      dVar9 = 0.0;
      dVar13 = dVar6 - *pdVar3;
      uVar7 = NEON_fmadd(dVar13,dVar13,dVar12 * dVar12);
      dVar8 = (double)NEON_fmadd(dVar14,dVar14,uVar7);
      if (1.000000011686097e-07 < SQRT(dVar8)) {
        dVar11 = 1.0 / SQRT(dVar8);
        dVar10 = dVar13 * dVar11;
        dVar9 = dVar12 * dVar11;
        dVar11 = dVar14 * dVar11;
      }
      dVar8 = pdVar1[1] - pdVar5[1];
      dVar12 = pdVar1[2] - pdVar5[2];
      dVar13 = *pdVar1 - dVar6;
      uVar7 = NEON_fmadd(dVar13,dVar13,dVar8 * dVar8);
      dVar14 = (double)NEON_fmadd(dVar12,dVar12,uVar7);
      if (SQRT(dVar14) <= 1.000000011686097e-07) {
        uVar7 = NEON_fmadd(dVar10,0x3ff0000000000000,dVar9 * 0.0);
        dVar11 = (double)NEON_fmadd(dVar11,0,uVar7);
      }
      else {
        dVar14 = 1.0 / SQRT(dVar14);
        uVar7 = NEON_fmadd(dVar10,dVar13 * dVar14,dVar9 * dVar8 * dVar14);
        dVar11 = (double)NEON_fmadd(dVar11,dVar12 * dVar14,uVar7);
      }
      if (dVar11 < param_5) {
        *param_4 = dVar6;
        iVar2 = iVar2 + 1;
        param_4[1] = pdVar5[1];
        param_4[2] = pdVar5[2];
        param_4 = param_4 + 3;
      }
      pdVar4 = pdVar1 + 3;
      param_1 = param_1 - 1;
      pdVar3 = pdVar5;
      pdVar5 = pdVar5 + 3;
    } while (param_1 != 0);
  }
  return iVar2;
}


