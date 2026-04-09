// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_PLTE
// Entry Point: 00dbc908
// Size: 596 bytes
// Signature: undefined png_handle_PLTE(void)


void png_handle_PLTE(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined local_35c;
  undefined2 local_35b;
  undefined local_358 [768];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar1 >> 1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"duplicate");
  }
  uVar5 = (ulong)param_3;
  if ((uVar1 >> 2 & 1) == 0) {
    *(uint *)(param_1 + 0x164) = uVar1 | 2;
    if ((*(byte *)(param_1 + 0x29f) >> 1 & 1) == 0) {
      png_crc_finish(param_1,uVar5);
      pcVar4 = "ignored in grayscale PNG";
    }
    else if ((param_3 < 0x301) &&
            (param_3 == param_3 / 3 + ((uint)(uVar5 * 0xaaaaaaab >> 0x20) & 0xfffffffe))) {
      uVar1 = (param_3 & 0xffff) / 3;
      if (*(byte *)(param_1 + 0x29f) == 3) {
        uVar6 = 1 << (ulong)(*(byte *)(param_1 + 0x2a0) & 0x1f);
        if ((int)uVar1 <= (int)uVar6) {
          uVar6 = uVar1;
        }
        if (0 < (int)uVar6) {
LAB_00dbca54:
          puVar7 = local_358;
          uVar1 = uVar6;
          do {
            png_read_data(param_1,&local_35c,3);
            png_calculate_crc(param_1,&local_35c,3);
            uVar1 = uVar1 - 1;
            *puVar7 = local_35c;
            *(undefined2 *)(puVar7 + 1) = local_35b;
            puVar7 = puVar7 + 3;
          } while (uVar1 != 0);
        }
      }
      else {
        uVar6 = 0x100;
        if (uVar1 < 0x101) {
          uVar6 = uVar1;
        }
        if (uVar6 != 0) goto LAB_00dbca54;
      }
      png_crc_finish(param_1,uVar6 * -3 + param_3);
      png_set_PLTE(param_1,param_2,local_358,uVar6);
      if (*(short *)(param_1 + 0x298) == 0) {
        if (param_2 == 0) goto LAB_00dbc98c;
        if ((*(uint *)(param_2 + 8) >> 4 & 1) != 0) {
          *(undefined2 *)(param_1 + 0x298) = 0;
          goto LAB_00dbcaf8;
        }
        if ((*(uint *)(param_2 + 8) >> 6 & 1) == 0) goto LAB_00dbcae8;
LAB_00dbcb14:
        png_chunk_benign_error(param_1,"hIST must be after");
        bVar2 = *(byte *)(param_2 + 8);
      }
      else {
        *(undefined2 *)(param_1 + 0x298) = 0;
        if (param_2 == 0) {
          pcVar4 = "tRNS must be after";
          goto LAB_00dbc988;
        }
LAB_00dbcaf8:
        *(undefined2 *)(param_2 + 0x22) = 0;
        png_chunk_benign_error(param_1,"tRNS must be after");
        if ((*(uint *)(param_2 + 8) >> 6 & 1) != 0) goto LAB_00dbcb14;
LAB_00dbcae8:
        bVar2 = *(byte *)(param_2 + 8);
      }
      if ((bVar2 >> 5 & 1) == 0) goto LAB_00dbc98c;
      pcVar4 = "bKGD must be after";
    }
    else {
      png_crc_finish(param_1,uVar5);
      pcVar4 = "invalid";
      if (*(char *)(param_1 + 0x29f) == '\x03') {
                    /* WARNING: Subroutine does not return */
        png_chunk_error(param_1,"invalid");
      }
    }
  }
  else {
    png_crc_finish(param_1,uVar5);
    pcVar4 = "out of place";
  }
LAB_00dbc988:
  png_chunk_benign_error(param_1,pcVar4);
LAB_00dbc98c:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


