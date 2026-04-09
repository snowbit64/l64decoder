// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStaticActor
// Entry Point: 0099cdc8
// Size: 896 bytes
// Signature: undefined __thiscall addStaticActor(Bt2ScenegraphPhysicsContext * this, GsShape * param_1)


/* Bt2ScenegraphPhysicsContext::addStaticActor(GsShape*) */

void __thiscall
Bt2ScenegraphPhysicsContext::addStaticActor(Bt2ScenegraphPhysicsContext *this,GsShape *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  Bt2PhysicsRBObject *this_00;
  long lVar5;
  btRigidBody *this_01;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined8 local_bc;
  undefined local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (*(long *)(this_00 + 0x30) == 0) {
    uVar8 = *(uint *)(this_00 + 8);
    if ((uVar8 >> 9 & 1) != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 0099d0c4 to 0099d0cf has its CatchHandler @ 0099d14c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "WARNING: static shape \'%s\' is marked COMPOUND\nThese are not compatible settings and may cause a crash; COMPOUND flag will be removed\n"
                        ,*(undefined8 *)(param_1 + 8));
      uVar8 = *(uint *)(this_00 + 8) & 0xfffffdff;
      *(uint *)(this_00 + 8) = uVar8;
    }
    if ((uVar8 >> 10 & 1) != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 0099d10c to 0099d117 has its CatchHandler @ 0099d148 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "WARNING: static shape \'%s\' is marked COMPOUND_CHILD\nThese are not compatible settings and may cause a crash; COMPOUND_CHILD flag will be removed\n"
                        ,*(undefined8 *)(param_1 + 8));
      *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) & 0xfffffbff | 0x40;
      Bt2PhysicsRBObject::raiseDirtyFlags(this_00,0x40);
    }
    if (*(CollisionDataProvider **)(this_00 + 0x50) == (CollisionDataProvider *)0x0) {
      if (((byte)this_00[9] >> 4 & 1) == 0) {
        lVar5 = Bt2PhysicsColShapeCache::getOrCookCachedTriangleMesh
                          ((Bt2PhysicsColShapeCache *)(this + 0x90),(TransformGroup *)param_1,
                           *(Geometry **)(param_1 + 0x170));
      }
      else {
        lVar5 = Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh
                          ((Bt2PhysicsColShapeCache *)(this + 0x90),(TransformGroup *)param_1,
                           *(Geometry **)(param_1 + 0x170));
      }
    }
    else {
      lVar5 = Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh
                        ((Bt2PhysicsColShapeCache *)(this + 0x90),(TransformGroup *)param_1,
                         *(CollisionDataProvider **)(this_00 + 0x50));
    }
    if (lVar5 != 0) {
      RawTransformGroup::updateWorldTransformation();
      uStack_98 = *(undefined8 *)(param_1 + 0xc0);
      local_a0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_88 = *(undefined8 *)(param_1 + 0xd0);
      local_90 = *(undefined8 *)(param_1 + 200);
      uStack_78 = *(undefined8 *)(param_1 + 0xe0);
      local_80 = *(undefined8 *)(param_1 + 0xd8);
      uStack_68 = *(undefined8 *)(param_1 + 0xf0);
      local_70 = *(undefined8 *)(param_1 + 0xe8);
      Matrix4x4::orthonormalize3x3();
      local_d8 = 0;
      local_b4 = 0;
      uStack_e0 = 0;
      local_bc = 0x3f8000003f4ccccd;
      uStack_a8 = 0x3c23d70a3c23d70a;
      local_b0 = 0x3c23d70a3ba3d70a;
      local_138[0] = 0;
      local_130 = 0;
      local_11c = 0;
      local_10c = 0;
      local_fc = 0;
      local_ec = 0;
      local_c8 = *(float *)(this_00 + 0x60);
      if (*(float *)(this_00 + 0x60) < *(float *)(this_00 + 100)) {
        local_c8 = *(float *)(this_00 + 100);
      }
      if (local_c8 < 0.0) {
        local_c8 = 0.0;
      }
      local_c8 = SQRT(local_c8);
      local_c0 = *(float *)(this_00 + 0x5c);
      if (local_c0 < 0.0) {
        local_c0 = 0.0;
      }
      local_c0 = SQRT(local_c0);
      local_128 = (undefined4)local_a0;
      uStack_124 = (undefined4)local_90;
      local_118 = local_a0._4_4_;
      uStack_114 = local_90._4_4_;
      local_110 = local_80._4_4_;
      local_120 = (undefined4)local_80;
      local_108 = (undefined4)uStack_98;
      uStack_104 = (undefined4)uStack_88;
      local_c4 = *(undefined4 *)(this_00 + 0x68);
      local_100 = (undefined4)uStack_78;
      local_f8 = local_70;
      local_d0 = *(undefined8 *)(this_00 + 0x6c);
      local_f0 = (undefined4)uStack_68;
      local_e8 = lVar5;
      this_01 = (btRigidBody *)btAlignedAllocInternal(0x2c0,0x10);
                    /* try { // try from 0099cfe4 to 0099cfeb has its CatchHandler @ 0099d164 */
      btRigidBody::btRigidBody(this_01,(btRigidBodyConstructionInfo *)local_138);
      puVar6 = (undefined4 *)operator_new(0x18);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(GsShape **)(puVar6 + 2) = param_1;
      *puVar6 = 1;
      puVar6[4] = uVar1;
      uVar8 = *(uint *)(this_00 + 8);
      if ((uVar8 >> 0xc & 1) != 0) {
        *puVar6 = 0x21;
      }
      *(undefined4 **)(this_01 + 0x108) = puVar6;
      uVar2 = *(uint *)(this_01 + 0xe0) | (uVar8 & 0x1000) >> 10;
      uVar8 = uVar2 | 8;
      if (1 < *(int *)(lVar5 + 8) - 0x15U) {
        uVar8 = uVar2;
      }
      Bt2PhysicsUtil::updateRigidBodyFrictionVelocity(this_00,this_01,*(float *)(this_00 + 0x88));
      *(uint *)(this_01 + 0xe0) = uVar8;
      Bt2PhysicsRBObject::init(this_00,this,this_01);
      uVar7 = Bt2PhysicsUtil::getMergedRigidBodyCollisionMask(this_00,this_01);
      (**(code **)(**(long **)(this + 0x30) + 0xb0))
                (*(long **)(this + 0x30),this_01,uVar7 & 0xffffffff,(uVar7 & 0xffffffff) >> 0x10);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


