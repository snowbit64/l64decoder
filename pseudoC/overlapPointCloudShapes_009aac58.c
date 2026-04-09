// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapPointCloudShapes
// Entry Point: 009aac58
// Size: 1040 bytes
// Signature: undefined __thiscall overlapPointCloudShapes(Bt2ScenegraphPhysicsContext * this, Matrix4x4 * param_1, Vector3 * param_2, uint param_3, IPhysicsEntityReport * param_4, uint param_5, bool param_6, bool param_7, uint param_8, TransformGroup * * param_9, ASYNC_CALLBACK_MODE param_10)


/* Bt2ScenegraphPhysicsContext::overlapPointCloudShapes(Matrix4x4 const&, Vector3 const*, unsigned
   int, IPhysicsEntityReport*, unsigned int, bool, bool, unsigned int, TransformGroup const**,
   Bt2ScenegraphPhysicsContext::ASYNC_CALLBACK_MODE) */

undefined4 __thiscall
Bt2ScenegraphPhysicsContext::overlapPointCloudShapes
          (Bt2ScenegraphPhysicsContext *this,Matrix4x4 *param_1,Vector3 *param_2,uint param_3,
          IPhysicsEntityReport *param_4,uint param_5,bool param_6,bool param_7,uint param_8,
          TransformGroup **param_9,ASYNC_CALLBACK_MODE param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  btDispatcher **ppbVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  IPhysicsEntityReport **ppIVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  IPhysicsEntityReport **this_00;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  IPhysicsEntityReport *pIVar17;
  IPhysicsEntityReport *pIVar18;
  IPhysicsEntityReport *pIVar19;
  IPhysicsEntityReport *pIVar20;
  IPhysicsEntityReport *pIVar21;
  IPhysicsEntityReport *pIVar22;
  IPhysicsEntityReport *pIVar23;
  IPhysicsEntityReport *pIVar24;
  undefined **local_220;
  undefined4 local_218;
  undefined **local_210;
  btCollisionObject *pbStack_208;
  undefined8 local_200;
  IPhysicsEntityReport *pIStack_1f8;
  undefined4 local_1f0;
  undefined local_1e4;
  btAlignedObjectArray abStack_1e0 [4];
  uint local_1dc;
  uint local_1d8;
  void *local_1d0;
  char local_1c8;
  btCollisionObject abStack_1c0 [8];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_1c8 = '\x01';
  local_1d0 = (void *)0x0;
  local_1dc = 0;
  local_1d8 = 0;
  if (param_8 != 0) {
    uVar11 = 0;
    uVar14 = 0;
    uVar13 = 0;
    do {
                    /* try { // try from 009aacf0 to 009aacf3 has its CatchHandler @ 009ab08c */
      lVar7 = RawTransformGroup::getPhysicsObject();
      if ((*(byte *)(lVar7 + 8) >> 3 & 1) != 0) {
        uVar12 = *(undefined8 *)(lVar7 + 0x30);
        if (uVar14 == uVar11) {
          uVar4 = uVar11 << 1;
          if (uVar11 == 0) {
            uVar4 = 1;
          }
          if ((int)uVar11 < (int)uVar4) {
            if (uVar4 == 0) {
              pvVar8 = (void *)0x0;
            }
            else {
                    /* try { // try from 009aad24 to 009aad7f has its CatchHandler @ 009ab088 */
              pvVar8 = (void *)btAlignedAllocInternal
                                         (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar4 << 3,0x10);
            }
            if (0 < (int)uVar11) {
              lVar7 = 0;
              do {
                *(undefined8 *)((long)pvVar8 + lVar7) = *(undefined8 *)((long)local_1d0 + lVar7);
                lVar7 = lVar7 + 8;
              } while ((ulong)uVar11 * 8 - lVar7 != 0);
            }
            if ((local_1d0 != (void *)0x0) && (local_1c8 != '\0')) {
              btAlignedFreeInternal(local_1d0);
            }
            local_1c8 = '\x01';
            local_1d8 = uVar4;
            local_1d0 = pvVar8;
            uVar11 = uVar4;
          }
        }
        *(undefined8 *)((long)local_1d0 + (long)(int)uVar14 * 8) = uVar12;
        uVar14 = uVar14 + 1;
        local_1dc = uVar14;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_8);
  }
  if (param_10 == 0) {
                    /* try { // try from 009aade0 to 009aadeb has its CatchHandler @ 009ab06c */
    btCollisionObject::btCollisionObject(abStack_1c0);
    uStack_1b4 = *(undefined4 *)(param_1 + 0x10);
    uStack_1a4 = *(undefined4 *)(param_1 + 0x14);
    local_1b8 = *(undefined4 *)param_1;
    local_1a8 = *(undefined4 *)(param_1 + 4);
    local_1ac = 0;
    local_19c = 0;
    local_18c = 0;
    local_198 = *(undefined4 *)(param_1 + 8);
    local_1b0 = *(undefined4 *)(param_1 + 0x20);
    local_1a0 = *(undefined4 *)(param_1 + 0x24);
    local_218 = 0xffff0001;
    uStack_194 = *(undefined4 *)(param_1 + 0x18);
    local_190 = *(undefined4 *)(param_1 + 0x28);
    local_188 = *(undefined8 *)(param_1 + 0x30);
    local_180 = *(undefined4 *)(param_1 + 0x38);
    local_17c = 0;
    local_1f0 = 0;
    local_1e4 = 0;
    local_200 = 0;
    local_220 = &PTR__ContactResultCallback_00fe17f0;
    local_210 = &PTR__PointCloudOnEntityContactResultCallback_00fe1828;
    pbStack_208 = abStack_1c0;
    pIStack_1f8 = param_4;
                    /* try { // try from 009aae70 to 009aaec3 has its CatchHandler @ 009ab078 */
    lVar7 = ThreadUtil::getCurrentThreadId();
    lVar16 = Thread::getThreadId();
    ppbVar3 = (btDispatcher **)(*(Bt2World **)(this + 0x30) + 0x28);
    if (lVar7 != lVar16) {
      ppbVar3 = (btDispatcher **)(this + 0x50);
    }
    uVar6 = Bt2SceneQueryUtil::overlapPointCloudShapes
                      (*(Bt2World **)(this + 0x30),*ppbVar3,(ContactResultCallback *)&local_220,
                       param_2,param_3,param_5,param_6,param_7,abStack_1e0);
    btCollisionObject::~btCollisionObject(abStack_1c0);
  }
  else {
    lVar16 = *(long *)(this + 0x420);
    lVar7 = lVar16 - *(long *)(this + 0x418) >> 4;
    uVar15 = lVar7 * 0x2e8ba2e8ba2e8ba3;
    uVar10 = (ulong)((int)uVar15 + 1);
    uVar13 = uVar10 + lVar7 * -0x2e8ba2e8ba2e8ba3;
    if (uVar10 < uVar15 || uVar13 == 0) {
      if (uVar10 < uVar15) {
        lVar7 = *(long *)(this + 0x418) + uVar10 * 0xb0;
        if (lVar16 != lVar7) {
          do {
            lVar16 = lVar16 + -0xb0;
            FUN_009b213c(this + 0x428,lVar16);
          } while (lVar16 != lVar7);
        }
        *(long *)(this + 0x420) = lVar7;
      }
    }
    else {
                    /* try { // try from 009aadd4 to 009aaddb has its CatchHandler @ 009ab068 */
      std::__ndk1::
      vector<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>>
      ::__append((vector<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapPointCloudShapesData>>
                  *)(this + 0x418),uVar13);
    }
    lVar16 = *(long *)(this + 0x418);
    ppIVar9 = (IPhysicsEntityReport **)(lVar16 + (uVar15 & 0xffffffff) * 0xb0);
    pIVar20 = *(IPhysicsEntityReport **)(param_1 + 0x28);
    pIVar19 = *(IPhysicsEntityReport **)(param_1 + 0x20);
    pIVar18 = *(IPhysicsEntityReport **)(param_1 + 0x38);
    pIVar17 = *(IPhysicsEntityReport **)(param_1 + 0x30);
    pIVar24 = *(IPhysicsEntityReport **)(param_1 + 8);
    pIVar23 = *(IPhysicsEntityReport **)param_1;
    pIVar22 = *(IPhysicsEntityReport **)(param_1 + 0x18);
    pIVar21 = *(IPhysicsEntityReport **)(param_1 + 0x10);
    *ppIVar9 = param_4;
    ppIVar9[0x10] = pIVar18;
    ppIVar9[0xf] = pIVar17;
    ppIVar9[0xe] = pIVar20;
    ppIVar9[0xd] = pIVar19;
    ppIVar9[10] = pIVar24;
    ppIVar9[9] = pIVar23;
    *(bool *)((long)ppIVar9 + 0xac) = param_6;
    ppIVar9[0xc] = pIVar22;
    ppIVar9[0xb] = pIVar21;
    *(bool *)((long)ppIVar9 + 0xad) = param_7;
    this_00 = ppIVar9 + 0x12;
    *(uint *)(ppIVar9 + 0x15) = param_5;
    *(uint *)(ppIVar9 + 0x11) = param_3;
    uVar10 = (ulong)param_3;
    *(bool *)((long)ppIVar9 + 0xae) = param_10 == 1;
    lVar7 = (long)ppIVar9[0x13] - (long)*this_00 >> 2;
    uVar13 = lVar7 * -0x5555555555555555;
    if (uVar10 <= uVar13) {
      if (uVar10 <= uVar13 && uVar13 - uVar10 != 0) {
        ppIVar9[0x13] = *this_00 + uVar10 * 0xc;
      }
    }
    else {
                    /* try { // try from 009aafac to 009ab013 has its CatchHandler @ 009ab074 */
      std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::__append
                ((vector<Vector3,std::__ndk1::allocator<Vector3>> *)this_00,
                 uVar10 + lVar7 * 0x5555555555555555);
    }
    if (param_3 != 0) {
      lVar7 = 0;
      do {
        puVar1 = (undefined8 *)(param_2 + lVar7);
        puVar2 = (undefined8 *)(*this_00 + lVar7);
        uVar12 = *puVar1;
        lVar7 = lVar7 + 0xc;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar2 = uVar12;
      } while (uVar10 * 0xc - lVar7 != 0);
    }
    btAlignedObjectArray<btCollisionObject*>::copyFromArray
              ((btAlignedObjectArray<btCollisionObject*> *)
               (lVar16 + (uVar15 & 0xffffffff) * 0xb0 + 0x28),abStack_1e0);
    uVar6 = 0;
  }
  if ((local_1d0 != (void *)0x0) && (local_1c8 != '\0')) {
                    /* try { // try from 009ab028 to 009ab02b has its CatchHandler @ 009ab070 */
    btAlignedFreeInternal(local_1d0);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


