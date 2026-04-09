// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_default_read_data
// Entry Point: 00db69bc
// Size: 76 bytes
// Signature: undefined png_default_read_data(void)


void png_default_read_data(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((param_1 != 0) &&
     (sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x140)), sVar1 != param_3)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Read Error");
  }
  return;
}


