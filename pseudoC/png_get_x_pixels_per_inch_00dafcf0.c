// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_get_x_pixels_per_inch
// Entry Point: 00dafcf0
// Size: 140 bytes
// Signature: undefined png_get_x_pixels_per_inch(void)


void png_get_x_pixels_per_inch(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((((param_1 == 0) || (param_2 == 0)) || (-1 < *(char *)(param_2 + 8))) ||
     (*(char *)(param_2 + 0xe8) != '\x01')) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xe0);
    if (iVar2 < 0) {
      uVar3 = 0;
      goto LAB_00dafd58;
    }
  }
  iVar2 = png_muldiv(&local_2c,iVar2,0x7f,5000);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = local_2c;
  }
LAB_00dafd58:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


