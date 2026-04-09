// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_info_clear
// Entry Point: 00e08780
// Size: 512 bytes
// Signature: undefined vorbis_info_clear(void)


void vorbis_info_clear(undefined8 *param_1)

{
  void *__ptr;
  int iVar1;
  void *__ptr_00;
  long lVar2;
  long lVar3;
  
  __ptr_00 = (void *)param_1[6];
  if (__ptr_00 != (void *)0x0) {
    iVar1 = *(int *)((long)__ptr_00 + 0x10);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        __ptr = *(void **)((long)__ptr_00 + lVar2 * 8 + 0x28);
        if (__ptr != (void *)0x0) {
          free(__ptr);
          iVar1 = *(int *)((long)__ptr_00 + 0x10);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    iVar1 = *(int *)((long)__ptr_00 + 0x14);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(long *)((long)__ptr_00 + lVar2 * 8 + 0x328) != 0) {
          (**(code **)((&_mapping_P)[*(int *)((long)__ptr_00 + lVar2 * 4 + 0x228)] + 0x10))();
          iVar1 = *(int *)((long)__ptr_00 + 0x14);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    iVar1 = *(int *)((long)__ptr_00 + 0x18);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(long *)((long)__ptr_00 + lVar2 * 8 + 0x628) != 0) {
          (**(code **)(*(long *)(_floor_P + (long)*(int *)((long)__ptr_00 + lVar2 * 4 + 0x528) * 8)
                      + 0x18))();
          iVar1 = *(int *)((long)__ptr_00 + 0x18);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    iVar1 = *(int *)((long)__ptr_00 + 0x1c);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(long *)((long)__ptr_00 + lVar2 * 8 + 0x928) != 0) {
          (**(code **)(*(long *)(_residue_P + (long)*(int *)((long)__ptr_00 + lVar2 * 4 + 0x828) * 8
                                ) + 0x18))();
          iVar1 = *(int *)((long)__ptr_00 + 0x1c);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    if (0 < *(int *)((long)__ptr_00 + 0x20)) {
      lVar3 = 0;
      lVar2 = 0;
      do {
        if (*(long *)((long)__ptr_00 + lVar2 * 8 + 0xb28) != 0) {
          vorbis_staticbook_destroy();
        }
        if (*(long *)((long)__ptr_00 + 0x1328) != 0) {
          vorbis_book_clear(*(long *)((long)__ptr_00 + 0x1328) + lVar3);
        }
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x60;
      } while (lVar2 < *(int *)((long)__ptr_00 + 0x20));
    }
    if (*(void **)((long)__ptr_00 + 0x1328) != (void *)0x0) {
      free(*(void **)((long)__ptr_00 + 0x1328));
    }
    if (0 < *(int *)((long)__ptr_00 + 0x24)) {
      lVar2 = 0;
      do {
        _vi_psy_free(*(undefined8 *)((long)__ptr_00 + lVar2 * 8 + 0x1330));
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)((long)__ptr_00 + 0x24));
    }
    free(__ptr_00);
  }
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


