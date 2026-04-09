// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resampling_factor
// Entry Point: 00e5d694
// Size: 120 bytes
// Signature: undefined resampling_factor(void)


undefined8 resampling_factor(int param_1)

{
  if (param_1 < 16000) {
    if (param_1 == 8000) {
      return 6;
    }
    if (param_1 == 12000) {
      return 4;
    }
  }
  else {
    if (param_1 == 16000) {
      return 3;
    }
    if (param_1 == 48000) {
      return 1;
    }
    if (param_1 == 24000) {
      return 2;
    }
  }
  return 0;
}


