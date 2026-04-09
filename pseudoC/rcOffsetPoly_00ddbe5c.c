// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcOffsetPoly
// Entry Point: 00ddbe5c
// Size: 664 bytes
// Signature: undefined __cdecl rcOffsetPoly(float * param_1, int param_2, float param_3, float * param_4, int param_5)


/* rcOffsetPoly(float const*, int, float, float*, int) */

int rcOffsetPoly(float *param_1,int param_2,float param_3,float *param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (param_2 < 1) {
LAB_00ddc0c0:
    iVar5 = 0;
  }
  else {
    uVar6 = 0;
    iVar5 = 0;
    pfVar7 = param_1 + 2;
    uVar8 = 1;
    uVar9 = 3;
    do {
      fVar13 = *pfVar7;
      iVar4 = param_2 + (int)uVar8 + -2;
      fVar12 = pfVar7[-2];
      iVar3 = 0;
      if (param_2 != 0) {
        iVar3 = iVar4 / param_2;
      }
      fVar17 = fVar13 - (param_1 + (iVar4 - iVar3 * param_2) * 3)[2];
      uVar2 = 0;
      if ((uint)param_2 != uVar8) {
        uVar2 = uVar9 & 0xffffffff;
      }
      fVar18 = fVar12 - param_1[(iVar4 - iVar3 * param_2) * 3];
      fVar10 = (float)NEON_fmadd(fVar18,fVar18,fVar17 * fVar17);
      if (1e-06 < fVar10) {
        fVar10 = (float)rcSqrt(fVar10);
        fVar12 = pfVar7[-2];
        fVar13 = *pfVar7;
        fVar18 = fVar18 * (1.0 / fVar10);
        fVar17 = fVar17 * (1.0 / fVar10);
      }
      fVar13 = (param_1 + uVar2)[2] - fVar13;
      fVar12 = param_1[uVar2] - fVar12;
      fVar10 = (float)NEON_fmadd(fVar12,fVar12,fVar13 * fVar13);
      if (1e-06 < fVar10) {
        fVar10 = (float)rcSqrt(fVar10);
        fVar12 = fVar12 * (1.0 / fVar10);
        fVar13 = fVar13 * (1.0 / fVar10);
      }
      fVar10 = (fVar18 + fVar12) * 0.5;
      fVar14 = (-fVar13 - fVar17) * 0.5;
      fVar16 = (float)NEON_fmadd(fVar14,fVar14,fVar10 * fVar10);
      if (1e-06 < fVar16) {
        fVar14 = fVar14 * (1.0 / fVar16);
        fVar10 = fVar10 * (1.0 / fVar16);
      }
      if (1.0 <= fVar16 * 1.2 * 1.2) {
LAB_00ddc07c:
        if (param_5 <= iVar5 + 1) goto LAB_00ddc0c0;
        lVar1 = (long)iVar5 + (long)iVar5 * 2;
        fVar12 = (float)NEON_fmsub(fVar14,param_3,pfVar7[-2]);
        iVar4 = (int)lVar1;
        param_4[lVar1] = fVar12;
        iVar3 = iVar4 + 2;
        param_4[iVar4 + 1] = pfVar7[-1];
        fVar12 = (float)NEON_fmsub(fVar10,param_3,*pfVar7);
        iVar5 = iVar5 + 1;
      }
      else {
        fVar16 = (float)NEON_fmadd(fVar12,fVar17,fVar13 * -fVar18);
        if (0.0 <= fVar16) goto LAB_00ddc07c;
        if (param_5 <= iVar5 + 2) goto LAB_00ddc0c0;
        lVar1 = (long)iVar5 + (long)iVar5 * 2;
        fVar10 = (float)NEON_fmadd(fVar18,fVar12,fVar17 * fVar13);
        iVar4 = (int)lVar1;
        fVar10 = (1.0 - fVar10) * 0.5;
        uVar15 = NEON_fmadd(fVar18,fVar10,fVar17);
        uVar11 = NEON_fnmsub(-fVar13,fVar10,fVar12);
        fVar14 = (float)NEON_fmadd(uVar15,param_3,pfVar7[-2]);
        param_4[iVar4] = fVar14;
        param_4[lVar1 + 1] = pfVar7[-1];
        uVar15 = NEON_fmadd(fVar17,fVar10,-fVar18);
        fVar17 = (float)NEON_fmadd(uVar15,param_3,*pfVar7);
        (param_4 + iVar4)[2] = fVar17;
        uVar15 = NEON_fmsub(fVar12,fVar10,fVar13);
        fVar12 = (float)NEON_fmadd(uVar15,param_3,pfVar7[-2]);
        param_4[iVar4 + 3] = fVar12;
        iVar3 = iVar4 + 5;
        param_4[iVar4 + 4] = pfVar7[-1];
        fVar12 = (float)NEON_fmadd(uVar11,param_3,*pfVar7);
        iVar5 = iVar5 + 2;
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 3;
      uVar9 = uVar9 + 3;
      param_4[iVar3] = fVar12;
    } while ((uint)param_2 != uVar6);
  }
  return iVar5;
}


