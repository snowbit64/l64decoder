// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInaudibleBehavior
// Entry Point: 00e39fe0
// Size: 40 bytes
// Signature: undefined __thiscall setInaudibleBehavior(AudioSource * this, bool param_1, bool param_2)


/* SoLoud::AudioSource::setInaudibleBehavior(bool, bool) */

void __thiscall
SoLoud::AudioSource::setInaudibleBehavior(AudioSource *this,bool param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 8) & 0xffffff9f | 0x40;
  if (!param_1) {
    uVar1 = *(uint *)(this + 8) & 0xffffff9f;
  }
  uVar2 = uVar1 | 0x20;
  if (!param_2) {
    uVar2 = uVar1;
  }
  *(uint *)(this + 8) = uVar2;
  return;
}


