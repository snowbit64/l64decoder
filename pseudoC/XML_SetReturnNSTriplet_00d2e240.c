// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetReturnNSTriplet
// Entry Point: 00d2e240
// Size: 40 bytes
// Signature: undefined XML_SetReturnNSTriplet(void)


void XML_SetReturnNSTriplet(long param_1,int param_2)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x388) | 2) != 3)) {
    *(bool *)(param_1 + 0x1c9) = param_2 != 0;
    return;
  }
  return;
}


