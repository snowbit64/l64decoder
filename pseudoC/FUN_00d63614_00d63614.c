// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d63614
// Entry Point: 00d63614
// Size: 2832 bytes
// Signature: undefined FUN_00d63614(void)


void FUN_00d63614(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  code **ppcVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  short *psVar19;
  uint *puVar20;
  char **ppcVar21;
  int iVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  char *local_a0;
  char *local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  lVar29 = param_1[0x44];
  local_a0 = *(char **)param_1[5];
  local_98 = ((char **)param_1[5])[1];
  uStack_88 = *(ulong *)(lVar29 + 0x20);
  local_90 = *(ulong *)(lVar29 + 0x18);
  local_70 = param_1;
  uStack_78 = *(undefined8 *)(lVar29 + 0x30);
  uStack_80 = *(undefined8 *)(lVar29 + 0x28);
  plVar23 = param_1;
  if ((*(int *)(param_1 + 0x26) != 0) && (*(int *)(lVar29 + 0x38) == 0)) {
    uVar3 = *(undefined4 *)(lVar29 + 0x3c);
    if (0 < (int)uStack_88) {
      iVar22 = (int)uStack_88 + 7;
      local_90 = local_90 | 0x7fL << ((ulong)(0x11 - (int)uStack_88) & 0x3f);
      while( true ) {
        *local_a0 = (char)(local_90 >> 0x10);
        local_98 = local_98 + -1;
        local_a0 = local_a0 + 1;
        if (local_98 == (char *)0x0) {
          ppcVar21 = (char **)local_70[5];
          cVar7 = (*(code *)ppcVar21[3])();
          if (cVar7 == '\0') goto LAB_00d64010;
          local_98 = ppcVar21[1];
          local_a0 = *ppcVar21;
        }
        if ((~(uint)local_90 & 0xff0000) == 0) {
          *local_a0 = '\0';
          local_98 = local_98 + -1;
          local_a0 = local_a0 + 1;
          if (local_98 == (char *)0x0) {
            ppcVar21 = (char **)local_70[5];
            cVar7 = (*(code *)ppcVar21[3])();
            if (cVar7 == '\0') goto LAB_00d64010;
            local_a0 = *ppcVar21;
            local_98 = ppcVar21[1];
          }
        }
        if (iVar22 < 0x10) break;
        iVar22 = iVar22 + -8;
        local_90 = local_90 << 8;
      }
    }
    pcVar13 = local_a0 + 1;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    local_90 = 0;
    *local_a0 = -1;
    local_98 = local_98 + -1;
    if (local_98 == (char *)0x0) {
      ppcVar21 = (char **)local_70[5];
      cVar7 = (*(code *)ppcVar21[3])();
      if (cVar7 != '\0') {
        pcVar13 = *ppcVar21;
        local_98 = ppcVar21[1];
        goto LAB_00d640b0;
      }
LAB_00d64010:
      uVar8 = 0;
      if (*(long *)(lVar12 + 0x28) == local_68) {
        return;
      }
      goto LAB_00d64058;
    }
LAB_00d640b0:
    plVar23 = local_70;
    local_a0 = pcVar13 + 1;
    *pcVar13 = (char)uVar3 + -0x30;
    local_98 = local_98 + -1;
    if (local_98 == (char *)0x0) {
      ppcVar21 = (char **)local_70[5];
      cVar7 = (*(code *)ppcVar21[3])(local_70);
      if (cVar7 == '\0') goto LAB_00d64010;
      local_a0 = *ppcVar21;
      local_98 = ppcVar21[1];
    }
    if (0 < *(int *)((long)plVar23 + 0x164)) {
      lVar14 = 0;
      do {
        *(undefined4 *)((long)&uStack_88 + lVar14 * 4 + 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)((long)plVar23 + 0x164));
    }
  }
  pcVar13 = local_98;
  if (0 < *(int *)(param_1 + 0x32)) {
    lVar14 = 0;
LAB_00d63778:
    psVar19 = *(short **)(param_2 + lVar14 * 8);
    lVar9 = (long)*(int *)((long)param_1 + lVar14 * 4 + 0x194);
    uVar4 = *(uint *)(plVar23 + 0x3b);
    piVar18 = (int *)((long)&uStack_88 + lVar9 * 4 + 4);
    puVar20 = *(uint **)(lVar29 + (long)*(int *)(param_1[lVar9 + 0x2d] + 0x14) * 8 + 0x40);
    puVar10 = *(uint **)(lVar29 + (long)*(int *)(param_1[lVar9 + 0x2d] + 0x1c) * 8 + 0x60);
    uVar27 = (int)*psVar19 - *piVar18;
    lVar9 = plVar23[0x3a];
    if (uVar27 == 0) {
      uVar24 = 0;
      uVar26 = *puVar20;
      bVar5 = *(byte *)(puVar20 + 0x100);
    }
    else {
      uVar15 = -uVar27;
      uVar26 = 0xffffffff;
      if (-1 < (int)uVar27) {
        uVar15 = uVar27;
      }
      do {
        uVar28 = uVar26;
        uVar26 = uVar28 + 1;
        bVar1 = 1 < uVar15;
        uVar15 = uVar15 >> 1;
      } while (bVar1);
      uVar28 = uVar28 + 2;
      if (10 < uVar26) {
        ppcVar11 = (code **)*plVar23;
        *(undefined4 *)(ppcVar11 + 5) = 6;
        (**ppcVar11)(plVar23);
      }
      uVar24 = (ulong)uVar28;
      uVar26 = puVar20[uVar28];
      bVar5 = *(byte *)((long)puVar20 + uVar24 + 0x400);
    }
    if (bVar5 == 0) {
      ppcVar11 = (code **)*plVar23;
      *(undefined4 *)(ppcVar11 + 5) = 0x29;
      (**ppcVar11)(plVar23);
    }
    uVar15 = (int)uStack_88 + (uint)bVar5;
    local_90 = (ulong)(~(uint)(-1L << ((ulong)bVar5 & 0x3f)) & uVar26) <<
               ((ulong)(0x18 - uVar15) & 0x3f) | local_90;
    uVar26 = uVar15;
    if (7 < (int)uVar15) {
      do {
        pcVar13 = local_a0 + 1;
        *local_a0 = (char)(local_90 >> 0x10);
        local_98 = local_98 + -1;
        if (local_98 == (char *)0x0) {
          ppcVar21 = (char **)local_70[5];
          cVar7 = (*(code *)ppcVar21[3])();
          if (cVar7 == '\0') goto LAB_00d64010;
          pcVar13 = *ppcVar21;
          local_98 = ppcVar21[1];
        }
        local_a0 = pcVar13;
        if ((~(uint)local_90 & 0xff0000) == 0) {
          local_a0 = pcVar13 + 1;
          *pcVar13 = '\0';
          local_98 = local_98 + -1;
          if (local_98 == (char *)0x0) {
            ppcVar21 = (char **)local_70[5];
            cVar7 = (*(code *)ppcVar21[3])();
            if (cVar7 == '\0') goto LAB_00d64010;
            local_a0 = *ppcVar21;
            local_98 = ppcVar21[1];
          }
        }
        uVar15 = uVar26 - 8;
        local_90 = local_90 << 8;
        bVar1 = 0xf < (int)uVar26;
        pcVar13 = local_98;
        uVar26 = uVar15;
      } while (bVar1);
    }
    uStack_88 = CONCAT44(uStack_88._4_4_,uVar15);
    if ((int)uVar24 != 0) {
      uVar15 = uVar15 + (int)uVar24;
      local_90 = (ulong)(~(uint)(-1L << (uVar24 & 0x3f)) & uVar27 + ((int)uVar27 >> 0x1f)) <<
                 ((ulong)(0x18 - uVar15) & 0x3f) | local_90;
      uVar27 = uVar15;
      if (7 < (int)uVar15) {
        do {
          pcVar13 = local_a0 + 1;
          *local_a0 = (char)(local_90 >> 0x10);
          local_98 = local_98 + -1;
          if (local_98 == (char *)0x0) {
            ppcVar21 = (char **)local_70[5];
            cVar7 = (*(code *)ppcVar21[3])();
            if (cVar7 == '\0') goto LAB_00d64010;
            pcVar13 = *ppcVar21;
            local_98 = ppcVar21[1];
          }
          local_a0 = pcVar13;
          if ((~(uint)local_90 & 0xff0000) == 0) {
            local_a0 = pcVar13 + 1;
            *pcVar13 = '\0';
            local_98 = local_98 + -1;
            if (local_98 == (char *)0x0) {
              ppcVar21 = (char **)local_70[5];
              cVar7 = (*(code *)ppcVar21[3])();
              if (cVar7 == '\0') goto LAB_00d64010;
              local_a0 = *ppcVar21;
              local_98 = ppcVar21[1];
            }
          }
          uVar15 = uVar27 - 8;
          local_90 = local_90 << 8;
          bVar1 = 0xf < (int)uVar27;
          pcVar13 = local_98;
          uVar27 = uVar15;
        } while (bVar1);
      }
      uStack_88 = CONCAT44(uStack_88._4_4_,uVar15);
    }
    if (0 < (int)uVar4) {
      uVar24 = 1;
      do {
        uVar27 = 0;
        uVar25 = uVar24;
        while (sVar6 = psVar19[*(int *)(lVar9 + uVar25 * 4)], sVar6 == 0) {
          uVar27 = uVar27 + 1;
          uVar25 = uVar25 + 1;
          if ((ulong)uVar4 + 1 == uVar25) {
            bVar5 = *(byte *)(puVar10 + 0x100);
            uVar4 = *puVar10;
            if (bVar5 == 0) {
              ppcVar11 = (code **)*local_70;
              *(undefined4 *)(ppcVar11 + 5) = 0x29;
              (**ppcVar11)();
            }
            iVar22 = uVar15 + bVar5;
            local_90 = (ulong)(~(uint)(-1L << ((ulong)bVar5 & 0x3f)) & uVar4) <<
                       ((ulong)(0x18 - iVar22) & 0x3f) | local_90;
            if (iVar22 < 8) goto LAB_00d63f70;
            goto LAB_00d63ec4;
          }
        }
        uVar26 = uVar27;
        if (0xf < uVar27) {
          do {
            bVar5 = *(byte *)(puVar10 + 0x13c);
            uVar27 = puVar10[0xf0];
            if (bVar5 == 0) {
              ppcVar11 = (code **)*local_70;
              *(undefined4 *)(ppcVar11 + 5) = 0x29;
              (**ppcVar11)();
            }
            uVar15 = uVar15 + bVar5;
            local_90 = (ulong)(~(uint)(-1L << ((ulong)bVar5 & 0x3f)) & uVar27) <<
                       ((ulong)(0x18 - uVar15) & 0x3f) | local_90;
            uVar27 = uVar15;
            if (7 < (int)uVar15) {
              do {
                pcVar13 = local_a0 + 1;
                *local_a0 = (char)(local_90 >> 0x10);
                local_98 = local_98 + -1;
                if (local_98 == (char *)0x0) {
                  ppcVar21 = (char **)local_70[5];
                  cVar7 = (*(code *)ppcVar21[3])();
                  if (cVar7 == '\0') goto LAB_00d64010;
                  pcVar13 = *ppcVar21;
                  local_98 = ppcVar21[1];
                }
                local_a0 = pcVar13;
                if ((~(uint)local_90 & 0xff0000) == 0) {
                  local_a0 = pcVar13 + 1;
                  *pcVar13 = '\0';
                  local_98 = local_98 + -1;
                  if (local_98 == (char *)0x0) {
                    ppcVar21 = (char **)local_70[5];
                    cVar7 = (*(code *)ppcVar21[3])();
                    if (cVar7 == '\0') goto LAB_00d64010;
                    local_a0 = *ppcVar21;
                    local_98 = ppcVar21[1];
                  }
                }
                uVar15 = uVar27 - 8;
                local_90 = local_90 << 8;
                bVar1 = 0xf < uVar27;
                pcVar13 = local_98;
                uVar27 = uVar15;
              } while (bVar1);
            }
            uVar27 = uVar26 - 0x10;
            uStack_88 = CONCAT44(uStack_88._4_4_,uVar15);
            bVar1 = 0x1f < (int)uVar26;
            uVar26 = uVar27;
          } while (bVar1);
        }
        uVar28 = (uint)sVar6;
        uVar26 = -uVar28;
        if (-1 < sVar6) {
          uVar26 = uVar28;
        }
        if (uVar26 < 2) {
          uVar24 = 1;
        }
        else {
          uVar2 = 0;
          do {
            uVar16 = uVar2;
            uVar2 = uVar16 + 1;
            bVar1 = 3 < uVar26;
            uVar26 = uVar26 >> 1;
          } while (bVar1);
          uVar24 = (ulong)(uVar16 + 2);
          if (9 < uVar2) {
            ppcVar11 = (code **)*local_70;
            *(undefined4 *)(ppcVar11 + 5) = 6;
            (**ppcVar11)();
          }
        }
        iVar22 = (int)uVar24 + uVar27 * 0x10;
        uVar27 = puVar10[iVar22];
        bVar5 = *(byte *)((long)puVar10 + (long)iVar22 + 0x400);
        if (bVar5 == 0) {
          ppcVar11 = (code **)*local_70;
          *(undefined4 *)(ppcVar11 + 5) = 0x29;
          (**ppcVar11)();
        }
        uVar15 = uVar15 + bVar5;
        local_90 = (ulong)(~(uint)(-1L << ((ulong)bVar5 & 0x3f)) & uVar27) <<
                   ((ulong)(0x18 - uVar15) & 0x3f) | local_90;
        uVar27 = uVar15;
        if (7 < (int)uVar15) {
          do {
            pcVar13 = local_a0 + 1;
            *local_a0 = (char)(local_90 >> 0x10);
            local_98 = local_98 + -1;
            if (local_98 == (char *)0x0) {
              ppcVar21 = (char **)local_70[5];
              cVar7 = (*(code *)ppcVar21[3])();
              if (cVar7 == '\0') goto LAB_00d64010;
              pcVar13 = *ppcVar21;
              local_98 = ppcVar21[1];
            }
            local_a0 = pcVar13;
            if ((~(uint)local_90 & 0xff0000) == 0) {
              local_a0 = pcVar13 + 1;
              *pcVar13 = '\0';
              local_98 = local_98 + -1;
              if (local_98 == (char *)0x0) {
                ppcVar21 = (char **)local_70[5];
                cVar7 = (*(code *)ppcVar21[3])();
                if (cVar7 == '\0') goto LAB_00d64010;
                local_a0 = *ppcVar21;
                local_98 = ppcVar21[1];
              }
            }
            uVar15 = uVar27 - 8;
            local_90 = local_90 << 8;
            bVar1 = 0xf < uVar27;
            pcVar13 = local_98;
            uVar27 = uVar15;
          } while (bVar1);
        }
        uVar15 = uVar15 + (int)uVar24;
        local_90 = (ulong)(~(uint)(-1L << (uVar24 & 0x3f)) & uVar28 + ((int)uVar28 >> 0xf)) <<
                   ((ulong)(0x18 - uVar15) & 0x3f) | local_90;
        if (7 < (int)uVar15) {
          do {
            pcVar13 = local_a0 + 1;
            *local_a0 = (char)(local_90 >> 0x10);
            local_98 = local_98 + -1;
            if (local_98 == (char *)0x0) {
              ppcVar21 = (char **)local_70[5];
              cVar7 = (*(code *)ppcVar21[3])();
              if (cVar7 == '\0') goto LAB_00d64010;
              pcVar13 = *ppcVar21;
              local_98 = ppcVar21[1];
            }
            local_a0 = pcVar13;
            if ((~(uint)local_90 & 0xff0000) == 0) {
              local_a0 = pcVar13 + 1;
              *pcVar13 = '\0';
              local_98 = local_98 + -1;
              if (local_98 == (char *)0x0) {
                ppcVar21 = (char **)local_70[5];
                cVar7 = (*(code *)ppcVar21[3])();
                if (cVar7 == '\0') goto LAB_00d64010;
                local_a0 = *ppcVar21;
                local_98 = ppcVar21[1];
              }
            }
            uVar27 = uVar15 - 8;
            local_90 = local_90 << 8;
            bVar1 = 0xf < uVar15;
            pcVar13 = local_98;
            uVar15 = uVar27;
          } while (bVar1);
        }
        uVar24 = uVar25 + 1;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar15);
      } while (uVar4 != uVar25);
    }
    goto LAB_00d63f78;
  }
