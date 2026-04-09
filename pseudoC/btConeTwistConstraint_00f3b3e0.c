// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btConeTwistConstraint
// Entry Point: 00f3b3e0
// Size: 188 bytes
// Signature: undefined __thiscall btConeTwistConstraint(btConeTwistConstraint * this, btRigidBody * param_1, btTransform * param_2)


/* btConeTwistConstraint::btConeTwistConstraint(btRigidBody&, btTransform const&) */

void __thiscall
btConeTwistConstraint::btConeTwistConstraint
          (btConeTwistConstraint *this,btRigidBody *param_1,btTransform *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,5,param_1);
  *(undefined ***)this = &PTR__btTypedConstraint_01018c08;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x144) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x15c) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x154) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x16c) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x164) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x18c) = *(undefined8 *)(this + 0x14c);
  *(undefined8 *)(this + 0x184) = *(undefined8 *)(this + 0x144);
  *(undefined8 *)(this + 0x19c) = *(undefined8 *)(this + 0x15c);
  *(undefined8 *)(this + 0x194) = *(undefined8 *)(this + 0x154);
  *(undefined4 *)(this + 0x224) = 0;
  this[0x240] = (btConeTwistConstraint)0x0;
  *(undefined4 *)(this + 0x254) = 0xbf800000;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x274) = 0;
  *(undefined8 *)(this + 0x17c) = uVar2;
  *(undefined8 *)(this + 0x174) = uVar1;
  *(undefined8 *)(this + 0x1cc) = 0x3c23d70a3f800000;
  *(undefined8 *)(this + 0x1c4) = 0x3e99999a3f800000;
  *(undefined8 *)(this + 0x1dc) = 0x3d4ccccd5d5e0b6b;
  *(undefined8 *)(this + 0x1d4) = 0x5d5e0b6b5d5e0b6b;
  *(undefined8 *)(this + 0x26c) = 0x3f33333300000000;
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined8 *)(this + 0x1bc) = 0;
  *(undefined8 *)(this + 0x1ac) = *(undefined8 *)(this + 0x16c);
  *(undefined8 *)(this + 0x1a4) = *(undefined8 *)(this + 0x164);
  return;
}


