// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetAttlistDeclHandler
// Entry Point: 00d2e4a8
// Size: 12 bytes
// Signature: undefined XML_SetAttlistDeclHandler(void)


void XML_SetAttlistDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x108) = param_2;
  }
  return;
}


