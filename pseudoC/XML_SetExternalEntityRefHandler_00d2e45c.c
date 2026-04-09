// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetExternalEntityRefHandler
// Entry Point: 00d2e45c
// Size: 12 bytes
// Signature: undefined XML_SetExternalEntityRefHandler(void)


void XML_SetExternalEntityRefHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xe0) = param_2;
  }
  return;
}


