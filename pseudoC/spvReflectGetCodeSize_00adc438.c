// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetCodeSize
// Entry Point: 00adc438
// Size: 16 bytes
// Signature: undefined spvReflectGetCodeSize(void)


ulong spvReflectGetCodeSize(ulong param_1)

{
  if (param_1 != 0) {
    param_1 = (ulong)*(uint *)(*(long *)(param_1 + 0x498) + 8);
  }
  return param_1;
}


