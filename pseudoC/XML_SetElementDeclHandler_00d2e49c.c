// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetElementDeclHandler
// Entry Point: 00d2e49c
// Size: 12 bytes
// Signature: undefined XML_SetElementDeclHandler(void)


void XML_SetElementDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x100) = param_2;
  }
  return;
}


