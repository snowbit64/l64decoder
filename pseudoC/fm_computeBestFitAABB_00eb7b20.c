// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitAABB
// Entry Point: 00eb7b20
// Size: 352 bytes
// Signature: undefined __cdecl fm_computeBestFitAABB(uint param_1, float * param_2, uint param_3, float * param_4, float * param_5)


/* FLOAT_MATH::fm_computeBestFitAABB(unsigned int, float const*, unsigned int, float*, float*) */

float FLOAT_MATH::fm_computeBestFitAABB
                (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  fVar4 = *param_2;
  *param_5 = fVar4;
  fVar6 = param_2[1];
  param_5[1] = fVar6;
  fVar7 = param_2[2];
  param_5[2] = fVar7;
  if (1 < param_1) {
    iVar3 = param_1 - 1;
    pfVar2 = (float *)((long)param_2 + (ulong)param_3 + 8);
    do {
      if (pfVar2[-2] < *param_4) {
        *param_4 = pfVar2[-2];
        fVar4 = pfVar2[-1];
        if (param_4[1] <= fVar4) goto LAB_00eb7b98;
LAB_00eb7bf0:
        param_4[1] = fVar4;
        fVar4 = *pfVar2;
        if (param_4[2] <= fVar4) goto LAB_00eb7ba8;
LAB_00eb7c04:
        param_4[2] = fVar4;
        fVar4 = *param_5;
        fVar6 = pfVar2[-2];
        if (pfVar2[-2] <= fVar4) goto LAB_00eb7bb8;
LAB_00eb7c18:
        fVar4 = fVar6;
        *param_5 = fVar4;
        fVar6 = param_5[1];
        fVar7 = pfVar2[-1];
        if (pfVar2[-1] <= fVar6) goto LAB_00eb7bc8;
LAB_00eb7c30:
        fVar6 = fVar7;
        param_5[1] = fVar6;
        fVar7 = param_5[2];
        fVar1 = *pfVar2;
        if (fVar7 < *pfVar2) goto LAB_00eb7c48;
      }
      else {
        fVar4 = pfVar2[-1];
        if (fVar4 < param_4[1]) goto LAB_00eb7bf0;
LAB_00eb7b98:
        fVar4 = *pfVar2;
        if (fVar4 < param_4[2]) goto LAB_00eb7c04;
LAB_00eb7ba8:
        fVar4 = *param_5;
        fVar6 = pfVar2[-2];
        if (fVar4 < pfVar2[-2]) goto LAB_00eb7c18;
LAB_00eb7bb8:
        fVar6 = param_5[1];
        fVar7 = pfVar2[-1];
        if (fVar6 < pfVar2[-1]) goto LAB_00eb7c30;
LAB_00eb7bc8:
        fVar7 = param_5[2];
        fVar1 = *pfVar2;
        if (fVar7 < *pfVar2) {
LAB_00eb7c48:
          fVar7 = fVar1;
          param_5[2] = fVar7;
        }
      }
      pfVar2 = (float *)((long)pfVar2 + (ulong)param_3);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar5 = NEON_fmadd(fVar4 - *param_4,fVar4 - *param_4,(fVar6 - param_4[1]) * (fVar6 - param_4[1]));
  fVar4 = (float)NEON_fmadd(fVar7 - param_4[2],fVar7 - param_4[2],uVar5);
  return SQRT(fVar4);
}


