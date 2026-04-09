// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_destroy_png_struct
// Entry Point: 00db0aa8
// Size: 152 bytes
// Signature: undefined png_destroy_png_struct(void)


void png_destroy_png_struct(void *param_1)

{
  long lVar1;
  undefined auStack_560 [1072];
  code *local_130;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (void *)0x0) {
    memcpy(auStack_560,param_1,0x528);
    memset(param_1,0,0x528);
    if (local_130 == (code *)0x0) {
      free(param_1);
    }
    else {
      (*local_130)(auStack_560,param_1);
    }
    png_free_jmpbuf(auStack_560);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


