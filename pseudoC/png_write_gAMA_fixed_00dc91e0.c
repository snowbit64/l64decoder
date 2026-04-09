// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_gAMA_fixed
// Entry Point: 00dc91e0
// Size: 92 bytes
// Signature: undefined png_write_gAMA_fixed(void)


void png_write_gAMA_fixed(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00dc8238(param_1,0x67414d41,&local_2c,4);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


