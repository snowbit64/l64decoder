// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_chunk_report
// Entry Point: 00daf42c
// Size: 180 bytes
// Signature: undefined png_chunk_report(void)


void png_chunk_report(long param_1,undefined *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined auStack_100 [216];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x165) < '\0') {
    if ((1 < param_3) && ((*(byte *)(param_1 + 0x16a) >> 4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,param_2);
    }
    FUN_00daf198(*(undefined4 *)(param_1 + 0x250),auStack_100,param_2);
    param_2 = auStack_100;
  }
  else {
    if (param_3 < 1) {
      uVar1 = *(uint *)(param_1 + 0x168) >> 0x15;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x168) >> 0x16;
    }
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,param_2);
    }
  }
  png_warning(param_1,param_2);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


