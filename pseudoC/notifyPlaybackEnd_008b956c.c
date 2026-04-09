// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyPlaybackEnd
// Entry Point: 008b956c
// Size: 44 bytes
// Signature: undefined notifyPlaybackEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSoundGenerator::notifyPlaybackEnd() */

void StaticSoundGenerator::notifyPlaybackEnd(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 8) != 0) {
    stb_vorbis_close();
    *(undefined8 *)(in_x0 + 8) = 0;
  }
  return;
}


