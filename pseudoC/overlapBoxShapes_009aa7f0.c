// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapBoxShapes
// Entry Point: 009aa7f0
// Size: 884 bytes
// Signature: undefined __thiscall overlapBoxShapes(Bt2ScenegraphPhysicsContext * this, Matrix4x4 * param_1, Vector3 * param_2, IPhysicsEntityReport * param_3, uint param_4, bool param_5, bool param_6, bool param_7, uint param_8, TransformGroup * * param_9, ASYNC_CALLBACK_MODE param_10)


/* Bt2ScenegraphPhysicsContext::overlapBoxShapes(Matrix4x4 const&, Vector3 const&,
   IPhysicsEntityReport*, unsigned int, bool, bool, bool, unsigned int, TransformGroup const**,
   Bt2ScenegraphPhysicsContext::ASYNC_CALLBACK_MODE) */

undefined4 __thiscall
Bt2ScenegraphPhysicsContext::overlapBoxShapes
          (Bt2ScenegraphPhysicsContext *this,Matrix4x4 *param_1,Vector3 *param_2,
          IPhysicsEntityReport *param_3,uint param_4,bool param_5,bool param_6,bool param_7,
          uint param_8,TransformGroup **param_9,ASYNC_CALLBACK_MODE param_10)

{
  long *this_00;
  btDispatcher **ppbVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  IPhysicsEntityReport **ppIVar8;
  ulong uVar9;
  IPhysicsEntityReport *pIVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  IPhysicsEntityReport *pIVar16;
  IPhysicsEntityReport *pIVar17;
  IPhysicsEntityReport *pIVar18;
  IPhysicsEntityReport *pIVar19;
  IPhysicsEntityReport *pIVar20;
  IPhysicsEntityReport *pIVar21;
  btAlignedObjectArray abStack_260 [4];
  uint local_25c;
  uint local_258;
  void *local_250;
  char local_248;
  undefined **local_240;
  undefined4 local_238;
  undefined **local_230;
  btCollisionObject *pbStack_228;
  undefined8 local_220;
  IPhysicsEntityReport *pIStack_218;
  undefined4 local_210;
  undefined local_204;
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
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_248 = '\x01';
  local_250 = (void *)0x0;
  local_25c = 0;
  local_258 = 0;
  if (param_8 != 0) {
    uVar15 = 0;
    uVar12 = 0;
    uVar14 = 0;
    do {
                    /* try { // try from 009aa890 to 009aa893 has its CatchHandler @ 009aab88 */
      lVar5 = RawTransformGroup::getPhysicsObject();
      if ((*(byte *)(lVar5 + 8) >> 3 & 1) != 0) {
        uVar13 = *(undefined8 *)(lVar5 + 0x30);
        if (uVar12 == uVar15) {
          uVar2 = uVar15 << 1;
          if (uVar15 == 0) {
            uVar2 = 1;
          }
          if ((int)uVar15 < (int)uVar2) {
            if (uVar2 == 0) {
              pvVar6 = (void *)0x0;
            }
            else {
                    /* try { // try from 009aa8c4 to 009aa91f has its CatchHandler @ 009aab84 */
              pvVar6 = (void *)btAlignedAllocInternal
                                         (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                          (ulong)uVar2 << 3,0x10);
            }
            if (0 < (int)uVar15) {
              lVar5 = 0;
              do {
                *(undefined8 *)((long)pvVar6 + lVar5) = *(undefined8 *)((long)local_250 + lVar5);
                lVar5 = lVar5 + 8;
              } while ((ulong)uVar15 * 8 - lVar5 != 0);
            }
            if ((local_250 != (void *)0x0) && (local_248 != '\0')) {
              btAlignedFreeInternal(local_250);
            }
            local_248 = '\x01';
            local_258 = uVar2;
            local_250 = pvVar6;
            uVar15 = uVar2;
          }
        }
        *(undefined8 *)((long)local_250 + (long)(int)uVar12 * 8) = uVar13;
        uVar12 = uVar12 + 1;
        local_25c = uVar12;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_8);
  }
  if (param_10 == 0) {
                    /* try { // try from 009aa974 to 009aa97f has its CatchHandler @ 009aab68 */
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
    local_238 = 0xffff0001;
    local_188 = *(undefined8 *)(param_1 + 0x30);
    local_190 = *(undefined4 *)(param_1 + 0x28);
    local_194 = *(undefined4 *)(param_1 + 0x18);
    local_180 = *(undefined4 *)(param_1 + 0x38);
    local_17c = 0;
    local_210 = 0;
    local_204 = 0;
    local_220 = 0;
    local_240 = &PTR__ContactResultCallback_00fe15f8;
    local_230 = &PTR__OBBOnEntityContactResultCallback_00fe1630;
    pbStack_228 = abStack_1c0;
    pIStack_218 = param_3;
                    /* try { // try from 009aaa04 to 009aaa5b has its CatchHandler @ 009aab74 */
    lVar5 = ThreadUtil::getCurrentThreadId();
    lVar7 = Thread::getThreadId();
    ppbVar1 = (btDispatcher **)(*(Bt2World **)(this + 0x30) + 0x28);
    if (lVar5 != lVar7) {
      ppbVar1 = (btDispatcher **)(this + 0x50);
    }
    uVar4 = Bt2SceneQueryUtil::overlapBoxShapes
                      (*(Bt2World **)(this + 0x30),*ppbVar1,(OBBContactResultCallback *)&local_240,
                       param_2,param_4,param_5,param_6,param_7,abStack_260);
    btCollisionObject::~btCollisionObject(abStack_1c0);
  }
  else {
    this_00 = (long *)(this + 0x3a8);
    lVar5 = *(long *)(this + 0x3b0) - *(long *)(this + 0x3a8) >> 5;
    uVar11 = lVar5 * -0x3333333333333333;
    uVar9 = (ulong)((int)uVar11 + 1);
    uVar14 = uVar9 + lVar5 * 0x3333333333333333;
    if (uVar9 < uVar11 || uVar14 == 0) {
      if (uVar9 < uVar11) {
        FUN_009b3254(this_00,*(long *)(this + 0x3a8) + uVar9 * 0xa0);
      }
    }
    else {
                    /* try { // try from 009aa968 to 009aa96f has its CatchHandler @ 009aab64 */
      std::__ndk1::
      vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>>
      ::__append((vector<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapBoxShapesData>>
                  *)this_00,uVar14);
    }
    pIVar17 = *(IPhysicsEntityReport **)(param_1 + 0x28);
    pIVar16 = *(IPhysicsEntityReport **)(param_1 + 0x20);
    pIVar10 = *(IPhysicsEntityReport **)(param_1 + 0x30);
    ppIVar8 = (IPhysicsEntityReport **)(*this_00 + (uVar11 & 0xffffffff) * 0xa0);
    pIVar21 = *(IPhysicsEntityReport **)(param_1 + 8);
    pIVar20 = *(IPhysicsEntityReport **)param_1;
    pIVar19 = *(IPhysicsEntityReport **)(param_1 + 0x18);
    pIVar18 = *(IPhysicsEntityReport **)(param_1 + 0x10);
    ppIVar8[0x10] = *(IPhysicsEntityReport **)(param_1 + 0x38);
    ppIVar8[0xf] = pIVar10;
    ppIVar8[0xe] = pIVar17;
    ppIVar8[0xd] = pIVar16;
    ppIVar8[10] = pIVar21;
    ppIVar8[9] = pIVar20;
    ppIVar8[0xc] = pIVar19;
    ppIVar8[0xb] = pIVar18;
    pIVar10 = *(IPhysicsEntityReport **)param_2;
    uVar4 = *(undefined4 *)(param_2 + 8);
    *ppIVar8 = param_3;
    ppIVar8[0x11] = pIVar10;
    *(bool *)(ppIVar8 + 0x13) = param_5;
    *(bool *)((long)ppIVar8 + 0x9b) = param_10 == 1;
    *(undefined4 *)(ppIVar8 + 0x12) = uVar4;
    *(uint *)((long)ppIVar8 + 0x94) = param_4;
    *(bool *)((long)ppIVar8 + 0x99) = param_6;
    *(bool *)((long)ppIVar8 + 0x9a) = param_7;
                    /* try { // try from 009aab08 to 009aab0f has its CatchHandler @ 009aab70 */
    btAlignedObjectArray<btCollisionObject*>::copyFromArray
              ((btAlignedObjectArray<btCollisionObject*> *)(ppIVar8 + 5),abStack_260);
    uVar4 = 0;
  }
  if ((local_250 != (void *)0x0) && (local_248 != '\0')) {
                    /* try { // try from 009aab24 to 009aab27 has its CatchHandler @ 009aab6c */
    btAlignedFreeInternal(local_250);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


