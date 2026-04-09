// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetCurrentByteCount
// Entry Point: 00d2ed54
// Size: 36 bytes
// Signature: undefined XML_GetCurrentByteCount(void)


ulong XML_GetCurrentByteCount(ulong param_1)

{
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x228) == 0) || (*(long *)(param_1 + 0x220) == 0)) {
      return 0;
    }
    param_1 = (ulong)(uint)((int)*(long *)(param_1 + 0x228) - (int)*(long *)(param_1 + 0x220));
  }
  return param_1;
}


