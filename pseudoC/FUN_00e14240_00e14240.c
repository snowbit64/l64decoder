// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e14240
// Entry Point: 00e14240
// Size: 972 bytes
// Signature: undefined FUN_00e14240(void)


/* WARNING: Type propagation algorithm not settling */

int * FUN_00e14240(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *__ptr;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int **ppiVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  int *local_278 [65];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar13 = *(long *)(param_1 + 0x30);
  __ptr = (int *)calloc(1,0x460);
  iVar3 = oggpack_read(param_2,5);
  *__ptr = iVar3;
  if (0 < iVar3) {
    lVar12 = 0;
    iVar15 = -1;
    do {
      iVar4 = oggpack_read(param_2,4);
      __ptr[lVar12 + 1] = iVar4;
      if (iVar4 < 0) goto LAB_00e1458c;
      lVar12 = lVar12 + 1;
      if (iVar4 <= iVar15) {
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (lVar12 < iVar3);
    uVar14 = 0;
    piVar11 = __ptr + 0x50;
    do {
      iVar3 = oggpack_read(param_2,3);
      __ptr[uVar14 + 0x20] = iVar3 + 1;
      uVar5 = oggpack_read(param_2,2);
      __ptr[uVar14 + 0x30] = uVar5;
      if ((int)uVar5 < 0) goto LAB_00e1458c;
      if (uVar5 == 0) {
        iVar3 = __ptr[uVar14 + 0x40];
      }
      else {
        iVar3 = oggpack_read(param_2,8);
        __ptr[uVar14 + 0x40] = iVar3;
      }
      if ((iVar3 < 0) || (*(int *)(lVar13 + 0x20) <= iVar3)) goto LAB_00e1458c;
      if (uVar5 != 0x1f) {
        lVar12 = 0;
        do {
          uVar5 = oggpack_read(param_2,8);
          piVar11[lVar12] = uVar5 - 1;
          if ((0x80000000 < uVar5) || (*(int *)(lVar13 + 0x20) <= (int)(uVar5 - 1)))
          goto LAB_00e1458c;
          lVar12 = lVar12 + 1;
        } while (lVar12 < 1 << (ulong)(__ptr[uVar14 + 0x30] & 0x1f));
      }
      uVar14 = uVar14 + 1;
      piVar11 = piVar11 + 8;
    } while (uVar14 != iVar4 + 1);
  }
  iVar3 = oggpack_read(param_2,2);
  __ptr[0xd0] = iVar3 + 1;
  uVar5 = oggpack_read(param_2,4);
  if ((int)uVar5 < 0) {
LAB_00e1458c:
    free(__ptr);
    __ptr = (int *)0x0;
  }
  else {
    iVar3 = *__ptr;
    iVar15 = 1 << (ulong)(uVar5 & 0x1f);
    if (iVar3 < 1) {
      iVar4 = 0;
      uVar5 = 2;
      __ptr[0xd1] = 0;
      __ptr[0xd2] = iVar15;
    }
    else {
      lVar13 = 0;
      iVar6 = 0;
      iVar8 = 0;
      do {
        iVar4 = __ptr[(long)__ptr[lVar13 + 1] + 0x20] + iVar8;
        if (0x3f < iVar4) goto LAB_00e1458c;
        if (iVar6 < iVar4) {
          piVar11 = __ptr + (long)iVar6 + 0xd3;
          iVar6 = (iVar8 + __ptr[(long)__ptr[lVar13 + 1] + 0x20]) - iVar6;
          do {
            iVar3 = oggpack_read(param_2,uVar5);
            *piVar11 = iVar3;
            if ((iVar3 < 0) || (iVar15 <= iVar3)) goto LAB_00e1458c;
            piVar11 = piVar11 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar3 = *__ptr;
          iVar6 = iVar4;
        }
        lVar13 = lVar13 + 1;
        iVar8 = iVar4;
      } while (lVar13 < iVar3);
      uVar5 = iVar4 + 2;
      __ptr[0xd1] = 0;
      __ptr[0xd2] = iVar15;
      if (iVar4 == -2 || iVar4 + 2 < 0 != SCARRY4(iVar4,2)) {
        qsort(local_278,(long)(int)uVar5,8,FUN_00e14f9c);
        if (*(long *)(lVar2 + 0x28) == local_70) {
          return __ptr;
        }
        goto LAB_00e14608;
      }
    }
    uVar1 = uVar5;
    if ((int)uVar5 < 2) {
      uVar1 = 1;
    }
    uVar14 = (ulong)uVar1;
    if (uVar1 < 4) {
      uVar7 = 0;
LAB_00e14504:
      piVar11 = __ptr + uVar7 + 0xd1;
      lVar13 = uVar14 - uVar7;
      ppiVar9 = local_278 + uVar7;
      do {
        *ppiVar9 = piVar11;
        piVar11 = piVar11 + 1;
        lVar13 = lVar13 + -1;
        ppiVar9 = ppiVar9 + 1;
      } while (lVar13 != 0);
    }
    else {
      uVar7 = uVar14 & 0x7ffffffc;
      ppiVar9 = local_278 + 2;
      uVar10 = uVar7;
      lVar13 = 0;
      lVar12 = 1;
      do {
        uVar10 = uVar10 - 4;
        ppiVar9[-1] = __ptr + lVar12 + 0xd1;
        ppiVar9[-2] = __ptr + lVar13 + 0xd1;
        ppiVar9[1] = __ptr + lVar12 + 0xd3;
        *ppiVar9 = __ptr + lVar13 + 0xd3;
        ppiVar9 = ppiVar9 + 4;
        lVar13 = lVar13 + 4;
        lVar12 = lVar12 + 4;
      } while (uVar10 != 0);
      if (uVar7 != uVar14) goto LAB_00e14504;
    }
    qsort(local_278,(long)(int)uVar5,8,FUN_00e14f9c);
    if (-1 < iVar4) {
      if ((int)uVar5 < 3) {
        uVar5 = 2;
      }
      ppiVar9 = local_278;
      lVar13 = (ulong)uVar5 - 1;
      iVar3 = *local_278[0];
      do {
        ppiVar9 = ppiVar9 + 1;
        if (iVar3 == **ppiVar9) {
          if (__ptr != (int *)0x0) goto LAB_00e1458c;
          break;
        }
        lVar13 = lVar13 + -1;
        iVar3 = **ppiVar9;
      } while (lVar13 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return __ptr;
  }
LAB_00e14608:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


