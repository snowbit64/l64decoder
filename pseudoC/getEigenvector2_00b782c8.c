// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEigenvector2
// Entry Point: 00b782c8
// Size: 260 bytes
// Signature: undefined __cdecl getEigenvector2(float * param_1, float * param_2, float param_3)


/* PCA3D::getEigenvector2(float const*, float*, float) */

void PCA3D::getEigenvector2(float *param_1,float *param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = param_1[2];
  fVar6 = ABS(*param_1 - param_3);
  fVar8 = ABS(param_1[1]);
  fVar11 = ABS(param_1[3] - param_3);
  fVar7 = *param_1 - param_3;
  fVar4 = fVar8;
  if (fVar8 <= fVar6) {
    fVar4 = fVar6;
  }
  fVar9 = ABS(fVar5);
  fVar10 = fVar9;
  if (fVar9 <= fVar4) {
    fVar10 = fVar4;
  }
  uVar2 = 2;
  if (fVar9 <= fVar4) {
    uVar2 = (uint)(fVar6 < fVar8);
  }
  fVar6 = param_1[4];
  fVar4 = fVar11;
  if (fVar11 <= fVar10) {
    fVar4 = fVar10;
  }
  fVar8 = ABS(fVar6);
  uVar1 = 3;
  if (fVar11 <= fVar10) {
    uVar1 = uVar2;
  }
  fVar11 = fVar8;
  if (fVar8 <= fVar4) {
    fVar11 = fVar4;
  }
  uVar2 = 4;
  if (fVar8 <= fVar4) {
    uVar2 = uVar1;
  }
  uVar1 = 5;
  if (ABS(param_1[5] - param_3) <= fVar11) {
    uVar1 = uVar2;
  }
  if (uVar1 < 2) {
    fVar5 = -param_1[1];
    fVar6 = 0.0;
  }
  else if (uVar1 - 3 < 2) {
    fVar7 = -fVar6;
    fVar5 = 0.0;
    fVar6 = param_1[3] - param_3;
  }
  else if (uVar1 == 2) {
    fVar6 = -fVar7;
    fVar7 = 0.0;
  }
  else {
    fVar5 = 0.0;
    fVar7 = -(param_1[5] - param_3);
  }
  uVar3 = NEON_fmadd(fVar5,fVar5,fVar7 * fVar7);
  fVar4 = (float)NEON_fmadd(fVar6,fVar6,uVar3);
  fVar4 = SQRT(fVar4);
  if (fVar4 < 1.192093e-07) {
    param_2[2] = 0.0;
    *(undefined8 *)param_2 = 0;
    return;
  }
  *param_2 = fVar5 / fVar4;
  param_2[1] = fVar7 / fVar4;
  param_2[2] = fVar6 / fVar4;
  return;
}


