// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filterOutMean
// Entry Point: 00b77fa4
// Size: 232 bytes
// Signature: undefined __thiscall filterOutMean(PCA3D * this, float * param_1)


/* PCA3D::filterOutMean(float*) */

void __thiscall PCA3D::filterOutMean(PCA3D *this,float *param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  *(undefined8 *)param_1 = 0;
  uVar1 = *(uint *)(this + 8);
  uVar2 = (ulong)uVar1;
  param_1[2] = 0.0;
  if (uVar1 != 0) {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    uVar4 = 0;
    lVar5 = *(long *)this;
    do {
      iVar3 = (int)uVar4;
      fVar10 = *(float *)(lVar5 + (uVar4 & 0xffffffff) * 4) + fVar10;
      *param_1 = fVar10;
      uVar4 = uVar4 + 3;
      fVar9 = *(float *)(lVar5 + (ulong)(iVar3 + 1) * 4) + fVar9;
      param_1[1] = fVar9;
      fVar8 = *(float *)(lVar5 + (ulong)(iVar3 + 2) * 4) + fVar8;
      param_1[2] = fVar8;
    } while (uVar2 * 3 != uVar4);
    if (uVar1 != 0) {
      fVar11 = (float)uVar2;
      uVar4 = 0;
      fVar10 = fVar10 / fVar11;
      *param_1 = fVar10;
      param_1[1] = fVar9 / fVar11;
      param_1[2] = fVar8 / fVar11;
      lVar5 = *(long *)this;
      while( true ) {
        lVar6 = (uVar4 & 0xffffffff) * 4;
        lVar7 = (ulong)((int)uVar4 + 1) * 4;
        *(float *)(lVar5 + lVar6) = *(float *)(lVar5 + lVar6) - fVar10;
        lVar6 = (ulong)((int)uVar4 + 2) * 4;
        *(float *)(lVar5 + lVar7) = *(float *)(lVar5 + lVar7) - param_1[1];
        *(float *)(lVar5 + lVar6) = *(float *)(lVar5 + lVar6) - param_1[2];
        if (uVar2 * 3 - 3 == uVar4) break;
        fVar10 = *param_1;
        uVar4 = uVar4 + 3;
      }
    }
  }
  return;
}


