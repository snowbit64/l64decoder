// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_reset_zstream
// Entry Point: 00da99b0
// Size: 20 bytes
// Signature: undefined png_reset_zstream(void)


undefined8 png_reset_zstream(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = inflateReset(param_1 + 0x178);
    return uVar1;
  }
  return 0xfffffffe;
}


