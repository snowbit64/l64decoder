// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetErrorCode
// Entry Point: 00d2ed1c
// Size: 20 bytes
// Signature: undefined XML_GetErrorCode(void)


undefined4 XML_GetErrorCode(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x218);
  }
  return 0x29;
}


