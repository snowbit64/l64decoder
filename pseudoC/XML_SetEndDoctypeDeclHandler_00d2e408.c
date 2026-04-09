// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetEndDoctypeDeclHandler
// Entry Point: 00d2e408
// Size: 12 bytes
// Signature: undefined XML_SetEndDoctypeDeclHandler(void)


void XML_SetEndDoctypeDeclHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xb0) = param_2;
  }
  return;
}


