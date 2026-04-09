// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e44d50
// Entry Point: 00e44d50
// Size: 948 bytes
// Signature: undefined FUN_00e44d50(void)


void * FUN_00e44d50(void *param_1)

{
  long *plVar1;
  uint uVar2;
  void *__ptr;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void **ppvVar8;
  byte *pbVar9;
  long lVar10;
  
  __ptr = param_1;
  if (*(long *)((long)param_1 + 0x80) == 0) {
    __ptr = *(void **)((long)param_1 + 0x18);
    free(__ptr);
  }
  iVar3 = *(int *)((long)param_1 + 0x20);
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      if (*(long *)((long)param_1 + 0x80) == 0) {
        __ptr = *(void **)(*(long *)((long)param_1 + 0x28) + lVar6 * 8);
        free(__ptr);
        iVar3 = *(int *)((long)param_1 + 0x20);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  if (*(long *)((long)param_1 + 0x80) == 0) {
    __ptr = *(void **)((long)param_1 + 0x28);
    free(__ptr);
  }
  lVar6 = *(long *)((long)param_1 + 0x1d8);
  if ((lVar6 != 0) && (0 < *(int *)((long)param_1 + 0x150))) {
    lVar7 = 0;
    do {
      lVar4 = lVar6 + lVar7 * 0x20;
      ppvVar8 = (void **)(lVar4 + 0x10);
      if (*ppvVar8 == (void *)0x0) {
LAB_00e44e60:
        if (*(long *)((long)param_1 + 0x80) == 0) {
          __ptr = *(void **)(lVar6 + lVar7 * 0x20 + 0x18);
          free(__ptr);
        }
      }
      else {
        pbVar9 = (byte *)(lVar4 + 0xd);
        uVar5 = (ulong)*pbVar9;
        lVar4 = *(long *)((long)param_1 + 0xb8);
        if (0 < *(int *)(lVar4 + uVar5 * 0x848 + 4)) {
          lVar10 = 0;
          do {
            if (*(long *)((long)param_1 + 0x80) == 0) {
              __ptr = *(void **)((long)*ppvVar8 + lVar10 * 8);
              free(__ptr);
              lVar4 = *(long *)((long)param_1 + 0xb8);
              uVar5 = (ulong)*pbVar9;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(lVar4 + uVar5 * 0x848 + 4));
        }
        if (*(long *)((long)param_1 + 0x80) == 0) {
          __ptr = *ppvVar8;
          free(__ptr);
          goto LAB_00e44e60;
        }
      }
      lVar7 = lVar7 + 1;
      if (*(int *)((long)param_1 + 0x150) <= lVar7) break;
      lVar6 = *(long *)((long)param_1 + 0x1d8);
    } while( true );
  }
  lVar6 = *(long *)((long)param_1 + 0xb8);
  if (lVar6 != 0) {
    if (0 < *(int *)((long)param_1 + 0xb0)) {
      lVar7 = 0x838;
      lVar4 = 1;
      lVar10 = *(long *)((long)param_1 + 0x80);
      while( true ) {
        if (lVar10 == 0) {
          __ptr = *(void **)(lVar6 + lVar7 + -0x830);
          free(__ptr);
          if (*(long *)((long)param_1 + 0x80) == 0) {
            __ptr = *(void **)(lVar6 + lVar7 + -0x818);
            free(__ptr);
            if (*(long *)((long)param_1 + 0x80) == 0) {
              plVar1 = (long *)(lVar6 + lVar7);
              __ptr = (void *)plVar1[-0x102];
              free(__ptr);
              if (*(long *)((long)param_1 + 0x80) == 0) {
                __ptr = (void *)plVar1[-1];
                free(__ptr);
                if (*(long *)((long)param_1 + 0x80) == 0) {
                  __ptr = (void *)0x0;
                  if (*plVar1 != 0) {
                    __ptr = (void *)(*plVar1 + -4);
                  }
                  free(__ptr);
                }
              }
            }
          }
        }
        if (*(int *)((long)param_1 + 0xb0) <= lVar4) break;
        lVar6 = *(long *)((long)param_1 + 0xb8);
        lVar7 = lVar7 + 0x848;
        lVar4 = lVar4 + 1;
        lVar10 = *(long *)((long)param_1 + 0x80);
      }
    }
    if (*(long *)((long)param_1 + 0x80) != 0) goto LAB_00e44f6c;
    __ptr = *(void **)((long)param_1 + 0xb8);
    free(__ptr);
  }
  if (*(long *)((long)param_1 + 0x80) == 0) {
    __ptr = *(void **)((long)param_1 + 0x148);
    free(__ptr);
    if (*(long *)((long)param_1 + 0x80) == 0) {
      __ptr = *(void **)((long)param_1 + 0x1d8);
      free(__ptr);
    }
  }
LAB_00e44f6c:
  if (*(long *)((long)param_1 + 0x1e8) != 0) {
    iVar3 = *(int *)((long)param_1 + 0x1e0);
    if (0 < iVar3) {
      lVar6 = 0;
      lVar7 = 8;
      do {
        if (*(long *)((long)param_1 + 0x80) == 0) {
          __ptr = *(void **)(*(long *)((long)param_1 + 0x1e8) + lVar7);
          free(__ptr);
          iVar3 = *(int *)((long)param_1 + 0x1e0);
        }
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x30;
      } while (lVar6 < iVar3);
    }
    if (*(long *)((long)param_1 + 0x80) == 0) {
      __ptr = *(void **)((long)param_1 + 0x1e8);
      free(__ptr);
    }
  }
  if (0 < *(int *)((long)param_1 + 4)) {
    uVar5 = 0;
    do {
      if (*(long *)((long)param_1 + 0x80) == 0) {
        __ptr = *(void **)((long)param_1 + uVar5 * 8 + 0x378);
        free(__ptr);
        if (*(long *)((long)param_1 + 0x80) == 0) {
          __ptr = *(void **)((long)param_1 + uVar5 * 8 + 0x478);
          free(__ptr);
          if (*(long *)((long)param_1 + 0x80) == 0) {
            __ptr = *(void **)((long)param_1 + uVar5 * 8 + 0x500);
            free(__ptr);
          }
        }
      }
    } while ((uVar5 < 0xf) && (uVar5 = uVar5 + 1, (long)uVar5 < (long)*(int *)((long)param_1 + 4)));
  }
  if (*(long *)((long)param_1 + 0x80) == 0) {
    __ptr = *(void **)((long)param_1 + 0x588);
    free(__ptr);
    if (*(long *)((long)param_1 + 0x80) == 0) {
      __ptr = *(void **)((long)param_1 + 0x598);
      free(__ptr);
      if (*(long *)((long)param_1 + 0x80) == 0) {
        __ptr = *(void **)((long)param_1 + 0x5a8);
        free(__ptr);
        if (*(long *)((long)param_1 + 0x80) == 0) {
          __ptr = *(void **)((long)param_1 + 0x5b8);
          free(__ptr);
          if (*(long *)((long)param_1 + 0x80) == 0) {
            __ptr = *(void **)((long)param_1 + 0x5c8);
            free(__ptr);
            if (*(long *)((long)param_1 + 0x80) == 0) {
              __ptr = *(void **)((long)param_1 + 0x590);
              free(__ptr);
              if (*(long *)((long)param_1 + 0x80) == 0) {
                __ptr = *(void **)((long)param_1 + 0x5a0);
                free(__ptr);
                if (*(long *)((long)param_1 + 0x80) == 0) {
                  __ptr = *(void **)((long)param_1 + 0x5b0);
                  free(__ptr);
                  if (*(long *)((long)param_1 + 0x80) == 0) {
                    __ptr = *(void **)((long)param_1 + 0x5c0);
                    free(__ptr);
                    if (*(long *)((long)param_1 + 0x80) == 0) {
                      __ptr = *(void **)((long)param_1 + 0x5d0);
                      free(__ptr);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    uVar2 = fclose(*(FILE **)((long)param_1 + 0x30));
    return (void *)(ulong)uVar2;
  }
  return __ptr;
}


