// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_hIST
// Entry Point: 00dbe3e8
// Size: 348 bytes
// Signature: undefined png_handle_hIST(void)


void png_handle_hIST(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort local_24c [2];
  ushort auStack_248 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 2) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) >> 6 & 1) == 0)) {
      if (param_3 < 0x202) {
        uVar1 = param_3 >> 1;
        if (uVar1 == *(ushort *)(param_1 + 0x290)) {
          if (1 < param_3) {
            if (uVar1 < 2) {
              uVar1 = 1;
            }
            uVar5 = (ulong)uVar1;
            puVar6 = auStack_248;
            do {
              png_read_data(param_1,local_24c,2);
              png_calculate_crc(param_1,local_24c,2);
              uVar5 = uVar5 - 1;
              *puVar6 = local_24c[0] >> 8 | (ushort)((local_24c[0] & 0xff00ff) << 8);
              puVar6 = puVar6 + 1;
            } while (uVar5 != 0);
          }
          iVar3 = png_crc_finish(param_1,0);
          if (iVar3 == 0) {
            png_set_hIST(param_1,param_2,auStack_248);
          }
          goto LAB_00dbe508;
        }
      }
      png_crc_finish(param_1,param_3);
      pcVar4 = "invalid";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar4 = "duplicate";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar4);
LAB_00dbe508:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


