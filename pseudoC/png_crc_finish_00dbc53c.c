// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_crc_finish
// Entry Point: 00dbc53c
// Size: 348 bytes
// Signature: undefined png_crc_finish(void)


void png_crc_finish(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_448 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    if (param_1 == 0) {
      do {
        uVar4 = 0;
        if (0x3ff < param_2) {
          uVar4 = param_2 - 0x400;
        }
        bVar2 = 0x400 < param_2;
        param_2 = uVar4;
      } while (bVar2);
    }
    else {
      do {
        uVar4 = param_2;
        if (0x3ff < param_2) {
          uVar4 = 0x400;
        }
        param_2 = param_2 - uVar4;
        png_read_data(param_1,local_448,uVar4);
        png_calculate_crc(param_1,local_448,uVar4);
      } while (param_2 != 0);
    }
  }
  uVar4 = *(uint *)(param_1 + 0x168);
  if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x4ac) = 0x81;
    png_read_data(param_1,local_448,4);
    if ((uVar4 >> 0xb & 1) == 0) {
LAB_00dbc60c:
      uVar4 = (local_448[0] & 0xff00ff00) >> 8 | (local_448[0] & 0xff00ff) << 8;
      if ((uVar4 >> 0x10 | uVar4 << 0x10) != *(uint *)(param_1 + 0x284)) {
        if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
          if ((*(uint *)(param_1 + 0x168) >> 10 & 1) == 0) {
LAB_00dbc688:
                    /* WARNING: Subroutine does not return */
            png_chunk_error(param_1,"CRC error");
          }
        }
        else if ((*(uint *)(param_1 + 0x168) >> 9 & 1) != 0) goto LAB_00dbc688;
        png_chunk_warning(param_1,"CRC error");
        uVar3 = 1;
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
        goto LAB_00dbc680;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4ac) = 0x81;
    png_read_data(param_1,local_448,4);
    if ((~uVar4 & 0x300) != 0) goto LAB_00dbc60c;
  }
  uVar3 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00dbc680:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


