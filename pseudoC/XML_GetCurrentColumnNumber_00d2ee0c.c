// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetCurrentColumnNumber
// Entry Point: 00d2ee0c
// Size: 80 bytes
// Signature: undefined XML_GetCurrentColumnNumber(void)


long XML_GetCurrentColumnNumber(long param_1)

{
  if (param_1 != 0) {
    if ((*(ulong *)(param_1 + 0x220) != 0) &&
       (*(ulong *)(param_1 + 0x230) <= *(ulong *)(param_1 + 0x220))) {
      (**(code **)(*(long *)(param_1 + 0x120) + 0x60))();
      *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x220);
    }
    param_1 = *(long *)(param_1 + 0x308);
  }
  return param_1;
}


