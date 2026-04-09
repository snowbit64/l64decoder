// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 00a4ab28
// Size: 8 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSource::stop() */

void AudioSource::stop(void)

{
  AudioSourceSample::stopFromAudioSource();
  return;
}


