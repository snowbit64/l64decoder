// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetNamespaceDeclHandler
// Entry Point: 00d2e42c
// Size: 12 bytes
// Signature: undefined XML_SetNamespaceDeclHandler(void)


void XML_SetNamespaceDeclHandler(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 200) = param_2;
    *(undefined8 *)(param_1 + 0xd0) = param_3;
  }
  return;
}


