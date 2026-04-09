// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_sRGB
// Entry Point: 00dbd0cc
// Size: 296 bytes
// Signature: undefined png_handle_sRGB(void)


void png_handle_sRGB(long param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 == 1) {
      png_read_data(param_1,local_3c,1);
      png_calculate_crc(param_1,local_3c,1);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 != 0) goto LAB_00dbd19c;
      uVar1 = *(ushort *)(param_1 + 0x522);
      if ((short)uVar1 < 0) goto LAB_00dbd19c;
      if ((uVar1 >> 2 & 1) == 0) {
        png_colorspace_set_sRGB(param_1,param_1 + 0x4d8,local_3c[0]);
        png_colorspace_sync(param_1,param_2);
        goto LAB_00dbd19c;
      }
      *(ushort *)(param_1 + 0x522) = uVar1 | 0x8000;
      png_colorspace_sync(param_1,param_2);
      pcVar4 = "too many profiles";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar4 = "invalid";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar4);
LAB_00dbd19c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


