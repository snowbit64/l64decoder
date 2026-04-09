// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_decode_memory
// Entry Point: 00e4bc08
// Size: 368 bytes
// Signature: undefined stb_vorbis_decode_memory(void)


int stb_vorbis_decode_memory
              (undefined8 param_1,undefined8 param_2,int *param_3,undefined4 *param_4,void **param_5
              )

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 *__ptr;
  void *pvVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  void *__ptr_00;
  int iVar9;
  ulong uVar10;
  undefined auStack_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __ptr = (undefined4 *)stb_vorbis_open_memory(param_1,param_2,auStack_6c,0);
  if (__ptr == (undefined4 *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = __ptr[1];
    uVar8 = (long)iVar7 << 0xc;
    *param_3 = iVar7;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *__ptr;
    }
    pvVar5 = malloc((long)iVar7 << 0xd);
    if (pvVar5 == (void *)0x0) {
LAB_00e4bd24:
      FUN_00e44d50(__ptr);
      lVar6 = *(long *)(__ptr + 0x20);
      iVar7 = -2;
    }
    else {
      iVar4 = stb_vorbis_get_frame_short_interleaved(__ptr,__ptr[1],pvVar5,uVar8 & 0xffffffff);
      if (iVar4 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
        iVar9 = 0;
        uVar10 = uVar8 & 0xffffffff;
        __ptr_00 = pvVar5;
        do {
          iVar1 = __ptr[1];
          iVar9 = iVar9 + iVar1 * iVar4;
          pvVar5 = __ptr_00;
          if ((int)uVar10 < iVar9 + (int)uVar8) {
            uVar2 = (int)uVar10 << 1;
            uVar10 = (ulong)uVar2;
            pvVar5 = realloc(__ptr_00,-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1);
            if (pvVar5 == (void *)0x0) {
              free(__ptr_00);
              goto LAB_00e4bd24;
            }
            iVar1 = __ptr[1];
          }
          iVar7 = iVar4 + iVar7;
          iVar4 = stb_vorbis_get_frame_short_interleaved
                            (__ptr,iVar1,(void *)((long)pvVar5 + (long)iVar9 * 2),
                             (int)uVar10 - iVar9);
          __ptr_00 = pvVar5;
        } while (iVar4 != 0);
      }
      *param_5 = pvVar5;
      FUN_00e44d50(__ptr);
      lVar6 = *(long *)(__ptr + 0x20);
    }
    if (lVar6 == 0) {
      free(__ptr);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


