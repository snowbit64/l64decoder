// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitStreamQueueFull
// Entry Point: 00c72294
// Size: 60 bytes
// Signature: undefined waitStreamQueueFull(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::waitStreamQueueFull() */

void TheoraVideoDecoder::waitStreamQueueFull(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0xd8);
  while (iVar1 != 0x20) {
    ThreadUtil::usleep(1000);
    iVar1 = *(int *)(in_x0 + 0xd8);
  }
  return;
}


