// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unztell
// Entry Point: 00e32970
// Size: 28 bytes
// Signature: undefined unztell(void)


undefined8 unztell(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x140) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x30);
  }
  return 0xffffffffffffff9a;
}


