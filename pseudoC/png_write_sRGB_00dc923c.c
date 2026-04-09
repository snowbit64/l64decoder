// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_sRGB
// Entry Point: 00dc923c
// Size: 132 bytes
// Signature: undefined png_write_sRGB(void)


void png_write_sRGB(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (3 < param_2) {
    png_warning(param_1,"Invalid sRGB rendering intent specified");
  }
  local_3c[0] = (char)param_2;
  FUN_00dc8238(param_1,0x73524742,local_3c,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


