// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_c_master_control
// Entry Point: 00d69708
// Size: 2956 bytes
// Signature: undefined jinit_c_master_control(void)


void jinit_c_master_control(long *param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  code **ppcVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  code **ppcVar16;
  int iVar17;
  long lVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  int *piVar25;
  int iVar26;
  undefined8 *puVar27;
  int iVar28;
  ulong uVar29;
  uint *puVar30;
  uint *puVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  uint local_a7c [640];
  char local_7c [12];
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  ppcVar10 = (code **)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x3c] = (long)ppcVar10;
  *(undefined *)((long)ppcVar10 + 0x19) = 0;
  *ppcVar10 = FUN_00d6a294;
  ppcVar10[1] = FUN_00d6a488;
  ppcVar10[2] = FUN_00d6a4c4;
  iVar12 = *(int *)((long)param_1 + 0x1cc);
  if (iVar12 - 0x11U < 0xfffffff0) {
    lVar18 = *param_1;
    *(undefined4 *)(lVar18 + 0x28) = 7;
    *(int *)(lVar18 + 0x2c) = iVar12;
    *(undefined4 *)(*param_1 + 0x30) = *(undefined4 *)((long)param_1 + 0x1cc);
    (**(code **)*param_1)(param_1);
    iVar12 = *(int *)((long)param_1 + 0x1cc);
  }
  if (iVar12 - 2U < 6) {
    puVar19 = (&PTR_jpeg_natural_order2_01012ba8)[(int)(iVar12 - 2U)];
  }
  else {
    puVar19 = jpeg_natural_order;
  }
  param_1[0x3a] = (long)puVar19;
  iVar28 = iVar12 * iVar12 + -1;
  if (7 < iVar12) {
    iVar28 = 0x3f;
  }
  *(int *)(param_1 + 0x3b) = iVar28;
  if (((*(uint *)((long)param_1 + 0x54) == 0) || (*(int *)(param_1 + 10) == 0)) ||
     (*(int *)((long)param_1 + 0x5c) < 1)) {
    ppcVar16 = (code **)*param_1;
    *(undefined4 *)(ppcVar16 + 5) = 0x21;
    (**ppcVar16)(param_1);
    if (*(uint *)((long)param_1 + 0x54) < 0xffdd) goto LAB_00d6984c;
LAB_00d69914:
    *(undefined8 *)(*param_1 + 0x28) = 0xffdc0000002a;
    (**(code **)*param_1)(param_1);
    iVar12 = *(int *)(param_1 + 0xb);
    if (iVar12 - 0xdU < 0xfffffffb) goto LAB_00d69944;
LAB_00d6986c:
    iVar12 = *(int *)((long)param_1 + 0x5c);
    if (iVar12 < 0xb) goto LAB_00d69878;
LAB_00d6996c:
    lVar18 = *param_1;
    *(undefined4 *)(lVar18 + 0x28) = 0x1b;
    *(int *)(lVar18 + 0x2c) = iVar12;
    *(undefined4 *)(*param_1 + 0x30) = 10;
    (**(code **)*param_1)(param_1);
    iVar12 = *(int *)((long)param_1 + 0x5c);
    param_1[0x2a] = 0x100000001;
    if (iVar12 < 1) goto LAB_00d699a8;
LAB_00d69888:
    iVar28 = 0;
    iVar17 = 1;
    piVar25 = (int *)(param_1[0xd] + 0xc);
    iVar20 = 1;
    do {
      iVar22 = piVar25[-1];
      if ((iVar22 - 5U < 0xfffffffc) || (iVar23 = *piVar25, iVar23 - 5U < 0xfffffffc)) {
        ppcVar16 = (code **)*param_1;
        *(undefined4 *)(ppcVar16 + 5) = 0x13;
        (**ppcVar16)(param_1);
        iVar22 = piVar25[-1];
        iVar23 = *piVar25;
        iVar20 = *(int *)(param_1 + 0x2a);
        iVar17 = *(int *)((long)param_1 + 0x154);
        iVar12 = *(int *)((long)param_1 + 0x5c);
      }
      iVar28 = iVar28 + 1;
      if (iVar20 <= iVar22) {
        iVar20 = iVar22;
      }
      if (iVar17 <= iVar23) {
        iVar17 = iVar23;
      }
      piVar25 = piVar25 + 0x18;
      *(int *)(param_1 + 0x2a) = iVar20;
      *(int *)((long)param_1 + 0x154) = iVar17;
    } while (iVar28 < iVar12);
    if (0 < iVar12) {
      iVar12 = 0;
      lVar18 = param_1[0xd];
      do {
        *(int *)(lVar18 + 4) = iVar12;
        iVar20 = *(int *)(param_1 + 0x2b);
        iVar28 = 4;
        if (*(char *)((long)param_1 + 0x124) != '\0') {
          iVar28 = 8;
        }
        iVar17 = iVar20;
        if (iVar20 <= iVar28) {
          iVar22 = *(int *)(param_1 + 0x2a);
          iVar23 = *(int *)(lVar18 + 8) * 2;
          iVar26 = 0;
          if (iVar23 != 0) {
            iVar26 = iVar22 / iVar23;
          }
          if (iVar22 == iVar26 * iVar23) {
            iVar23 = 2;
            do {
              iVar17 = iVar23 * iVar20;
              if (iVar28 < iVar17) break;
              iVar23 = iVar23 * 2;
              iVar26 = iVar23 * *(int *)(lVar18 + 8);
              iVar6 = 0;
              if (iVar26 != 0) {
                iVar6 = iVar22 / iVar26;
              }
            } while (iVar22 == iVar6 * iVar26);
          }
        }
        *(int *)(lVar18 + 0x24) = iVar17;
        iVar20 = *(int *)((long)param_1 + 0x15c);
        iVar22 = iVar20;
        if (iVar20 <= iVar28) {
          iVar23 = *(int *)((long)param_1 + 0x154);
          iVar26 = *(int *)(lVar18 + 0xc) * 2;
          iVar6 = 0;
          if (iVar26 != 0) {
            iVar6 = iVar23 / iVar26;
          }
          if (iVar23 == iVar6 * iVar26) {
            iVar26 = 2;
            do {
              iVar22 = iVar26 * iVar20;
              if (iVar28 < iVar22) break;
              iVar26 = iVar26 * 2;
              iVar6 = iVar26 * *(int *)(lVar18 + 0xc);
              iVar7 = 0;
              if (iVar6 != 0) {
                iVar7 = iVar23 / iVar6;
              }
            } while (iVar23 == iVar7 * iVar6);
          }
        }
        iVar28 = iVar22 * 2;
        *(int *)(lVar18 + 0x28) = iVar22;
        if (iVar17 == iVar28 || iVar17 + iVar22 * -2 < 0 != SBORROW4(iVar17,iVar28)) {
          iVar28 = iVar17 * 2;
          if (iVar22 != iVar28 && iVar22 + iVar17 * -2 < 0 == SBORROW4(iVar22,iVar28)) {
            *(int *)(lVar18 + 0x28) = iVar28;
          }
        }
        else {
          *(int *)(lVar18 + 0x24) = iVar28;
        }
        uVar9 = jdiv_round_up((long)*(int *)(lVar18 + 8) * (ulong)*(uint *)(param_1 + 10),
                              (long)*(int *)((long)param_1 + 0x1cc) * (long)*(int *)(param_1 + 0x2a)
                             );
        *(undefined4 *)(lVar18 + 0x1c) = uVar9;
        uVar9 = jdiv_round_up((long)*(int *)(lVar18 + 0xc) * (ulong)*(uint *)((long)param_1 + 0x54),
                              (long)*(int *)((long)param_1 + 0x1cc) *
                              (long)*(int *)((long)param_1 + 0x154));
        *(undefined4 *)(lVar18 + 0x20) = uVar9;
        uVar9 = jdiv_round_up((long)*(int *)(lVar18 + 0x24) * (long)*(int *)(lVar18 + 8) *
                              (ulong)*(uint *)(param_1 + 10),
                              (long)*(int *)((long)param_1 + 0x1cc) * (long)*(int *)(param_1 + 0x2a)
                             );
        *(undefined4 *)(lVar18 + 0x2c) = uVar9;
        uVar9 = jdiv_round_up((long)*(int *)(lVar18 + 0x28) * (long)*(int *)(lVar18 + 0xc) *
                              (ulong)*(uint *)((long)param_1 + 0x54),
                              (long)*(int *)((long)param_1 + 0x1cc) *
                              (long)*(int *)((long)param_1 + 0x154));
        *(undefined *)(lVar18 + 0x34) = 0;
        iVar12 = iVar12 + 1;
        *(undefined4 *)(lVar18 + 0x30) = uVar9;
        lVar18 = lVar18 + 0x60;
      } while (iVar12 < *(int *)((long)param_1 + 0x5c));
      iVar17 = *(int *)((long)param_1 + 0x154);
    }
  }
  else {
    if (0xffdc < *(uint *)((long)param_1 + 0x54)) goto LAB_00d69914;
LAB_00d6984c:
    if (0xffdc < *(uint *)(param_1 + 10)) goto LAB_00d69914;
    iVar12 = *(int *)(param_1 + 0xb);
    if (0xfffffffa < iVar12 - 0xdU) goto LAB_00d6986c;
LAB_00d69944:
    lVar18 = *param_1;
    *(undefined4 *)(lVar18 + 0x28) = 0x10;
    *(int *)(lVar18 + 0x2c) = iVar12;
    (**(code **)*param_1)(param_1);
    iVar12 = *(int *)((long)param_1 + 0x5c);
    if (10 < iVar12) goto LAB_00d6996c;
LAB_00d69878:
    param_1[0x2a] = 0x100000001;
    if (0 < iVar12) goto LAB_00d69888;
LAB_00d699a8:
    iVar17 = 1;
  }
  uVar9 = jdiv_round_up(*(undefined4 *)((long)param_1 + 0x54),
                        (long)*(int *)((long)param_1 + 0x1cc) * (long)iVar17);
  puVar31 = (uint *)param_1[0x23];
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  if (puVar31 == (uint *)0x0) {
    *(undefined *)((long)param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x22) = 1;
    cVar11 = *(char *)((long)param_1 + 0x122);
joined_r0x00d69ba8:
    if (cVar11 == '\0') goto LAB_00d6a1cc;
LAB_00d6a1b4:
    *(undefined *)((long)param_1 + 0x121) = 0;
LAB_00d6a1d4:
    if (param_2 == '\0') {
      *(undefined4 *)((long)ppcVar10 + 0x2c) = 0;
      ppcVar10[4] = (code *)0x0;
      if (cVar11 != '\0') goto LAB_00d6a1fc;
    }
    else {
      if (cVar11 != '\0') {
LAB_00d6a1e0:
        uVar9 = 1;
        goto LAB_00d6a1e4;
      }
      *(undefined4 *)((long)ppcVar10 + 0x2c) = 0;
      ppcVar10[4] = (code *)0x2;
    }
    *(undefined4 *)(ppcVar10 + 5) = *(undefined4 *)(param_1 + 0x22);
    if (*(long *)(lVar8 + 0x28) != local_70) {
LAB_00d6a260:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    if (*(int *)(param_1 + 0x22) < 1) {
      *(undefined8 *)(*param_1 + 0x28) = 0x14;
      (**(code **)*param_1)(param_1);
      puVar31 = (uint *)param_1[0x23];
      if (puVar31[5] == 0) goto LAB_00d69be0;
LAB_00d69c14:
      uVar29 = (ulong)*(uint *)((long)param_1 + 0x5c);
      cVar11 = '\x01';
      *(undefined *)((long)param_1 + 0x14c) = 1;
      if (0 < (int)*(uint *)((long)param_1 + 0x5c)) {
        memset(local_a7c,0xff,uVar29 << 8);
        cVar11 = '\x01';
      }
    }
    else {
      if (puVar31[5] != 0) goto LAB_00d69c14;
LAB_00d69be0:
      if (puVar31[6] != 0x3f) goto LAB_00d69c14;
      uVar29 = (ulong)*(uint *)((long)param_1 + 0x5c);
      *(undefined *)((long)param_1 + 0x14c) = 0;
      if (0 < (int)*(uint *)((long)param_1 + 0x5c)) {
        memset(local_7c,0,uVar29);
      }
      cVar11 = '\0';
    }
    if (0 < *(int *)(param_1 + 0x22)) {
      iVar12 = 1;
      do {
        uVar14 = *puVar31;
        uVar29 = (ulong)uVar14;
        if (uVar14 - 5 < 0xfffffffc) {
          lVar18 = *param_1;
          *(undefined4 *)(lVar18 + 0x28) = 0x1b;
          *(uint *)(lVar18 + 0x2c) = uVar14;
          *(undefined4 *)(*param_1 + 0x30) = 4;
          (**(code **)*param_1)(param_1);
          if (0 < (int)uVar14) goto LAB_00d69cbc;
          bVar1 = false;
        }
        else {
LAB_00d69cbc:
          if (((int)puVar31[1] < 0) || (*(int *)((long)param_1 + 0x5c) <= (int)puVar31[1])) {
            lVar18 = *param_1;
            *(undefined4 *)(lVar18 + 0x28) = 0x14;
            *(int *)(lVar18 + 0x2c) = iVar12;
            (**(code **)*param_1)(param_1);
          }
          if (uVar14 != 1) {
            uVar32 = 0;
            do {
              uVar2 = puVar31[uVar32 + 2];
              if (((int)uVar2 < 0) || (*(int *)((long)param_1 + 0x5c) <= (int)uVar2)) {
                lVar18 = *param_1;
                *(undefined4 *)(lVar18 + 0x28) = 0x14;
                *(int *)(lVar18 + 0x2c) = iVar12;
                (**(code **)*param_1)(param_1);
                uVar3 = puVar31[(uVar32 & 0xffffffff) + 1];
              }
              else {
                uVar3 = puVar31[(uVar32 & 0xffffffff) + 1];
              }
              if ((int)uVar2 <= (int)uVar3) {
                lVar18 = *param_1;
                *(undefined4 *)(lVar18 + 0x28) = 0x14;
                *(int *)(lVar18 + 0x2c) = iVar12;
                (**(code **)*param_1)(param_1);
              }
              uVar32 = uVar32 + 1;
            } while (uVar29 - 1 != uVar32);
          }
          bVar1 = true;
        }
        uVar2 = puVar31[5];
        uVar4 = puVar31[6];
        uVar3 = puVar31[7];
        uVar5 = puVar31[8];
        if (*(char *)((long)param_1 + 0x14c) == '\0') {
          if ((((uVar2 != 0) || (uVar4 != 0x3f)) || (uVar3 != 0)) || (uVar5 != 0)) {
            lVar18 = *param_1;
            *(undefined4 *)(lVar18 + 0x28) = 0x12;
            *(int *)(lVar18 + 0x2c) = iVar12;
            (**(code **)*param_1)(param_1);
          }
          if (bVar1) {
            uVar32 = 0;
            do {
              uVar14 = puVar31[uVar32 + 1];
              if (local_7c[(int)uVar14] != '\0') {
                lVar18 = *param_1;
                *(undefined4 *)(lVar18 + 0x28) = 0x14;
                *(int *)(lVar18 + 0x2c) = iVar12;
                (**(code **)*param_1)(param_1);
              }
              uVar32 = uVar32 + 1;
              local_7c[(int)uVar14] = '\x01';
            } while (uVar29 != uVar32);
          }
        }
        else {
          if (((uVar2 < 0x40) && ((int)uVar2 <= (int)uVar4)) &&
             (((int)uVar4 < 0x40 && (-1 < (int)uVar3)))) {
            uVar13 = 0xd;
            if (*(int *)(param_1 + 0xb) < 9) {
              uVar13 = 10;
            }
            if (((uVar13 < uVar3) || ((int)uVar5 < 0)) || ((int)uVar13 < (int)uVar5))
            goto LAB_00d69d1c;
          }
          else {
LAB_00d69d1c:
            lVar18 = *param_1;
            *(undefined4 *)(lVar18 + 0x28) = 0x12;
            *(int *)(lVar18 + 0x2c) = iVar12;
            (**(code **)*param_1)(param_1);
          }
          if (uVar2 == 0) {
            if (uVar4 != 0) goto LAB_00d69d44;
          }
          else if (uVar14 != 1) {
LAB_00d69d44:
            lVar18 = *param_1;
            *(undefined4 *)(lVar18 + 0x28) = 0x12;
            *(int *)(lVar18 + 0x2c) = iVar12;
            (**(code **)*param_1)(param_1);
          }
          if (bVar1) {
            uVar32 = 0;
            iVar28 = (uVar4 - uVar2) + 1;
            do {
              lVar18 = (long)(int)puVar31[uVar32 + 1];
              if ((uVar2 != 0) && ((int)local_a7c[lVar18 * 0x40] < 0)) {
                lVar15 = *param_1;
                *(undefined4 *)(lVar15 + 0x28) = 0x12;
                *(int *)(lVar15 + 0x2c) = iVar12;
                (**(code **)*param_1)(param_1);
              }
              if ((int)uVar2 <= (int)uVar4) {
                if (uVar3 == 0) {
                  if (uVar5 == uVar3 - 1) {
                    puVar30 = local_a7c + (long)(int)uVar2 + lVar18 * 0x40;
                    iVar20 = iVar28;
                    do {
                      if (0 < (int)*puVar30) {
                        lVar18 = *param_1;
                        *(undefined4 *)(lVar18 + 0x28) = 0x12;
                        *(int *)(lVar18 + 0x2c) = iVar12;
                        (**(code **)*param_1)(param_1);
                      }
                      iVar20 = iVar20 + -1;
                      *puVar30 = uVar5;
                      puVar30 = puVar30 + 1;
                    } while (iVar20 != 0);
                  }
                  else {
                    puVar30 = local_a7c + (long)(int)uVar2 + lVar18 * 0x40;
                    iVar20 = iVar28;
                    do {
                      if (-1 < (int)*puVar30) {
                        lVar18 = *param_1;
                        *(undefined4 *)(lVar18 + 0x28) = 0x12;
                        *(int *)(lVar18 + 0x2c) = iVar12;
                        (**(code **)*param_1)(param_1);
                      }
                      iVar20 = iVar20 + -1;
                      *puVar30 = uVar5;
                      puVar30 = puVar30 + 1;
                    } while (iVar20 != 0);
                  }
                }
                else {
                  puVar30 = local_a7c + (long)(int)uVar2 + lVar18 * 0x40;
                  iVar20 = iVar28;
                  do {
                    if ((((int)*puVar30 < 0) || (uVar3 != *puVar30)) || (uVar5 != uVar3 - 1)) {
                      lVar18 = *param_1;
                      *(undefined4 *)(lVar18 + 0x28) = 0x12;
                      *(int *)(lVar18 + 0x2c) = iVar12;
                      (**(code **)*param_1)(param_1);
                    }
                    iVar20 = iVar20 + -1;
                    *puVar30 = uVar5;
                    puVar30 = puVar30 + 1;
                  } while (iVar20 != 0);
                }
              }
              uVar32 = uVar32 + 1;
            } while (uVar32 != uVar29);
          }
        }
        puVar31 = puVar31 + 9;
        bVar1 = iVar12 < *(int *)(param_1 + 0x22);
        iVar12 = iVar12 + 1;
      } while (bVar1);
      cVar11 = *(char *)((long)param_1 + 0x14c);
      uVar29 = (ulong)*(uint *)((long)param_1 + 0x5c);
    }
    if (cVar11 == '\0') {
      if (0 < (int)uVar29) {
        lVar18 = 0;
        do {
          if (local_7c[lVar18] == '\0') {
            ppcVar16 = (code **)*param_1;
            *(undefined4 *)(ppcVar16 + 5) = 0x2e;
            (**ppcVar16)(param_1);
            uVar29 = (ulong)*(uint *)((long)param_1 + 0x5c);
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < (int)uVar29);
      }
    }
    else if (0 < (int)uVar29) {
      lVar18 = 0;
      puVar31 = local_a7c;
      do {
        if ((int)*puVar31 < 0) {
          ppcVar16 = (code **)*param_1;
          *(undefined4 *)(ppcVar16 + 5) = 0x2e;
          (**ppcVar16)(param_1);
          uVar29 = (ulong)*(uint *)((long)param_1 + 0x5c);
        }
        lVar18 = lVar18 + 1;
        puVar31 = puVar31 + 0x40;
      } while (lVar18 < (int)uVar29);
    }
    if (*(int *)((long)param_1 + 0x1cc) < 8) {
      if (*(int *)(param_1 + 0x22) < 1) {
        *(undefined4 *)(param_1 + 0x22) = 0;
        cVar11 = *(char *)((long)param_1 + 0x122);
        goto joined_r0x00d69ba8;
      }
      puVar21 = (undefined8 *)param_1[0x23];
      uVar29 = 0;
      uVar14 = 0;
      puVar24 = puVar21;
      do {
        lVar18 = (long)(int)uVar14;
        if (uVar29 == uVar14) {
          iVar12 = *(int *)(param_1 + 0x3b);
          if (*(int *)((long)puVar21 + lVar18 * 0x24 + 0x14) <= iVar12) {
LAB_00d6a190:
            piVar25 = (int *)((long)puVar21 + lVar18 * 0x24 + 0x18);
            if (iVar12 < *piVar25) {
              *piVar25 = iVar12;
            }
            uVar14 = uVar14 + 1;
          }
        }
        else {
          uVar35 = *puVar24;
          uVar34 = puVar24[3];
          uVar33 = puVar24[2];
          puVar27 = (undefined8 *)((long)puVar21 + lVar18 * 0x24);
          uVar9 = *(undefined4 *)(puVar24 + 4);
          puVar27[1] = puVar24[1];
          *puVar27 = uVar35;
          puVar27[3] = uVar34;
          puVar27[2] = uVar33;
          *(undefined4 *)(puVar27 + 4) = uVar9;
          iVar12 = *(int *)(param_1 + 0x3b);
          if (*(int *)((long)puVar21 + lVar18 * 0x24 + 0x14) <= iVar12) goto LAB_00d6a190;
        }
        uVar29 = uVar29 + 1;
        puVar24 = (undefined8 *)((long)puVar24 + 0x24);
      } while ((long)uVar29 < (long)*(int *)(param_1 + 0x22));
      *(uint *)(param_1 + 0x22) = uVar14;
    }
    cVar11 = *(char *)((long)param_1 + 0x122);
    if (cVar11 != '\0') goto LAB_00d6a1b4;
LAB_00d6a1cc:
    if ((*(char *)((long)param_1 + 0x121) != '\0') ||
       ((*(char *)((long)param_1 + 0x14c) == '\0' && (5 < *(int *)((long)param_1 + 0x1cc) - 2U))))
    goto LAB_00d6a1d4;
    *(undefined *)((long)param_1 + 0x122) = 1;
    if (param_2 != '\0') goto LAB_00d6a1e0;
    uVar9 = 0;
LAB_00d6a1e4:
    *(undefined4 *)((long)ppcVar10 + 0x2c) = 0;
    *(undefined4 *)(ppcVar10 + 4) = uVar9;
    *(undefined4 *)((long)ppcVar10 + 0x24) = 0;
LAB_00d6a1fc:
    *(int *)(ppcVar10 + 5) = *(int *)(param_1 + 0x22) << 1;
    if (*(long *)(lVar8 + 0x28) != local_70) goto LAB_00d6a260;
  }
  return;
}


