// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetDoctypeDeclHandler
// Entry Point: 00d2e3f0
// Size: 12 bytes
// Signature: undefined XML_SetDoctypeDeclHandler(void)


void XML_SetDoctypeDeclHandler(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = param_2;
    *(undefined8 *)(param_1 + 0xb0) = param_3;
  }
  return;
}


