// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_UseForeignDTD
// Entry Point: 00d2e210
// Size: 48 bytes
// Signature: undefined XML_UseForeignDTD(void)


undefined8 XML_UseForeignDTD(long param_1,undefined param_2)

{
  if (param_1 == 0) {
    return 0x29;
  }
  if ((*(uint *)(param_1 + 0x388) | 2) == 3) {
    return 0x1a;
  }
  *(undefined *)(param_1 + 0x391) = param_2;
  return 0;
}


