// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_IEND
// Entry Point: 00dc9110
// Size: 208 bytes
// Signature: undefined png_write_IEND(void)


void png_write_IEND(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4ac) = 0x22;
    local_40 = 0x444e454900000000;
    png_write_data(param_1,&local_40,8);
    *(undefined4 *)(param_1 + 0x250) = 0x49454e44;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,(long)&local_40 + 4,4);
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    *(undefined4 *)(param_1 + 0x4ac) = 0x82;
    local_40 = CONCAT44(local_40._4_4_,uVar1 >> 0x10 | uVar1 << 0x10);
    png_write_data(param_1,&local_40,4);
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x10;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


