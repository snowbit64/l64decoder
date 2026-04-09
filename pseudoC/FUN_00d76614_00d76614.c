// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d76614
// Entry Point: 00d76614
// Size: 1708 bytes
// Signature: undefined FUN_00d76614(void)


void FUN_00d76614(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ushort *puVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  code *pcVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  short *psVar27;
  short *psVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  short *psVar33;
  int iVar34;
  uint uVar35;
  long local_1d0;
  ulong local_1b0;
  long local_110;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined auStack_f0 [2];
  short local_ee;
  short local_ec;
  short local_e0;
  short local_de;
  short local_d0;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  lVar18 = *(long *)(param_1 + 0x230);
  uVar7 = *(int *)(param_1 + 400) - 1;
  do {
    if ((*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0x9c)) ||
       (*(char *)((long)*(code ***)(param_1 + 0x240) + 0x21) != '\0')) {
LAB_00d766ac:
      if (*(int *)(param_1 + 0x38) < 1) goto LAB_00d76c6c;
      lVar29 = *(long *)(param_1 + 0x120);
      local_1d0 = 0;
      goto LAB_00d766ec;
    }
    if (*(int *)(param_1 + 0x9c) == *(int *)(param_1 + 0xa4)) {
      uVar17 = *(uint *)(param_1 + 0xa8);
      if (*(int *)(param_1 + 0x1fc) == 0) {
        uVar17 = uVar17 + 1;
      }
      if (uVar17 < *(uint *)(param_1 + 0xa0)) goto LAB_00d766ac;
    }
    uVar11 = (***(code ***)(param_1 + 0x240))(param_1);
  } while ((int)uVar11 != 0);
  goto LAB_00d76c8c;
