// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_UseParserAsHandlerArg
// Entry Point: 00d2e204
// Size: 12 bytes
// Signature: undefined XML_UseParserAsHandlerArg(void)


void XML_UseParserAsHandlerArg(long param_1)

{
  if (param_1 != 0) {
    *(long *)(param_1 + 8) = param_1;
  }
  return;
}


