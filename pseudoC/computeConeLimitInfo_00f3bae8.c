// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeConeLimitInfo
// Entry Point: 00f3bae8
// Size: 248 bytes
// Signature: undefined __thiscall computeConeLimitInfo(btConeTwistConstraint * this, btQuaternion * param_1, float * param_2, btVector3 * param_3, float * param_4)


/* btConeTwistConstraint::computeConeLimitInfo(btQuaternion const&, float&, btVector3&, float&) */

void __thiscall
btConeTwistConstraint::computeConeLimitInfo
          (btConeTwistConstraint *this,btQuaternion *param_1,float *param_2,btVector3 *param_3,
          float *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0xc),0x3f800000);
  fVar1 = acosf(fVar1);
  *param_2 = fVar1 + fVar1;
  if (1.192093e-07 < fVar1 + fVar1) {
    fVar2 = *(float *)param_1;
    fVar1 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_1 + 8);
    *(undefined4 *)(param_3 + 0xc) = 0;
    uVar3 = NEON_fmadd(fVar1,fVar1,fVar2 * fVar2);
    fVar4 = (float)NEON_fmadd(fVar5,fVar5,uVar3);
    fVar4 = 1.0 / SQRT(fVar4);
    fVar1 = fVar4 * fVar1;
    fVar5 = fVar4 * fVar5;
    *(float *)param_3 = fVar4 * fVar2;
    *(float *)(param_3 + 4) = fVar1;
    *(float *)(param_3 + 8) = fVar5;
    *param_4 = *(float *)(this + 0x1d4);
    if (1.192093e-07 < ABS(fVar1)) {
      fVar1 = (fVar5 * fVar5) / (fVar1 * fVar1);
      *param_4 = SQRT((fVar1 + 1.0) /
                      (fVar1 / (*(float *)(this + 0x1d4) * *(float *)(this + 0x1d4)) +
                      1.0 / (*(float *)(this + 0x1d8) * *(float *)(this + 0x1d8))));
    }
  }
  return;
}


