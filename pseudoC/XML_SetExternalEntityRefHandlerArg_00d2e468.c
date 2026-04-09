// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetExternalEntityRefHandlerArg
// Entry Point: 00d2e468
// Size: 24 bytes
// Signature: undefined XML_SetExternalEntityRefHandlerArg(void)


void XML_SetExternalEntityRefHandlerArg(long param_1,long param_2)

{
  if (param_1 != 0) {
    if (param_2 != 0) {
      *(long *)(param_1 + 0xe8) = param_2;
      return;
    }
    *(long *)(param_1 + 0xe8) = param_1;
  }
  return;
}


