// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: waitVideoQueueFull
// Entry Point: 00c719dc
// Size: 60 bytes
// Signature: undefined waitVideoQueueFull(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::waitVideoQueueFull() */

void TheoraVideoDecoder::waitVideoQueueFull(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = *(int *)(in_x0 + 0x98);
  while (iVar1 != 2) {
    ThreadUtil::usleep(1000);
    iVar1 = *(int *)(in_x0 + 0x98);
  }
  return;
}


