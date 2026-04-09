// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EnvFilterJob
// Entry Point: 00a0e04c
// Size: 76 bytes
// Signature: undefined __thiscall ~EnvFilterJob(EnvFilterJob * this)


/* IndirectLightRenderController::EnvFilterJob::~EnvFilterJob() */

void __thiscall IndirectLightRenderController::EnvFilterJob::~EnvFilterJob(EnvFilterJob *this)

{
  *(undefined ***)this = &PTR__EnvFilterJob_00fe2ff8;
  *(undefined ***)(this + 8) = &PTR__Task_00fde908;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  operator_delete(this);
  return;
}


