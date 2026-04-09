// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetElementHandler
// Entry Point: 00d2e360
// Size: 12 bytes
// Signature: undefined XML_SetElementHandler(void)


void XML_SetElementHandler(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
    *(undefined8 *)(param_1 + 0x70) = param_3;
  }
  return;
}


