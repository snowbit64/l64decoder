// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetStartNamespaceDeclHandler
// Entry Point: 00d2e438
// Size: 12 bytes
// Signature: undefined XML_SetStartNamespaceDeclHandler(void)


void XML_SetStartNamespaceDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 200) = param_2;
  }
  return;
}


