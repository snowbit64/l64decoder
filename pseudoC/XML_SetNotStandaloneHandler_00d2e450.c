// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetNotStandaloneHandler
// Entry Point: 00d2e450
// Size: 12 bytes
// Signature: undefined XML_SetNotStandaloneHandler(void)


void XML_SetNotStandaloneHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xd8) = param_2;
  }
  return;
}


