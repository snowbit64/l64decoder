// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEnableAmbient
// Entry Point: 008bc970
// Size: 16 bytes
// Signature: undefined __thiscall setEnableAmbient(SoundPlayer * this, bool param_1)


/* SoundPlayer::setEnableAmbient(bool) */

void __thiscall SoundPlayer::setEnableAmbient(SoundPlayer *this,bool param_1)

{
  this[0xd8] = (SoundPlayer)param_1;
  *(uint *)(this + 0x38) = -(param_1 & 1);
  return;
}


