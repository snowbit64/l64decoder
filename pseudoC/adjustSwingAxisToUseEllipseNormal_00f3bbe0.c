// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adjustSwingAxisToUseEllipseNormal
// Entry Point: 00f3bbe0
// Size: 124 bytes
// Signature: undefined __thiscall adjustSwingAxisToUseEllipseNormal(btConeTwistConstraint * this, btVector3 * param_1)


/* btConeTwistConstraint::adjustSwingAxisToUseEllipseNormal(btVector3&) const */

void __thiscall
btConeTwistConstraint::adjustSwingAxisToUseEllipseNormal
          (btConeTwistConstraint *this,btVector3 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 4);
  if (1.192093e-07 < ABS(fVar1)) {
    fVar4 = ABS((*(float *)(this + 0x1d8) * -*(float *)(param_1 + 8) * fVar1) /
                (*(float *)(this + 0x1d4) * fVar1));
    if (0.0 <= *(float *)(param_1 + 8)) {
      fVar4 = -fVar4;
    }
    fVar5 = *(float *)param_1;
    uVar2 = NEON_fmadd(fVar4,fVar4,fVar1 * fVar1);
    fVar3 = (float)NEON_fmadd(fVar5,fVar5,uVar2);
    fVar3 = 1.0 / SQRT(fVar3);
    *(float *)param_1 = fVar3 * fVar5;
    *(float *)(param_1 + 4) = fVar3 * fVar1;
    *(float *)(param_1 + 8) = fVar3 * -fVar4;
  }
  return;
}


