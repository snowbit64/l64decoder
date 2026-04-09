// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastShapes
// Entry Point: 009aa394
// Size: 528 bytes
// Signature: undefined __thiscall raycastShapes(Bt2ScenegraphPhysicsContext * this, Vector3 * param_1, Vector3 * param_2, IRaycastReport * param_3, float param_4, bool param_5, uint param_6, bool param_7, bool param_8, ASYNC_CALLBACK_MODE param_9)


/* Bt2ScenegraphPhysicsContext::raycastShapes(Vector3 const&, Vector3 const&, IRaycastReport*,
   float, bool, unsigned int, bool, bool, Bt2ScenegraphPhysicsContext::ASYNC_CALLBACK_MODE) */

undefined4 __thiscall
Bt2ScenegraphPhysicsContext::raycastShapes
          (Bt2ScenegraphPhysicsContext *this,Vector3 *param_1,Vector3 *param_2,
          IRaycastReport *param_3,float param_4,bool param_5,uint param_6,bool param_7,bool param_8,
          ASYNC_CALLBACK_MODE param_9)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  btAlignedObjectArray abStack_98 [4];
  undefined4 local_94;
  undefined4 uStack_90;
  void *local_88;
  char local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (param_9 == 0) {
    local_88 = (void *)0x0;
    local_94 = 0;
    uStack_90 = 0;
    local_80 = '\x01';
                    /* try { // try from 009aa43c to 009aa477 has its CatchHandler @ 009aa5a8 */
    Bt2SceneQueryUtil::raycastShapesCollect
              (*(Bt2World **)(this + 0x30),abStack_98,param_1,param_2,param_4,param_5,param_6,
               param_7);
    uVar4 = Bt2SceneQueryUtil::raycastShapesReport
                      (abStack_98,param_1,param_2,param_3,param_4,param_8,false);
    if ((local_88 != (void *)0x0) && (local_80 != '\0')) {
                    /* try { // try from 009aa48c to 009aa48f has its CatchHandler @ 009aa5a4 */
      btAlignedFreeInternal(local_88);
    }
  }
  else {
    lVar10 = *(long *)(this + 0x458);
    lVar6 = lVar10 - *(long *)(this + 0x450) >> 4;
    uVar9 = lVar6 * -0x3333333333333333;
    uVar7 = (ulong)((int)uVar9 + 1);
    uVar2 = uVar7 + lVar6 * 0x3333333333333333;
    if (uVar7 < uVar9 || uVar2 == 0) {
      if (uVar7 < uVar9) {
        lVar6 = *(long *)(this + 0x450) + uVar7 * 0x50;
        for (; lVar10 != lVar6; lVar10 = lVar10 + -0x50) {
          if ((*(void **)(lVar10 + -0x10) != (void *)0x0) && (*(char *)(lVar10 + -8) != '\0')) {
                    /* try { // try from 009aa4e8 to 009aa4eb has its CatchHandler @ 009aa5bc */
            btAlignedFreeInternal(*(void **)(lVar10 + -0x10));
          }
          *(undefined *)(lVar10 + -8) = 1;
          *(undefined8 *)(lVar10 + -0x10) = 0;
          *(undefined8 *)(lVar10 + -0x1c) = 0;
        }
        *(long *)(this + 0x458) = lVar6;
      }
    }
    else {
      std::__ndk1::
      vector<Bt2ScenegraphPhysicsContext::RaycastShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>>
      ::__append((vector<Bt2ScenegraphPhysicsContext::RaycastShapesData,std::__ndk1::allocator<Bt2ScenegraphPhysicsContext::RaycastShapesData>>
                  *)(this + 0x450),uVar2);
    }
    uVar4 = 0;
    puVar5 = (undefined8 *)(*(long *)(this + 0x450) + (uVar9 & 0xffffffff) * 0x50);
    uVar8 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
    *puVar5 = uVar8;
    uVar8 = *(undefined8 *)param_2;
    uVar1 = *(undefined4 *)(param_2 + 8);
    puVar5[3] = param_3;
    *(bool *)(puVar5 + 5) = param_5;
    *(float *)(puVar5 + 4) = param_4;
    *(bool *)((long)puVar5 + 0x2a) = param_8;
    *(uint *)((long)puVar5 + 0x24) = param_6;
    *(undefined4 *)((long)puVar5 + 0x14) = uVar1;
    *(undefined8 *)((long)puVar5 + 0xc) = uVar8;
    *(bool *)((long)puVar5 + 0x29) = param_7;
    *(bool *)((long)puVar5 + 0x2b) = param_9 == 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


