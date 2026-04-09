// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDraw
// Entry Point: 0076aae4
// Size: 408 bytes
// Signature: undefined __thiscall debugDraw(IKChain * this, MethodInvocation * param_1)


/* IKChain::debugDraw(MethodInvocation*) */

void __thiscall IKChain::debugDraw(IKChain *this,MethodInvocation *param_1)

{
  long *plVar1;
  MethodInvocation MVar2;
  long lVar3;
  DeferredDebugRenderer *pDVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  uint uVar8;
  Joint *pJVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar8 = *(uint *)(this + 0x10);
  if (uVar8 != 0) {
    pJVar9 = *(Joint **)this;
    plVar1 = *(long **)(this + 8);
    lVar5 = 0;
    puVar6 = (undefined4 *)(pJVar9 + 0x30);
    do {
      lVar7 = *(long *)((long)plVar1 + lVar5);
      if (lVar7 != 0) {
        puVar6[-4] = *(undefined4 *)(lVar7 + 0x78);
        puVar6[-3] = *(undefined4 *)(lVar7 + 0x7c);
        puVar6[-2] = *(undefined4 *)(lVar7 + 0x80);
        puVar6[-1] = *(undefined4 *)(lVar7 + 0x84);
        *puVar6 = *(undefined4 *)(lVar7 + 0x88);
        puVar6[1] = *(undefined4 *)(lVar7 + 0x8c);
        puVar6[2] = *(undefined4 *)(lVar7 + 0x90);
        puVar6[3] = *(undefined4 *)(lVar7 + 0x94);
        puVar6[4] = *(undefined4 *)(lVar7 + 0x98);
        puVar6[5] = *(undefined4 *)(lVar7 + 0x9c);
        puVar6[6] = *(undefined4 *)(lVar7 + 0xa0);
        puVar6[7] = *(undefined4 *)(lVar7 + 0xa4);
        puVar6[8] = *(undefined4 *)(lVar7 + 0xa8);
        puVar6[9] = *(undefined4 *)(lVar7 + 0xac);
        puVar6[10] = *(undefined4 *)(lVar7 + 0xb0);
        puVar6[0xb] = *(undefined4 *)(lVar7 + 0xb4);
      }
      lVar5 = lVar5 + 8;
      puVar6 = puVar6 + 0x39;
    } while ((ulong)uVar8 * 8 - lVar5 != 0);
    lVar5 = *plVar1;
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) {
      uStack_68 = 0x3f800000;
      local_70 = 0;
      uStack_58 = 0x3f80000000000000;
      uStack_60 = 0;
      uStack_88 = 0;
      local_90 = 0x3f800000;
      uStack_78 = 0;
      uStack_80 = 0x3f80000000000000;
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      uStack_88 = *(undefined8 *)(lVar5 + 0xc0);
      local_90 = *(undefined8 *)(lVar5 + 0xb8);
      uStack_78 = *(undefined8 *)(lVar5 + 0xd0);
      uStack_80 = *(undefined8 *)(lVar5 + 200);
      uStack_68 = *(undefined8 *)(lVar5 + 0xe0);
      local_70 = *(undefined8 *)(lVar5 + 0xd8);
      uStack_58 = *(undefined8 *)(lVar5 + 0xf0);
      uStack_60 = *(undefined8 *)(lVar5 + 0xe8);
      pJVar9 = *(Joint **)this;
      uVar8 = *(uint *)(this + 0x10);
    }
    MVar2 = *param_1;
    EngineManager::getInstance();
    pDVar4 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
    CCDIKSolverUtil::debugRenderJoints(pJVar9,uVar8,(Matrix4x4 *)&local_90,(bool)MVar2,pDVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


