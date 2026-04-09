// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_x_offset_inches_fixed
// Entry Point: 00dafe08
// Size: 84 bytes
// Signature: undefined png_get_x_offset_inches_fixed(void)


void png_get_x_offset_inches_fixed(long param_1,long param_2)

{
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_2 + 9) & 1) != 0)) {
    if (*(char *)(param_2 + 0xdc) != '\x01') {
      png_muldiv_warn(param_1,0,500,0x7f);
      return;
    }
    png_muldiv_warn(param_1,*(undefined4 *)(param_2 + 0xd4),500,0x7f);
    return;
  }
  png_muldiv_warn(param_1,0,500,0x7f);
  return;
}


