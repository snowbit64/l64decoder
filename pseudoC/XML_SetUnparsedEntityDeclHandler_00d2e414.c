// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetUnparsedEntityDeclHandler
// Entry Point: 00d2e414
// Size: 12 bytes
// Signature: undefined XML_SetUnparsedEntityDeclHandler(void)


void XML_SetUnparsedEntityDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = param_2;
  }
  return;
}


