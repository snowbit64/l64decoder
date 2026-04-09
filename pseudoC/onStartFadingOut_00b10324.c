// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onStartFadingOut
// Entry Point: 00b10324
// Size: 20 bytes
// Signature: undefined onStartFadingOut(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioSource::onStartFadingOut() */

void SoftAudioSource::onStartFadingOut(void)

{
  SoftAudioSource *in_x0;
  
  *(undefined4 *)(in_x0 + 0xcc) = *(undefined4 *)(in_x0 + 200);
  SoftAudioDevice::notifySourceStartsFadingOut(*(SoftAudioDevice **)(in_x0 + 0xa8),in_x0);
  return;
}


