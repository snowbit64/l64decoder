// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlapSphereShapes
// Entry Point: 009aa5c0
// Size: 536 bytes
// Signature: undefined __thiscall overlapSphereShapes(Bt2ScenegraphPhysicsContext * this, Vector3 * param_1, float param_2, IPhysicsEntityReport * param_3, uint param_4, bool param_5, bool param_6, bool param_7, ASYNC_CALLBACK_MODE param_8)


/* Bt2ScenegraphPhysicsContext::overlapSphereShapes(Vector3 const&, float, IPhysicsEntityReport*,
   unsigned int, bool, bool, bool, Bt2ScenegraphPhysicsContext::ASYNC_CALLBACK_MODE) */

undefined4 __thiscall
Bt2ScenegraphPhysicsContext::overlapSphereShapes
          (Bt2ScenegraphPhysicsContext *this,Vector3 *param_1,float param_2,
          IPhysicsEntityReport *param_3,uint param_4,bool param_5,bool param_6,bool param_7,
          ASYNC_CALLBACK_MODE param_8)

{
  IPhysicsEntityReport **ppIVar1;
  btDispatcher **ppbVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined **local_220;
  undefined4 local_218;
  undefined **local_210;
  btCollisionObject *pbStack_208;
  undefined8 local_200;
  IPhysicsEntityReport *pIStack_1f8;
  undefined4 local_1f0;
  undefined local_1e4;
  btCollisionObject abStack_1d0 [56];
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  if (param_8 == 0) {
    btCollisionObject::btCollisionObject(abStack_1d0);
    local_198 = *(undefined8 *)param_1;
    local_190 = *(undefined4 *)(param_1 + 8);
    local_218 = 0xffff0001;
    local_18c = 0;
    local_220 = &PTR__ContactResultCallback_00fe1700;
    local_210 = &PTR__SphereOnEntityContactResultCallback_00fe1738;
    local_200 = 0;
    local_1f0 = 0;
    local_1e4 = 0;
    pbStack_208 = abStack_1d0;
    pIStack_1f8 = param_3;
                    /* try { // try from 009aa694 to 009aa6db has its CatchHandler @ 009aa7d8 */
    lVar10 = ThreadUtil::getCurrentThreadId();
    lVar6 = Thread::getThreadId();
    ppbVar2 = (btDispatcher **)(*(Bt2World **)(this + 0x30) + 0x28);
    if (lVar10 != lVar6) {
      ppbVar2 = (btDispatcher **)(this + 0x50);
    }
    uVar5 = Bt2SceneQueryUtil::overlapSphereShapes
                      (*(Bt2World **)(this + 0x30),*ppbVar2,
                       (SphereContactResultCallback *)&local_220,param_2,param_4,param_5,param_6,
                       param_7);
    btCollisionObject::~btCollisionObject(abStack_1d0);
  }
  else {
    lVar10 = *(long *)(this + 1000);
    uVar9 = lVar10 - *(long *)(this + 0x3e0);
    uVar8 = (long)uVar9 >> 6;
    uVar7 = (ulong)((int)uVar8 + 1);
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      if (uVar7 < uVar8) {
        lVar6 = *(long *)(this + 0x3e0) + uVar7 * 0x40;
        for (; lVar10 != lVar6; lVar10 = lVar10 + -0x40) {
          if ((*(void **)(lVar10 + -0x28) != (void *)0x0) && (*(char *)(lVar10 + -0x20) != '\0')) {
                    /* try { // try from 009aa734 to 009aa737 has its CatchHandler @ 009aa7ec */
            btAlignedFreeInternal(*(void **)(lVar10 + -0x28));
          }
          *(undefined *)(lVar10 + -0x20) = 1;
          *(undefined8 *)(lVar10 + -0x28) = 0;
          *(undefined8 *)(lVar10 + -0x34) = 0;
        }
        *(long *)(this + 1000) = lVar6;
      }
    }
    else {
      std::__ndk1::
      vector<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>>
      ::__append((vector<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::OverlapSphereShapesData>>
                  *)(this + 0x3e0),uVar7 - uVar8);
    }
    uVar5 = 0;
    ppIVar1 = (IPhysicsEntityReport **)(*(long *)(this + 0x3e0) + (uVar9 >> 6 & 0xffffffff) * 0x40);
    uVar3 = *(undefined4 *)(param_1 + 8);
    ppIVar1[5] = *(IPhysicsEntityReport **)param_1;
    *(undefined4 *)(ppIVar1 + 6) = uVar3;
    *(float *)((long)ppIVar1 + 0x34) = param_2;
    *ppIVar1 = param_3;
    *(uint *)(ppIVar1 + 7) = param_4;
    *(bool *)((long)ppIVar1 + 0x3d) = param_6;
    *(bool *)((long)ppIVar1 + 0x3c) = param_5;
    *(bool *)((long)ppIVar1 + 0x3e) = param_7;
    *(bool *)((long)ppIVar1 + 0x3f) = param_8 == 1;
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


