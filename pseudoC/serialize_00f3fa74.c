// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f3fa74
// Size: 484 bytes
// Signature: undefined __thiscall serialize(btRigidBody * this, void * param_1, btSerializer * param_2)


/* btRigidBody::serialize(void*, btSerializer*) const */

char * __thiscall btRigidBody::serialize(btRigidBody *this,void *param_1,btSerializer *param_2)

{
  btRigidBody bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  btCollisionObject::serialize((btCollisionObject *)this,param_1,param_2);
  bVar1 = this[0x208];
  *(undefined4 *)((long)param_1 + 0x110) = *(undefined4 *)(this + 0x14c);
  uVar2 = *(undefined4 *)(this + 0x150);
  *(uint *)((long)param_1 + 500) = (uint)(byte)bVar1;
  *(undefined4 *)((long)param_1 + 0x114) = uVar2;
  *(undefined4 *)((long)param_1 + 0x118) = *(undefined4 *)(this + 0x154);
  *(undefined4 *)((long)param_1 + 0x11c) = *(undefined4 *)(this + 0x158);
  *(undefined4 *)((long)param_1 + 0x120) = *(undefined4 *)(this + 0x15c);
  *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(this + 0x160);
  *(undefined4 *)((long)param_1 + 0x128) = *(undefined4 *)(this + 0x164);
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(this + 0x168);
  *(undefined4 *)((long)param_1 + 0x130) = *(undefined4 *)(this + 0x16c);
  *(undefined4 *)((long)param_1 + 0x134) = *(undefined4 *)(this + 0x170);
  *(undefined4 *)((long)param_1 + 0x138) = *(undefined4 *)(this + 0x174);
  *(undefined4 *)((long)param_1 + 0x13c) = *(undefined4 *)(this + 0x178);
  *(undefined4 *)((long)param_1 + 0x140) = *(undefined4 *)(this + 0x17c);
  *(undefined4 *)((long)param_1 + 0x144) = *(undefined4 *)(this + 0x180);
  *(undefined4 *)((long)param_1 + 0x148) = *(undefined4 *)(this + 0x184);
  *(undefined4 *)((long)param_1 + 0x14c) = *(undefined4 *)(this + 0x188);
  *(undefined4 *)((long)param_1 + 0x150) = *(undefined4 *)(this + 0x18c);
  *(undefined4 *)((long)param_1 + 0x154) = *(undefined4 *)(this + 400);
  *(undefined4 *)((long)param_1 + 0x158) = *(undefined4 *)(this + 0x194);
  *(undefined4 *)((long)param_1 + 0x15c) = *(undefined4 *)(this + 0x198);
  *(undefined4 *)((long)param_1 + 0x1d0) = *(undefined4 *)(this + 0x19c);
  *(undefined4 *)((long)param_1 + 0x160) = *(undefined4 *)(this + 0x278);
  *(undefined4 *)((long)param_1 + 0x164) = *(undefined4 *)(this + 0x27c);
  *(undefined4 *)((long)param_1 + 0x168) = *(undefined4 *)(this + 0x280);
  *(undefined4 *)((long)param_1 + 0x16c) = *(undefined4 *)(this + 0x284);
  *(undefined4 *)((long)param_1 + 0x170) = *(undefined4 *)(this + 0x1a0);
  *(undefined4 *)((long)param_1 + 0x174) = *(undefined4 *)(this + 0x1a4);
  *(undefined4 *)((long)param_1 + 0x178) = *(undefined4 *)(this + 0x1a8);
  *(undefined4 *)((long)param_1 + 0x17c) = *(undefined4 *)(this + 0x1ac);
  *(undefined4 *)((long)param_1 + 0x180) = *(undefined4 *)(this + 0x1b0);
  *(undefined4 *)((long)param_1 + 0x184) = *(undefined4 *)(this + 0x1b4);
  *(undefined4 *)((long)param_1 + 0x188) = *(undefined4 *)(this + 0x1b8);
  *(undefined4 *)((long)param_1 + 0x18c) = *(undefined4 *)(this + 0x1bc);
  *(undefined4 *)((long)param_1 + 400) = *(undefined4 *)(this + 0x1c0);
  *(undefined4 *)((long)param_1 + 0x194) = *(undefined4 *)(this + 0x1c4);
  *(undefined4 *)((long)param_1 + 0x198) = *(undefined4 *)(this + 0x1c8);
  *(undefined4 *)((long)param_1 + 0x19c) = *(undefined4 *)(this + 0x1cc);
  *(undefined4 *)((long)param_1 + 0x1a0) = *(undefined4 *)(this + 0x1d0);
  *(undefined4 *)((long)param_1 + 0x1a4) = *(undefined4 *)(this + 0x1d4);
  *(undefined4 *)((long)param_1 + 0x1a8) = *(undefined4 *)(this + 0x1d8);
  *(undefined4 *)((long)param_1 + 0x1ac) = *(undefined4 *)(this + 0x1dc);
  *(undefined4 *)((long)param_1 + 0x1b0) = *(undefined4 *)(this + 0x1e0);
  *(undefined4 *)((long)param_1 + 0x1b4) = *(undefined4 *)(this + 0x1e4);
  *(undefined4 *)((long)param_1 + 0x1b8) = *(undefined4 *)(this + 0x1e8);
  *(undefined4 *)((long)param_1 + 0x1bc) = *(undefined4 *)(this + 0x1ec);
  *(undefined4 *)((long)param_1 + 0x1c0) = *(undefined4 *)(this + 0x1f0);
  *(undefined4 *)((long)param_1 + 0x1c4) = *(undefined4 *)(this + 500);
  *(undefined4 *)((long)param_1 + 0x1c8) = *(undefined4 *)(this + 0x1f8);
  *(undefined4 *)((long)param_1 + 0x1cc) = *(undefined4 *)(this + 0x1fc);
  *(undefined8 *)((long)param_1 + 0x1d4) = *(undefined8 *)(this + 0x200);
  uVar3 = *(undefined8 *)(this + 0x20c);
  *(undefined8 *)((long)param_1 + 0x1e4) = *(undefined8 *)(this + 0x214);
  *(undefined8 *)((long)param_1 + 0x1dc) = uVar3;
  *(undefined8 *)((long)param_1 + 0x1ec) = *(undefined8 *)(this + 0x21c);
  return "btRigidBodyFloatData";
}


