// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_convert_to_rfc1123
// Entry Point: 00da9740
// Size: 88 bytes
// Signature: undefined png_convert_to_rfc1123(void)


long png_convert_to_rfc1123(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = png_convert_to_rfc1123_buffer(param_1 + 0x3c4);
    if (iVar1 != 0) {
      return param_1 + 0x3c4;
    }
    png_warning(param_1,"Ignoring invalid time value");
  }
  return 0;
}


