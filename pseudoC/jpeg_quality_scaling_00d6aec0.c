// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_quality_scaling
// Entry Point: 00d6aec0
// Size: 56 bytes
// Signature: undefined jpeg_quality_scaling(void)


uint jpeg_quality_scaling(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 2) {
    param_1 = 1;
  }
  if (99 < param_1) {
    param_1 = 100;
  }
  if (param_1 < 0x32) {
    uVar1 = 0;
    if ((param_1 & 0xffff) != 0) {
      uVar1 = 5000 / (param_1 & 0xffff);
    }
    return uVar1;
  }
  return param_1 * -2 + 200;
}


