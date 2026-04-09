// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetSkippedEntityHandler
// Entry Point: 00d2e480
// Size: 12 bytes
// Signature: undefined XML_SetSkippedEntityHandler(void)


void XML_SetSkippedEntityHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = param_2;
  }
  return;
}


