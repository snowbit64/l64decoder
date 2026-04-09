// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugRender
// Entry Point: 0087b9fc
// Size: 320 bytes
// Signature: undefined __cdecl debugRender(Vector3 * param_1)


/* ObstacleWallDetector::debugRender(Vector3 const&) */

void ObstacleWallDetector::debugRender(Vector3 *param_1)

{
  long lVar1;
  DeferredDebugRenderer *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  DeferredDebugRenderer::setNoDepthMode(this,true);
  lVar4 = 0;
  uStack_58 = 0x3f80000000000000;
  local_60 = 0x3f800000;
  uStack_68 = 0x3f8000003f800000;
  local_70 = 0x3f800000;
  do {
    local_80 = *(undefined8 *)(param_1 + lVar4 + 0x18);
    local_78 = *(float *)(param_1 + lVar4 + 0x20);
    if (*(float *)(param_1 + lVar4 + 0x30) == 3.402823e+38) {
      fVar5 = *(float *)(param_1 + 0x390);
      puVar2 = &local_70;
      puVar3 = &local_70;
      local_90 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + lVar4 + 0xc) >> 0x20) * fVar5 +
                          (float)((ulong)local_80 >> 0x20),
                          (float)*(undefined8 *)(param_1 + lVar4 + 0xc) * fVar5 + (float)local_80);
      local_88 = fVar5 * *(float *)(param_1 + lVar4 + 0x14) + local_78;
    }
    else {
      local_90 = *(undefined8 *)(param_1 + lVar4 + 0x24);
      local_88 = *(float *)(param_1 + lVar4 + 0x2c);
      puVar2 = &local_60;
      puVar3 = &local_60;
    }
    DeferredDebugRenderer::addLine
              (this,(float *)&local_80,(float *)puVar2,(float *)&local_90,(float *)puVar3,0x7ff);
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0x240);
  DeferredDebugRenderer::setNoDepthMode(this,false);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


