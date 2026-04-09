// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deletePlaneRenderInfos
// Entry Point: 00a12380
// Size: 264 bytes
// Signature: undefined deletePlaneRenderInfos(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Renderer::deletePlaneRenderInfos() */

void Renderer::deletePlaneRenderInfos(void)

{
  long in_x0;
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ScreenSpaceProcessor *this;
  ShadowBufferRenderController *this_00;
  RenderTextureController *this_01;
  ulong uVar5;
  
  lVar2 = *(long *)(in_x0 + 0x1b80);
  if (*(long *)(in_x0 + 0x1b88) != lVar2) {
    uVar5 = 0;
    do {
      this = *(ScreenSpaceProcessor **)(lVar2 + uVar5 * 0x148 + 0x78);
      if (this != (ScreenSpaceProcessor *)0x0) {
        ScreenSpaceProcessor::~ScreenSpaceProcessor(this);
        operator_delete(this);
        lVar2 = *(long *)(in_x0 + 0x1b80);
      }
      this_00 = *(ShadowBufferRenderController **)(lVar2 + uVar5 * 0x148 + 0x80);
      if (this_00 != (ShadowBufferRenderController *)0x0) {
        ShadowBufferRenderController::~ShadowBufferRenderController(this_00);
        operator_delete(this_00);
        lVar2 = *(long *)(in_x0 + 0x1b80);
      }
      plVar1 = *(long **)(lVar2 + uVar5 * 0x148 + 0x88);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar2 = *(long *)(in_x0 + 0x1b80);
      }
      this_01 = *(RenderTextureController **)(lVar2 + uVar5 * 0x148 + 0x90);
      if (this_01 != (RenderTextureController *)0x0) {
        RenderTextureController::~RenderTextureController(this_01);
        operator_delete(this_01);
        lVar2 = *(long *)(in_x0 + 0x1b80);
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      lVar3 = *(long *)(in_x0 + 0x1b88) - lVar2;
      uVar4 = (lVar3 >> 3) * -0x7063e7063e7063e7;
    } while (uVar5 <= uVar4 && uVar4 - uVar5 != 0);
    if (lVar3 != 0) {
      *(long *)(in_x0 + 0x1b88) = lVar2;
    }
  }
  return;
}


