// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2D6Joint
// Entry Point: 00991ed0
// Size: 452 bytes
// Signature: undefined __thiscall Bt2D6Joint(Bt2D6Joint * this, btRigidBody * param_1, btRigidBody * param_2, btTransform * param_3, btTransform * param_4)


/* Bt2D6Joint::Bt2D6Joint(btRigidBody&, btRigidBody&, btTransform const&, btTransform const&) */

void __thiscall
Bt2D6Joint::Bt2D6Joint
          (Bt2D6Joint *this,btRigidBody *param_1,btRigidBody *param_2,btTransform *param_3,
          btTransform *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,0xd,param_1,param_2);
  *(undefined ***)this = &PTR__btTypedConstraint_00fe0dc8;
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(this + 0x78) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(this + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(this + 0xa8) = uVar1;
  uVar2 = *(undefined8 *)(param_4 + 0x38);
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(this + 0x104) = 0x7f7fffff;
  *(undefined8 *)(this + 0xfc) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(this + 0x114) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x134) = 0x3f666666;
  *(undefined8 *)(this + 0x174) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x10c) = 0x3e4ccccd3e4ccccd;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 300) = 0x3f6666663f666666;
  *(undefined8 *)(this + 0x18c) = 0;
  *(undefined8 *)(this + 0x184) = 0;
  *(undefined8 *)(this + 0x19c) = 0;
  *(undefined8 *)(this + 0x194) = 0;
  *(undefined8 *)(this + 0xc0) = uVar2;
  *(undefined8 *)(this + 0xb8) = uVar1;
  *(undefined8 *)(this + 0x1ac) = 0;
  *(undefined8 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0x7f7fffff00000000;
  *(undefined8 *)(this + 0x1c0) = 0xbf8000003f800000;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x260) = 0x3f666666;
  *(undefined8 *)(this + 600) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x21c) = 0x3f666666;
  *(undefined8 *)(this + 0x214) = 0x3e4ccccd;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined8 *)(this + 0x250) = 0x7f7fffff00000000;
  *(undefined8 *)(this + 0x248) = 0xbf8000003f800000;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined2 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x1d8) = 0x3f666666;
  *(undefined8 *)(this + 0x1d0) = 0x3e4ccccd;
  this[0x1e0] = (Bt2D6Joint)0x0;
  *(undefined8 *)(this + 0x1e4) = 0x3dcccccd00000000;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x20c) = 0x7f7fffff00000000;
  *(undefined8 *)(this + 0x204) = 0xbf8000003f800000;
  this[0x230] = (Bt2D6Joint)0x0;
  *(undefined8 *)(this + 0x26c) = 0x3dcccccd00000000;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  this[0x1ec] = (Bt2D6Joint)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  this[0x224] = (Bt2D6Joint)0x0;
  *(undefined8 *)(this + 0x228) = 0x3dcccccd00000000;
  *(undefined8 *)(this + 0x23c) = 0;
  *(undefined8 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  this[0x268] = (Bt2D6Joint)0x0;
  this[0x274] = (Bt2D6Joint)0x0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  return;
}


