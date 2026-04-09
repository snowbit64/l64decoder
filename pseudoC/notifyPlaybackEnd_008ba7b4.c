// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifyPlaybackEnd
// Entry Point: 008ba7b4
// Size: 64 bytes
// Signature: undefined notifyPlaybackEnd(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopSoundGenerator::notifyPlaybackEnd() */

void SteadyLoopSoundGenerator::notifyPlaybackEnd(void)

{
  long *plVar1;
  long in_x0;
  long *plVar2;
  
  plVar1 = *(long **)(in_x0 + 0x58);
  for (plVar2 = *(long **)(in_x0 + 0x50); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      stb_vorbis_close();
      *plVar2 = 0;
    }
  }
  return;
}


