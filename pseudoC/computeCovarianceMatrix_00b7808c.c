// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCovarianceMatrix
// Entry Point: 00b7808c
// Size: 280 bytes
// Signature: undefined __thiscall computeCovarianceMatrix(PCA3D * this, float * param_1)


/* PCA3D::computeCovarianceMatrix(float*) */

void __thiscall PCA3D::computeCovarianceMatrix(PCA3D *this,float *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  fVar5 = 0.0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  fVar6 = 0.0;
  *(undefined8 *)(param_1 + 4) = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  uVar1 = *(uint *)(this + 8);
  if (uVar1 != 0) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    uVar3 = 0;
    lVar4 = *(long *)this;
    do {
      iVar2 = (int)uVar3;
      uVar13 = *(undefined4 *)(lVar4 + (uVar3 & 0xffffffff) * 4);
      uVar3 = uVar3 + 3;
      uVar14 = *(undefined4 *)(lVar4 + (ulong)(iVar2 + 1) * 4);
      uVar15 = *(undefined4 *)(lVar4 + (ulong)(iVar2 + 2) * 4);
      fVar10 = (float)NEON_fmadd(uVar13,uVar13,fVar10);
      fVar9 = (float)NEON_fmadd(uVar13,uVar14,fVar9);
      fVar7 = (float)NEON_fmadd(uVar14,uVar14,fVar7);
      fVar8 = (float)NEON_fmadd(uVar13,uVar15,fVar8);
      fVar6 = (float)NEON_fmadd(uVar14,uVar15,fVar6);
      fVar5 = (float)NEON_fmadd(uVar15,uVar15,fVar5);
      *param_1 = fVar10;
      param_1[1] = fVar9;
      param_1[2] = fVar8;
      param_1[3] = fVar7;
      param_1[4] = fVar6;
      param_1[5] = fVar5;
    } while ((ulong)uVar1 * 3 != uVar3);
  }
  fVar11 = ABS(fVar9);
  if (ABS(fVar9) <= ABS(fVar10)) {
    fVar11 = ABS(fVar10);
  }
  fVar12 = ABS(fVar8);
  if (ABS(fVar8) <= fVar11) {
    fVar12 = fVar11;
  }
  fVar11 = ABS(fVar7);
  if (ABS(fVar7) <= fVar12) {
    fVar11 = fVar12;
  }
  fVar12 = ABS(fVar6);
  if (ABS(fVar6) <= fVar11) {
    fVar12 = fVar11;
  }
  fVar11 = ABS(fVar5);
  if (ABS(fVar5) <= fVar12) {
    fVar11 = fVar12;
  }
  if (1.0 < fVar11) {
    *param_1 = fVar10 / fVar11;
    param_1[1] = fVar9 / fVar11;
    param_1[2] = fVar8 / fVar11;
    param_1[3] = fVar7 / fVar11;
    param_1[4] = fVar6 / fVar11;
    param_1[5] = fVar5 / fVar11;
  }
  return;
}


