// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_check_chunk_name
// Entry Point: 00dbc39c
// Size: 136 bytes
// Signature: undefined png_check_chunk_name(void)


void png_check_chunk_name(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if ((0xffffffc5 < (param_2 & 0xff) - 0x7b) && (5 < (param_2 & 0xff) - 0x5b)) {
    uVar1 = param_2 >> 8 & 0xff;
    if ((0xffffffc5 < uVar1 - 0x7b) && (5 < uVar1 - 0x5b)) {
      uVar1 = param_2 >> 0x10 & 0xff;
      if ((0xffffffc5 < uVar1 - 0x7b) && (5 < uVar1 - 0x5b)) {
        if ((0xffffffc5 < (param_2 >> 0x18) - 0x7b) && (5 < (param_2 >> 0x18) - 0x5b)) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_chunk_error(param_1,"invalid chunk type");
}


