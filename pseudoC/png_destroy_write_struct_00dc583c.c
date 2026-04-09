// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_destroy_write_struct
// Entry Point: 00dc583c
// Size: 180 bytes
// Signature: undefined png_destroy_write_struct(void)


void png_destroy_write_struct(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    png_destroy_info_struct(lVar1);
    *param_1 = 0;
    if ((*(byte *)(lVar1 + 0x168) >> 1 & 1) != 0) {
      deflateEnd(lVar1 + 0x178);
    }
    png_free_buffer_list(lVar1,lVar1 + 0x1e8);
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x260));
    *(undefined8 *)(lVar1 + 0x260) = 0;
    png_free(lVar1,*(undefined8 *)(lVar1 + 600));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x268));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x270));
    *(undefined8 *)(lVar1 + 600) = 0;
    *(undefined8 *)(lVar1 + 0x270) = 0;
    *(undefined8 *)(lVar1 + 0x268) = 0;
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x400));
    *(undefined8 *)(lVar1 + 0x400) = 0;
    png_destroy_png_struct(lVar1);
    return;
  }
  return;
}


