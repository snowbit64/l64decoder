// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: slerpShortestPath
// Entry Point: 00b5c564
// Size: 404 bytes
// Signature: undefined __thiscall slerpShortestPath(GsQuaternion * this, GsQuaternion * param_1, GsQuaternion * param_2, float param_3)


/* GsQuaternion::slerpShortestPath(GsQuaternion const&, GsQuaternion const&, float) */

void __thiscall
GsQuaternion::slerpShortestPath
          (GsQuaternion *this,GsQuaternion *param_1,GsQuaternion *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar5 = *(float *)param_2;
  fVar1 = *(float *)(param_2 + 4);
  fVar13 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar9 = *(float *)(param_2 + 8);
  fVar12 = *(float *)(param_2 + 0xc);
  fVar11 = *(float *)(param_1 + 8);
  fVar10 = *(float *)(param_1 + 0xc);
  uVar2 = NEON_fmadd(fVar13,fVar5,fVar8 * fVar1);
  uVar2 = NEON_fmadd(fVar11,fVar9,uVar2);
  fVar3 = (float)NEON_fmadd(fVar10,fVar12,uVar2);
  fVar6 = (float)NEON_fmin(fVar3,0x3f800000);
  fVar7 = -1.0;
  if (-1.0 <= fVar3) {
    fVar7 = fVar6;
  }
  fVar3 = acosf(fVar7);
  if (0.001 <= ABS(fVar3)) {
    fVar6 = sinf(fVar3);
    fVar4 = sinf((1.0 - param_3) * fVar3);
    fVar4 = fVar4 * (1.0 / fVar6);
    fVar3 = sinf(fVar3 * param_3);
    fVar3 = fVar3 * (1.0 / fVar6);
    fVar9 = fVar9 * fVar3;
    fVar1 = fVar1 * fVar3;
    fVar12 = fVar12 * fVar3;
    fVar5 = fVar5 * fVar3;
    if (0.0 <= fVar7) {
      *(float *)(this + 4) = fVar8 * fVar4 + fVar1;
      *(float *)(this + 8) = fVar11 * fVar4 + fVar9;
      fVar5 = fVar13 * fVar4 + fVar5;
      *(float *)(this + 0xc) = fVar10 * fVar4 + fVar12;
    }
    else {
      fVar9 = fVar9 - fVar11 * fVar4;
      fVar1 = fVar1 - fVar8 * fVar4;
      fVar12 = fVar12 - fVar10 * fVar4;
      uVar2 = NEON_fmadd(fVar1,fVar1,fVar9 * fVar9);
      fVar5 = fVar5 - fVar13 * fVar4;
      uVar2 = NEON_fmadd(fVar12,fVar12,uVar2);
      fVar7 = (float)NEON_fmadd(fVar5,fVar5,uVar2);
      fVar7 = 1.0 / SQRT(fVar7);
      fVar5 = fVar5 * fVar7;
      *(float *)(this + 8) = fVar9 * fVar7;
      *(float *)(this + 0xc) = fVar12 * fVar7;
      *(float *)(this + 4) = fVar1 * fVar7;
    }
    *(float *)this = fVar5;
  }
  else {
    *(float *)(this + 4) = fVar8;
    *(float *)(this + 8) = fVar11;
    *(float *)(this + 0xc) = fVar10;
    *(float *)this = fVar13;
  }
  return;
}


