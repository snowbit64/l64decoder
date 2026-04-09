// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetStartDoctypeDeclHandler
// Entry Point: 00d2e3fc
// Size: 12 bytes
// Signature: undefined XML_SetStartDoctypeDeclHandler(void)


void XML_SetStartDoctypeDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = param_2;
  }
  return;
}


