// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetSpecifiedAttributeCount
// Entry Point: 00d2e338
// Size: 20 bytes
// Signature: undefined XML_GetSpecifiedAttributeCount(void)


undefined4 XML_GetSpecifiedAttributeCount(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x2d4);
  }
  return 0xffffffff;
}


