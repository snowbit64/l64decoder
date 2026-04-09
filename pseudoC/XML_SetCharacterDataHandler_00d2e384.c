// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_SetCharacterDataHandler
// Entry Point: 00d2e384
// Size: 12 bytes
// Signature: undefined XML_SetCharacterDataHandler(void)


void XML_SetCharacterDataHandler(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x78) = param_2;
  }
  return;
}


