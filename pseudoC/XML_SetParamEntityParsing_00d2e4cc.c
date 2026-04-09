// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetParamEntityParsing
// Entry Point: 00d2e4cc
// Size: 44 bytes
// Signature: undefined XML_SetParamEntityParsing(void)


undefined8 XML_SetParamEntityParsing(long param_1,undefined4 param_2)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x388) | 2) != 3)) {
    *(undefined4 *)(param_1 + 0x394) = param_2;
    return 1;
  }
  return 0;
}


