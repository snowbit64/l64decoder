// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetDefaultHandlerExpand
// Entry Point: 00d2e3dc
// Size: 20 bytes
// Signature: undefined XML_SetDefaultHandlerExpand(void)


void XML_SetDefaultHandlerExpand(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = param_2;
    *(undefined *)(param_1 + 0x248) = 1;
  }
  return;
}


