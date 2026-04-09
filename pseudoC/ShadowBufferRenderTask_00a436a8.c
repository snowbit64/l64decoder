// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ShadowBufferRenderTask
// Entry Point: 00a436a8
// Size: 104 bytes
// Signature: undefined __thiscall ~ShadowBufferRenderTask(ShadowBufferRenderTask * this)


/* ShadowBufferRenderController::ShadowBufferRenderTask::~ShadowBufferRenderTask() */

void __thiscall
ShadowBufferRenderController::ShadowBufferRenderTask::~ShadowBufferRenderTask
          (ShadowBufferRenderTask *this)

{
  *(undefined ***)this = &PTR__ShadowBufferRenderTask_00fe3228;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  *(undefined ***)this = &PTR__Task_00fde908;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


