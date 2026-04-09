// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_rows
// Entry Point: 00dc3a24
// Size: 92 bytes
// Signature: undefined png_set_rows(void)


void png_set_rows(long param_1,long param_2,long param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(long *)(param_2 + 0x160) != 0) && (*(long *)(param_2 + 0x160) != param_3)) {
      png_free_data(param_1,param_2,0x40,0);
    }
    *(long *)(param_2 + 0x160) = param_3;
    if (param_3 != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
    }
  }
  return;
}


