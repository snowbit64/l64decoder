// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRays
// Entry Point: 006f9a68
// Size: 524 bytes
// Signature: undefined __thiscall updateRays(BillboardShape * this, GsShape * param_1)


/* BillboardShape::updateRays(GsShape*) */

void __thiscall BillboardShape::updateRays(BillboardShape *this,GsShape *param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  Bt2ScenegraphPhysicsContext *this_00;
  DeferredDebugRenderer *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  EngineManager::getInstance();
  lVar3 = Renderer::getSharedRenderArgs();
  local_88 = *(undefined8 *)(lVar3 + 0x60);
  local_80 = *(float *)(lVar3 + 0x68);
  EngineManager::getInstance();
  lVar3 = Renderer::getSharedRenderArgs();
  this_01 = *(DeferredDebugRenderer **)(lVar3 + 0x80);
  uVar4 = DeferredDebugRenderer::isCategoryEnabled(this_01,0x100);
  if ((uVar4 & 1) != 0) {
    DeferredDebugRenderer::setNoDepthMode(this_01,true);
  }
  if (*(int *)(this + 0x80) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(*(long *)(this + 0x78) + lVar3);
      fVar9 = *(float *)(this + 0x44) + *pfVar1;
      fVar5 = *(float *)(this + 0x48) + pfVar1[1];
      fVar6 = *(float *)(this + 0x4c) + pfVar1[2];
      RawTransformGroup::updateWorldTransformation();
      uVar8 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xc0),fVar5 * *(float *)(param_1 + 0xd0));
      fVar7 = ((float)*(undefined8 *)(param_1 + 0xe8) +
              (float)*(undefined8 *)(param_1 + 200) * fVar5 +
              (float)*(undefined8 *)(param_1 + 0xb8) * fVar9 +
              (float)*(undefined8 *)(param_1 + 0xd8) * fVar6) - (float)local_88;
      fVar5 = ((float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) +
              (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) * fVar5 +
              (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar9 +
              (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20) * fVar6) -
              (float)((ulong)local_88 >> 0x20);
      fVar6 = (float)NEON_fmadd(fVar6,*(undefined4 *)(param_1 + 0xe0),uVar8);
      local_90 = (*(float *)(param_1 + 0xf0) + fVar6) - local_80;
      fVar6 = (float)NEON_fmadd(local_90,local_90,fVar5 * fVar5 + fVar7 * fVar7);
      fVar9 = 1.0 / SQRT(fVar6);
      if (fVar6 <= 1e-06) {
        fVar9 = 1.0;
      }
      local_98 = CONCAT44(fVar5 * fVar9,fVar7 * fVar9);
      local_90 = local_90 * fVar9;
      ScenegraphPhysicsContextManager::getInstance();
      this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
      Bt2ScenegraphPhysicsContext::raycastShapes
                (this_00,(Vector3 *)&local_88,(Vector3 *)&local_98,(IRaycastReport *)(this + 0x88),
                 SQRT(fVar6) + -0.05,true,0x3ff9,false,false,2);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar4 < *(uint *)(this + 0x80));
  }
  uVar4 = DeferredDebugRenderer::isCategoryEnabled(this_01,0x100);
  if ((uVar4 & 1) != 0) {
    DeferredDebugRenderer::setNoDepthMode(this_01,false);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


