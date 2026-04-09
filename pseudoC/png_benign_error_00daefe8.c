// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_benign_error
// Entry Point: 00daefe8
// Size: 164 bytes
// Signature: undefined png_benign_error(void)


void png_benign_error(long param_1,undefined *param_2)

{
  long lVar1;
  undefined auStack_100 [216];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x16a) >> 4 & 1) == 0) {
    if (((*(uint *)(param_1 + 0x164) >> 0xf & 1) != 0) && (*(int *)(param_1 + 0x250) != 0)) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,param_2);
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,param_2);
  }
  if (((*(uint *)(param_1 + 0x164) >> 0xf & 1) != 0) && (*(int *)(param_1 + 0x250) != 0)) {
    FUN_00daf198(*(int *)(param_1 + 0x250),auStack_100);
    param_2 = auStack_100;
  }
  png_warning(param_1,param_2);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


