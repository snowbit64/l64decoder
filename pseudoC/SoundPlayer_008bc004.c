// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoundPlayer
// Entry Point: 008bc004
// Size: 36 bytes
// Signature: undefined __thiscall ~SoundPlayer(SoundPlayer * this)


/* SoundPlayer::~SoundPlayer() */

void __thiscall SoundPlayer::~SoundPlayer(SoundPlayer *this)

{
  ~SoundPlayer(this);
  operator_delete(this);
  return;
}


