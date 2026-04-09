// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeTwistLimitInfo
// Entry Point: 00f3bc5c
// Size: 224 bytes
// Signature: undefined __thiscall computeTwistLimitInfo(btConeTwistConstraint * this, btQuaternion * param_1, float * param_2, btVector3 * param_3)


/* btConeTwistConstraint::computeTwistLimitInfo(btQuaternion const&, float&, btVector3&) */

void __thiscall
btConeTwistConstraint::computeTwistLimitInfo
          (btConeTwistConstraint *this,btQuaternion *param_1,float *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 0xc);
  uVar4 = *(undefined8 *)param_1;
  if (fVar1 <= -1.0) {
    fVar1 = -1.0;
  }
  fVar1 = (float)NEON_fminnm(fVar1,0x3f800000);
  fVar1 = acosf(fVar1);
  *param_2 = fVar1 + fVar1;
  if (3.141593 < fVar1 + fVar1) {
    fVar1 = -*(float *)(param_1 + 0xc);
    uVar4 = CONCAT44(-(float)((ulong)*(undefined8 *)param_1 >> 0x20),-(float)*(undefined8 *)param_1)
    ;
    fVar2 = -*(float *)(param_1 + 8);
    if (fVar1 <= -1.0) {
      fVar1 = -1.0;
    }
    fVar1 = (float)NEON_fminnm(fVar1,0x3f800000);
    fVar1 = acosf(fVar1);
    *param_2 = fVar1 + fVar1;
  }
  *(undefined8 *)param_3 = uVar4;
  *(float *)(param_3 + 8) = fVar2;
  *(undefined4 *)(param_3 + 0xc) = 0;
  if (1.192093e-07 < *param_2) {
    fVar3 = (float)uVar4;
    fVar5 = (float)((ulong)uVar4 >> 0x20);
    fVar1 = (float)NEON_fmadd(fVar2,fVar2,fVar3 * fVar3 + fVar5 * fVar5);
    fVar1 = 1.0 / SQRT(fVar1);
    *(ulong *)param_3 = CONCAT44(fVar5 * fVar1,fVar3 * fVar1);
    *(float *)(param_3 + 8) = fVar1 * fVar2;
  }
  return;
}


