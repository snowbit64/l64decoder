// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetCdataSectionHandler
// Entry Point: 00d2e3a8
// Size: 12 bytes
// Signature: undefined XML_SetCdataSectionHandler(void)


void XML_SetCdataSectionHandler(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x90) = param_2;
    *(undefined8 *)(param_1 + 0x98) = param_3;
  }
  return;
}


