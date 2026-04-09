// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nlerpShortestPath
// Entry Point: 00b5c378
// Size: 228 bytes
// Signature: undefined __thiscall nlerpShortestPath(GsQuaternion * this, GsQuaternion * param_1, GsQuaternion * param_2, float param_3)


/* GsQuaternion::nlerpShortestPath(GsQuaternion const&, GsQuaternion const&, float) */

void __thiscall
GsQuaternion::nlerpShortestPath
          (GsQuaternion *this,GsQuaternion *param_1,GsQuaternion *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  fVar2 = *(float *)param_2;
  fVar1 = *(float *)(param_2 + 4);
  uVar6 = NEON_fmadd(*(float *)param_1,fVar2,*(float *)(param_1 + 4) * fVar1);
  fVar3 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0xc);
  uVar6 = NEON_fmadd(*(float *)(param_1 + 8),fVar3,uVar6);
  fVar7 = (float)NEON_fmadd(*(float *)(param_1 + 0xc),fVar5,uVar6);
  if (0.0 <= fVar7) {
    fVar1 = fVar1 - *(float *)(param_1 + 4);
    fVar3 = fVar3 - *(float *)(param_1 + 8);
    fVar5 = fVar5 - *(float *)(param_1 + 0xc);
    fVar2 = fVar2 - *(float *)param_1;
  }
  else {
    *(float *)(this + 8) = -fVar3;
    *(float *)(this + 0xc) = -fVar5;
    *(float *)this = -fVar2;
    *(float *)(this + 4) = -fVar1;
    fVar3 = -fVar3 - *(float *)(param_1 + 8);
    fVar5 = -fVar5 - *(float *)(param_1 + 0xc);
    fVar1 = -fVar1 - *(float *)(param_1 + 4);
    fVar2 = -fVar2 - *(float *)param_1;
  }
  *(float *)(this + 8) = fVar3 * param_3;
  fVar4 = *(float *)(param_1 + 8);
  *(float *)(this + 4) = fVar1 * param_3;
  *(float *)(this + 0xc) = fVar5 * param_3;
  fVar7 = *(float *)(param_1 + 0xc);
  *(float *)this = fVar2 * param_3;
  fVar4 = fVar3 * param_3 + fVar4;
  fVar7 = fVar5 * param_3 + fVar7;
  fVar3 = fVar1 * param_3 + *(float *)(param_1 + 4);
  fVar1 = fVar2 * param_3 + *(float *)param_1;
  uVar6 = NEON_fmadd(fVar3,fVar3,fVar4 * fVar4);
  uVar6 = NEON_fmadd(fVar7,fVar7,uVar6);
  fVar2 = (float)NEON_fmadd(fVar1,fVar1,uVar6);
  fVar2 = 1.0 / SQRT(fVar2);
  *(float *)(this + 8) = fVar4 * fVar2;
  *(float *)(this + 0xc) = fVar7 * fVar2;
  *(float *)this = fVar1 * fVar2;
  *(float *)(this + 4) = fVar3 * fVar2;
  return;
}


