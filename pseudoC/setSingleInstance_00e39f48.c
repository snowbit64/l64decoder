// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSingleInstance
// Entry Point: 00e39f48
// Size: 16 bytes
// Signature: undefined __thiscall setSingleInstance(AudioSource * this, bool param_1)


/* SoLoud::AudioSource::setSingleInstance(bool) */

void __thiscall SoLoud::AudioSource::setSingleInstance(AudioSource *this,bool param_1)

{
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffffe | param_1 & 1;
  return;
}


