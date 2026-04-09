// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_tRNS
// Entry Point: 00dbdd9c
// Size: 572 bytes
// Signature: undefined png_handle_tRNS(void)


void png_handle_tRNS(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  ushort local_148;
  ushort local_146;
  ushort local_144;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) >> 4 & 1) == 0)) {
      cVar2 = *(char *)(param_1 + 0x29f);
      if (cVar2 == '\x03') {
        if ((uVar1 >> 1 & 1) == 0) goto LAB_00dbde6c;
        if ((param_3 < 0x101) && (param_3 - 1 < (uint)*(ushort *)(param_1 + 0x290))) {
          png_read_data(param_1,&local_148,param_3);
          png_calculate_crc(param_1,&local_148,param_3);
          *(short *)(param_1 + 0x298) = (short)param_3;
          iVar4 = png_crc_finish(param_1,0);
          goto joined_r0x00dbde48;
        }
      }
      else if (cVar2 == '\x02') {
        if (param_3 == 6) {
          png_read_data(param_1,&local_148,6);
          png_calculate_crc(param_1,&local_148,6);
          *(undefined2 *)(param_1 + 0x298) = 1;
          *(ushort *)(param_1 + 0x32a) = local_148 >> 8 | (ushort)((local_148 & 0xff00ff) << 8);
          *(ushort *)(param_1 + 0x32c) = local_146 >> 8 | (ushort)((local_146 & 0xff00ff) << 8);
          *(ushort *)(param_1 + 0x32e) = local_144 >> 8 | (ushort)((local_144 & 0xff00ff) << 8);
          iVar4 = png_crc_finish(param_1,0);
joined_r0x00dbde48:
          if (iVar4 == 0) {
            png_set_tRNS(param_1,param_2,&local_148,*(undefined2 *)(param_1 + 0x298),param_1 + 0x328
                        );
          }
          else {
            *(undefined2 *)(param_1 + 0x298) = 0;
          }
          goto LAB_00dbde88;
        }
      }
      else {
        if (cVar2 != '\0') {
          png_crc_finish(param_1,param_3);
          pcVar5 = "invalid with alpha channel";
          goto LAB_00dbde80;
        }
        if (param_3 == 2) {
          png_read_data(param_1,&local_148,2);
          png_calculate_crc(param_1,&local_148,2);
          *(undefined2 *)(param_1 + 0x298) = 1;
          *(ushort *)(param_1 + 0x330) = local_148 >> 8 | (ushort)((local_148 & 0xff00ff) << 8);
          iVar4 = png_crc_finish(param_1,0);
          goto joined_r0x00dbde48;
        }
      }
      png_crc_finish(param_1,param_3);
      pcVar5 = "invalid";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar5 = "duplicate";
    }
  }
  else {
LAB_00dbde6c:
    png_crc_finish(param_1,param_3);
    pcVar5 = "out of place";
  }
LAB_00dbde80:
  png_chunk_benign_error(param_1,pcVar5);
LAB_00dbde88:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


