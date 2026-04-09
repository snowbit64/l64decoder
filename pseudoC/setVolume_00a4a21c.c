// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 00a4a21c
// Size: 8 bytes
// Signature: undefined __thiscall setVolume(AudioSource * this, float param_1)


/* AudioSource::setVolume(float) */

void __thiscall AudioSource::setVolume(AudioSource *this,float param_1)

{
  Sample::setVolume((Sample *)(this + 0x158),param_1);
  return;
}


