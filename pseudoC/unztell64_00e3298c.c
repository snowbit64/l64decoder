// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unztell64
// Entry Point: 00e3298c
// Size: 28 bytes
// Signature: undefined unztell64(void)


undefined8 unztell64(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x140) != 0)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x140) + 0xa0);
  }
  return 0xffffffffffffffff;
}


