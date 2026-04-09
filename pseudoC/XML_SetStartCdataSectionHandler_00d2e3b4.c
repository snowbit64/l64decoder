// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetStartCdataSectionHandler
// Entry Point: 00d2e3b4
// Size: 12 bytes
// Signature: undefined XML_SetStartCdataSectionHandler(void)


void XML_SetStartCdataSectionHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x90) = param_2;
  }
  return;
}


