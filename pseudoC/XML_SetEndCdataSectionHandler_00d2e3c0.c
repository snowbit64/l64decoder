// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetEndCdataSectionHandler
// Entry Point: 00d2e3c0
// Size: 12 bytes
// Signature: undefined XML_SetEndCdataSectionHandler(void)


void XML_SetEndCdataSectionHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x98) = param_2;
  }
  return;
}


