// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_chunk_error
// Entry Point: 00daf124
// Size: 60 bytes
// Signature: noreturn undefined png_chunk_error(void)


void png_chunk_error(long param_1,undefined8 param_2)

{
  undefined auStack_f8 [216];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(0,param_2);
  }
  FUN_00daf198(*(undefined4 *)(param_1 + 0x250),auStack_f8);
                    /* WARNING: Subroutine does not return */
  png_error(param_1,auStack_f8);
}


