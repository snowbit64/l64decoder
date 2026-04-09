// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_tEXt
// Entry Point: 00dbef44
// Size: 476 bytes
// Signature: undefined png_handle_tEXt(void)


void png_handle_tEXt(long param_1,undefined8 param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  void *__s;
  ulong uVar8;
  undefined4 local_80 [2];
  void *local_78;
  char *pcStack_70;
  size_t local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x464) == 0) {
LAB_00dbefb8:
    uVar2 = *(uint *)(param_1 + 0x164);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"missing IHDR");
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(uint *)(param_1 + 0x164) = uVar2 | 8;
    }
    __s = *(void **)(param_1 + 0x498);
    uVar8 = (ulong)(param_3 + 1);
    if (__s == (void *)0x0) {
LAB_00dbeff8:
      __s = (void *)png_malloc_base(param_1,uVar8);
      if (__s == (void *)0x0) {
        png_chunk_warning(param_1,"insufficient memory to read chunk");
        pcVar6 = "out of memory";
        goto LAB_00dbf0dc;
      }
      memset(__s,0,uVar8);
      *(void **)(param_1 + 0x498) = __s;
      *(ulong *)(param_1 + 0x4a0) = uVar8;
    }
    else if (*(ulong *)(param_1 + 0x4a0) < uVar8) {
      *(undefined8 *)(param_1 + 0x498) = 0;
      *(undefined8 *)(param_1 + 0x4a0) = 0;
      png_free(param_1,__s);
      goto LAB_00dbeff8;
    }
    uVar8 = (ulong)param_3;
    png_read_data(param_1,__s,uVar8);
    png_calculate_crc(param_1,__s,uVar8);
    iVar5 = png_crc_finish(param_1,0);
    if (iVar5 == 0) {
      *(undefined *)((long)__s + uVar8) = 0;
      lVar4 = 0;
      do {
        lVar7 = lVar4;
        lVar4 = lVar7 + 1;
      } while (*(char *)((long)__s + lVar7) != '\0');
      local_58 = 0;
      uStack_50 = 0;
      pvVar1 = __s;
      if (uVar8 + 1 != lVar7 + 1) {
        pvVar1 = (void *)((long)__s + 1);
      }
      local_60 = 0;
      local_80[0] = 0xffffffff;
      pcStack_70 = (char *)((long)pvVar1 + lVar7);
      local_78 = __s;
      local_68 = strlen(pcStack_70);
      iVar5 = png_set_text_2(param_1,param_2,local_80,1);
      if (iVar5 != 0) {
        png_warning(param_1,"Insufficient memory to process text chunk");
      }
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x464) + -1;
    if (iVar5 == 0) {
      png_crc_finish(param_1,param_3);
      goto LAB_00dbf0e4;
    }
    *(int *)(param_1 + 0x464) = iVar5;
    if (iVar5 != 1) goto LAB_00dbefb8;
    png_crc_finish(param_1,param_3);
    pcVar6 = "no space in chunk cache";
LAB_00dbf0dc:
    png_chunk_benign_error(param_1,pcVar6);
  }
LAB_00dbf0e4:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


