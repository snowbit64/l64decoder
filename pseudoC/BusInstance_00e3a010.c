// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BusInstance
// Entry Point: 00e3a010
// Size: 84 bytes
// Signature: undefined __thiscall BusInstance(BusInstance * this, Bus * param_1)


/* SoLoud::BusInstance::BusInstance(SoLoud::Bus*) */

void __thiscall SoLoud::BusInstance::BusInstance(BusInstance *this,Bus *param_1)

{
  AudioSourceInstance::AudioSourceInstance((AudioSourceInstance *)this);
  *(undefined ***)this = &PTR__BusInstance_01013d88;
  AlignedFloatBuffer::AlignedFloatBuffer((AlignedFloatBuffer *)(this + 0x200));
  *(Bus **)(this + 0x1f0) = param_1;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 0x41;
  return;
}


