// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitABB
// Entry Point: 00ebf7c8
// Size: 176 bytes
// Signature: undefined __cdecl fm_computeBestFitABB(uint param_1, double * param_2, uint param_3, double * param_4, double * param_5)


/* FLOAT_MATH::fm_computeBestFitABB(unsigned int, double const*, unsigned int, double*, double*) */

void FLOAT_MATH::fm_computeBestFitABB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar5 = *param_2;
  dVar3 = param_2[1];
  dVar2 = param_2[2];
  dVar8 = dVar3;
  dVar10 = dVar5;
  dVar13 = dVar2;
  if (param_1 != 0) {
    pdVar1 = param_2 + 2;
    dVar11 = dVar2;
    dVar4 = dVar3;
    dVar6 = dVar5;
    dVar7 = dVar3;
    dVar9 = dVar5;
    dVar12 = dVar2;
    do {
      dVar5 = pdVar1[-2];
      dVar3 = pdVar1[-1];
      dVar13 = *pdVar1;
      pdVar1 = (double *)((long)pdVar1 + (ulong)param_3);
      dVar10 = dVar5;
      if (dVar9 <= dVar5) {
        dVar10 = dVar9;
      }
      dVar8 = dVar3;
      if (dVar7 <= dVar3) {
        dVar8 = dVar7;
      }
      dVar2 = dVar13;
      if (dVar11 <= dVar13) {
        dVar2 = dVar11;
      }
      if (dVar5 <= dVar6) {
        dVar5 = dVar6;
      }
      if (dVar3 <= dVar4) {
        dVar3 = dVar4;
      }
      if (dVar13 <= dVar12) {
        dVar13 = dVar12;
      }
      param_1 = param_1 - 1;
      dVar11 = dVar2;
      dVar4 = dVar3;
      dVar6 = dVar5;
      dVar7 = dVar8;
      dVar9 = dVar10;
      dVar12 = dVar13;
    } while (param_1 != 0);
  }
  dVar11 = (double)NEON_fmadd(dVar5 - dVar10,0x3fe0000000000000,dVar10);
  *param_4 = dVar5 - dVar10;
  param_4[1] = dVar3 - dVar8;
  param_4[2] = dVar13 - dVar2;
  *param_5 = dVar11;
  dVar3 = (double)NEON_fmadd(param_4[1],0x3fe0000000000000,dVar8);
  param_5[1] = dVar3;
  dVar2 = (double)NEON_fmadd(param_4[2],0x3fe0000000000000,dVar2);
  param_5[2] = dVar2;
  return;
}


