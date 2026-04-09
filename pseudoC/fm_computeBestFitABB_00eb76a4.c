// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeBestFitABB
// Entry Point: 00eb76a4
// Size: 176 bytes
// Signature: undefined __cdecl fm_computeBestFitABB(uint param_1, float * param_2, uint param_3, float * param_4, float * param_5)


/* FLOAT_MATH::fm_computeBestFitABB(unsigned int, float const*, unsigned int, float*, float*) */

void FLOAT_MATH::fm_computeBestFitABB
               (uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar5 = *param_2;
  fVar3 = param_2[1];
  fVar2 = param_2[2];
  fVar8 = fVar3;
  fVar10 = fVar5;
  fVar13 = fVar2;
  if (param_1 != 0) {
    pfVar1 = param_2 + 2;
    fVar11 = fVar2;
    fVar4 = fVar3;
    fVar6 = fVar5;
    fVar7 = fVar3;
    fVar9 = fVar5;
    fVar12 = fVar2;
    do {
      fVar5 = pfVar1[-2];
      fVar3 = pfVar1[-1];
      fVar13 = *pfVar1;
      pfVar1 = (float *)((long)pfVar1 + (ulong)param_3);
      fVar10 = fVar5;
      if (fVar9 <= fVar5) {
        fVar10 = fVar9;
      }
      fVar8 = fVar3;
      if (fVar7 <= fVar3) {
        fVar8 = fVar7;
      }
      fVar2 = fVar13;
      if (fVar11 <= fVar13) {
        fVar2 = fVar11;
      }
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      if (fVar3 <= fVar4) {
        fVar3 = fVar4;
      }
      if (fVar13 <= fVar12) {
        fVar13 = fVar12;
      }
      param_1 = param_1 - 1;
      fVar11 = fVar2;
      fVar4 = fVar3;
      fVar6 = fVar5;
      fVar7 = fVar8;
      fVar9 = fVar10;
      fVar12 = fVar13;
    } while (param_1 != 0);
  }
  fVar11 = (float)NEON_fmadd(fVar5 - fVar10,0x3f000000,fVar10);
  *param_4 = fVar5 - fVar10;
  param_4[1] = fVar3 - fVar8;
  param_4[2] = fVar13 - fVar2;
  *param_5 = fVar11;
  fVar3 = (float)NEON_fmadd(param_4[1],0x3f000000,fVar8);
  param_5[1] = fVar3;
  fVar2 = (float)NEON_fmadd(param_4[2],0x3f000000,fVar2);
  param_5[2] = fVar2;
  return;
}


