// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_pcm_tell
// Entry Point: 00e1ff3c
// Size: 28 bytes
// Signature: undefined ov_pcm_tell(void)


undefined8 ov_pcm_tell(long param_1)

{
  if (*(int *)(param_1 + 0x80) < 2) {
    return 0xffffffffffffff7d;
  }
  return *(undefined8 *)(param_1 + 0x78);
}


