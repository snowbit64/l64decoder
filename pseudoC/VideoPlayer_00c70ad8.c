// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VideoPlayer
// Entry Point: 00c70ad8
// Size: 200 bytes
// Signature: undefined __thiscall ~VideoPlayer(VideoPlayer * this)


/* VideoPlayer::~VideoPlayer() */

void __thiscall VideoPlayer::~VideoPlayer(VideoPlayer *this)

{
  TheoraVideoDecoder *this_00;
  
  this_00 = *(TheoraVideoDecoder **)(this + 8);
  if (this_00 != (TheoraVideoDecoder *)0x0) {
    TheoraVideoDecoder::~TheoraVideoDecoder(this_00);
    operator_delete(this_00);
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c70b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x30) + 8))();
    return;
  }
  return;
}


