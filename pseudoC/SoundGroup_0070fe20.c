// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoundGroup
// Entry Point: 0070fe20
// Size: 68 bytes
// Signature: undefined __thiscall ~SoundGroup(SoundGroup * this)


/* AnimalSoundSystem::SoundGroup::~SoundGroup() */

void __thiscall AnimalSoundSystem::SoundGroup::~SoundGroup(SoundGroup *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


