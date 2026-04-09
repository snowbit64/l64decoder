// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxLoopCount
// Entry Point: 00e39f30
// Size: 8 bytes
// Signature: undefined __thiscall setMaxLoopCount(AudioSource * this, uint param_1)


/* SoLoud::AudioSource::setMaxLoopCount(unsigned int) */

void __thiscall SoLoud::AudioSource::setMaxLoopCount(AudioSource *this,uint param_1)

{
  *(uint *)(this + 0x14) = param_1;
  return;
}


