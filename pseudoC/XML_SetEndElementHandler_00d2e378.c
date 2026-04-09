// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetEndElementHandler
// Entry Point: 00d2e378
// Size: 12 bytes
// Signature: undefined XML_SetEndElementHandler(void)


void XML_SetEndElementHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x70) = param_2;
  }
  return;
}


