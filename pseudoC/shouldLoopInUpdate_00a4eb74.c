// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shouldLoopInUpdate
// Entry Point: 00a4eb74
// Size: 52 bytes
// Signature: undefined shouldLoopInUpdate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::shouldLoopInUpdate() */

bool AudioSourceSample::shouldLoopInUpdate(void)

{
  long in_x0;
  
  if ((*(byte *)(in_x0 + 0x78) >> 3 & 1) != 0) {
    return false;
  }
  if (1 < *(uint *)(in_x0 + 0xb0)) {
    return true;
  }
  return 0.0 < *(float *)(in_x0 + 0x80);
}


