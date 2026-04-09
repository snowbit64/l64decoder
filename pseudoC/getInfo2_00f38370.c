// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfo2
// Entry Point: 00f38370
// Size: 24 bytes
// Signature: undefined __thiscall getInfo2(btConeTwistConstraint * this, btConstraintInfo2 * param_1)


/* btConeTwistConstraint::getInfo2(btTypedConstraint::btConstraintInfo2*) */

void __thiscall
btConeTwistConstraint::getInfo2(btConeTwistConstraint *this,btConstraintInfo2 *param_1)

{
  getInfo2NonVirtual(this,param_1,(btTransform *)(*(long *)(this + 0x28) + 8),
                     (btTransform *)(*(long *)(this + 0x30) + 8),
                     (btMatrix3x3 *)(*(long *)(this + 0x28) + 0x14c),
                     (btMatrix3x3 *)(*(long *)(this + 0x30) + 0x14c));
  return;
}


