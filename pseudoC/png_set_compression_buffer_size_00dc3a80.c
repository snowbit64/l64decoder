// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_compression_buffer_size
// Entry Point: 00dc3a80
// Size: 184 bytes
// Signature: undefined png_set_compression_buffer_size(void)


void png_set_compression_buffer_size(long param_1,ulong param_2)

{
  if (param_1 != 0) {
    if (param_2 - 0x80000000 < 0xffffffff80000001) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"invalid compression buffer size");
    }
    if (*(char *)(param_1 + 0x165) < '\0') {
      *(int *)(param_1 + 0x4a8) = (int)param_2;
    }
    else {
      if (*(int *)(param_1 + 0x170) != 0) {
        png_warning(param_1,"Compression buffer size cannot be changed because it is in use");
        return;
      }
      if (param_2 < 6) {
        png_warning(param_1,"Compression buffer size cannot be reduced below 6");
        return;
      }
      if (*(uint *)(param_1 + 0x1f0) != param_2) {
        png_free_buffer_list(param_1,param_1 + 0x1e8);
        *(int *)(param_1 + 0x1f0) = (int)param_2;
        return;
      }
    }
  }
  return;
}


