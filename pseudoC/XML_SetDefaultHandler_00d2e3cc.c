// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetDefaultHandler
// Entry Point: 00d2e3cc
// Size: 16 bytes
// Signature: undefined XML_SetDefaultHandler(void)


void XML_SetDefaultHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = param_2;
    *(undefined *)(param_1 + 0x248) = 0;
  }
  return;
}


