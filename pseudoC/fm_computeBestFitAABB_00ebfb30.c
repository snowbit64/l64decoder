// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitAABB
// Entry Point: 00ebfb30
// Size: 352 bytes
// Signature: undefined __cdecl fm_computeBestFitAABB(uint param_1, double * param_2, uint param_3, double * param_4, double * param_5)


/* FLOAT_MATH::fm_computeBestFitAABB(unsigned int, double const*, unsigned int, double*, double*) */

undefined  [16]
FLOAT_MATH::fm_computeBestFitAABB
          (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  double dVar7;
  double dVar8;
  
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  dVar4 = *param_2;
  *param_5 = dVar4;
  dVar7 = param_2[1];
  param_5[1] = dVar7;
  dVar8 = param_2[2];
  param_5[2] = dVar8;
  if (1 < param_1) {
    iVar3 = param_1 - 1;
    pdVar2 = (double *)((long)param_2 + (ulong)param_3 + 0x10);
    do {
      if (pdVar2[-2] < *param_4) {
        *param_4 = pdVar2[-2];
        dVar4 = pdVar2[-1];
        if (param_4[1] <= dVar4) goto LAB_00ebfba8;
LAB_00ebfc00:
        param_4[1] = dVar4;
        dVar4 = *pdVar2;
        if (param_4[2] <= dVar4) goto LAB_00ebfbb8;
LAB_00ebfc14:
        param_4[2] = dVar4;
        dVar4 = *param_5;
        dVar7 = pdVar2[-2];
        if (pdVar2[-2] <= dVar4) goto LAB_00ebfbc8;
LAB_00ebfc28:
        dVar4 = dVar7;
        *param_5 = dVar4;
        dVar7 = param_5[1];
        dVar8 = pdVar2[-1];
        if (pdVar2[-1] <= dVar7) goto LAB_00ebfbd8;
LAB_00ebfc40:
        dVar7 = dVar8;
        param_5[1] = dVar7;
        dVar8 = param_5[2];
        dVar1 = *pdVar2;
        if (dVar8 < *pdVar2) goto LAB_00ebfc58;
      }
      else {
        dVar4 = pdVar2[-1];
        if (dVar4 < param_4[1]) goto LAB_00ebfc00;
LAB_00ebfba8:
        dVar4 = *pdVar2;
        if (dVar4 < param_4[2]) goto LAB_00ebfc14;
LAB_00ebfbb8:
        dVar4 = *param_5;
        dVar7 = pdVar2[-2];
        if (dVar4 < pdVar2[-2]) goto LAB_00ebfc28;
LAB_00ebfbc8:
        dVar7 = param_5[1];
        dVar8 = pdVar2[-1];
        if (dVar7 < pdVar2[-1]) goto LAB_00ebfc40;
LAB_00ebfbd8:
        dVar8 = param_5[2];
        dVar1 = *pdVar2;
        if (dVar8 < *pdVar2) {
LAB_00ebfc58:
          dVar8 = dVar1;
          param_5[2] = dVar8;
        }
      }
      pdVar2 = (double *)((long)pdVar2 + (ulong)param_3);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar5 = NEON_fmadd(dVar4 - *param_4,dVar4 - *param_4,(dVar7 - param_4[1]) * (dVar7 - param_4[1]));
  dVar4 = (double)NEON_fmadd(dVar8 - param_4[2],dVar8 - param_4[2],uVar5);
  auVar6._0_8_ = SQRT(dVar4);
  auVar6._8_8_ = 0;
  return auVar6;
}


