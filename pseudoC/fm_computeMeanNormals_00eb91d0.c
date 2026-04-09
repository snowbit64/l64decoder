// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeMeanNormals
// Entry Point: 00eb91d0
// Size: 480 bytes
// Signature: undefined __cdecl fm_computeMeanNormals(uint param_1, float * param_2, uint param_3, float * param_4, uint param_5, uint param_6, uint * param_7)


/* FLOAT_MATH::fm_computeMeanNormals(unsigned int, float const*, unsigned int, float*, unsigned int,
   unsigned int, unsigned int const*) */

void FLOAT_MATH::fm_computeMeanNormals
               (uint param_1,float *param_2,uint param_3,float *param_4,uint param_5,uint param_6,
               uint *param_7)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar8 = (ulong)param_5;
  if (param_1 != 0) {
    pfVar9 = param_4 + 2;
    uVar7 = param_1;
    do {
      *(undefined8 *)(pfVar9 + -2) = 0;
      uVar7 = uVar7 - 1;
      *pfVar9 = 0.0;
      pfVar9 = (float *)((long)pfVar9 + uVar8);
    } while (uVar7 != 0);
  }
  if (param_6 != 0) {
    do {
      uVar7 = *param_7;
      puVar6 = param_7 + 1;
      pfVar9 = (float *)((long)param_2 + (ulong)(*puVar6 * param_3));
      puVar1 = param_7 + 2;
      pfVar2 = (float *)((long)param_2 + (ulong)(uVar7 * param_3));
      param_7 = param_7 + 3;
      pfVar3 = (float *)((long)param_2 + (ulong)(*puVar1 * param_3));
      pfVar4 = (float *)((long)param_4 + (ulong)(uVar7 * param_5));
      pfVar5 = (float *)((long)param_4 + (ulong)(*puVar6 * param_5));
      fVar13 = *pfVar9 - *pfVar2;
      fVar16 = pfVar9[2] - pfVar2[2];
      fVar14 = pfVar9[1] - pfVar2[1];
      pfVar2 = (float *)((long)param_4 + (ulong)(*puVar1 * param_5));
      fVar15 = pfVar3[2] - pfVar9[2];
      fVar10 = *pfVar3 - *pfVar9;
      fVar11 = pfVar3[1] - pfVar9[1];
      fVar17 = (float)NEON_fmadd(fVar16,fVar10,fVar15 * -fVar13);
      fVar15 = (float)NEON_fmadd(fVar14,fVar15,fVar11 * -fVar16);
      fVar11 = (float)NEON_fmadd(fVar13,fVar11,fVar10 * -fVar14);
      uVar12 = NEON_fmadd(fVar15,fVar15,fVar17 * fVar17);
      fVar13 = (float)NEON_fmadd(fVar11,fVar11,uVar12);
      fVar10 = 0.0;
      if (1e-06 <= SQRT(fVar13)) {
        fVar10 = 1.0 / SQRT(fVar13);
      }
      param_6 = param_6 - 1;
      fVar15 = fVar15 * fVar10;
      fVar17 = fVar17 * fVar10;
      fVar11 = fVar11 * fVar10;
      *pfVar4 = *pfVar4 + fVar15;
      pfVar4[1] = pfVar4[1] + fVar17;
      pfVar4[2] = pfVar4[2] + fVar11;
      *pfVar5 = *pfVar5 + fVar15;
      pfVar5[1] = pfVar5[1] + fVar17;
      pfVar5[2] = fVar11 + pfVar5[2];
      *pfVar2 = fVar15 + *pfVar2;
      pfVar2[1] = fVar17 + pfVar2[1];
      pfVar2[2] = fVar11 + pfVar2[2];
    } while (param_6 != 0);
  }
  if (param_1 != 0) {
    pfVar9 = param_4 + 1;
    do {
      while( true ) {
        fVar10 = *pfVar9;
        fVar11 = pfVar9[1];
        fVar13 = pfVar9[-1];
        uVar12 = NEON_fmadd(fVar13,fVar13,fVar10 * fVar10);
        fVar15 = (float)NEON_fmadd(fVar11,fVar11,uVar12);
        if (SQRT(fVar15) <= 1e-07) break;
        fVar15 = 1.0 / SQRT(fVar15);
        pfVar9[-1] = fVar13 * fVar15;
        *pfVar9 = fVar10 * fVar15;
        pfVar9[1] = fVar11 * fVar15;
        pfVar9 = (float *)((long)pfVar9 + uVar8);
        param_1 = param_1 - 1;
        if (param_1 == 0) {
          return;
        }
      }
      *(undefined8 *)(pfVar9 + -1) = 0x3f800000;
      pfVar9[1] = 0.0;
      pfVar9 = (float *)((long)pfVar9 + uVar8);
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}


