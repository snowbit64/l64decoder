// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_consolidatePolygon
// Entry Point: 00eb81d4
// Size: 328 bytes
// Signature: undefined __cdecl fm_consolidatePolygon(uint param_1, float * param_2, uint param_3, float * param_4, float param_5)


/* FLOAT_MATH::fm_consolidatePolygon(unsigned int, float const*, unsigned int, float*, float) */

int FLOAT_MATH::fm_consolidatePolygon
              (uint param_1,float *param_2,uint param_3,float *param_4,float param_5)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_1 < 3) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    pfVar4 = (float *)((long)param_2 + (ulong)param_3);
    pfVar3 = (float *)((long)param_2 + (ulong)((param_1 - 1) * param_3));
    pfVar5 = param_2;
    do {
      pfVar1 = param_2;
      if (param_1 != 1) {
        pfVar1 = pfVar4;
      }
      fVar11 = 0.0;
      fVar10 = 1.0;
      fVar12 = pfVar5[1] - pfVar3[1];
      fVar6 = *pfVar5;
      fVar14 = pfVar5[2] - pfVar3[2];
      fVar13 = fVar6 - *pfVar3;
      uVar7 = NEON_fmadd(fVar13,fVar13,fVar12 * fVar12);
      fVar8 = (float)NEON_fmadd(fVar14,fVar14,uVar7);
      fVar9 = 0.0;
      if (1e-07 < SQRT(fVar8)) {
        fVar11 = 1.0 / SQRT(fVar8);
        fVar10 = fVar13 * fVar11;
        fVar9 = fVar12 * fVar11;
        fVar11 = fVar14 * fVar11;
      }
      fVar8 = pfVar1[1] - pfVar5[1];
      fVar12 = pfVar1[2] - pfVar5[2];
      fVar13 = *pfVar1 - fVar6;
      uVar7 = NEON_fmadd(fVar13,fVar13,fVar8 * fVar8);
      fVar14 = (float)NEON_fmadd(fVar12,fVar12,uVar7);
      if (SQRT(fVar14) <= 1e-07) {
        uVar7 = NEON_fmadd(fVar10,0x3f800000,fVar9 * 0.0);
        fVar8 = (float)NEON_fmadd(fVar11,0,uVar7);
      }
      else {
        fVar14 = 1.0 / SQRT(fVar14);
        uVar7 = NEON_fmadd(fVar10,fVar13 * fVar14,fVar9 * fVar8 * fVar14);
        fVar8 = (float)NEON_fmadd(fVar11,fVar12 * fVar14,uVar7);
      }
      if (fVar8 < param_5) {
        *param_4 = fVar6;
        iVar2 = iVar2 + 1;
        param_4[1] = pfVar5[1];
        param_4[2] = pfVar5[2];
        param_4 = param_4 + 3;
      }
      pfVar4 = pfVar1 + 3;
      param_1 = param_1 - 1;
      pfVar3 = pfVar5;
      pfVar5 = pfVar5 + 3;
    } while (param_1 != 0);
  }
  return iVar2;
}