LAB_00d766ec:
  do {
    if (*(char *)(lVar29 + 0x34) != '\0') {
      uVar17 = *(uint *)(param_1 + 0xa8);
      if (uVar17 < uVar7) {
        uVar26 = *(uint *)(lVar29 + 0xc);
        uVar12 = uVar26 << 1;
        uVar35 = uVar26;
        if (uVar17 != 0) goto LAB_00d76714;
LAB_00d76784:
        lVar10 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                           (param_1,*(undefined8 *)(lVar18 + local_1d0 * 8 + 0x88),0,uVar12,0);
      }
      else {
        uVar35 = *(uint *)(lVar29 + 0xc);
        uVar26 = 0;
        if (uVar35 != 0) {
          uVar26 = *(uint *)(lVar29 + 0x20) / uVar35;
        }
        uVar12 = *(uint *)(lVar29 + 0x20) - uVar26 * uVar35;
        uVar26 = uVar35;
        if (uVar12 != 0) {
          uVar26 = uVar12;
        }
        uVar12 = uVar26;
        if (uVar17 == 0) goto LAB_00d76784;
LAB_00d76714:
        lVar10 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                           (param_1,*(undefined8 *)(lVar18 + local_1d0 * 8 + 0x88),
                            uVar35 * (uVar17 - 1),uVar35 + uVar12,0);
        lVar10 = lVar10 + (long)*(int *)(lVar29 + 0xc) * 8;
      }
      if (0 < (int)uVar26) {
        local_1b0 = (ulong)(uVar26 - 1);
        uVar11 = 0;
        puVar13 = *(ushort **)(lVar29 + 0x50);
        uVar23 = (ulong)*puVar13;
        uVar25 = (ulong)puVar13[9];
        uVar24 = (ulong)puVar13[1];
        lVar1 = *(long *)(lVar18 + 0xd8) + (ulong)(uint)((int)local_1d0 * 6) * 4;
        uVar19 = (ulong)puVar13[8];
        uVar22 = (ulong)puVar13[0x10];
        pcVar21 = *(code **)(*(long *)(param_1 + 600) + local_1d0 * 8 + 8);
        uVar14 = (ulong)puVar13[2];
        local_110 = *(long *)(param_2 + local_1d0 * 8);
        do {
          psVar33 = *(short **)(lVar10 + uVar11 * 8);
          if ((uVar17 != 0) || (psVar27 = psVar33, uVar11 != 0)) {
            psVar27 = *(short **)(lVar10 + uVar11 * 8 + -8);
          }
          psVar28 = psVar33;
          if (uVar17 < uVar7 || uVar11 != local_1b0) {
            psVar28 = *(short **)(lVar10 + uVar11 * 8 + 8);
          }
          uVar35 = 0;
          iVar34 = 0;
          uVar12 = *(int *)(lVar29 + 0x1c) - 1;
          local_100 = (int)*psVar28;
          local_fc = (int)*psVar33;
          iVar32 = (int)*psVar27;
          iVar30 = (int)*psVar27;
          local_f8 = local_fc;
          local_f4 = local_100;
          do {
            iVar31 = iVar32;
            iVar6 = local_f4;
            iVar9 = local_f8;
            iVar3 = local_fc;
            iVar16 = local_100;
            psVar28 = psVar28 + 0x40;
            psVar27 = psVar27 + 0x40;
            local_f8 = local_fc;
            local_f4 = local_100;
            jcopy_block_row(psVar33,auStack_f0,1);
            iVar32 = iVar31;
            if (uVar35 < uVar12) {
              iVar32 = (int)*psVar27;
              local_100 = (int)*psVar28;
              local_fc = (int)psVar33[0x40];
            }
            uVar2 = *(uint *)(lVar1 + 4);
            if ((uVar2 != 0) && (local_ee == 0)) {
              lVar20 = uVar23 * 0x24 * (long)(iVar9 - local_fc);
              if (lVar20 < 0) {
                iVar15 = 0;
                if (uVar24 != 0) {
                  iVar15 = (int)((long)(uVar24 * 0x80 - lVar20) / (long)(uVar24 << 8));
                }
                iVar5 = 1 << (ulong)(uVar2 & 0x1f);
                iVar4 = iVar15;
                if (iVar5 <= iVar15) {
                  iVar4 = iVar5 + -1;
                }
                if ((int)uVar2 < 1) {
                  iVar4 = iVar15;
                }
                iVar15 = -iVar4;
              }
              else {
                iVar15 = 0;
                if (uVar24 != 0) {
                  iVar15 = (int)((long)(lVar20 + uVar24 * 0x80) / (long)(uVar24 << 8));
                }
                if ((0 < (int)uVar2) && (iVar4 = 1 << (ulong)(uVar2 & 0x1f), iVar4 <= iVar15)) {
                  iVar15 = iVar4 + -1;
                }
              }
              local_ee = (short)iVar15;
            }
            uVar2 = *(uint *)(lVar1 + 8);
            if ((uVar2 != 0) && (local_e0 == 0)) {
              lVar20 = uVar23 * 0x24 * (long)(iVar31 - iVar16);
              if (lVar20 < 0) {
                iVar15 = 0;
                if (uVar19 != 0) {
                  iVar15 = (int)((long)(uVar19 * 0x80 - lVar20) / (long)(uVar19 << 8));
                }
                iVar5 = 1 << (ulong)(uVar2 & 0x1f);
                iVar4 = iVar15;
                if (iVar5 <= iVar15) {
                  iVar4 = iVar5 + -1;
                }
                if ((int)uVar2 < 1) {
                  iVar4 = iVar15;
                }
                iVar15 = -iVar4;
              }
              else {
                iVar15 = 0;
                if (uVar19 != 0) {
                  iVar15 = (int)((long)(lVar20 + uVar19 * 0x80) / (long)(uVar19 << 8));
                }
                if ((0 < (int)uVar2) && (iVar4 = 1 << (ulong)(uVar2 & 0x1f), iVar4 <= iVar15)) {
                  iVar15 = iVar4 + -1;
                }
              }
              local_e0 = (short)iVar15;
            }
            uVar2 = *(uint *)(lVar1 + 0xc);
            if ((uVar2 != 0) && (local_d0 == 0)) {
              lVar20 = uVar23 * 9 * (long)(iVar31 + iVar3 * -2 + iVar16);
              if (lVar20 < 0) {
                iVar16 = 0;
                if (uVar22 != 0) {
                  iVar16 = (int)((long)(uVar22 * 0x80 - lVar20) / (long)(uVar22 << 8));
                }
                iVar4 = 1 << (ulong)(uVar2 & 0x1f);
                iVar15 = iVar16;
                if (iVar4 <= iVar16) {
                  iVar15 = iVar4 + -1;
                }
                if ((int)uVar2 < 1) {
                  iVar15 = iVar16;
                }
                iVar16 = -iVar15;
              }
              else {
                iVar16 = 0;
                if (uVar22 != 0) {
                  iVar16 = (int)((long)(lVar20 + uVar22 * 0x80) / (long)(uVar22 << 8));
                }
                if ((0 < (int)uVar2) && (iVar15 = 1 << (ulong)(uVar2 & 0x1f), iVar15 <= iVar16)) {
                  iVar16 = iVar15 + -1;
                }
              }
              local_d0 = (short)iVar16;
            }
            uVar2 = *(uint *)(lVar1 + 0x10);
            if ((uVar2 != 0) && (local_de == 0)) {
              lVar20 = uVar23 * 5 * (long)((iVar30 - (iVar6 + iVar32)) + local_100);
              if (lVar20 < 0) {
                iVar30 = 0;
                if (uVar25 != 0) {
                  iVar30 = (int)((long)(uVar25 * 0x80 - lVar20) / (long)(uVar25 << 8));
                }
                iVar6 = 1 << (ulong)(uVar2 & 0x1f);
                iVar16 = iVar30;
                if (iVar6 <= iVar30) {
                  iVar16 = iVar6 + -1;
                }
                if ((int)uVar2 < 1) {
                  iVar16 = iVar30;
                }
                iVar30 = -iVar16;
              }
              else {
                iVar30 = 0;
                if (uVar25 != 0) {
                  iVar30 = (int)((long)(lVar20 + uVar25 * 0x80) / (long)(uVar25 << 8));
                }
                if ((0 < (int)uVar2) && (iVar16 = 1 << (ulong)(uVar2 & 0x1f), iVar16 <= iVar30)) {
                  iVar30 = iVar16 + -1;
                }
              }
              local_de = (short)iVar30;
            }
            uVar2 = *(uint *)(lVar1 + 0x14);
            if ((uVar2 != 0) && (local_ec == 0)) {
              lVar20 = uVar23 * 9 * (long)(iVar9 + iVar3 * -2 + local_fc);
              if (lVar20 < 0) {
                iVar30 = 0;
                if (uVar14 != 0) {
                  iVar30 = (int)((long)(uVar14 * 0x80 - lVar20) / (long)(uVar14 << 8));
                }
                iVar3 = 1 << (ulong)(uVar2 & 0x1f);
                iVar16 = iVar30;
                if (iVar3 <= iVar30) {
                  iVar16 = iVar3 + -1;
                }
                if ((int)uVar2 < 1) {
                  iVar16 = iVar30;
                }
                iVar30 = -iVar16;
              }
              else {
                iVar30 = 0;
                if (uVar14 != 0) {
                  iVar30 = (int)((long)(lVar20 + uVar14 * 0x80) / (long)(uVar14 << 8));
                }
                if ((0 < (int)uVar2) && (iVar16 = 1 << (ulong)(uVar2 & 0x1f), iVar16 <= iVar30)) {
                  iVar30 = iVar16 + -1;
                }
              }
              local_ec = (short)iVar30;
            }
            (*pcVar21)(param_1,lVar29,auStack_f0,local_110,iVar34);
            psVar33 = psVar33 + 0x40;
            uVar35 = uVar35 + 1;
            iVar34 = *(int *)(lVar29 + 0x24) + iVar34;
            iVar30 = iVar31;
          } while (uVar35 <= uVar12);
          uVar11 = uVar11 + 1;
          local_110 = local_110 + (long)*(int *)(lVar29 + 0x28) * 8;
        } while (uVar11 != uVar26);
      }
    }
    lVar29 = lVar29 + 0x60;
    local_1d0 = local_1d0 + 1;
  } while (local_1d0 < *(int *)(param_1 + 0x38));
LAB_00d76c6c:
  uVar7 = *(int *)(param_1 + 0xa8) + 1;
  uVar17 = 3;
  if (*(uint *)(param_1 + 400) <= uVar7) {
    uVar17 = 4;
  }
  uVar11 = (ulong)uVar17;
  *(uint *)(param_1 + 0xa8) = uVar7;
LAB_00d76c8c:
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


