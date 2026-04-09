// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_unknown_chunks
// Entry Point: 00dc34c8
// Size: 432 bytes
// Signature: undefined png_set_unknown_chunks(void)


void png_set_unknown_chunks(long param_1,long param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  void *__dest;
  uint uVar6;
  undefined4 *puVar7;
  
  if ((((param_3 == (undefined4 *)0x0) || (param_1 == 0)) || (param_2 == 0)) || (param_4 < 1)) {
    return;
  }
  lVar5 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0x130),
                            *(undefined4 *)(param_2 + 0x138),param_4,0x20);
  if (lVar5 == 0) {
    png_chunk_report(param_1,"too many unknown chunks",1);
    return;
  }
  png_free(param_1,*(undefined8 *)(param_2 + 0x130));
  *(long *)(param_2 + 0x130) = lVar5;
  puVar7 = (undefined4 *)(lVar5 + (long)*(int *)(param_2 + 0x138) * 0x20);
  *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x200;
LAB_00dc3584:
  do {
    uVar3 = *param_3;
    *(undefined *)(puVar7 + 1) = 0;
    *puVar7 = uVar3;
    uVar2 = *(byte *)(param_3 + 6) & 0xb;
    if ((*(byte *)(param_3 + 6) & 0xb) == 0) {
      if (*(char *)(param_1 + 0x165) < '\0') {
LAB_00dc3668:
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"invalid location in png_set_unknown_chunks");
      }
      png_app_warning(param_1,"png_set_unknown_chunks now expects a valid location");
      uVar2 = *(uint *)(param_1 + 0x164) & 0xb;
      if (uVar2 == 0) goto LAB_00dc3668;
    }
    do {
      uVar6 = uVar2;
      uVar2 = uVar6 & -uVar6 ^ uVar6;
    } while (uVar6 != (uVar6 & -uVar6));
    lVar5 = *(long *)(param_3 + 4);
    *(char *)(puVar7 + 6) = (char)uVar6;
    if (lVar5 == 0) {
      *(undefined8 *)(puVar7 + 2) = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
LAB_00dc3568:
      puVar7 = puVar7 + 8;
      *(int *)(param_2 + 0x138) = *(int *)(param_2 + 0x138) + 1;
      iVar4 = param_4 + -1;
      param_3 = param_3 + 8;
      bVar1 = param_4 < 1;
      param_4 = iVar4;
      if (iVar4 == 0 || bVar1) {
        return;
      }
      goto LAB_00dc3584;
    }
    __dest = (void *)png_malloc_base(param_1);
    *(void **)(puVar7 + 2) = __dest;
    if (__dest != (void *)0x0) {
      __n = *(size_t *)(param_3 + 4);
      memcpy(__dest,*(void **)(param_3 + 2),__n);
      *(size_t *)(puVar7 + 4) = __n;
      goto LAB_00dc3568;
    }
    png_chunk_report(param_1,"unknown chunk: out of memory",1);
    iVar4 = param_4 + -1;
    param_3 = param_3 + 8;
    bVar1 = param_4 < 1;
    param_4 = iVar4;
    if (iVar4 == 0 || bVar1) {
      return;
    }
  } while( true );
}


