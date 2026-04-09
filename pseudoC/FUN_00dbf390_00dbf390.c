// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dbf390
// Entry Point: 00dbf390
// Size: 992 bytes
// Signature: undefined FUN_00dbf390(void)


int FUN_00dbf390(long param_1,int param_2,uint param_3,ulong *param_4)

{
  long lVar1;
  size_t __n;
  long lVar2;
  int iVar3;
  int iVar4;
  void *__s;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong __n_00;
  void *__src;
  int iVar11;
  undefined auStack_470 [1024];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __n_00 = (ulong)param_3;
  uVar6 = *(ulong *)(param_1 + 0x468);
  if (uVar6 + 1 < 2) {
    uVar10 = (ulong)(param_3 + 1);
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar10 = (ulong)(param_3 + 1);
    if (uVar6 < uVar10) {
      png_zstream_error(param_1,0xfffffffc);
      iVar4 = -4;
      goto LAB_00dbf720;
    }
  }
  if (uVar6 - uVar10 < *param_4) {
    *param_4 = uVar6 - uVar10;
  }
  iVar3 = FUN_00dbd6ac(param_1,*(undefined4 *)(param_1 + 0x250));
  if (iVar3 != 0) {
    iVar4 = -7;
    if (iVar3 != 1) {
      iVar4 = iVar3;
    }
    goto LAB_00dbf720;
  }
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x250)) {
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(char **)(param_1 + 0x1a8) = "zstream unclaimed";
    iVar4 = -2;
    goto LAB_00dbf720;
  }
  param_2 = param_2 - param_3;
  uVar5 = 0;
  iVar3 = 0;
  uVar6 = *param_4;
  lVar1 = param_1 + 0x178;
  *(ulong *)(param_1 + 0x178) = *(long *)(param_1 + 0x498) + __n_00;
  iVar11 = param_2;
  do {
    uVar6 = uVar6 + uVar5;
    iVar3 = iVar11 + iVar3;
    *(undefined **)(param_1 + 400) = auStack_470;
    uVar10 = uVar6;
    if (0x3ff < uVar6) {
      uVar10 = 0x400;
    }
    uVar6 = uVar6 - uVar10;
    *(int *)(param_1 + 0x180) = iVar3;
    *(int *)(param_1 + 0x198) = (int)uVar10;
    if ((*(char *)(param_1 + 0x2a8) != '\0') && (iVar3 != 0)) {
      if (**(char **)(param_1 + 0x178) < '\0') {
        iVar4 = -3;
        *(char **)(param_1 + 0x1a8) = "invalid window size (libpng)";
        lVar7 = uVar6 + (uVar10 & 0xffffffff);
        *(undefined8 *)(param_1 + 400) = 0;
        if (lVar7 == 0) goto LAB_00dbf518;
        goto LAB_00dbf50c;
      }
      *(undefined *)(param_1 + 0x2a8) = 0;
    }
    iVar4 = inflate(lVar1,(ulong)(uVar6 == 0) << 2);
    iVar11 = 0;
    iVar3 = *(int *)(param_1 + 0x180);
    uVar5 = *(uint *)(param_1 + 0x198);
  } while (iVar4 == 0);
  lVar7 = uVar6 + uVar5;
  *(undefined8 *)(param_1 + 400) = 0;
  if (lVar7 != 0) {
LAB_00dbf50c:
    *param_4 = *param_4 - lVar7;
  }
LAB_00dbf518:
  png_zstream_error(param_1,iVar4);
  if (iVar4 == 1) {
    iVar4 = inflateReset(lVar1);
    if (iVar4 == 0) {
      uVar6 = *param_4;
      __n = __n_00 + uVar6 + 1;
      __s = (void *)png_malloc_base(param_1,__n);
      if (__s == (void *)0x0) {
        iVar4 = -4;
        png_zstream_error(param_1,0xfffffffc);
      }
      else {
        memset(__s,0,__n);
        if (*(int *)(param_1 + 0x170) == *(int *)(param_1 + 0x250)) {
          uVar8 = 0;
          iVar11 = 0;
          uVar10 = *param_4;
          *(ulong *)(param_1 + 400) = (long)__s + __n_00;
          *(ulong *)(param_1 + 0x178) = *(long *)(param_1 + 0x498) + __n_00;
          iVar9 = param_2 - iVar3;
          do {
            uVar10 = uVar10 + uVar8;
            iVar11 = iVar9 + iVar11;
            uVar8 = uVar10;
            if (0xfffffffe < uVar10) {
              uVar8 = 0xffffffff;
            }
            uVar10 = uVar10 - uVar8;
            *(int *)(param_1 + 0x180) = iVar11;
            *(int *)(param_1 + 0x198) = (int)uVar8;
            if ((*(char *)(param_1 + 0x2a8) != '\0') && (iVar11 != 0)) {
              if (**(char **)(param_1 + 0x178) < '\0') {
                iVar4 = -3;
                *(char **)(param_1 + 0x1a8) = "invalid window size (libpng)";
                break;
              }
              *(undefined *)(param_1 + 0x2a8) = 0;
            }
            iVar4 = inflate(lVar1,(ulong)(uVar10 == 0) << 2);
            iVar9 = 0;
            iVar11 = *(int *)(param_1 + 0x180);
            uVar8 = (ulong)*(uint *)(param_1 + 0x198);
          } while (iVar4 == 0);
          lVar1 = uVar10 + (uVar8 & 0xffffffff);
          if (lVar1 != 0) {
            *param_4 = *param_4 - lVar1;
          }
          png_zstream_error(param_1,iVar4);
          if (iVar4 == 1) {
            if (uVar6 == *param_4) {
              __src = *(void **)(param_1 + 0x498);
              *(undefined *)((long)__s + uVar6 + __n_00) = 0;
              if (param_3 != 0) {
                memcpy(__s,__src,__n_00);
              }
              *(void **)(param_1 + 0x498) = __s;
              *(size_t *)(param_1 + 0x4a0) = __n;
              png_free(param_1,__src);
              if (param_2 == (param_2 - iVar3) - iVar11) {
                iVar4 = 1;
              }
              else {
                png_chunk_benign_error(param_1,"extra compressed data");
                iVar4 = 1;
              }
              goto LAB_00dbf71c;
            }
            iVar4 = -7;
          }
        }
        else {
          iVar4 = -2;
          *(char **)(param_1 + 0x1a8) = "zstream unclaimed";
        }
        png_free(param_1,__s);
      }
    }
    else {
      png_zstream_error(param_1,1);
      iVar4 = -7;
    }
  }
LAB_00dbf71c:
  *(undefined4 *)(param_1 + 0x170) = 0;
LAB_00dbf720:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


