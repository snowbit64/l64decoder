// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetNotationDeclHandler
// Entry Point: 00d2e420
// Size: 12 bytes
// Signature: undefined XML_SetNotationDeclHandler(void)


void XML_SetNotationDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = param_2;
  }
  return;
}


