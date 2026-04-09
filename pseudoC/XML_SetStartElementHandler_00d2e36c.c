// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetStartElementHandler
// Entry Point: 00d2e36c
// Size: 12 bytes
// Signature: undefined XML_SetStartElementHandler(void)


void XML_SetStartElementHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
  }
  return;
}


