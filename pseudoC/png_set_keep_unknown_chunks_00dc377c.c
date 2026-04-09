// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_keep_unknown_chunks
// Entry Point: 00dc377c
// Size: 664 bytes
// Signature: undefined png_set_keep_unknown_chunks(void)


void png_set_keep_unknown_chunks(long param_1,uint param_2,undefined *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  int *__dest;
  int *piVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (3 < param_2) {
    png_app_error(param_1,"png_set_keep_unknown_chunks: invalid keep");
    return;
  }
  if ((int)param_4 < 1) {
    *(uint *)(param_1 + 0x3f8) = param_2;
    if (param_4 == 0) {
      return;
    }
    param_4 = 0x12;
    param_3 = &UNK_00549dfc;
  }
  else if (param_3 == (undefined *)0x0) {
    png_app_error(param_1,"png_set_keep_unknown_chunks: no chunk list");
    return;
  }
  __dest = *(int **)(param_1 + 0x400);
  iVar7 = 0;
  if (__dest != (int *)0x0) {
    iVar7 = *(int *)(param_1 + 0x3fc);
  }
  if (0x33333333 < iVar7 + param_4) {
    png_app_error(param_1,"png_set_keep_unknown_chunks: too many chunks");
    return;
  }
  if (param_2 == 0) {
    iVar3 = 0;
    piVar6 = (int *)0x0;
    if ((iVar7 != 0) && (__dest != (int *)0x0)) {
LAB_00dc3908:
      uVar4 = 0;
      do {
        piVar6 = __dest;
        iVar3 = iVar7;
        do {
          if (*piVar6 == *(int *)(param_3 + (uint)((int)uVar4 * 5))) {
            *(undefined *)(piVar6 + 1) = 0;
            break;
          }
          piVar6 = (int *)((long)piVar6 + 5);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar4 = uVar4 + 1;
      } while (uVar4 != param_4);
LAB_00dc3950:
      if (iVar7 != 0) {
        iVar3 = 0;
        piVar6 = __dest;
        piVar5 = __dest;
        do {
          if (*(char *)(piVar5 + 1) != '\0') {
            if (piVar5 != piVar6) {
              iVar1 = *piVar5;
              *(undefined *)(piVar6 + 1) = *(undefined *)(piVar5 + 1);
              *piVar6 = iVar1;
            }
            piVar6 = (int *)((long)piVar6 + 5);
            iVar3 = iVar3 + 1;
          }
          piVar5 = (int *)((long)piVar5 + 5);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        piVar6 = __dest;
        if (iVar3 != 0) goto LAB_00dc39c4;
      }
LAB_00dc39a4:
      if (*(int **)(param_1 + 0x400) == __dest) {
        piVar6 = (int *)0x0;
        *(undefined4 *)(param_1 + 0x3fc) = 0;
        if (__dest == (int *)0x0) {
          return;
        }
        goto LAB_00dc39d4;
      }
      png_free(param_1,__dest);
      goto LAB_00dc39bc;
    }
  }
  else {
    __dest = (int *)png_malloc(param_1,(iVar7 + param_4) * 5);
    if (iVar7 != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x400),(ulong)(uint)(iVar7 * 5));
    }
    if (__dest != (int *)0x0) {
      if (param_2 != 0) {
        uVar4 = 0;
        do {
          uVar2 = (int)uVar4 * 5;
          piVar6 = __dest;
          if (iVar7 != 0) {
            piVar6 = (int *)((long)__dest + (ulong)(iVar7 - 1) * 5 + 5);
            piVar5 = __dest;
            iVar3 = iVar7;
            do {
              if (*piVar5 == *(int *)(param_3 + uVar2)) goto LAB_00dc389c;
              piVar5 = (int *)((long)piVar5 + 5);
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar7 = iVar7 + 1;
          *piVar6 = *(int *)(param_3 + uVar2);
          piVar5 = piVar6;
LAB_00dc389c:
          uVar4 = uVar4 + 1;
          *(char *)(piVar5 + 1) = (char)param_2;
        } while (uVar4 != param_4);
        goto LAB_00dc3950;
      }
      if (iVar7 != 0) goto LAB_00dc3908;
      goto LAB_00dc39a4;
    }
LAB_00dc39bc:
    piVar6 = (int *)0x0;
    iVar3 = 0;
  }
LAB_00dc39c4:
  __dest = *(int **)(param_1 + 0x400);
  *(int *)(param_1 + 0x3fc) = iVar3;
  if (__dest == piVar6) {
    return;
  }
LAB_00dc39d4:
  if (__dest != (int *)0x0) {
    png_free(param_1,__dest);
  }
  *(int **)(param_1 + 0x400) = piVar6;
  return;
}


