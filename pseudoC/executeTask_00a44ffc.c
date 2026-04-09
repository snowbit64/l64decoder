// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeTask
// Entry Point: 00a44ffc
// Size: 84 bytes
// Signature: undefined __thiscall executeTask(ShadowDenoisingTask * this, uint param_1)


/* ShadowDenoiser::ShadowDenoisingTask::executeTask(unsigned int) */

void __thiscall
ShadowDenoiser::ShadowDenoisingTask::executeTask(ShadowDenoisingTask *this,uint param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)RenderController::getSecondaryCommandBufferForThreadIx
                             (*(RenderController **)(*(long *)(this + 0x30) + 8),param_1);
  (**(code **)(*(long *)this + 0x18))(this,plVar1);
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
  *(undefined8 *)(this + 0x28) = uVar2;
  return;
}


