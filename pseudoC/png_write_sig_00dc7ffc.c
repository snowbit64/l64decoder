// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_sig
// Entry Point: 00dc7ffc
// Size: 144 bytes
// Signature: undefined png_write_sig(void)


void png_write_sig(long param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xa1a0a0d474e5089;
  *(undefined4 *)(param_1 + 0x4ac) = 0x12;
  png_write_data(param_1,(long)&local_30 + (ulong)*(byte *)(param_1 + 0x2a5),
                 8 - (ulong)*(byte *)(param_1 + 0x2a5));
  if (*(byte *)(param_1 + 0x2a5) < 3) {
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x1000;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


