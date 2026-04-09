// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEigenvector1
// Entry Point: 00b781a4
// Size: 292 bytes
// Signature: undefined __cdecl getEigenvector1(float * param_1, float * param_2, float param_3)


/* PCA3D::getEigenvector1(float const*, float*, float) */

void PCA3D::getEigenvector1(float *param_1,float *param_2,float param_3)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar3 = param_1[4];
  fVar10 = param_1[1];
  fVar13 = param_1[2];
  fVar5 = param_1[5] - param_3;
  fVar14 = param_1[3] - param_3;
  fVar18 = *param_1 - param_3;
  fVar8 = (float)NEON_fmadd(fVar14,fVar5,fVar3 * -fVar3);
  fVar6 = (float)NEON_fmadd(fVar13,fVar3,fVar5 * -fVar10);
  fVar15 = ABS(fVar8);
  fVar17 = ABS(fVar6);
  fVar4 = (float)NEON_fmadd(fVar10,fVar3,fVar14 * -fVar13);
  fVar9 = (float)NEON_fmadd(fVar18,fVar5,fVar13 * -fVar13);
  fVar11 = ABS(fVar9);
  fVar5 = (float)NEON_fmadd(fVar10,fVar13,fVar18 * -fVar3);
  fVar3 = fVar17;
  if (fVar17 <= fVar15) {
    fVar3 = fVar15;
  }
  fVar16 = ABS(fVar4);
  fVar12 = ABS(fVar5);
  fVar13 = fVar16;
  if (fVar16 <= fVar3) {
    fVar13 = fVar3;
  }
  cVar1 = '\x02';
  if (fVar16 <= fVar3) {
    cVar1 = fVar15 < fVar17;
  }
  fVar3 = fVar11;
  if (fVar11 <= fVar13) {
    fVar3 = fVar13;
  }
  fVar10 = (float)NEON_fmadd(fVar18,fVar14,fVar10 * -fVar10);
  cVar2 = '\x03';
  if (fVar11 <= fVar13) {
    cVar2 = cVar1;
  }
  fVar11 = fVar12;
  if (fVar12 <= fVar3) {
    fVar11 = fVar3;
  }
  cVar1 = '\x04';
  if (fVar12 <= fVar3) {
    cVar1 = cVar2;
  }
  cVar2 = '\x05';
  if (ABS(fVar10) <= fVar11) {
    cVar2 = cVar1;
  }
  fVar3 = fVar6;
  if ((cVar2 != '\0') &&
     (fVar3 = fVar5, fVar8 = fVar4, fVar4 = fVar10, cVar2 == '\x03' || cVar2 == '\x01')) {
    fVar3 = fVar9;
    fVar8 = fVar6;
    fVar4 = fVar5;
  }
  uVar7 = NEON_fmadd(fVar8,fVar8,fVar3 * fVar3);
  fVar5 = (float)NEON_fmadd(fVar4,fVar4,uVar7);
  fVar5 = SQRT(fVar5);
  if (fVar5 < 1.192093e-07) {
    param_2[2] = 0.0;
    *(undefined8 *)param_2 = 0;
    return;
  }
  *param_2 = fVar8 / fVar5;
  param_2[1] = fVar3 / fVar5;
  param_2[2] = fVar4 / fVar5;
  return;
}


