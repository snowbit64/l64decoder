// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo2NonVirtual
// Entry Point: 00f3f1e8
// Size: 308 bytes
// Signature: undefined __thiscall getInfo2NonVirtual(btGeneric6DofConstraint * this, btConstraintInfo2 * param_1, btTransform * param_2, btTransform * param_3, btVector3 * param_4, btVector3 * param_5, btVector3 * param_6, btVector3 * param_7)


/* btGeneric6DofConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2*, btTransform
   const&, btTransform const&, btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&) */

void __thiscall
btGeneric6DofConstraint::getInfo2NonVirtual
          (btGeneric6DofConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3,btVector3 *param_4,btVector3 *param_5,btVector3 *param_6,
          btVector3 *param_7)

{
  int iVar1;
  
  calculateTransforms(this,param_2,param_3);
  testAngularLimitMotor(this,0);
  testAngularLimitMotor(this,1);
  testAngularLimitMotor(this,2);
  if (this[0x52d] == (btGeneric6DofConstraint)0x0) {
    iVar1 = setLinearLimits(this,param_1,0,param_2,param_3,param_4,param_5,param_6,param_7);
    setAngularLimits(this,param_1,iVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    iVar1 = setAngularLimits(this,param_1,0,param_2,param_3,param_4,param_5,param_6,param_7);
    setLinearLimits(this,param_1,iVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


