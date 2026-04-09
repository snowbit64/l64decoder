// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioSourceInstance
// Entry Point: 00e39c4c
// Size: 212 bytes
// Signature: undefined __thiscall ~AudioSourceInstance(AudioSourceInstance * this)


/* SoLoud::AudioSourceInstance::~AudioSourceInstance() */

void __thiscall SoLoud::AudioSourceInstance::~AudioSourceInstance(AudioSourceInstance *this)

{
  *(undefined ***)this = &PTR__AudioSourceInstance_01013cf0;
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 0x48))();
  }
  if (*(long **)(this + 400) != (long *)0x0) {
    (**(code **)(**(long **)(this + 400) + 0x48))();
  }
  if (*(long **)(this + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x198) + 0x48))();
  }
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x48))();
  }
  if (*(long **)(this + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a8) + 0x48))();
  }
  if (*(long **)(this + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x48))();
  }
  if (*(long **)(this + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b8) + 0x48))();
  }
  if (*(long **)(this + 0x1c0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e39d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x1c0) + 0x48))();
    return;
  }
  return;
}


