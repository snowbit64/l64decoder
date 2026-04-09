// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btTypedConstraint
// Entry Point: 00f31c18
// Size: 76 bytes
// Signature: undefined __thiscall btTypedConstraint(btTypedConstraint * this, btTypedConstraintType param_1, btRigidBody * param_2, btRigidBody * param_3)


/* btTypedConstraint::btTypedConstraint(btTypedConstraintType, btRigidBody&, btRigidBody&) */

void __thiscall
btTypedConstraint::btTypedConstraint
          (btTypedConstraint *this,btTypedConstraintType param_1,btRigidBody *param_2,
          btRigidBody *param_3)

{
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(btRigidBody **)(this + 0x28) = param_2;
  *(btRigidBody **)(this + 0x30) = param_3;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x1c) = 1;
  *(undefined ***)this = &PTR__btTypedConstraint_00fe0e30;
  *(btTypedConstraintType *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined8 *)(this + 0x38) = 0x3e99999a00000000;
  return;
}


