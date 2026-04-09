// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_handle_iTXt
// Entry Point: 00dbf770
// Size: 800 bytes
// Signature: undefined png_handle_iTXt(void)


void png_handle_iTXt(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  void *__s;
  ulong uVar11;
  undefined4 local_a8 [2];
  void *local_a0;
  long lStack_98;
  undefined8 local_90;
  ulong uStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  uVar10 = param_3 & 0xffffffff;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(int *)(param_1 + 0x464) != 0) {
    iVar6 = *(int *)(param_1 + 0x464) + -1;
    if (iVar6 == 0) {
      png_crc_finish(param_1,uVar10);
      goto LAB_00dbf8ec;
    }
    *(int *)(param_1 + 0x464) = iVar6;
    if (iVar6 != 1) goto LAB_00dbf7ec;
    png_crc_finish(param_1,uVar10);
    pcVar7 = "no space in chunk cache";
    goto LAB_00dbf8e4;
  }
LAB_00dbf7ec:
  uVar9 = *(uint *)(param_1 + 0x164);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((uVar9 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x164) = uVar9 | 8;
  }
  __s = *(void **)(param_1 + 0x498);
  uVar9 = (uint)param_3;
  uVar11 = (ulong)(uVar9 + 1);
  if (__s == (void *)0x0) {
LAB_00dbf82c:
    __s = (void *)png_malloc_base(param_1,uVar11);
    if (__s == (void *)0x0) {
      png_chunk_warning(param_1,"insufficient memory to read chunk");
      png_crc_finish(param_1,param_3 & 0xffffffff);
      pcVar7 = "out of memory";
      goto LAB_00dbf8e4;
    }
    memset(__s,0,uVar11);
    *(void **)(param_1 + 0x498) = __s;
    *(ulong *)(param_1 + 0x4a0) = uVar11;
  }
  else if (*(ulong *)(param_1 + 0x4a0) < uVar11) {
    *(void **)(param_1 + 0x498) = (void *)0x0;
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    png_free(param_1,__s);
    goto LAB_00dbf82c;
  }
  png_read_data(param_1,__s,uVar10);
  png_calculate_crc(param_1,__s,uVar10);
  iVar6 = png_crc_finish(param_1,0);
  if (iVar6 != 0) goto LAB_00dbf8ec;
  if (uVar9 == 0) {
LAB_00dbf8b4:
    pcVar7 = "bad keyword";
  }
  else {
    uVar11 = 0;
    do {
      uVar8 = uVar11;
      if (*(char *)((long)__s + uVar11) == '\0') break;
      uVar11 = uVar11 + 1;
      uVar8 = uVar10;
    } while (uVar10 != uVar11);
    iVar6 = (int)uVar8;
    if (iVar6 - 0x50U < 0xffffffb1) goto LAB_00dbf8b4;
    if (uVar9 < iVar6 + 5U) {
LAB_00dbf928:
      pcVar7 = "truncated";
    }
    else {
      cVar4 = *(char *)((long)__s + (uVar8 & 0xffffffff) + 1);
      if ((cVar4 == '\0') ||
         ((cVar4 == '\x01' && (*(char *)((long)__s + (uVar8 & 0xffffffff) + 2) == '\0')))) {
        uVar1 = iVar6 + 3;
        uVar10 = (ulong)uVar1;
        if (uVar1 < uVar9) {
          do {
            if (*(char *)((long)__s + uVar10) == '\0') goto LAB_00dbf988;
            uVar10 = uVar10 + 1;
          } while (uVar9 != (uint)uVar10);
          uVar10 = param_3 & 0xffffffff;
        }
LAB_00dbf988:
        uVar2 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar2;
        if (uVar2 < uVar9) {
          do {
            if (*(char *)((long)__s + uVar10) == '\0') goto LAB_00dbf9b4;
            uVar10 = uVar10 + 1;
          } while (uVar9 != (uint)uVar10);
          uVar10 = param_3 & 0xffffffff;
        }
LAB_00dbf9b4:
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
        if ((cVar4 == '\0') && (uVar3 <= uVar9)) {
          local_70 = (ulong)(uVar9 - uVar3);
        }
        else {
          if (cVar4 == '\0' || uVar9 <= uVar3) goto LAB_00dbf928;
          local_70 = 0xffffffffffffffff;
          iVar6 = FUN_00dbf390(param_1,param_3 & 0xffffffff,uVar10,&local_70);
          if (iVar6 == 1) {
            __s = *(void **)(param_1 + 0x498);
          }
          else {
            pcVar7 = *(char **)(param_1 + 0x1a8);
            if (pcVar7 != (char *)0x0) goto LAB_00dbf8e4;
          }
        }
        local_80 = (long)__s + (ulong)uVar1;
        local_a8[0] = 1;
        if (cVar4 != '\0') {
          local_a8[0] = 2;
        }
        lStack_78 = (long)__s + (ulong)uVar2;
        *(undefined *)((long)__s + local_70 + uVar10) = 0;
        lStack_98 = (long)__s + uVar10;
        local_90 = 0;
        uStack_88 = local_70;
        local_a0 = __s;
        iVar6 = png_set_text_2(param_1,param_2,local_a8,1);
        if (iVar6 == 0) goto LAB_00dbf8ec;
        pcVar7 = "insufficient memory";
      }
      else {
        pcVar7 = "bad compression info";
      }
    }
  }
LAB_00dbf8e4:
  png_chunk_benign_error(param_1,pcVar7);
LAB_00dbf8ec:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


