// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: orthonormalize3x3
// Entry Point: 007a3994
// Size: 592 bytes
// Signature: undefined orthonormalize3x3(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Matrix4x4::orthonormalize3x3() */

void Matrix4x4::orthonormalize3x3(void)

{
  float *in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  
  fVar2 = *in_x0;
  fVar1 = in_x0[1];
  uVar4 = NEON_fmadd(fVar2,fVar2,fVar1 * fVar1);
  fVar3 = in_x0[2];
  fVar6 = (float)NEON_fmadd(fVar3,fVar3,uVar4);
  fVar5 = 1.0;
  if (1e-06 < fVar6) {
    fVar5 = 1.0 / SQRT(fVar6);
  }
  if ((1.00001 < fVar5) || (fVar5 < 0.99999)) {
    fVar2 = fVar2 * fVar5;
    fVar1 = fVar1 * fVar5;
    fVar3 = fVar3 * fVar5;
    *in_x0 = fVar2;
    in_x0[1] = fVar1;
    in_x0[2] = fVar3;
  }
  fVar7 = in_x0[4];
  fVar6 = in_x0[5];
  uVar4 = NEON_fmadd(fVar2,fVar7,fVar1 * fVar6);
  fVar5 = in_x0[6];
  fVar8 = (float)NEON_fmadd(fVar3,fVar5,uVar4);
  if (1.00001 < fVar8 || fVar8 < 0.99999) {
    fVar7 = (float)NEON_fmsub(fVar8,fVar2,fVar7);
    fVar6 = (float)NEON_fmsub(fVar8,fVar1,fVar6);
    fVar5 = (float)NEON_fmsub(fVar8,fVar3,fVar5);
    in_x0[4] = fVar7;
    in_x0[5] = fVar6;
    in_x0[6] = fVar5;
  }
  uVar4 = NEON_fmadd(fVar7,fVar7,fVar6 * fVar6);
  fVar9 = (float)NEON_fmadd(fVar5,fVar5,uVar4);
  fVar8 = 1.0;
  if (1e-06 < fVar9) {
    fVar8 = 1.0 / SQRT(fVar9);
  }
  if ((1.00001 < fVar8) || (fVar8 < 0.99999)) {
    fVar7 = fVar7 * fVar8;
    fVar6 = fVar6 * fVar8;
    fVar5 = fVar5 * fVar8;
    in_x0[4] = fVar7;
    in_x0[5] = fVar6;
    in_x0[6] = fVar5;
  }
  fVar10 = in_x0[8];
  fVar8 = in_x0[9];
  uVar4 = NEON_fmadd(fVar2,fVar10,fVar1 * fVar8);
  fVar9 = in_x0[10];
  uVar13 = NEON_fmadd(fVar7,fVar10,fVar6 * fVar8);
  fVar11 = (float)NEON_fmadd(fVar3,fVar9,uVar4);
  fVar12 = (float)NEON_fmadd(fVar5,fVar9,uVar13);
  if ((((1.00001 < fVar11) || (fVar11 < 0.99999)) || (1.00001 < fVar12)) || (fVar12 < 0.99999)) {
    fVar2 = (float)NEON_fmadd(fVar11,fVar2,fVar7 * fVar12);
    fVar1 = (float)NEON_fmadd(fVar11,fVar1,fVar6 * fVar12);
    fVar3 = (float)NEON_fmadd(fVar11,fVar3,fVar5 * fVar12);
    fVar10 = fVar10 - fVar2;
    fVar8 = fVar8 - fVar1;
    fVar9 = fVar9 - fVar3;
    in_x0[8] = fVar10;
    in_x0[9] = fVar8;
    in_x0[10] = fVar9;
  }
  uVar4 = NEON_fmadd(fVar10,fVar10,fVar8 * fVar8);
  fVar2 = (float)NEON_fmadd(fVar9,fVar9,uVar4);
  fVar1 = 1.0;
  if (1e-06 < fVar2) {
    fVar1 = 1.0 / SQRT(fVar2);
  }
  if ((fVar1 <= 1.00001) && (0.99999 <= fVar1)) {
    return;
  }
  in_x0[8] = fVar10 * fVar1;
  in_x0[9] = fVar8 * fVar1;
  in_x0[10] = fVar9 * fVar1;
  return;
}


