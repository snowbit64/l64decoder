// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dListenerRelative
// Entry Point: 00e39f8c
// Size: 32 bytes
// Signature: undefined __thiscall set3dListenerRelative(AudioSource * this, bool param_1)


/* SoLoud::AudioSource::set3dListenerRelative(bool) */

void __thiscall SoLoud::AudioSource::set3dListenerRelative(AudioSource *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = 8;
  if (!param_1) {
    uVar1 = 0;
  }
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffffff7 | uVar1;
  return;
}


