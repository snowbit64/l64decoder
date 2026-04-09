// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetCommentHandler
// Entry Point: 00d2e39c
// Size: 12 bytes
// Signature: undefined XML_SetCommentHandler(void)


void XML_SetCommentHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x88) = param_2;
  }
  return;
}


