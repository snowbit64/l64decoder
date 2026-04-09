// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collapseAlongVector
// Entry Point: 00b789c0
// Size: 184 bytes
// Signature: undefined __thiscall collapseAlongVector(PCA3D * this, float * param_1, float * param_2, float * param_3)


/* PCA3D::collapseAlongVector(float const*, float&, float&) */

void __thiscall PCA3D::collapseAlongVector(PCA3D *this,float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar1 = *(uint *)(this + 8);
  if (uVar1 == 0) {
    fVar2 = 3.402823e+38;
    fVar4 = -3.402823e+38;
  }
  else {
    uVar3 = 0;
    lVar5 = *(long *)this;
    fVar4 = -3.402823e+38;
    fVar2 = 3.402823e+38;
    do {
      lVar6 = (ulong)((int)uVar3 + 1) * 4;
      lVar7 = (uVar3 & 0xffffffff) * 4;
      fVar9 = *(float *)(lVar5 + lVar6);
      lVar8 = (ulong)((int)uVar3 + 2) * 4;
      uVar12 = *(undefined4 *)(lVar5 + lVar7);
      uVar3 = uVar3 + 3;
      uVar13 = *(undefined4 *)(lVar5 + lVar8);
      uVar10 = NEON_fmadd(uVar12,*param_1,fVar9 * param_1[1]);
      fVar11 = (float)NEON_fmadd(uVar13,param_1[2],uVar10);
      uVar10 = NEON_fmsub(fVar11,*param_1,uVar12);
      *(undefined4 *)(lVar5 + lVar7) = uVar10;
      if (fVar11 < fVar2) {
        fVar2 = fVar11;
      }
      uVar10 = NEON_fmsub(fVar11,param_1[1],fVar9);
      if (fVar4 < fVar11) {
        fVar4 = fVar11;
      }
      *(undefined4 *)(lVar5 + lVar6) = uVar10;
      uVar10 = NEON_fmsub(fVar11,param_1[2],uVar13);
      *(undefined4 *)(lVar5 + lVar8) = uVar10;
    } while ((ulong)uVar1 * 3 != uVar3);
  }
  *param_2 = fVar2;
  *param_3 = fVar4;
  return;
}


