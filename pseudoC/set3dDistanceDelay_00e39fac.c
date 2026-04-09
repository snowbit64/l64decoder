// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dDistanceDelay
// Entry Point: 00e39fac
// Size: 32 bytes
// Signature: undefined __thiscall set3dDistanceDelay(AudioSource * this, bool param_1)


/* SoLoud::AudioSource::set3dDistanceDelay(bool) */

void __thiscall SoLoud::AudioSource::set3dDistanceDelay(AudioSource *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = 0x10;
  if (!param_1) {
    uVar1 = 0;
  }
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xffffffef | uVar1;
  return;
}


