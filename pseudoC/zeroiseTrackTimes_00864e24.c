// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zeroiseTrackTimes
// Entry Point: 00864e24
// Size: 20 bytes
// Signature: undefined zeroiseTrackTimes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationPlayer::zeroiseTrackTimes() */

void ConditionalAnimationPlayer::zeroiseTrackTimes(void)

{
  CharacterSet **in_x0;
  
  if (*in_x0 != (CharacterSet *)0x0) {
    ConditionalAnimationTracks::zeroiseTimes((ConditionalAnimationTracks *)(in_x0 + 4),*in_x0);
    return;
  }
  return;
}


