// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeOBB
// Entry Point: 00eb6ed0
// Size: 388 bytes
// Signature: undefined __cdecl computeOBB(uint param_1, float * param_2, uint param_3, float * param_4, float * param_5)


/* FLOAT_MATH::computeOBB(unsigned int, float const*, unsigned int, float*, float*) */

void FLOAT_MATH::computeOBB(uint param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  if (param_1 == 0) {
    fVar11 = 1e+09;
    fVar13 = -1e+09;
    fVar17 = fVar11;
    fVar8 = fVar11;
    fVar16 = fVar13;
    fVar14 = fVar13;
  }
  else {
    fVar4 = -1e+09;
    fVar5 = 1e+09;
    pfVar3 = param_2 + 2;
    fVar6 = fVar5;
    fVar7 = fVar5;
    fVar9 = fVar4;
    fVar10 = fVar4;
    do {
      pfVar1 = pfVar3 + -2;
      pfVar2 = pfVar3 + -1;
      fVar17 = *pfVar3;
      pfVar3 = (float *)((long)pfVar3 + (ulong)param_3);
      fVar11 = *pfVar2 - param_5[0xd];
      fVar13 = *pfVar1 - param_5[0xc];
      fVar17 = fVar17 - param_5[0xe];
      uVar15 = NEON_fmadd(*param_5,fVar13,fVar11 * param_5[1]);
      uVar18 = NEON_fmadd(param_5[4],fVar13,fVar11 * param_5[5]);
      uVar12 = NEON_fmadd(param_5[8],fVar13,fVar11 * param_5[9]);
      fVar16 = (float)NEON_fmadd(param_5[2],fVar17,uVar15);
      fVar14 = (float)NEON_fmadd(param_5[6],fVar17,uVar18);
      fVar13 = (float)NEON_fmadd(param_5[10],fVar17,uVar12);
      fVar11 = fVar16;
      if (fVar5 <= fVar16) {
        fVar11 = fVar5;
      }
      fVar8 = fVar14;
      if (fVar7 <= fVar14) {
        fVar8 = fVar7;
      }
      fVar17 = fVar13;
      if (fVar6 <= fVar13) {
        fVar17 = fVar6;
      }
      if (fVar16 <= fVar9) {
        fVar16 = fVar9;
      }
      if (fVar14 <= fVar10) {
        fVar14 = fVar10;
      }
      if (fVar13 <= fVar4) {
        fVar13 = fVar4;
      }
      param_1 = param_1 - 1;
      fVar5 = fVar11;
      fVar6 = fVar17;
      fVar7 = fVar8;
      fVar4 = fVar13;
      fVar9 = fVar16;
      fVar10 = fVar14;
    } while (param_1 != 0);
  }
  fVar5 = (float)NEON_fmadd(fVar16 - fVar11,0x3f000000,fVar11);
  fVar6 = (float)NEON_fmadd(fVar14 - fVar8,0x3f000000,fVar8);
  fVar4 = (float)NEON_fmadd(fVar13 - fVar17,0x3f000000,fVar17);
  *param_4 = fVar16 - fVar11;
  param_4[1] = fVar14 - fVar8;
  param_4[2] = fVar13 - fVar17;
  if (param_5 != (float *)0x0) {
    uVar15 = NEON_fmadd(*param_5,fVar5,fVar6 * param_5[4]);
    uVar18 = NEON_fmadd(param_5[1],fVar5,fVar6 * param_5[5]);
    uVar12 = NEON_fmadd(param_5[2],fVar5,fVar6 * param_5[6]);
    fVar5 = (float)NEON_fmadd(param_5[8],fVar4,uVar15);
    fVar6 = (float)NEON_fmadd(param_5[9],fVar4,uVar18);
    fVar4 = (float)NEON_fmadd(param_5[10],fVar4,uVar12);
  }
  param_5[0xc] = fVar5 + param_5[0xc];
  param_5[0xd] = fVar6 + param_5[0xd];
  param_5[0xe] = fVar4 + param_5[0xe];
  return;
}


