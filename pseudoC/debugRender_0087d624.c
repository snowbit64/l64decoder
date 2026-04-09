// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugRender
// Entry Point: 0087d624
// Size: 364 bytes
// Signature: undefined __thiscall debugRender(ObstacleAvoidance * this, Vector3 * param_1)


/* ObstacleAvoidance::debugRender(Vector3 const&) */

void __thiscall ObstacleAvoidance::debugRender(ObstacleAvoidance *this,Vector3 *param_1)

{
  long lVar1;
  DeferredDebugRenderer *this_00;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  float local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  this_00 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  uStack_68 = 0x3f80000000000000;
  local_70 = 0x3f80000000000000;
  uStack_78 = 0x3f80000000000000;
  local_80 = 0x3f800000;
  DeferredDebugRenderer::setNoDepthMode(this_00,true);
  lVar4 = *(long *)this;
  if (*(long *)(this + 8) != lVar4) {
    uVar5 = 0;
    do {
      lVar3 = lVar4 + uVar5 * 0x1c;
      local_90 = *(float *)param_1;
      uStack_8c = *(undefined4 *)(param_1 + 8);
      fVar6 = (float)MathUtil::triangleOrientation2D
                               ((Vector2 *)(lVar3 + 4),
                                (Vector2 *)(lVar4 + (long)*(int *)(lVar3 + 0x14) * 0x1c + 4),
                                (Vector2 *)&local_90);
      if (0.0 <= fVar6) {
        uStack_9c = *(undefined4 *)(param_1 + 4);
        lVar4 = *(long *)this + uVar5 * 0x1c;
        local_90 = *(float *)(lVar4 + 4);
        local_88 = *(undefined4 *)(lVar4 + 8);
        lVar4 = *(long *)this + (long)*(int *)(lVar4 + 0x14) * 0x1c;
        local_a0 = *(float *)(lVar4 + 4);
        local_98 = *(undefined4 *)(lVar4 + 8);
        uStack_8c = uStack_9c;
        DeferredDebugRenderer::addLine
                  (this_00,&local_90,(float *)&local_70,&local_a0,(float *)&local_80,0x7ff);
      }
      lVar4 = *(long *)this;
      uVar5 = (ulong)((int)uVar5 + 1);
      uVar2 = (*(long *)(this + 8) - lVar4 >> 2) * 0x6db6db6db6db6db7;
    } while (uVar5 <= uVar2 && uVar2 - uVar5 != 0);
  }
  DeferredDebugRenderer::setNoDepthMode(this_00,false);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


