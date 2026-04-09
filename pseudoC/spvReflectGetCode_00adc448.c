// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetCode
// Entry Point: 00adc448
// Size: 16 bytes
// Signature: undefined spvReflectGetCode(void)


long spvReflectGetCode(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(*(long *)(param_1 + 0x498) + 0x10);
  }
  return param_1;
}


