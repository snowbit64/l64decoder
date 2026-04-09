// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_calc_output_dimensions
// Entry Point: 00d72b30
// Size: 1128 bytes
// Signature: undefined jpeg_calc_output_dimensions(void)


void jpeg_calc_output_dimensions(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  code **ppcVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  undefined4 *puVar23;
  
  if (*(int *)((long)param_1 + 0x24) != 0xca) {
    lVar13 = *param_1;
    *(int *)(lVar13 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar12 = (code **)*param_1;
    *(undefined4 *)(lVar13 + 0x28) = 0x15;
    (**ppcVar12)(param_1);
  }
  jpeg_core_output_dimensions(param_1);
  iVar11 = *(int *)(param_1 + 7);
  uVar6 = iVar11 - 1;
  if (iVar11 < 1) goto LAB_00d72f2c;
  iVar14 = *(int *)(param_1 + 0x31);
  lVar13 = param_1[0x24];
  iVar16 = 4;
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar16 = 8;
  }
  iVar1 = *(int *)((long)param_1 + 0x18c);
  if (iVar16 < iVar14) {
    iVar3 = iVar14 * 2;
    if (iVar16 < iVar1) {
      iVar16 = iVar1 * 2;
      if (iVar14 == iVar16 || iVar14 + iVar1 * -2 < 0 != SBORROW4(iVar14,iVar16)) {
        uVar15 = (ulong)uVar6 + 1;
        if (iVar1 == iVar3 || iVar1 + iVar14 * -2 < 0 != SBORROW4(iVar1,iVar3)) {
          if (uVar6 == 0) {
            uVar17 = 0;
            lVar19 = lVar13;
          }
          else {
            uVar17 = uVar15 & 0x1fffffffe;
            piVar18 = (int *)(lVar13 + 0x88);
            uVar21 = uVar17;
            do {
              piVar18[-1] = iVar14;
              *piVar18 = iVar1;
              uVar21 = uVar21 - 2;
              piVar18[-0x19] = iVar14;
              piVar18[-0x18] = iVar1;
              piVar18 = piVar18 + 0x30;
            } while (uVar21 != 0);
            lVar19 = lVar13 + uVar17 * 0x60;
            if (uVar15 == uVar17) goto LAB_00d72eb8;
          }
          piVar18 = (int *)(lVar19 + 0x28);
          iVar16 = iVar11 - (int)uVar17;
          do {
            piVar18[-1] = iVar14;
            *piVar18 = iVar1;
            piVar18 = piVar18 + 0x18;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
        else {
          if (uVar6 == 0) {
            uVar17 = 0;
            lVar19 = lVar13;
          }
          else {
            uVar17 = uVar15 & 0x1fffffffe;
            piVar18 = (int *)(lVar13 + 0x88);
            uVar21 = uVar17;
            do {
              piVar18[-1] = iVar14;
              *piVar18 = iVar3;
              uVar21 = uVar21 - 2;
              piVar18[-0x19] = iVar14;
              piVar18[-0x18] = iVar3;
              piVar18 = piVar18 + 0x30;
            } while (uVar21 != 0);
            lVar19 = lVar13 + uVar17 * 0x60;
            if (uVar15 == uVar17) goto LAB_00d72eb8;
          }
          piVar18 = (int *)(lVar19 + 0x28);
          iVar16 = iVar11 - (int)uVar17;
          do {
            piVar18[-1] = iVar14;
            *piVar18 = iVar3;
            piVar18 = piVar18 + 0x18;
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
        }
      }
      else {
        uVar15 = (ulong)(iVar11 - 1U);
        lVar19 = lVar13;
        if (iVar11 - 1U != 0) {
          uVar17 = uVar15 + 1;
          uVar15 = uVar17 & 0x1fffffffe;
          piVar18 = (int *)(lVar13 + 0x88);
          uVar21 = uVar15;
          do {
            piVar18[-1] = iVar16;
            *piVar18 = iVar1;
            uVar21 = uVar21 - 2;
            piVar18[-0x19] = iVar16;
            piVar18[-0x18] = iVar1;
            piVar18 = piVar18 + 0x30;
          } while (uVar21 != 0);
          lVar19 = lVar13 + uVar15 * 0x60;
          if (uVar17 == uVar15) goto LAB_00d72eb8;
        }
        piVar18 = (int *)(lVar19 + 0x28);
        iVar14 = iVar11 - (int)uVar15;
        do {
          piVar18[-1] = iVar16;
          *piVar18 = iVar1;
          piVar18 = piVar18 + 0x18;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    else {
      iVar20 = 0;
      iVar2 = *(int *)((long)param_1 + 0x184);
      lVar19 = lVar13;
      do {
        *(int *)(lVar19 + 0x24) = iVar14;
        iVar10 = *(int *)(lVar19 + 0xc) * 2;
        iVar4 = 0;
        if (iVar10 != 0) {
          iVar4 = iVar2 / iVar10;
        }
        iVar22 = iVar1;
        if (iVar2 == iVar4 * iVar10) {
          iVar10 = 2;
          do {
            iVar22 = iVar1 * iVar10;
            if (iVar16 < iVar22) break;
            iVar10 = iVar10 * 2;
            iVar4 = iVar10 * *(int *)(lVar19 + 0xc);
            iVar8 = 0;
            if (iVar4 != 0) {
              iVar8 = iVar2 / iVar4;
            }
          } while (iVar2 == iVar8 * iVar4);
        }
        iVar10 = iVar22 * 2;
        *(int *)(lVar19 + 0x28) = iVar22;
        if (iVar14 == iVar10 || iVar14 + iVar22 * -2 < 0 != SBORROW4(iVar14,iVar10)) {
          if (iVar22 != iVar3 && iVar22 + iVar14 * -2 < 0 == SBORROW4(iVar22,iVar3)) {
            *(int *)(lVar19 + 0x28) = iVar3;
          }
        }
        else {
          *(int *)(lVar19 + 0x24) = iVar10;
        }
        iVar20 = iVar20 + 1;
        lVar19 = lVar19 + 0x60;
      } while (iVar20 != iVar11);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar16 < iVar1) {
      iVar20 = 0;
      iVar2 = iVar1 * 2;
      lVar19 = lVar13;
      do {
        iVar10 = *(int *)(lVar19 + 8) * 2;
        iVar4 = 0;
        if (iVar10 != 0) {
          iVar4 = iVar3 / iVar10;
        }
        iVar22 = iVar14;
        if (iVar3 == iVar4 * iVar10) {
          iVar10 = 2;
          do {
            iVar22 = iVar14 * iVar10;
            if (iVar16 < iVar22) break;
            iVar10 = iVar10 * 2;
            iVar4 = iVar10 * *(int *)(lVar19 + 8);
            iVar8 = 0;
            if (iVar4 != 0) {
              iVar8 = iVar3 / iVar4;
            }
          } while (iVar3 == iVar8 * iVar4);
        }
        *(int *)(lVar19 + 0x24) = iVar22;
        *(int *)(lVar19 + 0x28) = iVar1;
        if (iVar22 == iVar2 || iVar22 + iVar1 * -2 < 0 != SBORROW4(iVar22,iVar2)) {
          iVar10 = iVar22 * 2;
          if (iVar1 != iVar10 && iVar1 + iVar22 * -2 < 0 == SBORROW4(iVar1,iVar10)) {
            *(int *)(lVar19 + 0x28) = iVar10;
          }
        }
        else {
          *(int *)(lVar19 + 0x24) = iVar2;
        }
        iVar20 = iVar20 + 1;
        lVar19 = lVar19 + 0x60;
      } while (iVar20 != iVar11);
    }
    else {
      iVar20 = 0;
      iVar2 = *(int *)((long)param_1 + 0x184);
      lVar19 = lVar13;
      do {
        iVar10 = *(int *)(lVar19 + 8) * 2;
        iVar4 = 0;
        if (iVar10 != 0) {
          iVar4 = iVar3 / iVar10;
        }
        iVar22 = iVar14;
        if (iVar3 == iVar4 * iVar10) {
          iVar10 = 2;
          do {
            iVar22 = iVar14 * iVar10;
            if (iVar16 < iVar22) break;
            iVar10 = iVar10 * 2;
            iVar4 = iVar10 * *(int *)(lVar19 + 8);
            iVar8 = 0;
            if (iVar4 != 0) {
              iVar8 = iVar3 / iVar4;
            }
          } while (iVar3 == iVar8 * iVar4);
        }
        *(int *)(lVar19 + 0x24) = iVar22;
        iVar10 = *(int *)(lVar19 + 0xc) * 2;
        iVar4 = 0;
        if (iVar10 != 0) {
          iVar4 = iVar2 / iVar10;
        }
        iVar8 = iVar1;
        if (iVar2 == iVar4 * iVar10) {
          iVar10 = 2;
          do {
            iVar8 = iVar1 * iVar10;
            if (iVar16 < iVar8) break;
            iVar10 = iVar10 * 2;
            iVar4 = iVar10 * *(int *)(lVar19 + 0xc);
            iVar5 = 0;
            if (iVar4 != 0) {
              iVar5 = iVar2 / iVar4;
            }
          } while (iVar2 == iVar5 * iVar4);
        }
        iVar10 = iVar8 * 2;
        *(int *)(lVar19 + 0x28) = iVar8;
        if (iVar22 == iVar10 || iVar22 + iVar8 * -2 < 0 != SBORROW4(iVar22,iVar10)) {
          iVar10 = iVar22 * 2;
          if (iVar8 != iVar10 && iVar8 + iVar22 * -2 < 0 == SBORROW4(iVar8,iVar10)) {
            *(int *)(lVar19 + 0x28) = iVar10;
          }
        }
        else {
          *(int *)(lVar19 + 0x24) = iVar10;
        }
        iVar20 = iVar20 + 1;
        lVar19 = lVar19 + 0x60;
      } while (iVar20 != iVar11);
    }
  }
LAB_00d72eb8:
  if (0 < iVar11) {
    iVar16 = 0;
    puVar23 = (undefined4 *)(lVar13 + 0x30);
    do {
      uVar9 = jdiv_round_up((long)(int)puVar23[-3] * (long)(int)puVar23[-10] *
                            (ulong)*(uint *)(param_1 + 6),
                            (long)*(int *)((long)param_1 + 0x20c) * (long)*(int *)(param_1 + 0x30));
      puVar23[-1] = uVar9;
      uVar9 = jdiv_round_up((long)(int)puVar23[-2] * (long)(int)puVar23[-9] *
                            (ulong)*(uint *)((long)param_1 + 0x34),
                            (long)*(int *)((long)param_1 + 0x20c) *
                            (long)*(int *)((long)param_1 + 0x184));
      iVar11 = *(int *)(param_1 + 7);
      iVar16 = iVar16 + 1;
      *puVar23 = uVar9;
      puVar23 = puVar23 + 0x18;
    } while (iVar16 < iVar11);
  }
LAB_00d72f2c:
  if (*(int *)(param_1 + 8) - 1U < 7) {
    iVar11 = *(int *)(&DAT_00548784 + (long)(int)(*(int *)(param_1 + 8) - 1U) * 4);
  }
  iVar16 = iVar11;
  if (*(char *)((long)param_1 + 0x62) != '\0') {
    iVar16 = 1;
  }
  *(int *)((long)param_1 + 0x7c) = iVar11;
  *(int *)(param_1 + 0x10) = iVar16;
  cVar7 = FUN_00d72f98(param_1);
  if (cVar7 == '\0') {
    *(undefined4 *)((long)param_1 + 0x84) = 1;
    return;
  }
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)((long)param_1 + 0x184);
  return;
}