LAB_00d63fac:
  ppcVar21 = (char **)param_1[5];
  *ppcVar21 = local_a0;
  ppcVar21[1] = pcVar13;
  *(ulong *)(lVar29 + 0x20) = uStack_88;
  *(ulong *)(lVar29 + 0x18) = local_90;
  *(undefined8 *)(lVar29 + 0x30) = uStack_78;
  *(undefined8 *)(lVar29 + 0x28) = uStack_80;
  iVar22 = *(int *)(param_1 + 0x26);
  if (iVar22 == 0) {
    lVar12 = *(long *)(lVar12 + 0x28);
  }
  else {
    iVar17 = *(int *)(lVar29 + 0x38);
    if (*(int *)(lVar29 + 0x38) == 0) {
      *(uint *)(lVar29 + 0x3c) = *(int *)(lVar29 + 0x3c) + 1U & 7;
      iVar17 = iVar22;
    }
    *(int *)(lVar29 + 0x38) = iVar17 + -1;
    lVar12 = *(long *)(lVar12 + 0x28);
  }
  uVar8 = 1;
  if (lVar12 == local_68) {
    return;
  }
LAB_00d64058:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
  while( true ) {
    local_a0 = pcVar13;
    if ((~(uint)local_90 & 0xff0000) == 0) {
      local_a0 = pcVar13 + 1;
      *pcVar13 = '\0';
      local_98 = local_98 + -1;
      if (local_98 == (char *)0x0) {
        ppcVar21 = (char **)local_70[5];
        cVar7 = (*(code *)ppcVar21[3])();
        if (cVar7 == '\0') goto LAB_00d64010;
        local_a0 = *ppcVar21;
        local_98 = ppcVar21[1];
      }
    }
    iVar17 = iVar22 + -8;
    local_90 = local_90 << 8;
    bVar1 = iVar22 < 0x10;
    pcVar13 = local_98;
    iVar22 = iVar17;
    if (bVar1) break;
LAB_00d63ec4:
    pcVar13 = local_a0 + 1;
    *local_a0 = (char)(local_90 >> 0x10);
    local_98 = local_98 + -1;
    if (local_98 == (char *)0x0) {
      ppcVar21 = (char **)local_70[5];
      cVar7 = (*(code *)ppcVar21[3])();
      if (cVar7 == '\0') goto LAB_00d64010;
      pcVar13 = *ppcVar21;
      local_98 = ppcVar21[1];
    }
  }
LAB_00d63f70:
  uStack_88 = CONCAT44(uStack_88._4_4_,iVar22);
LAB_00d63f78:
  lVar9 = lVar14 * 8;
  lVar14 = lVar14 + 1;
  iVar22 = *(int *)(param_1 + 0x32);
  *piVar18 = (int)**(short **)(param_2 + lVar9);
  plVar23 = local_70;
  if (iVar22 <= lVar14) goto LAB_00d63fac;
  goto LAB_00d63778;
}


