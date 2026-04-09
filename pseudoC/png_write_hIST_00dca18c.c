// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_hIST
// Entry Point: 00dca18c
// Size: 348 bytes
// Signature: undefined png_write_hIST(void)


void png_write_hIST(long param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ushort local_54 [2];
  uint local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((int)(uint)*(ushort *)(param_1 + 0x290) < (int)param_3) {
    png_warning(param_1,"Invalid number of histogram entries specified");
  }
  else {
    uVar3 = (ulong)param_3;
    *(undefined4 *)(param_1 + 0x4ac) = 0x22;
    local_50 = CONCAT13((char)(param_3 << 1),
                        CONCAT12((char)(param_3 >> 7),
                                 CONCAT11((char)(param_3 >> 0xf),(char)(param_3 >> 0x17))));
    local_4c = 0x54534968;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x68495354;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4ac) = 0x42;
    if (0 < (int)param_3) {
      do {
        local_54[0] = *param_2 >> 8 | (ushort)((*param_2 & 0xff00ff) << 8);
        png_write_data(param_1,local_54,2);
        png_calculate_crc(param_1,local_54,2);
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_50 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined4 *)(param_1 + 0x4ac) = 0x82;
    png_write_data(param_1,&local_50,4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


