// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_eXIf
// Entry Point: 00dbe230
// Size: 440 bytes
// Signature: undefined png_handle_eXIf(void)


void png_handle_eXIf(long param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  uVar5 = (ulong)param_3;
  if (param_3 < 2) {
    png_crc_finish(param_1,uVar5);
    pcVar4 = "too short";
  }
  else if ((param_2 == 0) || ((*(byte *)(param_2 + 10) & 1) != 0)) {
    png_crc_finish(param_1,uVar5);
    pcVar4 = "duplicate";
  }
  else {
    *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x8000;
    lVar3 = png_malloc_warn(param_1,uVar5);
    *(long *)(param_2 + 0xf8) = lVar3;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        png_read_data(param_1,local_4c,1);
        png_calculate_crc(param_1,local_4c,1);
        *(byte *)(*(long *)(param_2 + 0xf8) + uVar6) = local_4c[0];
        if (uVar6 == 1) {
          if (((local_4c[0] | 4) != 0x4d) && (**(byte **)(param_2 + 0xf8) != local_4c[0])) {
            png_crc_finish(param_1,uVar5);
            png_chunk_benign_error(param_1,"incorrect byte-order specifier");
            goto LAB_00dbe3a8;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 == 0) {
        png_set_eXIf_1(param_1,param_2,uVar5,*(undefined8 *)(param_2 + 0xf8));
LAB_00dbe3a8:
        png_free(param_1,*(undefined8 *)(param_2 + 0xf8));
        *(undefined8 *)(param_2 + 0xf8) = 0;
      }
      goto LAB_00dbe35c;
    }
    png_crc_finish(param_1,uVar5);
    pcVar4 = "out of memory";
  }
  png_chunk_benign_error(param_1,pcVar4);
LAB_00dbe35c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


