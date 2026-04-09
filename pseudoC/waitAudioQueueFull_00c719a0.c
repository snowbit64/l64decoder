// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitAudioQueueFull
// Entry Point: 00c719a0
// Size: 60 bytes
// Signature: undefined waitAudioQueueFull(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::waitAudioQueueFull() */

void TheoraVideoDecoder::waitAudioQueueFull(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0xb8);
  while (iVar1 != 4) {
    ThreadUtil::usleep(1000);
    iVar1 = *(int *)(in_x0 + 0xb8);
  }
  return;
}


