// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_tEXt
// Entry Point: 00dca2e8
// Size: 432 bytes
// Signature: undefined png_write_tEXt(void)


void png_write_tEXt(long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  undefined auStack_a0 [80];
  uint local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar4 = png_check_keyword(param_1,param_2,auStack_a0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"tEXt: invalid keyword");
  }
  if (param_3 == (char *)0x0) {
    sVar5 = 0;
  }
  else if (*param_3 == '\0') {
    sVar5 = 0;
  }
  else {
    sVar5 = strlen(param_3);
    if (0x7ffffffe - iVar4 < sVar5) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"tEXt: text too long");
    }
  }
  if (param_1 != 0) {
    iVar4 = iVar4 + 1;
    iVar1 = iVar4 + (int)sVar5;
    *(undefined4 *)(param_1 + 0x4ac) = 0x22;
    local_50 = CONCAT13((char)iVar1,
                        CONCAT12((char)((uint)iVar1 >> 8),
                                 (short)CONCAT21((short)((uint)iVar1 >> 0x10),
                                                 (char)((uint)iVar1 >> 0x18))));
    local_4c = 0x74584574;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x74455874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4ac) = 0x42;
    if (iVar4 != 0) {
      png_write_data(param_1,auStack_a0,iVar4);
      png_calculate_crc(param_1,auStack_a0,iVar4);
    }
    if ((sVar5 != 0) && (param_3 != (char *)0x0)) {
      png_write_data(param_1,param_3,sVar5);
      png_calculate_crc(param_1,param_3,sVar5);
    }
    uVar2 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_50 = uVar2 >> 0x10 | uVar2 << 0x10;
    *(undefined4 *)(param_1 + 0x4ac) = 0x82;
    png_write_data(param_1,&local_50,4);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


