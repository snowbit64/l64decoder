// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ShadowDenoisingTask
// Entry Point: 00a44f90
// Size: 104 bytes
// Signature: undefined __thiscall ~ShadowDenoisingTask(ShadowDenoisingTask * this)


/* ShadowDenoiser::ShadowDenoisingTask::~ShadowDenoisingTask() */

void __thiscall ShadowDenoiser::ShadowDenoisingTask::~ShadowDenoisingTask(ShadowDenoisingTask *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00fe3348;
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


