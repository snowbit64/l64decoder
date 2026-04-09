// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_gAMA
// Entry Point: 00dbcbcc
// Size: 264 bytes
// Signature: undefined png_handle_gAMA(void)


void png_handle_gAMA(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 == 4) {
      png_read_data(param_1,&local_3c,4);
      png_calculate_crc(param_1,&local_3c,4);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 == 0) {
        uVar1 = (local_3c & 0xff00ff00) >> 8 | (local_3c & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        if ((int)uVar1 < 0) {
          uVar1 = 0xffffffff;
        }
        png_colorspace_set_gamma(param_1,param_1 + 0x4d8,uVar1);
        png_colorspace_sync(param_1,param_2);
      }
      goto LAB_00dbcc9c;
    }
    png_crc_finish(param_1,param_3);
    pcVar4 = "invalid";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar4);
LAB_00dbcc9c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


