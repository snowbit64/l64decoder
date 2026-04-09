// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolume
// Entry Point: 00c70e40
// Size: 32 bytes
// Signature: undefined __thiscall setVolume(VideoPlayer * this, float param_1)


/* VideoPlayer::setVolume(float) */

void __thiscall VideoPlayer::setVolume(VideoPlayer *this,float param_1)

{
  long lVar1;
  
  if (*(long **)(this + 0x38) != (long *)0x0) {
    lVar1 = **(long **)(this + 0x38);
    *(float *)(this + 4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00c70e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x50))();
    return;
  }
  return;
}


