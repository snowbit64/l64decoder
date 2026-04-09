// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAudioSampleRate
// Entry Point: 00c6fc34
// Size: 24 bytes
// Signature: undefined getAudioSampleRate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidSysUtil::getAudioSampleRate() */

void AndroidSysUtil::getAudioSampleRate(void)

{
  AndroidJNICall::callInt(s_pActivityJNICall,"getAudioSampleRate");
  return;
}


