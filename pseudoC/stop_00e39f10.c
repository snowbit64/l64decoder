// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00e39f10
// Size: 20 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::AudioSource::stop() */

void SoLoud::AudioSource::stop(void)

{
  AudioSource *in_x0;
  
  if (*(Soloud **)(in_x0 + 0x78) != (Soloud *)0x0) {
    Soloud::stopAudioSource(*(Soloud **)(in_x0 + 0x78),in_x0);
    return;
  }
  return;
}


