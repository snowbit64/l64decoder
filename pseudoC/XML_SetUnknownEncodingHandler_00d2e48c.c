// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetUnknownEncodingHandler
// Entry Point: 00d2e48c
// Size: 16 bytes
// Signature: undefined XML_SetUnknownEncodingHandler(void)


void XML_SetUnknownEncodingHandler(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xf8) = param_2;
    *(undefined8 *)(param_1 + 0x1e0) = param_3;
  }
  return;
}


