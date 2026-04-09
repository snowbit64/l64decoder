// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeTask
// Entry Point: 00a43b1c
// Size: 76 bytes
// Signature: undefined __thiscall executeTask(ShadowBufferRenderTask * this, uint param_1)


/* ShadowBufferRenderController::ShadowBufferRenderTask::executeTask(unsigned int) */

void __thiscall
ShadowBufferRenderController::ShadowBufferRenderTask::executeTask
          (ShadowBufferRenderTask *this,uint param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)RenderController::getSecondaryCommandBufferForThreadIx
                             (*(RenderController **)(*(long *)(this + 0x40) + 0x30),param_1);
  renderResolvedShadowBuffers(this,(ICommandBuffer *)plVar1);
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
  *(undefined8 *)(this + 0x28) = uVar2;
  return;
}


