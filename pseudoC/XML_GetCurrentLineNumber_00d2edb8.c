// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_GetCurrentLineNumber
// Entry Point: 00d2edb8
// Size: 84 bytes
// Signature: undefined XML_GetCurrentLineNumber(void)


long XML_GetCurrentLineNumber(long param_1)

{
  if (param_1 != 0) {
    if ((*(ulong *)(param_1 + 0x220) != 0) &&
       (*(ulong *)(param_1 + 0x230) <= *(ulong *)(param_1 + 0x220))) {
      (**(code **)(*(long *)(param_1 + 0x120) + 0x60))();
      *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x220);
    }
    param_1 = *(long *)(param_1 + 0x300) + 1;
  }
  return param_1;
}


