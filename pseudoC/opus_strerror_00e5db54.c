// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_strerror
// Entry Point: 00e5db54
// Size: 48 bytes
// Signature: undefined opus_strerror(void)


char * opus_strerror(int param_1)

{
  if (param_1 - 1U < 0xfffffff8) {
    return "unknown error";
  }
  return &DAT_00563cc0 + *(int *)(&DAT_00563cc0 + (ulong)(uint)-param_1 * 4);
}


