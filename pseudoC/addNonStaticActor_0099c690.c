// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addNonStaticActor
// Entry Point: 0099c690
// Size: 1744 bytes
// Signature: undefined __thiscall addNonStaticActor(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, vector * param_2)


/* WARNING: Type propagation algorithm not settling */
/* Bt2ScenegraphPhysicsContext::addNonStaticActor(TransformGroup*, std::__ndk1::vector<GsShape*,
   std::__ndk1::allocator<GsShape*> > const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::addNonStaticActor
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,vector *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  Bt2PhysicsRBObject *this_00;
  btCompoundShape *this_01;
  long lVar5;
  btCompoundShape *this_02;
  uint *puVar6;
  undefined8 *puVar7;
  btRigidBody *this_03;
  Bt2PhysicsRBObject *this_04;
  void *pvVar8;
  TransformGroup **ppTVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  btCollisionShape **ppbVar15;
  uint uVar16;
  TransformGroup *pTVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float local_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 local_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined8 local_384;
  undefined8 local_37c;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 local_33c;
  undefined4 uStack_338;
  undefined4 local_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 uStack_318;
  undefined4 local_314;
  undefined4 uStack_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  ulong local_2f4;
  undefined8 local_2ec;
  undefined4 local_2e4;
  btCompoundShape *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  float local_2c0;
  undefined4 local_2bc;
  float local_2b8;
  undefined8 local_2b4;
  undefined local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  TransformGroup *local_1f0 [40];
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (*(long *)(this_00 + 0x30) != 0) goto LAB_0099cc20;
  if (0x140 < (ulong)(*(long *)(param_2 + 8) - *(long *)param_2)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0099cd24 to 0099cd2f has its CatchHandler @ 0099cd60 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to create compound %s with %u children. Maximum is %u\n",
                       *(undefined8 *)(param_1 + 8),
                       (ulong)(*(long *)(param_2 + 8) - *(long *)param_2) >> 3,0x28);
    goto LAB_0099cc20;
  }
  if (*(CollisionDataProvider **)(this_00 + 0x50) == (CollisionDataProvider *)0x0) {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_370,(Matrix4x4 *)(param_1 + 0xb8));
    lVar5 = *(long *)param_2;
    if (*(long *)(param_2 + 8) == lVar5) goto LAB_0099cc20;
    uVar13 = 0;
    uVar11 = 0;
    do {
      pTVar17 = *(TransformGroup **)(lVar5 + uVar13 * 8);
      lVar5 = Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh
                        ((Bt2PhysicsColShapeCache *)(this + 0x90),pTVar17,
                         *(Geometry **)(pTVar17 + 0x170));
      if (lVar5 != 0) {
        uVar10 = (ulong)uVar11;
        uVar11 = uVar11 + 1;
        local_1f0[uVar10] = pTVar17;
        *(long *)((long)&local_330 + uVar10 * 2 * 4) = lVar5;
      }
      lVar5 = *(long *)param_2;
      uVar13 = (ulong)((int)uVar13 + 1);
    } while (uVar13 < (ulong)(*(long *)(param_2 + 8) - lVar5 >> 3));
    if (uVar11 == 0) goto LAB_0099cc20;
    uStack_3a4 = 0;
    uStack_3a0 = 0;
    uStack_3ac = 0;
    uStack_3a8 = 0;
    local_3b0 = 0x3f800000;
    local_39c = 0x3f800000;
    local_398 = 0;
    uStack_390 = 0;
    local_388 = 0x3f800000;
    local_37c = 0;
    local_384 = 0;
    local_374 = 0;
    this_01 = (btCompoundShape *)btAlignedAllocInternal(0x80,0x10);
                    /* try { // try from 0099c82c to 0099c837 has its CatchHandler @ 0099cd88 */
    btCompoundShape::btCompoundShape(this_01,false,uVar11);
    uVar13 = (ulong)uVar11;
    ppbVar15 = (btCollisionShape **)&local_330;
    do {
      btCompoundShape::addChildShape(this_01,(btTransform *)&local_3b0,*ppbVar15);
      uVar13 = uVar13 - 1;
      ppbVar15 = ppbVar15 + 1;
    } while (uVar13 != 0);
    if (uVar11 < 2) {
      if (local_1f0[0] == param_1) goto LAB_0099c8c4;
      uVar12 = 3;
      uVar13 = 1;
    }
    else {
      uVar12 = 0x83;
      uVar13 = (ulong)uVar11;
    }
    puVar6 = (uint *)operator_new(0x20);
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar16 = (uint)uVar13;
    *puVar6 = uVar12;
    *(TransformGroup **)(puVar6 + 2) = param_1;
    puVar6[4] = uVar1;
                    /* try { // try from 0099cca0 to 0099cca3 has its CatchHandler @ 0099cd74 */
    pvVar8 = operator_new__(uVar13 << 4);
    puVar14 = (undefined4 *)((long)pvVar8 + 0xc);
    ppTVar9 = local_1f0;
    *(void **)(puVar6 + 6) = pvVar8;
    do {
      pTVar17 = *ppTVar9;
      lVar5 = RawTransformGroup::getPhysicsObject();
      *(TransformGroup **)(puVar14 + -3) = pTVar17;
      *puVar14 = *(undefined4 *)(lVar5 + 0x88);
      if ((*(byte *)(lVar5 + 9) >> 3 & 1) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)(lVar5 + 0x58);
      }
      puVar14[-1] = uVar18;
      ppTVar9 = ppTVar9 + 1;
      puVar14 = puVar14 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    bVar3 = uVar11 < 2;
    uVar11 = *(uint *)(this_00 + 8);
  }
  else {
    this_01 = (btCompoundShape *)
              Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh
                        ((Bt2PhysicsColShapeCache *)(this + 0x90),param_1,
                         *(CollisionDataProvider **)(this_00 + 0x50));
    if (this_01 == (btCompoundShape *)0x0) goto LAB_0099cc20;
    local_1f0[0] = param_1;
    if (*(int *)((btCollisionShape *)this_01 + 8) != 0x1f) {
      uStack_324 = 0;
      local_320 = 0;
      local_330._4_4_ = 0;
      local_328 = 0;
      local_330._0_4_ = 1.0;
      local_31c = 0x3f800000;
      uStack_318 = 0;
      local_314 = 0;
      uStack_310 = 0;
      local_30c = 0;
      local_2fc = 0;
      uStack_2f8 = 0;
      uStack_304 = 0;
      uStack_300 = 0;
      local_308 = 0x3f800000;
      local_2f4 = local_2f4 & 0xffffffff00000000;
      this_02 = (btCompoundShape *)btAlignedAllocInternal(0x80,0x10);
                    /* try { // try from 0099c8a4 to 0099c8af has its CatchHandler @ 0099cd9c */
      btCompoundShape::btCompoundShape(this_02,false,1);
      btCompoundShape::addChildShape(this_02,(btTransform *)&local_330,(btCollisionShape *)this_01);
      this_01 = this_02;
    }
LAB_0099c8c4:
    puVar6 = (uint *)operator_new(0x18);
    bVar3 = true;
    uVar11 = *(uint *)(param_1 + 0x18);
    uVar16 = 1;
    *(TransformGroup **)(puVar6 + 2) = param_1;
    *puVar6 = 1;
    puVar6[4] = uVar11;
    uVar11 = *(uint *)(this_00 + 8);
  }
  if ((uVar11 >> 0xc & 1) != 0) {
    *puVar6 = *puVar6 | 0x20;
  }
  if ((uVar11 >> 8 & 1) == 0) {
    if ((bool)(bVar3 & local_1f0[0] == param_1)) {
      ppTVar9 = (TransformGroup **)0x0;
    }
    else {
      ppTVar9 = local_1f0;
    }
    Bt2PhysicsUtil::updateCompoundMassProps
              (param_1,ppTVar9,this_01,(btTransform *)&local_370,&local_3b4,(btVector3 *)&local_3b0)
    ;
  }
  else {
    local_3b4 = 0.0;
    local_3b0 = 0;
    uStack_3ac = 0;
    uStack_3a8 = 0;
    uStack_3a4 = 0;
    uStack_364 = 0;
    uStack_360 = 0;
    local_370 = 0x3f800000;
    local_35c = 0x3f800000;
    uStack_348 = 0x3f800000;
    uStack_36c = 0;
    uStack_368 = 0;
    local_358 = 0;
    local_350 = 0;
    local_33c = 0;
    uStack_338 = 0;
    uStack_344 = 0;
    uStack_340 = 0;
    local_334 = 0;
    if ((bool)(bVar3 & local_1f0[0] == param_1)) {
      ppTVar9 = (TransformGroup **)0x0;
    }
    else {
      ppTVar9 = local_1f0;
    }
    Bt2PhysicsUtil::updateCompoundMassPropsKinematic(param_1,ppTVar9,this_01);
  }
  if (1 < *(int *)(this_01 + 0x24)) {
    btCompoundShape::createAabbTreeFromChildren();
  }
  RawTransformGroup::updateWorldTransformation();
  uVar18 = *(undefined4 *)(param_1 + 0xe0);
  uVar21 = *(undefined4 *)(param_1 + 0xb8);
  uVar22 = *(undefined4 *)(param_1 + 0xbc);
  uVar23 = *(undefined4 *)(param_1 + 200);
  uVar24 = *(undefined4 *)(param_1 + 0xcc);
  uVar20 = *(undefined8 *)(param_1 + 0xe8);
  uVar25 = *(undefined4 *)(param_1 + 0xd8);
  uVar26 = *(undefined4 *)(param_1 + 0xdc);
  uVar27 = *(undefined4 *)(param_1 + 0xc0);
  uVar19 = *(undefined4 *)(param_1 + 0xf0);
  uVar28 = *(undefined4 *)(param_1 + 0xd0);
  puVar7 = (undefined8 *)btAlignedAllocInternal(0xb8,0x10);
  puVar7[1] = 0;
  puVar7[2] = this;
  *(undefined4 *)(puVar7 + 3) = uVar21;
  *(undefined4 *)((long)puVar7 + 0x1c) = uVar23;
  *(undefined4 *)(puVar7 + 4) = uVar25;
  *(undefined4 *)((long)puVar7 + 0x24) = 0;
  puVar7[9] = uVar20;
  *(undefined4 *)(puVar7 + 5) = uVar22;
  *(undefined4 *)((long)puVar7 + 0x2c) = uVar24;
  *puVar7 = &PTR__btMotionState_00fe1868;
  *(undefined4 *)(puVar7 + 6) = uVar26;
  *(undefined4 *)((long)puVar7 + 0x34) = 0;
  *(undefined4 *)(puVar7 + 7) = uVar27;
  *(undefined4 *)((long)puVar7 + 0x3c) = uVar28;
  *(undefined4 *)(puVar7 + 8) = uVar18;
  *(undefined4 *)(puVar7 + 10) = uVar19;
  *(undefined4 *)((long)puVar7 + 0x44) = 0;
  *(undefined4 *)((long)puVar7 + 0x54) = 0;
  puVar7[0xc] = CONCAT44(uStack_364,uStack_368);
  puVar7[0xb] = CONCAT44(uStack_36c,local_370);
  *(uint *)(puVar7 + 0x13) = *(uint *)(puVar7 + 0x13) & 0xfffffffe;
  puVar7[0xe] = local_358;
  puVar7[0xd] = CONCAT44(local_35c,uStack_360);
  local_328 = SUB84(puVar7,0);
  uStack_324 = (undefined4)((ulong)puVar7 >> 0x20);
  puVar7[0x10] = CONCAT44(uStack_344,uStack_348);
  puVar7[0xf] = local_350;
  local_2ac = 0;
  puVar7[0x12] = CONCAT44(local_334,uStack_338);
  puVar7[0x11] = CONCAT44(local_33c,uStack_340);
  uStack_2d0 = CONCAT44(uStack_3a4,uStack_3a8);
  local_2d8 = CONCAT44(uStack_3ac,local_3b0);
  iVar4 = *(int *)(this + 0x20);
  *(undefined8 *)((long)puVar7 + 0x9c) = 0;
  *(undefined8 *)((long)puVar7 + 0xac) = 0;
  *(undefined8 *)((long)puVar7 + 0xa4) = 0;
  local_2b4 = 0x3f8000003f4ccccd;
  local_314 = 0;
  uStack_310 = 0;
  local_31c = 0;
  uStack_318 = 0;
  *(int *)(puVar7 + 0x13) = iVar4 * 2 + -2;
  local_320 = 0x3f800000;
  local_30c = 0x3f800000;
  local_308 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  local_2fc = 0;
  local_2ec = 0;
  local_2f4 = 0;
  uStack_2a0 = 0x3c23d70a3c23d70a;
  local_2a8 = 0x3c23d70a3ba3d70a;
  uStack_2f8 = 0x3f800000;
  local_2e4 = 0;
  local_2c0 = *(float *)(this_00 + 0x60);
  if (*(float *)(this_00 + 0x60) < *(float *)(this_00 + 100)) {
    local_2c0 = *(float *)(this_00 + 100);
  }
  if (local_2c0 < 0.0) {
    local_2c0 = 0.0;
  }
  local_2c0 = SQRT(local_2c0);
  local_2b8 = *(float *)(this_00 + 0x5c);
  if (local_2b8 < 0.0) {
    local_2b8 = 0.0;
  }
  local_330._0_4_ = local_3b4;
  local_2b8 = SQRT(local_2b8);
  local_2bc = *(undefined4 *)(this_00 + 0x68);
  local_2c8 = *(undefined8 *)(this_00 + 0x6c);
  local_2e0 = this_01;
  this_03 = (btRigidBody *)btAlignedAllocInternal(0x2c0,0x10);
                    /* try { // try from 0099cb44 to 0099cb4b has its CatchHandler @ 0099cdb0 */
  btRigidBody::btRigidBody(this_03,(btRigidBodyConstructionInfo *)&local_330);
  puVar7[1] = this_03;
  *(uint **)(this_03 + 0x108) = puVar6;
  uVar12 = *(uint *)(this_00 + 8);
  uVar11 = 4;
  if ((uVar12 & 0x4000) != 0) {
    uVar11 = 0x204;
  }
  *(uint *)(this_03 + 0xe0) =
       uVar12 >> 7 & 2 | *(uint *)(this_03 + 0xe0) & 0xfffffffe |
       uVar11 & (int)(uVar12 << 0x13) >> 0x1f;
  Bt2PhysicsUtil::updateRigidBodyFrictionVelocity(this_00,this_03,*(float *)(this_00 + 0x88));
  Bt2PhysicsRBObject::init(this_00,this,this_03);
  ppTVar9 = local_1f0;
  if (uVar16 < 2) {
    uVar16 = 1;
  }
  uVar13 = (ulong)uVar16;
  do {
    if ((*ppTVar9 != param_1) &&
       (this_04 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject(),
       (*(uint *)(this_04 + 8) & 0x600) == 0x400)) {
      Bt2PhysicsRBObject::init(this_04,this,this_03);
    }
    ppTVar9 = ppTVar9 + 1;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  uVar13 = Bt2PhysicsUtil::getMergedRigidBodyCollisionMask(this_00,this_03);
  (**(code **)(**(long **)(this + 0x30) + 0xb0))
            (*(long **)(this + 0x30),this_03,uVar13 & 0xffffffff,(uVar13 & 0xffffffff) >> 0x10);
LAB_0099cc20:
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


