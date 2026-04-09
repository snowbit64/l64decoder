// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetEntityDeclHandler
// Entry Point: 00d2e4b4
// Size: 12 bytes
// Signature: undefined XML_SetEntityDeclHandler(void)


void XML_SetEntityDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x110) = param_2;
  }
  return;
}


