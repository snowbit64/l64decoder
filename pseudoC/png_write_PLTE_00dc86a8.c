// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_PLTE
// Entry Point: 00dc86a8
// Size: 464 bytes
// Signature: undefined png_write_PLTE(void)


void png_write_PLTE(long param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined local_54;
  undefined2 local_53;
  uint local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(byte *)(param_1 + 0x29f) == 3) {
    if (((*(uint *)(param_1 + 0x418) & 1 | param_3) == 0) ||
       ((uint)(1 << (ulong)(*(byte *)(param_1 + 0x2a0) & 0x1f)) < param_3)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid number of colors in palette");
    }
LAB_00dc8740:
    iVar3 = param_3 * 3;
    *(undefined4 *)(param_1 + 0x4ac) = 0x22;
    local_50 = CONCAT13((char)iVar3,
                        CONCAT12((char)((uint)iVar3 >> 8),
                                 CONCAT11((char)((uint)iVar3 >> 0x10),(char)((uint)iVar3 >> 0x18))))
    ;
    *(short *)(param_1 + 0x290) = (short)param_3;
    local_4c = 0x45544c50;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x504c5445;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4ac) = 0x42;
    if (param_3 != 0) {
      do {
        local_54 = *param_2;
        local_53 = *(undefined2 *)(param_2 + 1);
        png_write_data(param_1,&local_54,3);
        png_calculate_crc(param_1,&local_54,3);
        param_3 = param_3 - 1;
        param_2 = param_2 + 3;
      } while (param_3 != 0);
    }
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_50 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined4 *)(param_1 + 0x4ac) = 0x82;
    png_write_data(param_1,&local_50,4);
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 2;
    if (*(long *)(lVar2 + 0x28) != local_48) {
LAB_00dc8874:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    if ((param_3 < 0x101) && ((*(uint *)(param_1 + 0x418) & 1 | param_3) != 0)) {
      if ((*(byte *)(param_1 + 0x29f) >> 1 & 1) != 0) goto LAB_00dc8740;
      pcVar4 = "Ignoring request to write a PLTE chunk in grayscale PNG";
    }
    else {
      pcVar4 = "Invalid number of colors in palette";
    }
    png_warning(param_1,pcVar4);
    if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_00dc8874;
  }
  return;
}


