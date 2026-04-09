// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_chunk_benign_error
// Entry Point: 00daf3b8
// Size: 116 bytes
// Signature: undefined png_chunk_benign_error(void)


void png_chunk_benign_error(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined auStack_100 [216];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x16a) >> 4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,param_2);
  }
  FUN_00daf198(*(undefined4 *)(param_1 + 0x250),auStack_100);
  png_warning(param_1,auStack_100);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


