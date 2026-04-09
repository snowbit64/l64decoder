// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_pixel_aspect_ratio_fixed
// Entry Point: 00dafaf8
// Size: 136 bytes
// Signature: undefined png_get_pixel_aspect_ratio_fixed(void)


void png_get_pixel_aspect_ratio_fixed(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((((param_1 == 0) || (param_2 == 0)) || (-1 < *(char *)(param_2 + 8))) ||
      ((*(int *)(param_2 + 0xe0) == 0 || (iVar2 = *(int *)(param_2 + 0xe4), iVar2 < 0)))) ||
     ((iVar2 == 0 ||
      ((*(int *)(param_2 + 0xe0) < 0 || (iVar2 = png_muldiv(&local_2c,iVar2,100000), iVar2 == 0)))))
     ) {
    local_2c = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_2c);
  }
  return;
}


