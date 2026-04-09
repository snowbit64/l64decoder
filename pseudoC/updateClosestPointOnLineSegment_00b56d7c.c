// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateClosestPointOnLineSegment
// Entry Point: 00b56d7c
// Size: 268 bytes
// Signature: undefined __thiscall updateClosestPointOnLineSegment(LinearSpline * this, Vector3 * param_1, Vector3 * param_2, float param_3, float param_4, Vector3 * param_5, Vector3 * param_6, float * param_7, float * param_8)


/* LinearSpline::updateClosestPointOnLineSegment(Vector3 const&, Vector3 const&, float, float,
   Vector3 const&, Vector3&, float&, float&) const */

void __thiscall
LinearSpline::updateClosestPointOnLineSegment
          (LinearSpline *this,Vector3 *param_1,Vector3 *param_2,float param_3,float param_4,
          Vector3 *param_5,Vector3 *param_6,float *param_7,float *param_8)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar4 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_2 + 4) - fVar2;
  fVar6 = *(float *)param_2 - fVar4;
  fVar3 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_2 + 8) - fVar3;
  uVar8 = NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
  fVar10 = (float)NEON_fmadd(fVar7,fVar7,uVar8);
  fVar9 = *(float *)param_5;
  if (1e-06 <= fVar10) {
    uVar8 = NEON_fmadd(fVar9 - fVar4,fVar6,fVar5 * (*(float *)(param_5 + 4) - fVar2));
    fVar12 = (float)NEON_fmadd(*(float *)(param_5 + 8) - fVar3,fVar7,uVar8);
    fVar11 = fVar12 / fVar10;
    if (fVar12 / fVar10 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar10 = (float)NEON_fmin(fVar11,0x3f800000);
    fVar4 = fVar4 + fVar6 * fVar10;
    fVar2 = fVar2 + fVar5 * fVar10;
    fVar9 = fVar9 - fVar4;
    fVar3 = fVar3 + fVar7 * fVar10;
    fVar5 = *(float *)(param_5 + 4) - fVar2;
    uVar8 = NEON_fmadd(fVar5,fVar5,fVar9 * fVar9);
    fVar5 = *(float *)(param_5 + 8) - fVar3;
    fVar5 = (float)NEON_fmadd(fVar5,fVar5,uVar8);
    if (fVar5 < *param_7) {
      *param_7 = fVar5;
      fVar5 = (float)NEON_fmadd(fVar10,param_4 - param_3,param_3);
      *param_8 = fVar5;
      *(float *)param_6 = fVar4;
      *(float *)(param_6 + 4) = fVar2;
      *(float *)(param_6 + 8) = fVar3;
    }
  }
  else {
    uVar8 = NEON_fmadd(fVar2 - *(float *)(param_5 + 4),fVar2 - *(float *)(param_5 + 4),
                       (fVar4 - fVar9) * (fVar4 - fVar9));
    fVar2 = (float)NEON_fmadd(fVar3 - *(float *)(param_5 + 8),fVar3 - *(float *)(param_5 + 8),uVar8)
    ;
    if (fVar2 < *param_7) {
      *param_7 = fVar2;
      *param_8 = param_3;
      uVar1 = *(undefined8 *)param_1;
      *(undefined4 *)(param_6 + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined8 *)param_6 = uVar1;
      return;
    }
  }
  return;
}


