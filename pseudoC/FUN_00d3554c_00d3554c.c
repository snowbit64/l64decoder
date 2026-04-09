// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3554c
// Entry Point: 00d3554c
// Size: 3140 bytes
// Signature: undefined FUN_00d3554c(void)


void FUN_00d3554c(long param_1,long param_2,undefined8 param_3,char **param_4,long *param_5)

{
  char *pcVar1;
  char **ppcVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  void *__dest;
  char *pcVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  int local_e4;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined auStack_88 [8];
  undefined *local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar28 = *(long *)(param_1 + 0x2a0);
  lVar14 = FUN_00d31dd4(param_1,lVar28 + 0x28,*param_4,0);
  if (lVar14 == 0) {
    pcVar18 = *param_4;
    do {
      pcVar20 = *(char **)(lVar28 + 0xb8);
      if (pcVar20 == *(char **)(lVar28 + 0xb0)) {
        cVar8 = FUN_00d328e8(lVar28 + 0xa0);
        if (cVar8 == '\0') goto LAB_00d360c0;
        pcVar20 = *(char **)(lVar28 + 0xb8);
      }
      cVar8 = *pcVar18;
      *(char **)(lVar28 + 0xb8) = pcVar20 + 1;
      *pcVar20 = cVar8;
      cVar8 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar8 != '\0');
    lVar14 = *(long *)(lVar28 + 0xc0);
    *(undefined8 *)(lVar28 + 0xc0) = *(undefined8 *)(lVar28 + 0xb8);
    if (((lVar14 != 0) && (lVar14 = FUN_00d31dd4(param_1,lVar28 + 0x28,lVar14,0x28), lVar14 != 0))
       && ((*(char *)(param_1 + 0x1c8) == '\0' ||
           (iVar11 = FUN_00d369d0(param_1,lVar14), iVar11 != 0)))) goto LAB_00d355ac;
  }
  else {
LAB_00d355ac:
    uVar25 = *(uint *)(lVar14 + 0x18);
    uVar10 = (**(code **)(param_2 + 0x48))
                       (param_2,param_3,*(undefined4 *)(param_1 + 0x2d0),
                        *(undefined8 *)(param_1 + 0x2e0));
    iVar11 = *(int *)(param_1 + 0x2d0);
    if (iVar11 < (int)(uVar10 + uVar25)) {
      uVar12 = uVar10 + uVar25 + 0x10;
      *(uint *)(param_1 + 0x2d0) = uVar12;
      lVar15 = (**(code **)(param_1 + 0x20))
                         (*(undefined8 *)(param_1 + 0x2e0),
                          -(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar12 << 5);
      if (lVar15 == 0) {
        uVar17 = 1;
        *(int *)(param_1 + 0x2d0) = iVar11;
        goto LAB_00d360c4;
      }
      *(long *)(param_1 + 0x2e0) = lVar15;
      if (iVar11 < (int)uVar10) {
        (**(code **)(param_2 + 0x48))(param_2,param_3,(ulong)uVar10,lVar15);
      }
    }
    plVar24 = *(long **)(param_1 + 0x2e0);
    lVar15 = param_1 + 0x310;
    ppcVar2 = (char **)(param_1 + 0x328);
    if ((int)uVar10 < 1) {
      local_e4 = 0;
      iVar11 = 0;
      *(undefined4 *)(param_1 + 0x2d4) = 0;
      plVar16 = *(long **)(lVar14 + 0x10);
joined_r0x00d3599c:
      if ((plVar16 == (long *)0x0) || (*(char *)(*plVar16 + -1) == '\0')) {
        lVar32 = 0xffffffff;
LAB_00d359ec:
        *(int *)(param_1 + 0x2d8) = (int)lVar32;
      }
      else if (0 < iVar11) {
        lVar32 = 0;
        do {
          if (plVar24[lVar32] == *plVar16) goto LAB_00d359ec;
          lVar32 = lVar32 + 2;
        } while ((int)lVar32 < iVar11);
      }
      if (0 < (int)uVar25) {
        lVar32 = 0;
        do {
          lVar19 = *(long *)(lVar14 + 0x20);
          plVar16 = *(long **)(lVar19 + lVar32);
          lVar21 = *plVar16;
          if ((*(char *)(lVar21 + -1) == '\0') && (*(long *)(lVar19 + lVar32 + 0x10) != 0)) {
            if (plVar16[1] == 0) {
              *(undefined *)(lVar21 + -1) = 1;
            }
            else {
              if (*(char *)((long)plVar16 + 0x11) != '\0') {
                uVar17 = FUN_00d36b10(param_1);
                if ((int)uVar17 == 0) goto LAB_00d35a30;
                goto LAB_00d360c4;
              }
              local_e4 = local_e4 + 1;
              *(undefined *)(lVar21 + -1) = 2;
            }
            lVar21 = (long)iVar11;
            iVar11 = iVar11 + 2;
            plVar24[lVar21] = **(long **)(lVar19 + lVar32);
            (plVar24 + lVar21)[1] = *(long *)(lVar19 + lVar32 + 0x10);
          }
LAB_00d35a30:
          lVar32 = lVar32 + 0x18;
        } while ((ulong)uVar25 * 0x18 - lVar32 != 0);
      }
      plVar24[iVar11] = 0;
      if (local_e4 == 0) {
        iVar13 = 0;
        if (0 < iVar11) goto LAB_00d35f5c;
      }
      else {
        bVar4 = *(byte *)(param_1 + 0x2f8);
        uVar25 = (uint)bVar4;
        if ((local_e4 << 1) >> (bVar4 & 0x1f) == 0) {
          lVar32 = *(long *)(param_1 + 0x2f0);
          iVar13 = 1 << (ulong)(bVar4 & 0x1f);
          if (lVar32 == 0) goto LAB_00d35b48;
        }
        else {
          do {
            uVar10 = uVar25 + 1;
            uVar12 = uVar25 & 0x1f;
            uVar25 = uVar10;
          } while (local_e4 >> uVar12 != 0);
          if ((uVar10 & 0xff) < 4) {
            uVar10 = 3;
          }
          iVar13 = 1 << (ulong)(uVar10 & 0x1f);
          *(char *)(param_1 + 0x2f8) = (char)uVar10;
          lVar32 = (**(code **)(param_1 + 0x20))
                             (*(undefined8 *)(param_1 + 0x2e8),(long)iVar13 * 0x18);
          if (lVar32 == 0) {
            uVar17 = 1;
            *(byte *)(param_1 + 0x2f8) = bVar4;
            goto LAB_00d360c4;
          }
          *(long *)(param_1 + 0x2e8) = lVar32;
LAB_00d35b48:
          lVar32 = *(long *)(param_1 + 0x2e8);
          uVar26 = (ulong)iVar13;
          if (iVar13 - 1U != 0) {
            uVar30 = (ulong)(iVar13 - 1U) + 1;
            uVar22 = uVar30 & 0x1fffffffe;
            lVar19 = uVar26 * 0x18;
            uVar26 = uVar26 - uVar22;
            uVar23 = uVar22;
            puVar27 = (undefined8 *)(lVar32 + lVar19);
            do {
              uVar23 = uVar23 - 2;
              puVar27[-3] = 0xffffffff;
              puVar27[-6] = 0xffffffff;
              puVar27 = puVar27 + -6;
            } while (uVar23 != 0);
            if (uVar30 == uVar22) {
              lVar32 = 0xffffffff;
              goto LAB_00d35bb4;
            }
          }
          puVar27 = (undefined8 *)(lVar32 + uVar26 * 0x18);
          lVar32 = 0xffffffff;
          do {
            puVar27 = puVar27 + -3;
            uVar25 = (int)uVar26 - 1;
            uVar26 = (ulong)uVar25;
            *puVar27 = 0xffffffff;
          } while (uVar25 != 0);
        }
LAB_00d35bb4:
        lVar32 = lVar32 + -1;
        *(long *)(param_1 + 0x2f0) = lVar32;
        if (iVar11 < 1) {
          lVar19 = 0;
        }
        else {
          uVar25 = iVar13 - 1;
          lVar19 = 0;
          do {
            while (pcVar18 = (char *)plVar24[lVar19], lVar21 = param_1, pcVar18[-1] == '\x02') {
              do {
                lVar31 = lVar21;
                lVar21 = *(long *)(lVar31 + 0x380);
              } while (lVar21 != 0);
              uStack_78 = 0;
              uStack_90 = *(ulong *)(lVar31 + 0x398);
              uStack_a0 = uStack_90 ^ 0x646f72616e646f6d;
              uStack_90 = uStack_90 ^ 0x7465646279746573;
              local_a8 = 0x736f6d6570736575;
              local_98 = 0x6c7967656e657261;
              pcVar18[-1] = '\0';
              local_80 = auStack_88;
              lVar21 = FUN_00d31dd4(param_1,lVar28 + 0x50,pcVar18,0);
              if ((lVar21 == 0) || (*(long *)(lVar21 + 8) == 0)) goto LAB_00d360c0;
              puVar27 = *(undefined8 **)(*(long *)(lVar21 + 8) + 8);
              if (puVar27 == (undefined8 *)0x0) goto LAB_00d3600c;
              iVar29 = *(int *)(puVar27 + 5);
              if (0 < iVar29) {
                lVar21 = 0;
                do {
                  pcVar20 = *(char **)(param_1 + 0x328);
                  cVar8 = *(char *)(puVar27[4] + lVar21);
                  if (pcVar20 == *(char **)(param_1 + 800)) {
                    cVar9 = FUN_00d328e8(lVar15);
                    if (cVar9 == '\0') goto LAB_00d360c0;
                    pcVar20 = *ppcVar2;
                  }
                  lVar21 = lVar21 + 1;
                  *ppcVar2 = pcVar20 + 1;
                  *pcVar20 = cVar8;
                  iVar29 = *(int *)(puVar27 + 5);
                } while (lVar21 < iVar29);
              }
              FUN_00d33b4c(&local_a8,puVar27[4],(long)iVar29);
              do {
                pcVar20 = pcVar18 + 1;
                cVar8 = *pcVar18;
                pcVar18 = pcVar20;
              } while (cVar8 != ':');
              if (*pcVar20 == '\0') {
                lVar21 = 0;
              }
              else {
                lVar31 = 0;
                do {
                  lVar21 = lVar31 + 1;
                  lVar6 = lVar31 + 1;
                  lVar31 = lVar21;
                } while (pcVar20[lVar6] != '\0');
              }
              FUN_00d33b4c(&local_a8,pcVar20,lVar21);
              do {
                pcVar18 = *(char **)(param_1 + 0x328);
                if (pcVar18 == *(char **)(param_1 + 800)) {
                  cVar8 = FUN_00d328e8(lVar15);
                  if (cVar8 == '\0') goto LAB_00d360c0;
                  pcVar18 = *ppcVar2;
                }
                cVar8 = *pcVar20;
                *ppcVar2 = pcVar18 + 1;
                *pcVar18 = cVar8;
                cVar8 = *pcVar20;
                pcVar20 = pcVar20 + 1;
              } while (cVar8 != '\0');
              uVar26 = FUN_00d33c64(&local_a8);
              uVar10 = uVar25 & (uint)uVar26;
              lVar21 = *(long *)(param_1 + 0x2e8);
              lVar31 = (long)(int)uVar10;
              if (*(long *)(lVar21 + (long)(int)uVar10 * 0x18) == lVar32) {
                uVar12 = 0;
                do {
                  if (uVar26 == *(ulong *)(lVar21 + lVar31 * 0x18 + 8)) {
                    pcVar18 = *(char **)(param_1 + 0x330);
                    cVar8 = *pcVar18;
                    bVar7 = cVar8 == '\0';
                    if ((cVar8 != '\0') &&
                       (pcVar20 = *(char **)(lVar21 + lVar31 * 0x18 + 0x10), cVar8 == *pcVar20)) {
                      do {
                        pcVar18 = pcVar18 + 1;
                        pcVar20 = pcVar20 + 1;
                        cVar8 = *pcVar18;
                        bVar7 = cVar8 == '\0';
                        if (cVar8 == '\0') break;
                      } while (cVar8 == *pcVar20);
                    }
                    if (bVar7) goto LAB_00d36020;
                  }
                  if (uVar12 == 0) {
                    uVar12 = (uint)((uVar26 & ~(long)(int)uVar25) >>
                                   ((ulong)(*(byte *)(param_1 + 0x2f8) - 1) & 0x3f)) &
                             (uint)((ulong)(long)(int)uVar25 >> 2) & 0xff | 1;
                  }
                  iVar29 = iVar13;
                  if ((int)uVar12 <= (int)uVar10) {
                    iVar29 = 0;
                  }
                  uVar10 = (uVar10 - uVar12) + iVar29;
                  lVar31 = (long)(int)uVar10;
                } while (*(long *)(lVar21 + (long)(int)uVar10 * 0x18) == lVar32);
              }
              if (*(char *)(param_1 + 0x1c9) != '\0') {
                *(undefined *)(*(long *)(param_1 + 0x328) + -1) = *(undefined *)(param_1 + 0x37c);
                pcVar18 = *(char **)*puVar27;
                do {
                  pcVar20 = *(char **)(param_1 + 0x328);
                  if (pcVar20 == *(char **)(param_1 + 800)) {
                    cVar8 = FUN_00d328e8(lVar15);
                    if (cVar8 == '\0') goto LAB_00d360c0;
                    pcVar20 = *ppcVar2;
                  }
                  cVar8 = *pcVar18;
                  *ppcVar2 = pcVar20 + 1;
                  *pcVar20 = cVar8;
                  cVar8 = *pcVar18;
                  pcVar18 = pcVar18 + 1;
                } while (cVar8 != '\0');
              }
              lVar21 = *(long *)(param_1 + 0x330);
              *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
              plVar24[lVar19] = lVar21;
              plVar16 = (long *)(*(long *)(param_1 + 0x2e8) + lVar31 * 0x18);
              local_e4 = local_e4 + -1;
              *plVar16 = lVar32;
              plVar16[1] = uVar26;
              plVar16[2] = lVar21;
              if (local_e4 == 0) {
                iVar13 = (int)lVar19 + 2;
                goto joined_r0x00d36184;
              }
              lVar19 = lVar19 + 2;
              if (iVar11 <= (int)lVar19) goto LAB_00d35f54;
            }
            pcVar18[-1] = '\0';
            lVar19 = lVar19 + 2;
          } while ((int)lVar19 < iVar11);
        }
LAB_00d35f54:
        iVar13 = (int)lVar19;
joined_r0x00d36184:
        if (iVar13 < iVar11) {
LAB_00d35f5c:
          lVar15 = (long)iVar13;
          do {
            plVar16 = plVar24 + lVar15;
            lVar15 = lVar15 + 2;
            *(undefined *)(*plVar16 + -1) = 0;
          } while (lVar15 < iVar11);
        }
      }
      for (lVar15 = *param_5; lVar15 != 0; lVar15 = *(long *)(lVar15 + 8)) {
        *(undefined *)(**(long **)(lVar15 + 0x18) + -1) = 0;
      }
      if (*(char *)(param_1 + 0x1c8) == '\0') {
LAB_00d36004:
        uVar17 = 0;
        goto LAB_00d360c4;
      }
      if (*(long *)(lVar14 + 8) == 0) {
        puVar27 = *(undefined8 **)(lVar28 + 0x138);
        if (puVar27 == (undefined8 *)0x0) goto LAB_00d36004;
        pcVar18 = *param_4;
      }
      else {
        puVar27 = *(undefined8 **)(*(long *)(lVar14 + 8) + 8);
        if (puVar27 == (undefined8 *)0x0) {
LAB_00d3600c:
          uVar17 = 0x1b;
          goto LAB_00d360c4;
        }
        pcVar20 = *param_4;
        do {
          pcVar18 = pcVar20 + 1;
          cVar8 = *pcVar20;
          pcVar20 = pcVar18;
        } while (cVar8 != ':');
      }
      uVar26 = (ulong)*(byte *)(param_1 + 0x1c9);
      pcVar20 = *(char **)*puVar27;
      if (*(byte *)(param_1 + 0x1c9) != 0) {
        if (pcVar20 == (char *)0x0) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          do {
            pcVar1 = pcVar20 + uVar26;
            uVar26 = uVar26 + 1;
          } while (*pcVar1 != '\0');
        }
      }
      param_4[1] = pcVar18;
      uVar30 = 0;
      iVar11 = *(int *)(puVar27 + 5);
      iVar13 = (int)uVar26;
      param_4[2] = pcVar20;
      *(int *)((long)param_4 + 0x1c) = iVar11;
      *(int *)(param_4 + 4) = iVar13;
      do {
        pcVar20 = pcVar18 + uVar30;
        uVar30 = uVar30 + 1;
      } while (*pcVar20 != '\0');
      iVar29 = (int)uVar30;
      if (*(int *)((long)puVar27 + 0x2c) < iVar13 + iVar11 + iVar29) {
        __dest = (void *)(**(code **)(param_1 + 0x18))((long)(iVar13 + iVar11 + iVar29 + 0x18));
        if (__dest == (void *)0x0) goto LAB_00d360c0;
        *(int *)((long)puVar27 + 0x2c) = iVar13 + iVar11 + iVar29 + 0x18;
        memcpy(__dest,(void *)puVar27[4],(long)*(int *)(puVar27 + 5));
        lVar14 = puVar27[4];
        for (plVar24 = *(long **)(param_1 + 0x2b0); plVar24 != (long *)0x0;
            plVar24 = (long *)*plVar24) {
          if (plVar24[3] == lVar14) {
            plVar24[3] = (long)__dest;
          }
        }
        (**(code **)(param_1 + 0x28))();
        iVar11 = *(int *)(puVar27 + 5);
        puVar27[4] = __dest;
      }
      else {
        __dest = (void *)puVar27[4];
      }
      memcpy((void *)((long)__dest + (long)iVar11),pcVar18,uVar30 & 0xffffffff);
      if (iVar13 != 0) {
        puVar3 = (undefined *)((long)(void *)((long)__dest + (long)iVar11) + (ulong)(iVar29 - 1));
        *puVar3 = *(undefined *)(param_1 + 0x37c);
        memcpy(puVar3 + 1,*(void **)*puVar27,(long)iVar13);
      }
      uVar17 = 0;
      *param_4 = (char *)puVar27[4];
      goto LAB_00d360c4;
    }
    lVar32 = *plVar24;
    iVar11 = (**(code **)(param_2 + 0x38))(param_2,lVar32);
    plVar16 = (long *)FUN_00d325e8(param_1,param_2,lVar32,lVar32 + iVar11);
    if (plVar16 != (long *)0x0) {
      iVar11 = 0;
      uVar26 = 0;
      local_e4 = 0;
      do {
        if (*(char *)(*plVar16 + -1) != '\0') {
          if (*(long *)(param_1 + 0x120) == param_2) {
            uVar17 = 8;
            *(undefined8 *)(param_1 + 0x220) =
                 *(undefined8 *)(*(long *)(param_1 + 0x2e0) + (uVar26 & 0xffffffff) * 0x20);
          }
          else {
LAB_00d36020:
            uVar17 = 8;
          }
          break;
        }
        *(undefined *)(*plVar16 + -1) = 1;
        plVar24[iVar11] = *plVar16;
        lVar32 = *(long *)(param_1 + 0x2e0) + uVar26 * 0x20;
        iVar13 = (int)((long)iVar11 + 1);
        if (*(char *)(lVar32 + 0x18) == '\0') {
          cVar8 = '\x01';
          if ((*(char *)(plVar16 + 2) != '\0') && (0 < (int)uVar25)) {
            pcVar18 = (char *)(*(long *)(lVar14 + 0x20) + 8);
            uVar30 = (ulong)uVar25;
            do {
              if (plVar16 == *(long **)(pcVar18 + -8)) {
                cVar8 = *pcVar18;
                goto LAB_00d35718;
              }
              pcVar18 = pcVar18 + 0x18;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
            cVar8 = '\x01';
          }
LAB_00d35718:
          lVar32 = *(long *)(param_1 + 0x2e0) + uVar26 * 0x20;
          uVar17 = FUN_00d36f8c(param_1,param_2,cVar8,*(undefined8 *)(lVar32 + 8),
                                *(undefined8 *)(lVar32 + 0x10),lVar15);
          if ((int)uVar17 != 0) break;
          pcVar18 = *ppcVar2;
          if (((cVar8 == '\0') && (pcVar18 != *(char **)(param_1 + 0x330))) &&
             (pcVar20 = pcVar18 + -1, *pcVar20 == ' ')) {
            *ppcVar2 = pcVar20;
            pcVar18 = pcVar20;
          }
          if (pcVar18 == *(char **)(param_1 + 800)) {
            cVar8 = FUN_00d328e8(lVar15);
            if (cVar8 == '\0') goto LAB_00d360c0;
            pcVar18 = *ppcVar2;
          }
          *(char **)(param_1 + 0x328) = pcVar18 + 1;
          *pcVar18 = '\0';
          plVar24[(long)iVar11 + 1] = *(long *)(param_1 + 0x330);
        }
        else {
          local_a8 = *(undefined8 *)(lVar32 + 8);
          uVar17 = *(undefined8 *)(lVar32 + 0x10);
          if (*ppcVar2 != (char *)0x0) goto LAB_00d357bc;
          do {
            cVar8 = FUN_00d328e8(lVar15);
            if (cVar8 == '\0') goto LAB_00d359d4;
LAB_00d357bc:
            uVar12 = (**(code **)(param_2 + 0x70))
                               (param_2,&local_a8,uVar17,ppcVar2,*(undefined8 *)(param_1 + 800));
          } while (1 < uVar12);
          if (*(long *)(param_1 + 0x330) == 0) {
LAB_00d359d4:
            uVar17 = 1;
            plVar24[iVar13] = 0;
            break;
          }
          pcVar18 = *(char **)(param_1 + 0x328);
          if (pcVar18 == *(char **)(param_1 + 800)) {
            cVar8 = FUN_00d328e8(lVar15);
            if (cVar8 == '\0') goto LAB_00d359d4;
            pcVar18 = *ppcVar2;
          }
          *(char **)(param_1 + 0x328) = pcVar18 + 1;
          *pcVar18 = '\0';
          lVar32 = *(long *)(param_1 + 0x330);
          plVar24[iVar13] = lVar32;
          if (lVar32 == 0) goto LAB_00d360c0;
        }
        *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x328);
        if (plVar16[1] == 0) {
          iVar11 = iVar11 + 2;
        }
        else if (*(char *)((long)plVar16 + 0x11) == '\0') {
          iVar11 = iVar11 + 2;
          local_e4 = local_e4 + 1;
          *(undefined *)(*plVar16 + -1) = 2;
        }
        else {
          uVar17 = FUN_00d36b10(param_1,plVar16[1],plVar16,plVar24[iVar13],param_5);
          if ((int)uVar17 != 0) break;
        }
        if (uVar26 + 1 == (ulong)uVar10) {
          *(int *)(param_1 + 0x2d4) = iVar11;
          plVar16 = *(long **)(lVar14 + 0x10);
          goto joined_r0x00d3599c;
        }
        uVar26 = uVar26 + 1;
        lVar32 = *(long *)(*(long *)(param_1 + 0x2e0) + uVar26 * 0x20);
        iVar13 = (**(code **)(param_2 + 0x38))(param_2,lVar32);
        plVar16 = (long *)FUN_00d325e8(param_1,param_2,lVar32,lVar32 + iVar13);
        uVar17 = 1;
      } while (plVar16 != (long *)0x0);
      goto LAB_00d360c4;
    }
  }
LAB_00d360c0:
  uVar17 = 1;
LAB_00d360c4:
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar17);
}


