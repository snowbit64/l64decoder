// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 009fc6ec
// Size: 1068 bytes
// Signature: undefined __thiscall render(DeferredDebugRenderer * this, SharedRenderArgs * param_1, RenderArgs * param_2, ITextureObject * param_3)


/* DeferredDebugRenderer::render(SharedRenderArgs const&, RenderArgs const&, ITextureObject*) const
    */

void __thiscall
DeferredDebugRenderer::render
          (DeferredDebugRenderer *this,SharedRenderArgs *param_1,RenderArgs *param_2,
          ITextureObject *param_3)

{
  Matrix4x4 *pMVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long *plVar4;
  float *pfVar5;
  DeferredDebugRenderer *this_00;
  DrawData *pDVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  FontOverlayRenderer *this_01;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  
  plVar4 = (long *)(**(code **)(**(long **)(this + 0x298) + 0x138))();
  (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined8 *)(this + 600));
  (**(code **)(*plVar4 + 0x68))(plVar4,0,param_3);
  (**(code **)(*plVar4 + 0xc0))(plVar4,*(undefined8 *)(this + 0x290));
  puVar3 = (undefined8 *)(this + 0x280);
  if (param_1[0x25] != (SharedRenderArgs)0x0) {
    puVar3 = (undefined8 *)(this + 0x288);
  }
  (**(code **)(*plVar4 + 0xb8))(plVar4,*puVar3);
  (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined8 *)(this + 0x278));
  pfVar5 = (float *)(**(code **)(*plVar4 + 0xa0))(plVar4,0,*(undefined8 *)(this + 0x268));
  pMVar1 = (Matrix4x4 *)(param_2 + 0xd0);
  ShaderStructLayout::setMatrix4x4(pfVar5,pMVar1);
  *(undefined8 *)(pfVar5 + 0x10) = 0;
  lVar10 = *plVar4;
  uVar8 = *(undefined8 *)(this + 0x268);
  pfVar5[0x12] = *(float *)(param_2 + 0xc0);
  this_00 = (DeferredDebugRenderer *)(**(code **)(lVar10 + 0xa8))(plVar4,0,uVar8);
  pDVar6 = (DrawData *)
           renderDrawDataScreenSpace
                     (this_00,(DrawData *)(this + 0x78),(ICommandBuffer *)plVar4,param_2);
  pDVar6 = (DrawData *)renderDrawData(pDVar6,(ICommandBuffer *)this,(RenderArgs *)plVar4);
  renderDrawData(pDVar6,(ICommandBuffer *)(this + 0x168),(RenderArgs *)plVar4);
  pfVar5 = (float *)(**(code **)(*plVar4 + 0xa0))(plVar4,0,*(undefined8 *)(this + 0x268));
  ShaderStructLayout::setMatrix4x4(pfVar5,pMVar1);
  uVar15 = NEON_fmov(0x40a00000,4);
  lVar10 = *plVar4;
  uVar14 = NEON_ucvtf(*(undefined8 *)(param_2 + 0x3d8),4);
  uVar8 = *(undefined8 *)(this + 0x268);
  pfVar5[0x12] = *(float *)(param_2 + 0xc0);
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  *(ulong *)(pfVar5 + 0x10) =
       CONCAT44(fVar16 / (float)((ulong)uVar14 >> 0x20),(float)uVar15 / (float)uVar14);
  (**(code **)(lVar10 + 0xa8))(plVar4,0,uVar8);
  lVar10 = *(long *)this;
  uVar9 = (uint)((ulong)(*(long *)(this + 8) - lVar10) >> 2);
  if (0x29 < uVar9) {
    (**(code **)(*plVar4 + 0x108))(plVar4,lVar10,0x1c,lVar10 + 0xc,0x1c,0,(uVar9 / 0x2a) * 6);
  }
  lVar10 = *(long *)(this + 0x168);
  uVar9 = (uint)((ulong)(*(long *)(this + 0x170) - lVar10) >> 2);
  if (0x29 < uVar9) {
    (**(code **)(*plVar4 + 0x108))(plVar4,lVar10,0x1c,lVar10 + 0xc,0x1c,0,(uVar9 / 0x2a) * 6);
  }
  (**(code **)(*plVar4 + 0x68))(plVar4,0,0);
  (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined8 *)(this + 0x260));
  pfVar5 = (float *)(**(code **)(*plVar4 + 0xa0))(plVar4,0,*(undefined8 *)(this + 0x270));
  ShaderStructLayout::setMatrix4x4(pfVar5,pMVar1);
  *(undefined8 *)(pfVar5 + 0x10) = 0;
  pDVar6 = (DrawData *)(**(code **)(*plVar4 + 0xa8))(plVar4,0,*(undefined8 *)(this + 0x270));
  renderDrawData(pDVar6,(ICommandBuffer *)(this + 0xf0),(RenderArgs *)plVar4);
  pfVar5 = (float *)(**(code **)(*plVar4 + 0xa0))(plVar4,0,*(undefined8 *)(this + 0x270));
  ShaderStructLayout::setMatrix4x4(pfVar5,pMVar1);
  lVar10 = *plVar4;
  uVar8 = *(undefined8 *)(this + 0x270);
  uVar14 = NEON_ucvtf(*(undefined8 *)(param_2 + 0x3d8),4);
  *(ulong *)(pfVar5 + 0x10) =
       CONCAT44(fVar16 / (float)((ulong)uVar14 >> 0x20),(float)uVar15 / (float)uVar14);
  (**(code **)(lVar10 + 0xa8))(plVar4,0,uVar8);
  lVar10 = *(long *)(this + 0xf0);
  uVar9 = (uint)((ulong)(*(long *)(this + 0xf8) - lVar10) >> 2);
  if (0x29 < uVar9) {
    (**(code **)(*plVar4 + 0x108))(plVar4,lVar10,0x1c,lVar10 + 0xc,0x1c,0,(uVar9 / 0x2a) * 6);
  }
  if (this[0x208] != (DeferredDebugRenderer)0x0) {
    (**(code **)(**(long **)(this + 0x200) + 0x10))(*(long **)(this + 0x200),param_1);
  }
  lVar7 = EngineManager::getInstance();
  lVar10 = *(long *)(this + 0x1e0);
  if (*(long *)(this + 0x1e8) != lVar10) {
    uVar13 = 0;
    this_01 = *(FontOverlayRenderer **)(lVar7 + 0xf8);
    do {
      lVar7 = uVar13 * 0x38;
      lVar10 = lVar10 + lVar7;
      FontOverlayRenderer::setColor
                (this_01,*(float *)(lVar10 + 0x24),*(float *)(lVar10 + 0x28),
                 *(float *)(lVar10 + 0x2c),*(float *)(lVar10 + 0x30));
      FontOverlayRenderer::setBold(this_01,*(bool *)(*(long *)(this + 0x1e0) + lVar7 + 0x34));
      pbVar2 = (byte *)(*(long *)(this + 0x1e0) + lVar7);
      pbVar12 = *(byte **)(pbVar2 + 0x10);
      if ((*pbVar2 & 1) == 0) {
        pbVar12 = pbVar2 + 1;
      }
      FontOverlayRenderer::xyprintf
                (this_01,*(float *)(pbVar2 + 0x18),*(float *)(pbVar2 + 0x1c),
                 *(float *)(pbVar2 + 0x20),0,(char *)pbVar12);
      FontOverlayRenderer::setBold(this_01,false);
      FontOverlayRenderer::setColor(this_01,1.0,1.0,1.0,1.0);
      lVar10 = *(long *)(this + 0x1e0);
      uVar13 = (ulong)((int)uVar13 + 1);
      uVar11 = (*(long *)(this + 0x1e8) - lVar10 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar13 <= uVar11 && uVar11 - uVar13 != 0);
  }
  return;
}


