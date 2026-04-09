// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FFXShadowDenoisingTask
// Entry Point: 00a43e60
// Size: 36 bytes
// Signature: undefined __thiscall ~FFXShadowDenoisingTask(FFXShadowDenoisingTask * this)


/* FFXShadowDenoiser::FFXShadowDenoisingTask::~FFXShadowDenoisingTask() */

void __thiscall
FFXShadowDenoiser::FFXShadowDenoisingTask::~FFXShadowDenoisingTask(FFXShadowDenoisingTask *this)

{
  ShadowDenoiser::ShadowDenoisingTask::~ShadowDenoisingTask((ShadowDenoisingTask *)this);
  operator_delete(this);
  return;
}


