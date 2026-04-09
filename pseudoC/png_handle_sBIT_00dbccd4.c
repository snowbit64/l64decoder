// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_sBIT
// Entry Point: 00dbccd4
// Size: 536 bytes
// Signature: undefined png_handle_sBIT(void)


void png_handle_sBIT(long param_1,long param_2,uint param_3)

{
  undefined uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) >> 1 & 1) == 0)) {
      if (*(char *)(param_1 + 0x29f) == '\x03') {
        uVar8 = 8;
        bVar6 = 3;
      }
      else {
        bVar6 = *(byte *)(param_1 + 0x2a3);
        uVar8 = (uint)*(byte *)(param_1 + 0x2a0);
      }
      if ((4 < param_3) || (bVar6 != param_3)) {
        png_chunk_benign_error(param_1,"invalid");
        png_crc_finish(param_1,param_3);
        goto LAB_00dbcd30;
      }
      local_5c = uVar8 * 0x1010101;
      png_read_data(param_1,&local_5c,param_3);
      png_calculate_crc(param_1,&local_5c,param_3);
      iVar3 = png_crc_finish(param_1,0);
      if (iVar3 != 0) goto LAB_00dbcd30;
      if (param_3 != 0) {
        if (((local_5c & 0xff) == 0) || (uVar8 <= (local_5c & 0xff) && (local_5c & 0xff) != uVar8))
        {
LAB_00dbce98:
          pcVar4 = "invalid";
          goto LAB_00dbcd28;
        }
        if (param_3 != 1) {
          if ((local_5c._1_1_ == 0) || (uVar8 <= local_5c._1_1_ && local_5c._1_1_ != uVar8))
          goto LAB_00dbce98;
          if (param_3 != 2) {
            if ((local_5c._2_1_ == 0) || (uVar8 <= local_5c._2_1_ && local_5c._2_1_ != uVar8))
            goto LAB_00dbce98;
            if (param_3 != 3) {
              if ((local_5c._3_1_ == 0) || (uVar8 <= local_5c._3_1_ && local_5c._3_1_ != uVar8))
              goto LAB_00dbce98;
            }
          }
        }
      }
      if ((*(byte *)(param_1 + 0x29f) >> 1 & 1) == 0) {
        puVar5 = (undefined *)((ulong)&local_5c | 1);
        *(byte *)(param_1 + 0x313) = (byte)local_5c;
        bVar6 = (byte)local_5c;
        bVar7 = (byte)local_5c;
      }
      else {
        puVar5 = (undefined *)((ulong)&local_5c | 3);
        bVar6 = local_5c._1_1_;
        bVar7 = local_5c._2_1_;
      }
      uVar1 = *puVar5;
      *(byte *)(param_1 + 0x310) = (byte)local_5c;
      *(byte *)(param_1 + 0x311) = bVar6;
      *(byte *)(param_1 + 0x312) = bVar7;
      *(undefined *)(param_1 + 0x314) = uVar1;
      png_set_sBIT(param_1,param_2,param_1 + 0x310);
      goto LAB_00dbcd30;
    }
    png_crc_finish(param_1,param_3);
    pcVar4 = "duplicate";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar4 = "out of place";
  }
LAB_00dbcd28:
  png_chunk_benign_error(param_1,pcVar4);
LAB_00dbcd30:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


