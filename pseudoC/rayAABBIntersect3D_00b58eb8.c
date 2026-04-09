// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayAABBIntersect3D
// Entry Point: 00b58eb8
// Size: 376 bytes
// Signature: undefined __cdecl rayAABBIntersect3D(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, float * param_5, float * param_6)


/* MathUtil::rayAABBIntersect3D(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&,
   float&, float&) */

undefined8
MathUtil::rayAABBIntersect3D
          (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,float *param_5,
          float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)param_2;
  if (fVar1 == 0.0) {
    fVar2 = 0.0;
    fVar1 = 3.402823e+38;
  }
  else {
    fVar3 = ((*(float *)param_3 + *(float *)param_4) - *(float *)param_1) / fVar1;
    fVar1 = ((*(float *)param_3 - *(float *)param_4) - *(float *)param_1) / fVar1;
    fVar2 = fVar1;
    if (fVar3 <= fVar1) {
      fVar2 = fVar3;
      fVar3 = fVar1;
    }
    if ((fVar3 < 0.0 || fVar2 != 3.402823e+38) && (fVar3 < 0.0 || 3.402823e+38 <= fVar2)) {
      return 0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar1 = (float)NEON_fmin(fVar3,0x7f7fffff);
    if (fVar1 < fVar2) {
      return 0;
    }
  }
  fVar3 = *(float *)(param_2 + 4);
  if (fVar3 != 0.0) {
    fVar5 = ((*(float *)(param_3 + 4) + *(float *)(param_4 + 4)) - *(float *)(param_1 + 4)) / fVar3;
    fVar3 = ((*(float *)(param_3 + 4) - *(float *)(param_4 + 4)) - *(float *)(param_1 + 4)) / fVar3;
    fVar4 = fVar3;
    if (fVar5 <= fVar3) {
      fVar4 = fVar5;
      fVar5 = fVar3;
    }
    if ((fVar5 < fVar2 || fVar4 != fVar1) && (fVar5 < fVar2 || fVar1 <= fVar4)) {
      return 0;
    }
    if (fVar2 <= fVar4) {
      fVar2 = fVar4;
    }
    if (fVar5 <= fVar1) {
      fVar1 = fVar5;
    }
    if (fVar1 < fVar2) {
      return 0;
    }
  }
  fVar3 = *(float *)(param_2 + 8);
  if (fVar3 != 0.0) {
    fVar5 = ((*(float *)(param_3 + 8) + *(float *)(param_4 + 8)) - *(float *)(param_1 + 8)) / fVar3;
    fVar3 = ((*(float *)(param_3 + 8) - *(float *)(param_4 + 8)) - *(float *)(param_1 + 8)) / fVar3;
    fVar4 = fVar3;
    if (fVar5 <= fVar3) {
      fVar4 = fVar5;
      fVar5 = fVar3;
    }
    if ((fVar5 < fVar2 || fVar4 != fVar1) && (fVar5 < fVar2 || fVar1 <= fVar4)) {
      return 0;
    }
    if (fVar2 <= fVar4) {
      fVar2 = fVar4;
    }
    if (fVar5 <= fVar1) {
      fVar1 = fVar5;
    }
    if (fVar1 < fVar2) {
      return 0;
    }
  }
  *param_5 = fVar2;
  *param_6 = fVar1;
  return 1;
}


