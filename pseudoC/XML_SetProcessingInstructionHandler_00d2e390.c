// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetProcessingInstructionHandler
// Entry Point: 00d2e390
// Size: 12 bytes
// Signature: undefined XML_SetProcessingInstructionHandler(void)


void XML_SetProcessingInstructionHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = param_2;
  }
  return;
}


