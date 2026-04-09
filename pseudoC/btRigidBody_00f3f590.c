// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btRigidBody
// Entry Point: 00f3f590
// Size: 188 bytes
// Signature: undefined __thiscall btRigidBody(btRigidBody * this, btRigidBodyConstructionInfo * param_1)


/* btRigidBody::btRigidBody(btRigidBody::btRigidBodyConstructionInfo const&) */

void __thiscall btRigidBody::btRigidBody(btRigidBody *this,btRigidBodyConstructionInfo *param_1)

{
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xb0) = 0x3f800000;
  *(undefined8 *)(this + 0xa8) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0xb8) = 0x5d5e0b6b00000000;
  *(undefined8 *)(this + 0xe8) = 0x1ffffffff;
  *(undefined8 *)(this + 0xe0) = 0xffffffff00000001;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3f00000000000000;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined4 *)(this + 0x100) = 1;
  *(undefined8 *)(this + 0x11c) = 0;
  *(undefined8 *)(this + 0x114) = 0x3f800000;
  this[0x140] = (btRigidBody)0x1;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined8 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  this[0x248] = (btRigidBody)0x1;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__btRigidBody_01018d20;
  *(undefined8 *)(this + 0x234) = 0;
  setupRigidBody(this,param_1);
  return;
}


