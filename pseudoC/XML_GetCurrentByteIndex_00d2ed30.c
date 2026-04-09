// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetCurrentByteIndex
// Entry Point: 00d2ed30
// Size: 36 bytes
// Signature: undefined XML_GetCurrentByteIndex(void)


long XML_GetCurrentByteIndex(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x220) != 0)) {
    return (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x220)) - *(long *)(param_1 + 0x50);
  }
  return -1;
}


