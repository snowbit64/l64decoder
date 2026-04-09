// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetPointForAngle
// Entry Point: 00f3bd3c
// Size: 252 bytes
// Signature: undefined __thiscall GetPointForAngle(btConeTwistConstraint * this, float param_1, float param_2)


/* btConeTwistConstraint::GetPointForAngle(float, float) const */

undefined4 __thiscall
btConeTwistConstraint::GetPointForAngle(btConeTwistConstraint *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float local_48;
  float fStack_44;
  float local_8;
  float fStack_4;
  
  sincosf(param_1,&fStack_4,&local_8);
  fVar1 = *(float *)(this + 0x1d4);
  if (1.192093e-07 < ABS(local_8)) {
    fVar2 = (fStack_4 * fStack_4) / (local_8 * local_8);
    fVar1 = SQRT((fVar2 + 1.0) /
                 (1.0 / (*(float *)(this + 0x1d8) * *(float *)(this + 0x1d8)) +
                 fVar2 / (fVar1 * fVar1)));
  }
  sincosf(fVar1 * 0.5,&fStack_44,&local_48);
  fStack_44 = fStack_44 / SQRT(local_8 * local_8 + fStack_4 * fStack_4);
  fVar1 = local_48 * param_2;
  local_8 = fStack_44 * local_8;
  fStack_44 = fStack_44 * -fStack_4;
  uVar3 = NEON_fmadd(local_8 * -param_2,local_8,fVar1 * local_48);
  uVar3 = NEON_fmsub(fStack_44 * param_2,fStack_44,uVar3);
  NEON_fmadd(fStack_44 * param_2,local_48,fStack_44 * fVar1);
  NEON_fnmsub(local_8 * -param_2,local_48,local_8 * fVar1);
  return uVar3;
}


