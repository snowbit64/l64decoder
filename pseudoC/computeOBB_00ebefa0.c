// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeOBB
// Entry Point: 00ebefa0
// Size: 388 bytes
// Signature: undefined __cdecl computeOBB(uint param_1, double * param_2, uint param_3, double * param_4, double * param_5)


/* FLOAT_MATH::computeOBB(unsigned int, double const*, unsigned int, double*, double*) */

void FLOAT_MATH::computeOBB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  
  if (param_1 == 0) {
    dVar10 = 1000000000.0;
    dVar12 = -1000000000.0;
    dVar13 = dVar10;
    dVar17 = dVar10;
    dVar16 = dVar12;
    dVar14 = dVar12;
  }
  else {
    dVar3 = -1000000000.0;
    dVar4 = 1000000000.0;
    pdVar5 = param_2 + 2;
    dVar6 = dVar4;
    dVar7 = dVar4;
    dVar8 = dVar3;
    dVar9 = dVar3;
    do {
      pdVar1 = pdVar5 + -2;
      pdVar2 = pdVar5 + -1;
      dVar17 = *pdVar5;
      pdVar5 = (double *)((long)pdVar5 + (ulong)param_3);
      dVar13 = *pdVar1 - param_5[0xc];
      dVar10 = *pdVar2 - param_5[0xd];
      dVar17 = dVar17 - param_5[0xe];
      uVar15 = NEON_fmadd(*param_5,dVar13,dVar10 * param_5[1]);
      uVar18 = NEON_fmadd(param_5[4],dVar13,dVar10 * param_5[5]);
      uVar11 = NEON_fmadd(param_5[8],dVar13,dVar10 * param_5[9]);
      dVar16 = (double)NEON_fmadd(param_5[2],dVar17,uVar15);
      dVar14 = (double)NEON_fmadd(param_5[6],dVar17,uVar18);
      dVar12 = (double)NEON_fmadd(param_5[10],dVar17,uVar11);
      dVar10 = dVar16;
      if (dVar4 <= dVar16) {
        dVar10 = dVar4;
      }
      dVar17 = dVar14;
      if (dVar7 <= dVar14) {
        dVar17 = dVar7;
      }
      dVar13 = dVar12;
      if (dVar6 <= dVar12) {
        dVar13 = dVar6;
      }
      if (dVar16 <= dVar8) {
        dVar16 = dVar8;
      }
      if (dVar14 <= dVar9) {
        dVar14 = dVar9;
      }
      if (dVar12 <= dVar3) {
        dVar12 = dVar3;
      }
      param_1 = param_1 - 1;
      dVar4 = dVar10;
      dVar6 = dVar13;
      dVar7 = dVar17;
      dVar3 = dVar12;
      dVar8 = dVar16;
      dVar9 = dVar14;
    } while (param_1 != 0);
  }
  dVar6 = (double)NEON_fmadd(dVar16 - dVar10,0x3fe0000000000000,dVar10);
  dVar7 = (double)NEON_fmadd(dVar14 - dVar17,0x3fe0000000000000,dVar17);
  dVar4 = (double)NEON_fmadd(dVar12 - dVar13,0x3fe0000000000000,dVar13);
  *param_4 = dVar16 - dVar10;
  param_4[1] = dVar14 - dVar17;
  param_4[2] = dVar12 - dVar13;
  if (param_5 != (double *)0x0) {
    uVar15 = NEON_fmadd(*param_5,dVar6,dVar7 * param_5[4]);
    uVar18 = NEON_fmadd(param_5[1],dVar6,dVar7 * param_5[5]);
    uVar11 = NEON_fmadd(param_5[2],dVar6,dVar7 * param_5[6]);
    dVar6 = (double)NEON_fmadd(param_5[8],dVar4,uVar15);
    dVar7 = (double)NEON_fmadd(param_5[9],dVar4,uVar18);
    dVar4 = (double)NEON_fmadd(param_5[10],dVar4,uVar11);
  }
  param_5[0xc] = dVar6 + param_5[0xc];
  param_5[0xd] = dVar7 + param_5[0xd];
  param_5[0xe] = dVar4 + param_5[0xe];
  return;
}


