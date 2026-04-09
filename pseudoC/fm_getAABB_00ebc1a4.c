// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getAABB
// Entry Point: 00ebc1a4
// Size: 300 bytes
// Signature: undefined __cdecl fm_getAABB(uint param_1, double * param_2, uint param_3, double * param_4, double * param_5)


/* FLOAT_MATH::fm_getAABB(unsigned int, double const*, unsigned int, double*, double*) */

void FLOAT_MATH::fm_getAABB
               (uint param_1,double *param_2,uint param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  *param_5 = *param_2;
  param_5[1] = param_2[1];
  param_5[2] = param_2[2];
  if (1 < param_1) {
    iVar2 = param_1 - 1;
    pdVar1 = (double *)((long)param_2 + (ulong)param_3 + 0x10);
    do {
      if (pdVar1[-2] < *param_4) {
        *param_4 = pdVar1[-2];
        dVar3 = pdVar1[-1];
        if (param_4[1] <= dVar3) goto LAB_00ebc21c;
LAB_00ebc274:
        param_4[1] = dVar3;
        dVar3 = *pdVar1;
        if (param_4[2] <= dVar3) goto LAB_00ebc22c;
LAB_00ebc288:
        param_4[2] = dVar3;
        dVar3 = pdVar1[-2];
        if (dVar3 <= *param_5) goto LAB_00ebc23c;
LAB_00ebc29c:
        *param_5 = dVar3;
        dVar3 = pdVar1[-1];
        if (dVar3 <= param_5[1]) goto LAB_00ebc24c;
LAB_00ebc2b0:
        param_5[1] = dVar3;
        dVar3 = *pdVar1;
        if (param_5[2] < dVar3) goto LAB_00ebc2c4;
      }
      else {
        dVar3 = pdVar1[-1];
        if (dVar3 < param_4[1]) goto LAB_00ebc274;
LAB_00ebc21c:
        dVar3 = *pdVar1;
        if (dVar3 < param_4[2]) goto LAB_00ebc288;
LAB_00ebc22c:
        dVar3 = pdVar1[-2];
        if (*param_5 < dVar3) goto LAB_00ebc29c;
LAB_00ebc23c:
        dVar3 = pdVar1[-1];
        if (param_5[1] < dVar3) goto LAB_00ebc2b0;
LAB_00ebc24c:
        dVar3 = *pdVar1;
        if (param_5[2] < dVar3) {
LAB_00ebc2c4:
          param_5[2] = dVar3;
        }
      }
      pdVar1 = (double *)((long)pdVar1 + (ulong)param_3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


