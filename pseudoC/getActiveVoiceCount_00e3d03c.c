// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getActiveVoiceCount
// Entry Point: 00e3d03c
// Size: 80 bytes
// Signature: undefined getActiveVoiceCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::getActiveVoiceCount() */

undefined4 SoLoud::Soloud::getActiveVoiceCount(void)

{
  undefined4 uVar1;
  long in_x0;
  
  lockAudioMutex();
  if (*(char *)(in_x0 + 0x224f0) != '\0') {
    calcActiveVoices();
  }
  uVar1 = *(undefined4 *)(in_x0 + 0x224ec);
  unlockAudioMutex();
  return uVar1;
}


