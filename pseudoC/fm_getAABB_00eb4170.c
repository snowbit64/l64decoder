// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getAABB
// Entry Point: 00eb4170
// Size: 300 bytes
// Signature: undefined __cdecl fm_getAABB(uint param_1, float * param_2, uint param_3, float * param_4, float * param_5)


/* FLOAT_MATH::fm_getAABB(unsigned int, float const*, unsigned int, float*, float*) */

void FLOAT_MATH::fm_getAABB(uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  *param_5 = *param_2;
  param_5[1] = param_2[1];
  param_5[2] = param_2[2];
  if (1 < param_1) {
    iVar2 = param_1 - 1;
    pfVar1 = (float *)((long)param_2 + (ulong)param_3 + 8);
    do {
      if (pfVar1[-2] < *param_4) {
        *param_4 = pfVar1[-2];
        fVar3 = pfVar1[-1];
        if (param_4[1] <= fVar3) goto LAB_00eb41e8;
LAB_00eb4240:
        param_4[1] = fVar3;
        fVar3 = *pfVar1;
        if (param_4[2] <= fVar3) goto LAB_00eb41f8;
LAB_00eb4254:
        param_4[2] = fVar3;
        fVar3 = pfVar1[-2];
        if (fVar3 <= *param_5) goto LAB_00eb4208;
LAB_00eb4268:
        *param_5 = fVar3;
        fVar3 = pfVar1[-1];
        if (fVar3 <= param_5[1]) goto LAB_00eb4218;
LAB_00eb427c:
        param_5[1] = fVar3;
        fVar3 = *pfVar1;
        if (param_5[2] < fVar3) goto LAB_00eb4290;
      }
      else {
        fVar3 = pfVar1[-1];
        if (fVar3 < param_4[1]) goto LAB_00eb4240;
LAB_00eb41e8:
        fVar3 = *pfVar1;
        if (fVar3 < param_4[2]) goto LAB_00eb4254;
LAB_00eb41f8:
        fVar3 = pfVar1[-2];
        if (*param_5 < fVar3) goto LAB_00eb4268;
LAB_00eb4208:
        fVar3 = pfVar1[-1];
        if (param_5[1] < fVar3) goto LAB_00eb427c;
LAB_00eb4218:
        fVar3 = *pfVar1;
        if (param_5[2] < fVar3) {
LAB_00eb4290:
          param_5[2] = fVar3;
        }
      }
      pfVar1 = (float *)((long)pfVar1 + (ulong)param_3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


