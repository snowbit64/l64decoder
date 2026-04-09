// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_check_fp_string
// Entry Point: 00dac110
// Size: 136 bytes
// Signature: undefined png_check_fp_string(void)


void png_check_fp_string(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long local_48;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  local_48 = 0;
  uVar2 = png_check_fp_number(param_1,param_2,&local_3c,&local_48);
  if ((int)uVar2 != 0) {
    if ((local_48 == param_2) || (*(char *)(param_1 + local_48) == '\0')) {
      uVar2 = (ulong)local_3c;
    }
    else {
      uVar2 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


