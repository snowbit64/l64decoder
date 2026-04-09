// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CustomEnvMapSubmitTask
// Entry Point: 00a0dfdc
// Size: 64 bytes
// Signature: undefined __thiscall ~CustomEnvMapSubmitTask(CustomEnvMapSubmitTask * this)


/* IndirectLightRenderController::EnvFilterJob::CustomEnvMapSubmitTask::~CustomEnvMapSubmitTask() */

void __thiscall
IndirectLightRenderController::EnvFilterJob::CustomEnvMapSubmitTask::~CustomEnvMapSubmitTask
          (CustomEnvMapSubmitTask *this)

{
  *(undefined ***)this = &PTR__Task_00fde908;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}


