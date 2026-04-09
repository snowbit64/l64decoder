// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetXmlDeclHandler
// Entry Point: 00d2e4c0
// Size: 12 bytes
// Signature: undefined XML_SetXmlDeclHandler(void)


void XML_SetXmlDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x118) = param_2;
  }
  return;
}


