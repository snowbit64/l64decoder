// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_tIME
// Entry Point: 00dbee24
// Size: 288 bytes
// Signature: undefined png_handle_tIME(void)


void png_handle_tIME(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  ushort local_48;
  undefined4 local_46;
  undefined local_42;
  ushort local_40;
  undefined4 local_3e;
  undefined local_3a;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((param_2 == 0) || ((*(byte *)(param_2 + 9) >> 1 & 1) == 0)) {
    if ((uVar1 >> 2 & 1) != 0) {
      *(uint *)(param_1 + 0x164) = uVar1 | 8;
    }
    if (param_3 == 7) {
      png_read_data(param_1,&local_40,7);
      png_calculate_crc(param_1,&local_40,7);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 == 0) {
        local_48 = local_40 >> 8 | (ushort)((local_40 & 0xff00ff) << 8);
        local_42 = local_3a;
        local_46 = local_3e;
        png_set_tIME(param_1,param_2,&local_48);
      }
      goto LAB_00dbef0c;
    }
    png_crc_finish(param_1,param_3);
    pcVar4 = "invalid";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "duplicate";
  }
  png_chunk_benign_error(param_1,pcVar4);
LAB_00dbef0c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


