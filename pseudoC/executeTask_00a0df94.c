// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeTask
// Entry Point: 00a0df94
// Size: 72 bytes
// Signature: undefined __thiscall executeTask(CustomEnvMapSubmitTask * this, uint param_1)


/* IndirectLightRenderController::EnvFilterJob::CustomEnvMapSubmitTask::executeTask(unsigned int) */

void __thiscall
IndirectLightRenderController::EnvFilterJob::CustomEnvMapSubmitTask::executeTask
          (CustomEnvMapSubmitTask *this,uint param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)RenderController::getSecondaryCommandBufferForThreadIx
                             (*(RenderController **)(this + 0xf0),param_1);
  filterFuncCs((ICommandBuffer *)plVar1,*(ITextureObject **)(this + 0xe8),
               (FilterEnvMapRenderData *)(this + 0x28));
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
  *(undefined8 *)(this + 0xe0) = uVar2;
  return;
}


