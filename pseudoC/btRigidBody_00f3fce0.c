// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btRigidBody
// Entry Point: 00f3fce0
// Size: 356 bytes
// Signature: undefined __thiscall btRigidBody(btRigidBody * this, float param_1, btMotionState * param_2, btCollisionShape * param_3, btVector3 * param_4)


/* btRigidBody::btRigidBody(float, btMotionState*, btCollisionShape*, btVector3 const&) */

void __thiscall
btRigidBody::btRigidBody
          (btRigidBody *this,float param_1,btMotionState *param_2,btCollisionShape *param_3,
          btVector3 *param_4)

{
  long lVar1;
  float local_c0 [2];
  btMotionState *local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  btCollisionShape *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined8 *)(this + 0xb0) = 0x3f800000;
  *(undefined8 *)(this + 0xa8) = 0x3f8000003f800000;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xb8) = 0x5d5e0b6b00000000;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xe8) = 0x1ffffffff;
  *(undefined8 *)(this + 0xe0) = 0xffffffff00000001;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3f00000000000000;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x100) = 1;
  *(undefined8 *)(this + 0x114) = 0x3f800000;
  *(undefined8 *)(this + 0x11c) = 0;
  this[0x140] = (btRigidBody)0x1;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 300) = 0;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  this[0x248] = (btRigidBody)0x1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined ***)this = &PTR__btRigidBody_01018d20;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x234) = 0;
  uStack_60 = *(undefined8 *)(param_4 + 8);
  local_68 = *(undefined8 *)param_4;
  uStack_50 = 0x3f000000;
  local_58 = 0;
  local_48 = 0x3f4ccccd00000000;
  local_40 = 0x3f800000;
  local_3c = 0;
  uStack_30 = 0x3c23d70a3c23d70a;
  local_38 = 0x3c23d70a3ba3d70a;
  local_b0 = 0x3f800000;
  local_a4 = 0;
  local_ac = 0;
  local_9c = 0x3f800000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x3f800000;
  local_74 = 0;
  local_84 = 0;
  local_7c = 0;
  local_c0[0] = param_1;
  local_b8 = param_2;
  local_70 = param_3;
  setupRigidBody(this,(btRigidBodyConstructionInfo *)local_c0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


