// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00864900
// Size: 28 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationPlayer::stop() */

void ConditionalAnimationPlayer::stop(void)

{
  CharacterSet **in_x0;
  
  if (*in_x0 != (CharacterSet *)0x0) {
    ConditionalAnimationTracks::stopAll
              ((ConditionalAnimationTracks *)(in_x0 + 4),*in_x0,(vector *)(in_x0 + 1));
    return;
  }
  return;
}


