// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetIdAttributeIndex
// Entry Point: 00d2e34c
// Size: 20 bytes
// Signature: undefined XML_GetIdAttributeIndex(void)


undefined4 XML_GetIdAttributeIndex(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x2d8);
  }
  return 0xffffffff;
}


