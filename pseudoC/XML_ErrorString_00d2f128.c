// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_ErrorString
// Entry Point: 00d2f128
// Size: 40 bytes
// Signature: undefined XML_ErrorString(void)


undefined * XML_ErrorString(int param_1)

{
  if (param_1 - 1U < 0x29) {
    return &DAT_00546660 + *(int *)(&DAT_00546660 + (long)(int)(param_1 - 1U) * 4);
  }
  return (undefined *)0x0;
}


