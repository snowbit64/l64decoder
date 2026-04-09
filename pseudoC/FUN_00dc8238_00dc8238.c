// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc8238
// Entry Point: 00dc8238
// Size: 324 bytes
// Signature: undefined FUN_00dc8238(void)


void FUN_00dc8238(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  uint local_50;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    if (param_4 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"length exceeds PNG maximum");
    }
    local_49 = (undefined)param_2;
    *(undefined4 *)(param_1 + 0x4ac) = 0x22;
    local_4c = (undefined)((ulong)param_2 >> 0x18);
    local_4b = (undefined)((ulong)param_2 >> 0x10);
    local_50 = CONCAT13((char)param_4,
                        CONCAT12((char)(param_4 >> 8),
                                 CONCAT11((char)(param_4 >> 0x10),(char)(param_4 >> 0x18))));
    local_4a = (undefined)((ulong)param_2 >> 8);
    png_write_data(param_1,&local_50,8);
    *(int *)(param_1 + 0x250) = (int)param_2;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4ac) = 0x42;
    if ((param_3 != 0) && (param_4 != 0)) {
      png_write_data(param_1,param_3,param_4);
      png_calculate_crc(param_1,param_3,param_4);
    }
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_50 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined4 *)(param_1 + 0x4ac) = 0x82;
    png_write_data(param_1,&local_50,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


