// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doStepSimulation
// Entry Point: 0099bb48
// Size: 1856 bytes
// Signature: undefined __thiscall doStepSimulation(Bt2ScenegraphPhysicsContext * this, float param_1, uint param_2)


/* Bt2ScenegraphPhysicsContext::doStepSimulation(float, unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::doStepSimulation
          (Bt2ScenegraphPhysicsContext *this,float param_1,uint param_2)

{
  IRaycastReport **ppIVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  btOverlappingPairCache *pbVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  Bt2PhysicsOverlapCallback *this_00;
  btDispatcher *pbVar10;
  IRaycastReport *pIVar11;
  long *plVar12;
  IRaycastReport **ppIVar13;
  long **pplVar14;
  IRaycastReport **ppIVar15;
  long **pplVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined **local_268;
  undefined4 local_260;
  undefined **local_258;
  btCollisionObject *pbStack_250;
  undefined8 local_248;
  long *plStack_240;
  undefined4 local_238;
  undefined local_22c;
  long **local_228;
  long **local_218;
  long **local_1e8;
  btCollisionObject abStack_1e0 [4];
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  void *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  long *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  Bt2PhysicsContextManager::getInstance();
  Bt2PhysicsContextManager::clearCollisionTimes_Bg();
  if (0.0 < param_1) {
    plVar12 = *(long **)(this + 0x30);
    uVar20 = *(undefined4 *)(this + 0x60);
    uVar21 = *(undefined4 *)(plVar12 + 0x2e);
    uVar5 = (**(code **)(*plVar12 + 0x68))(param_1,uVar20,plVar12,param_2);
    fVar19 = *(float *)(plVar12 + 0x2e);
    uVar2 = uVar5;
    if ((int)param_2 <= (int)uVar5) {
      uVar2 = param_2;
    }
    fVar17 = (float)NEON_fnmsub((float)uVar2,uVar20,uVar21);
    if (param_2 <= uVar5) {
      uVar5 = param_2;
    }
    this_00 = *(Bt2PhysicsOverlapCallback **)(this + 0x40);
    *(uint *)(this + 0x80) = uVar5;
    *(float *)(this + 0x78) = param_1 * 1000.0;
    *(float *)(this + 0x70) = (fVar19 + fVar17) * 1000.0;
    pbVar6 = (btOverlappingPairCache *)
             (**(code **)(**(long **)(*(long *)(this + 0x30) + 0x60) + 0x48))();
    Bt2PhysicsOverlapCallback::resolveNearCollisions(this_00,pbVar6);
  }
  pplVar14 = *(long ***)(this + 0x3c0);
  pplVar16 = *(long ***)(this + 0x3c8);
  pbVar10 = *(btDispatcher **)(*(long *)(this + 0x30) + 0x28);
  if (pplVar14 != pplVar16) {
    do {
      DataMemoryBarrier(2,3);
      *(long **)(this + 0x3d8) = *pplVar14;
      DataMemoryBarrier(2,1);
      plVar12 = *pplVar14;
      if (plVar12 != (long *)0x0) {
        btCollisionObject::btCollisionObject(abStack_1e0);
        local_1d8 = *(undefined4 *)(pplVar14 + 9);
        local_1d4 = *(undefined4 *)(pplVar14 + 0xb);
        local_1d0 = (void *)(ulong)*(uint *)(pplVar14 + 0xd);
        local_1c8 = *(undefined4 *)((long)pplVar14 + 0x4c);
        local_1c4 = *(undefined4 *)((long)pplVar14 + 0x5c);
        local_1c0 = *(undefined4 *)((long)pplVar14 + 0x6c);
        local_1bc = 0;
        local_1b8 = *(undefined4 *)(pplVar14 + 10);
        local_1b4 = *(undefined4 *)(pplVar14 + 0xc);
        local_1b0 = *(undefined4 *)(pplVar14 + 0xe);
        local_1ac = 0;
        local_1a8 = pplVar14[0xf];
        local_1a0 = *(undefined4 *)(pplVar14 + 0x10);
        local_19c = 0;
        pbStack_250 = abStack_1e0;
        if (*(char *)((long)pplVar14 + 0x9b) == '\0') {
          local_268 = &PTR__ContactResultCallback_00fe15f8;
          local_258 = &PTR__OBBOnEntityContactResultCallback_00fe1630;
          local_260 = 0xffff0001;
          local_248 = 0;
          local_238 = 0;
          local_22c = 0;
                    /* try { // try from 0099bd90 to 0099bdbf has its CatchHandler @ 0099c2b4 */
          plStack_240 = plVar12;
          Bt2SceneQueryUtil::overlapBoxShapes
                    (*(Bt2World **)(this + 0x30),pbVar10,(OBBContactResultCallback *)&local_268,
                     (Vector3 *)(pplVar14 + 0x11),*(uint *)((long)pplVar14 + 0x94),
                     *(bool *)(pplVar14 + 0x13),*(bool *)((long)pplVar14 + 0x99),
                     *(bool *)((long)pplVar14 + 0x9a),(btAlignedObjectArray *)(pplVar14 + 5));
          (**(code **)(*plVar12 + 0x20))(plVar12,0xffffffff,0,0,1);
        }
        else {
          local_268 = &PTR__ContactResultCallback_00fe1510;
          local_258 = &PTR__OBBArrayContactResultCallback_00fe1548;
          local_1e8 = pplVar14 + 1;
          local_260 = 0xffff0001;
          local_22c = 0;
          local_248 = 0;
          plStack_240 = (long *)0x0;
          local_238 = 0;
                    /* try { // try from 0099bca0 to 0099bcaf has its CatchHandler @ 0099c294 */
          Bt2SceneQueryUtil::overlapBoxShapes
                    (*(Bt2World **)(this + 0x30),pbVar10,(OBBContactResultCallback *)&local_268,
                     (Vector3 *)(pplVar14 + 0x11),*(uint *)((long)pplVar14 + 0x94),
                     *(bool *)(pplVar14 + 0x13),*(bool *)((long)pplVar14 + 0x99),
                     *(bool *)((long)pplVar14 + 0x9a),(btAlignedObjectArray *)(pplVar14 + 5));
        }
        btCollisionObject::~btCollisionObject(abStack_1e0);
      }
      pplVar14 = pplVar14 + 0x14;
    } while (pplVar14 != pplVar16);
  }
  *(undefined8 *)(this + 0x3d8) = 0;
  pplVar14 = *(long ***)(this + 0x3f8);
  pplVar16 = *(long ***)(this + 0x400);
  if (pplVar14 != pplVar16) {
    do {
      DataMemoryBarrier(2,3);
      *(long **)(this + 0x410) = *pplVar14;
      DataMemoryBarrier(2,1);
      plVar12 = *pplVar14;
      if (plVar12 != (long *)0x0) {
        btCollisionObject::btCollisionObject(abStack_1e0);
        local_1a8 = pplVar14[5];
        local_1a0 = *(undefined4 *)(pplVar14 + 6);
        local_19c = 0;
        pbStack_250 = abStack_1e0;
        if (*(char *)((long)pplVar14 + 0x3f) == '\0') {
          local_268 = &PTR__ContactResultCallback_00fe1700;
          local_258 = &PTR__SphereOnEntityContactResultCallback_00fe1738;
          local_260 = 0xffff0001;
          local_248 = 0;
          local_238 = 0;
          local_22c = 0;
                    /* try { // try from 0099becc to 0099bef7 has its CatchHandler @ 0099c2b0 */
          plStack_240 = plVar12;
          Bt2SceneQueryUtil::overlapSphereShapes
                    (*(Bt2World **)(this + 0x30),pbVar10,(SphereContactResultCallback *)&local_268,
                     *(float *)((long)pplVar14 + 0x34),*(uint *)(pplVar14 + 7),
                     *(bool *)((long)pplVar14 + 0x3c),*(bool *)((long)pplVar14 + 0x3d),
                     *(bool *)((long)pplVar14 + 0x3e));
          (**(code **)(*plVar12 + 0x20))(plVar12,0xffffffff,0,0,1);
        }
        else {
          local_268 = &PTR__ContactResultCallback_00fe1670;
          local_258 = &PTR__SphereArrayContactResultCallback_00fe16a8;
          local_218 = pplVar14 + 1;
          local_260 = 0xffff0001;
          local_22c = 0;
          local_248 = 0;
          plStack_240 = (long *)0x0;
          local_238 = 0;
                    /* try { // try from 0099be38 to 0099be43 has its CatchHandler @ 0099c290 */
          Bt2SceneQueryUtil::overlapSphereShapes
                    (*(Bt2World **)(this + 0x30),pbVar10,(SphereContactResultCallback *)&local_268,
                     *(float *)((long)pplVar14 + 0x34),*(uint *)(pplVar14 + 7),
                     *(bool *)((long)pplVar14 + 0x3c),*(bool *)((long)pplVar14 + 0x3d),
                     *(bool *)((long)pplVar14 + 0x3e));
        }
        btCollisionObject::~btCollisionObject(abStack_1e0);
      }
      pplVar14 = pplVar14 + 8;
    } while (pplVar14 != pplVar16);
  }
  *(undefined8 *)(this + 0x410) = 0;
  pplVar14 = *(long ***)(this + 0x430);
  pplVar16 = *(long ***)(this + 0x438);
  if (pplVar14 != pplVar16) {
    do {
      DataMemoryBarrier(2,3);
      *(long **)(this + 0x448) = *pplVar14;
      DataMemoryBarrier(2,1);
      plVar12 = *pplVar14;
      if (plVar12 != (long *)0x0) {
        btCollisionObject::btCollisionObject(abStack_1e0);
        local_1d8 = *(undefined4 *)(pplVar14 + 9);
        local_1d4 = *(undefined4 *)(pplVar14 + 0xb);
        local_1d0 = (void *)(ulong)*(uint *)(pplVar14 + 0xd);
        local_1c8 = *(undefined4 *)((long)pplVar14 + 0x4c);
        local_1c4 = *(undefined4 *)((long)pplVar14 + 0x5c);
        local_1c0 = *(undefined4 *)((long)pplVar14 + 0x6c);
        local_1bc = 0;
        local_1b8 = *(undefined4 *)(pplVar14 + 10);
        local_1b4 = *(undefined4 *)(pplVar14 + 0xc);
        local_1b0 = *(undefined4 *)(pplVar14 + 0xe);
        local_1ac = 0;
        local_1a8 = pplVar14[0xf];
        local_1a0 = *(undefined4 *)(pplVar14 + 0x10);
        local_19c = 0;
        pbStack_250 = abStack_1e0;
        if (*(char *)((long)pplVar14 + 0xae) == '\0') {
          local_268 = &PTR__ContactResultCallback_00fe17f0;
          local_258 = &PTR__PointCloudOnEntityContactResultCallback_00fe1828;
          local_260 = 0xffff0001;
          local_248 = 0;
          local_238 = 0;
          local_22c = 0;
                    /* try { // try from 0099c06c to 0099c09b has its CatchHandler @ 0099c2ac */
          plStack_240 = plVar12;
          Bt2SceneQueryUtil::overlapPointCloudShapes
                    (*(Bt2World **)(this + 0x30),pbVar10,(ContactResultCallback *)&local_268,
                     (Vector3 *)pplVar14[0x12],*(uint *)(pplVar14 + 0x11),*(uint *)(pplVar14 + 0x15)
                     ,*(bool *)((long)pplVar14 + 0xac),*(bool *)((long)pplVar14 + 0xad),
                     (btAlignedObjectArray *)(pplVar14 + 5));
          (**(code **)(*plVar12 + 0x20))(plVar12,0xffffffff,0,0,1);
        }
        else {
          local_268 = &PTR__ContactResultCallback_00fe1778;
          local_258 = &PTR__PointCloudArrayContactResultCallback_00fe17b0;
          local_228 = pplVar14 + 1;
          local_260 = 0xffff0001;
          local_22c = 0;
          local_238 = 0;
          local_248 = 0;
          plStack_240 = (long *)0x0;
                    /* try { // try from 0099bf7c to 0099bf8b has its CatchHandler @ 0099c28c */
          Bt2SceneQueryUtil::overlapPointCloudShapes
                    (*(Bt2World **)(this + 0x30),pbVar10,(ContactResultCallback *)&local_268,
                     (Vector3 *)pplVar14[0x12],*(uint *)(pplVar14 + 0x11),*(uint *)(pplVar14 + 0x15)
                     ,*(bool *)((long)pplVar14 + 0xac),*(bool *)((long)pplVar14 + 0xad),
                     (btAlignedObjectArray *)(pplVar14 + 5));
        }
        btCollisionObject::~btCollisionObject(abStack_1e0);
      }
      pplVar14 = pplVar14 + 0x16;
    } while (pplVar14 != pplVar16);
  }
  *(undefined8 *)(this + 0x448) = 0;
  ppIVar13 = *(IRaycastReport ***)(this + 0x470);
  if (*(IRaycastReport ***)(this + 0x468) != ppIVar13) {
    ppIVar15 = *(IRaycastReport ***)(this + 0x468) + 3;
    do {
      DataMemoryBarrier(2,3);
      *(IRaycastReport **)(this + 0x480) = *ppIVar15;
      DataMemoryBarrier(2,1);
      pIVar11 = *ppIVar15;
      if (pIVar11 != (IRaycastReport *)0x0) {
        if (*(char *)((long)ppIVar15 + 0x13) == '\0') {
          local_1c8 = CONCAT31(local_1c8._1_3_,1);
          local_1d0 = (void *)0x0;
          local_1dc = 0;
          local_1d8 = 0;
                    /* try { // try from 0099c144 to 0099c173 has its CatchHandler @ 0099c298 */
          Bt2SceneQueryUtil::raycastShapesCollect
                    (*(Bt2World **)(this + 0x30),(btAlignedObjectArray *)abStack_1e0,
                     (Vector3 *)(ppIVar15 + -3),(Vector3 *)((long)ppIVar15 + -0xc),
                     *(float *)(ppIVar15 + 1),*(bool *)(ppIVar15 + 2),
                     *(uint *)((long)ppIVar15 + 0xc),*(bool *)((long)ppIVar15 + 0x11));
          Bt2SceneQueryUtil::raycastShapesReport
                    ((btAlignedObjectArray *)abStack_1e0,(Vector3 *)(ppIVar15 + -3),
                     (Vector3 *)((long)ppIVar15 + -0xc),pIVar11,*(float *)(ppIVar15 + 1),
                     *(bool *)((long)ppIVar15 + 0x12),true);
          if ((local_1d0 != (void *)0x0) && ((char)local_1c8 != '\0')) {
                    /* try { // try from 0099c184 to 0099c187 has its CatchHandler @ 0099c288 */
            btAlignedFreeInternal(local_1d0);
          }
        }
        else {
          Bt2SceneQueryUtil::raycastShapesCollect
                    (*(Bt2World **)(this + 0x30),(btAlignedObjectArray *)(ppIVar15 + 3),
                     (Vector3 *)(ppIVar15 + -3),(Vector3 *)((long)ppIVar15 + -0xc),
                     *(float *)(ppIVar15 + 1),*(bool *)(ppIVar15 + 2),
                     *(uint *)((long)ppIVar15 + 0xc),*(bool *)((long)ppIVar15 + 0x11));
        }
      }
      ppIVar1 = ppIVar15 + 7;
      ppIVar15 = ppIVar15 + 10;
    } while (ppIVar1 != ppIVar13);
  }
  *(undefined8 *)(this + 0x480) = 0;
  lVar7 = Watch::getCurrentTicks();
  while( true ) {
    pplVar14 = *(long ***)(this + 0x5b0);
    pplVar16 = *(long ***)(this + 0x5b8);
    if (pplVar14 == pplVar16) break;
    bVar4 = false;
    do {
      DataMemoryBarrier(2,3);
      *(long **)(this + 0x5c8) = *pplVar14;
      DataMemoryBarrier(2,1);
      if ((*pplVar14 == (long *)0x0) || (*(char *)(pplVar14 + 1) != '\0')) {
LAB_0099c210:
        if (this[0x5d1] != (Bt2ScenegraphPhysicsContext)0x0) goto LAB_0099c218;
LAB_0099c1bc:
        lVar8 = Watch::getCurrentTicks();
        dVar18 = (double)Watch::convertTicksToMs(lVar8 - lVar7);
        if (5.0 < dVar18) goto LAB_0099c238;
      }
      else {
        uVar9 = (**(code **)(**pplVar14 + 0x10))();
        if ((uVar9 & 1) != 0) {
          bVar4 = true;
          goto LAB_0099c210;
        }
        *(undefined *)(pplVar14 + 1) = 1;
        if (this[0x5d1] == (Bt2ScenegraphPhysicsContext)0x0) goto LAB_0099c1bc;
LAB_0099c218:
        if (this[0x5d0] != (Bt2ScenegraphPhysicsContext)0x0) goto LAB_0099c238;
      }
      pplVar14 = pplVar14 + 2;
    } while (pplVar14 != pplVar16);
    if (!bVar4) break;
  }
LAB_0099c238:
  *(undefined8 *)(this + 0x5c8) = 0;
  Bt2PhysicsContextManager::getInstance();
  Bt2PhysicsContextManager::commitCollisionTimes_Bg();
  if (*(long *)(lVar3 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


