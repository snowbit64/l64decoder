// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadingThreadStart
// Entry Point: 008bbb84
// Size: 24 bytes
// Signature: undefined __cdecl loadingThreadStart(void * param_1, bool * param_2)


/* SoundPlayer::loadingThreadStart(void*, bool volatile&) */

undefined8 SoundPlayer::loadingThreadStart(void *param_1,bool *param_2)

{
  loadingThreadMain((SoundPlayer *)param_1,param_2);
  return 0;
}


