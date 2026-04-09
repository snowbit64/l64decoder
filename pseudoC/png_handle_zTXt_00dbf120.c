// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_zTXt
// Entry Point: 00dbf120
// Size: 624 bytes
// Signature: undefined png_handle_zTXt(void)


/* WARNING: Removing unreachable block (ram,0x00dbf378) */

void png_handle_zTXt(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong __n;
  void *__s;
  ulong uVar7;
  ulong uVar8;
  undefined4 local_98 [2];
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  __n = (ulong)param_3;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x464) != 0) {
    iVar3 = *(int *)(param_1 + 0x464) + -1;
    if (iVar3 == 0) {
      png_crc_finish(param_1,__n);
      goto LAB_00dbf284;
    }
    *(int *)(param_1 + 0x464) = iVar3;
    if (iVar3 != 1) goto LAB_00dbf198;
    png_crc_finish(param_1,__n);
    pcVar5 = "no space in chunk cache";
    goto LAB_00dbf27c;
  }
LAB_00dbf198:
  uVar1 = *(uint *)(param_1 + 0x164);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar1 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x164) = uVar1 | 8;
  }
  __s = *(void **)(param_1 + 0x498);
  if (__s == (void *)0x0) {
LAB_00dbf1d8:
    __s = (void *)png_malloc_base(param_1,__n);
    if (__s == (void *)0x0) {
      png_crc_finish(param_1,__n);
      pcVar5 = "out of memory";
      goto LAB_00dbf27c;
    }
    memset(__s,0,__n);
    *(void **)(param_1 + 0x498) = __s;
    *(ulong *)(param_1 + 0x4a0) = __n;
  }
  else if (*(ulong *)(param_1 + 0x4a0) < __n) {
    *(long *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    png_free(param_1,__s);
    goto LAB_00dbf1d8;
  }
  png_read_data(param_1,__s,__n);
  png_calculate_crc(param_1,__s,__n);
  iVar3 = png_crc_finish(param_1,0);
  if (iVar3 != 0) goto LAB_00dbf284;
  if (param_3 == 0) {
LAB_00dbf25c:
    pcVar5 = "bad keyword";
  }
  else {
    uVar7 = 0;
    do {
      uVar8 = uVar7;
      if (*(char *)((long)__s + uVar7) == '\0') break;
      uVar7 = uVar7 + 1;
      uVar8 = __n;
    } while (__n != uVar7);
    iVar3 = (int)uVar8;
    if (iVar3 - 0x50U < 0xffffffb1) goto LAB_00dbf25c;
    if (param_3 < iVar3 + 3U) {
      pcVar5 = "truncated";
    }
    else if (*(char *)((long)__s + (uVar8 & 0xffffffff) + 1) == '\0') {
      local_60 = -1;
      iVar4 = FUN_00dbf390(param_1,param_3,iVar3 + 2U,&local_60);
      if (iVar4 == 1) {
        lVar6 = *(long *)(param_1 + 0x498);
        if (lVar6 == 0) {
          pcVar5 = "Read failure in png_handle_zTXt";
          goto LAB_00dbf27c;
        }
        lStack_88 = lVar6 + (uVar8 & 0xffffffff) + 2;
        *(undefined *)(lVar6 + local_60 + (ulong)(iVar3 + 2U)) = 0;
        local_98[0] = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = local_60;
        uStack_78 = 0;
        local_90 = lVar6;
        iVar3 = png_set_text_2(param_1,param_2,local_98,1);
        pcVar5 = (char *)0x0;
        if (iVar3 != 0) {
          pcVar5 = "insufficient memory";
        }
      }
      else {
        pcVar5 = *(char **)(param_1 + 0x1a8);
      }
      if (pcVar5 == (char *)0x0) goto LAB_00dbf284;
    }
    else {
      pcVar5 = "unknown compression type";
    }
  }
LAB_00dbf27c:
  png_chunk_benign_error(param_1,pcVar5);
LAB_00dbf284:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


