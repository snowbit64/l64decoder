// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adf518
// Entry Point: 00adf518
// Size: 920 bytes
// Signature: undefined FUN_00adf518(void)


void FUN_00adf518(long param_1,long param_2,long param_3,uint param_4,long param_5)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  ulong __nmemb;
  long lVar21;
  uint uVar22;
  char *pcVar23;
  char local_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_4 == 0) {
LAB_00adf870:
    uVar5 = 0;
    goto LAB_00adf874;
  }
  lVar21 = *(long *)(param_1 + 0x38);
  *(uint *)(param_3 + 0x30) = param_4;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x20) = 0;
  if (lVar21 == 0) {
LAB_00adf868:
    uVar5 = 0xc;
    goto LAB_00adf874;
  }
  lVar13 = *(long *)(param_1 + 0x40);
  uVar8 = 0;
  uVar22 = 0;
  uVar10 = 0;
  __nmemb = (ulong)param_4;
  do {
    piVar9 = (int *)(lVar13 + 0x10);
    lVar20 = lVar21;
    while (piVar9[-4] != *(int *)(param_5 + uVar10 * 4)) {
      piVar9 = piVar9 + 0x32;
      lVar20 = lVar20 + -1;
      if (lVar20 == 0) goto LAB_00adf868;
    }
    if (*piVar9 == 3) {
      uVar22 = uVar22 + 1;
      *(uint *)(param_3 + 0x20) = uVar22;
    }
    else if (*piVar9 == 1) {
      uVar8 = uVar8 + 1;
      *(uint *)(param_3 + 0x14) = uVar8;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != __nmemb);
  if (uVar8 == 0) {
LAB_00adf5f8:
    if (uVar22 != 0) {
      pvVar4 = calloc((ulong)uVar22,8);
      *(void **)(param_3 + 0x28) = pvVar4;
      if (pvVar4 == (void *)0x0) goto LAB_00adf8a4;
    }
    pvVar4 = calloc(__nmemb,0x170);
    *(void **)(param_3 + 0x38) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      uVar10 = 0;
      lVar20 = 0;
      lVar13 = 0;
      if (__nmemb < 2) {
        __nmemb = 1;
      }
      do {
        piVar9 = *(int **)(param_1 + 0x40);
        lVar11 = 0;
        pcVar23 = (char *)((long)piVar9 + 0x55);
        while (*(int *)(pcVar23 + -0x55) != *(int *)(param_5 + uVar10 * 4)) {
          lVar11 = lVar11 + 1;
          pcVar23 = pcVar23 + 200;
          uVar5 = 0xc;
          if (lVar21 == lVar11) goto LAB_00adf874;
        }
        iVar15 = *(int *)(pcVar23 + -0x49);
        piVar12 = *(int **)(*(long *)(param_2 + 0x498) + 0x28);
        if (*piVar12 == iVar15) {
          lVar11 = 0;
          piVar6 = piVar12;
        }
        else {
          lVar11 = 0;
          piVar14 = piVar12;
          do {
            piVar6 = piVar14 + 0x5a;
            piVar18 = piVar14 + 0x5a;
            lVar11 = lVar11 + 1;
            piVar14 = piVar6;
          } while (*piVar18 != iVar15);
        }
        lVar17 = *(long *)(*(long *)(param_2 + 0x498) + 0x20);
        piVar14 = piVar9;
        lVar19 = lVar21;
        if (piVar12[lVar11 * 0x5a + 1] == 0x20) {
          while (*piVar14 != iVar15) {
            piVar14 = piVar14 + 0x32;
            lVar19 = lVar19 + -1;
            uVar5 = 0xc;
            if (lVar19 == 0) goto LAB_00adf874;
          }
          if (lVar17 == 0) goto LAB_00adf868;
          if (*piVar12 == piVar14[3]) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            piVar18 = piVar12;
            do {
              piVar18 = piVar18 + 0x5a;
              if (lVar17 + -1 == lVar11) goto LAB_00adf868;
              lVar11 = lVar11 + 1;
            } while (*piVar18 != piVar14[3]);
          }
          piVar6 = piVar12 + lVar11 * 0x5a;
          iVar15 = *piVar6;
        }
        piVar9 = piVar9 + 0x14;
        while (piVar9[-0x14] != iVar15) {
          piVar9 = piVar9 + 0x32;
          lVar21 = lVar21 + -1;
          uVar5 = 0xc;
          if (lVar21 == 0) goto LAB_00adf874;
        }
        lVar21 = *(long *)(param_3 + 0x38);
        local_6c[0] = *pcVar23;
        puVar7 = (undefined4 *)(lVar21 + uVar10 * 0x170);
        puVar7[5] = *(int *)(pcVar23 + -0x45);
        uVar5 = FUN_00adfe28(param_1,pcVar23 + -5,piVar9,piVar6,puVar7,local_6c);
        if ((int)uVar5 != 0) break;
        if (puVar7[5] == 1) {
          *(undefined4 **)(*(long *)(param_3 + 0x18) + lVar13 * 8) = puVar7;
          lVar13 = lVar13 + 1;
        }
        else if (*(int *)(pcVar23 + -0x45) == 3) {
          *(undefined4 **)(*(long *)(param_3 + 0x28) + lVar20 * 8) = puVar7;
          lVar20 = lVar20 + 1;
        }
        lVar11 = lVar21 + uVar10 * 0x170;
        uVar5 = *(undefined8 *)(pcVar23 + -0xd);
        uVar16 = *(undefined8 *)(pcVar23 + 0x43);
        *puVar7 = *(undefined4 *)(pcVar23 + -0x55);
        *(undefined8 *)(lVar11 + 8) = uVar5;
        *(undefined8 *)(lVar11 + 0x18) = uVar16;
        if (local_6c[0] != '\0') {
          lVar11 = lVar21 + uVar10 * 0x170;
          *(uint *)(lVar11 + 0x20) = *(uint *)(lVar11 + 0x20) | 0x10;
        }
        lVar11 = lVar21 + uVar10 * 0x170;
        uVar1 = *(undefined4 *)(pcVar23 + 0x1f);
        cVar2 = *pcVar23;
        *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)(pcVar23 + 0x23);
        *(undefined4 *)(lVar11 + 0x168) = uVar1;
        if (cVar2 != '\0') {
          *(undefined4 *)(lVar21 + uVar10 * 0x170 + 0x24) = *(undefined4 *)(pcVar23 + 0x53);
        }
        uVar10 = uVar10 + 1;
        if (uVar10 == __nmemb) goto LAB_00adf870;
        lVar21 = *(long *)(param_1 + 0x38);
        uVar5 = 0xc;
      } while (lVar21 != 0);
      goto LAB_00adf874;
    }
  }
  else {
    pvVar4 = calloc((ulong)uVar8,8);
    *(void **)(param_3 + 0x18) = pvVar4;
    if (pvVar4 != (void *)0x0) goto LAB_00adf5f8;
  }
LAB_00adf8a4:
  uVar5 = 3;
LAB_00adf874:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


