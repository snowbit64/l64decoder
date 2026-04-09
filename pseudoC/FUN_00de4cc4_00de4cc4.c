// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00de4cc4
// Entry Point: 00de4cc4
// Size: 4472 bytes
// Signature: undefined FUN_00de4cc4(void)


void FUN_00de4cc4(rcLogCategory param_1,int param_2,int param_3,ushort *param_4,uint *param_5,
                 ushort *param_6)

{
  undefined (*pauVar1) [16];
  long lVar2;
  uint *puVar3;
  uint **this;
  uint **this_00;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  long lVar12;
  bool bVar13;
  void *pvVar14;
  long lVar15;
  undefined (*pauVar16) [16];
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  uint uVar20;
  ushort uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  ulong uVar27;
  long lVar28;
  uint *puVar29;
  int *piVar30;
  ushort *puVar31;
  ulong uVar32;
  uint *puVar33;
  short *psVar34;
  ulong uVar35;
  long lVar36;
  int iVar37;
  short *psVar38;
  short *psVar39;
  uint uVar40;
  ulong uVar41;
  long *plVar42;
  ulong uVar43;
  char *pcVar44;
  uint uVar45;
  int *piVar46;
  ulong uVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint **ppuVar51;
  int iVar52;
  uint uVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  int *local_a0;
  ulong local_98;
  void *local_90;
  undefined8 local_88;
  uint *local_80;
  ulong local_78;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  uVar21 = *param_4;
  uVar7 = *param_5;
  lVar2 = (ulong)uVar21 + 1;
  uVar20 = param_5[1];
  pvVar14 = (void *)rcAlloc((int)lVar2 * 0x30,1);
  if (pvVar14 != (void *)0x0) {
    lVar23 = 0;
    puVar26 = (undefined *)((long)pvVar14 + 8);
    do {
      *(undefined4 *)(puVar26 + -8) = 0;
      *(short *)(puVar26 + -4) = (short)lVar23;
      lVar23 = lVar23 + 1;
      *(undefined2 *)(puVar26 + -2) = 0;
      *puVar26 = 0;
      *(undefined8 *)(puVar26 + 0x10) = 0;
      *(undefined8 *)(puVar26 + 8) = 0;
      *(undefined8 *)(puVar26 + 0x20) = 0;
      *(undefined8 *)(puVar26 + 0x18) = 0;
      puVar26 = puVar26 + 0x30;
    } while (lVar2 != lVar23);
    if ((0 < (int)uVar20) && (0 < (int)uVar7)) {
      uVar27 = 0;
      do {
        uVar32 = 0;
        do {
          lVar28 = *(long *)(param_5 + 0x10);
          lVar23 = uVar32 + uVar27 * uVar7;
          uVar53 = *(uint *)(lVar28 + lVar23 * 4);
          if (uVar53 >> 0x18 != 0) {
            uVar43 = (ulong)uVar53 & 0xffffff;
            uVar35 = uVar43 + (uVar53 >> 0x18);
            do {
              uVar11 = param_6[uVar43];
              uVar41 = (ulong)uVar11;
              if (uVar11 != 0 && (uint)uVar11 <= (uint)uVar21) {
                piVar46 = (int *)((long)pvVar14 + uVar41 * 0x30);
                ppuVar51 = (uint **)(piVar46 + 8);
                *piVar46 = *piVar46 + 1;
                uVar53 = *(uint *)(lVar28 + lVar23 * 4);
                if ((uVar53 & 0xffffff) < (uint)uVar35) {
                  uVar47 = (ulong)uVar53 & 0xffffff;
                  do {
                    if (((uVar43 != uVar47) && (uVar53 = (uint)param_6[uVar47], uVar53 != 0)) &&
                       (uVar53 <= uVar21)) {
                      uVar45 = piVar46[10];
                      uVar24 = (ulong)uVar45;
                      if (0 < (int)uVar45) {
                        puVar29 = *ppuVar51;
                        do {
                          if (*puVar29 == uVar53) goto LAB_00de4ec0;
                          uVar24 = uVar24 - 1;
                          puVar29 = puVar29 + 1;
                        } while (uVar24 != 0);
                      }
                      rcIntArray::resize((rcIntArray *)ppuVar51,uVar45 + 1);
                      (*ppuVar51)[(long)piVar46[10] + -1] = uVar53;
                    }
LAB_00de4ec0:
                    uVar47 = uVar47 + 1;
                  } while (uVar47 != uVar35);
                }
                puVar29 = (uint *)((long)pvVar14 + uVar41 * 0x30 + 0x18);
                if ((int)*puVar29 < 1) {
                  *(undefined *)((long)pvVar14 + uVar41 * 0x30 + 6) =
                       *(undefined *)(*(long *)(param_5 + 0x16) + uVar43);
                  lVar36 = *(long *)(param_5 + 0x10);
                  uVar53 = *(uint *)(*(long *)(param_5 + 0x12) + uVar43 * 8 + 4);
                  lVar17 = (long)(int)*param_5;
                  uVar47 = (ulong)uVar53 & 0x3f;
                  if ((int)uVar47 == 0x3f) {
                    uVar11 = param_6[uVar43];
                    if (uVar11 != 0) goto LAB_00de4f60;
LAB_00de4f94:
                    uVar47 = (ulong)(uVar53 >> 6) & 0x3f;
                    if ((int)uVar47 == 0x3f) {
                      if (uVar11 == 0) goto LAB_00de4fd8;
LAB_00de4fac:
                      uVar45 = 1;
                    }
                    else {
                      if (param_6[((ulong)*(uint *)(lVar36 + (uVar32 + (uVar27 + 1) * lVar17) * 4) &
                                  0xffffff) + uVar47] != uVar11) goto LAB_00de4fac;
LAB_00de4fd8:
                      uVar47 = (ulong)(uVar53 >> 0xc) & 0x3f;
                      if ((int)uVar47 == 0x3f) {
                        if (uVar11 == 0) {
LAB_00de501c:
                          uVar47 = (ulong)(uVar53 >> 0x12) & 0x3f;
                          if ((int)uVar47 == 0x3f) {
                            if (uVar11 != 0) {
LAB_00de505c:
                              uVar45 = 3;
                              goto LAB_00de5064;
                            }
                          }
                          else if (param_6[((ulong)*(uint *)(lVar36 + (uVar32 + (uVar27 - 1) *
                                                                                lVar17) * 4) &
                                           0xffffff) + uVar47] != uVar11) goto LAB_00de505c;
                          goto LAB_00de4e40;
                        }
                      }
                      else if (param_6[((ulong)*(uint *)(lVar36 + (uVar32 + 1 + uVar27 * lVar17) * 4
                                                        ) & 0xffffff) + uVar47] == uVar11)
                      goto LAB_00de501c;
                      uVar45 = 2;
                    }
                  }
                  else {
                    uVar11 = param_6[uVar43];
                    if (param_6[((ulong)*(uint *)(lVar36 + ((uVar32 - 1) + uVar27 * lVar17) * 4) &
                                0xffffff) + uVar47] == uVar11) goto LAB_00de4f94;
LAB_00de4f60:
                    uVar45 = 0;
                  }
LAB_00de5064:
                  plVar42 = (long *)((long)pvVar14 + uVar41 * 0x30 + 0x10);
                  uVar41 = ((ulong)uVar53 & 0xffffff) >> (ulong)uVar45 * 6 & 0x3f;
                  if ((int)uVar41 == 0x3f) {
                    uVar53 = 0;
                  }
                  else {
                    uVar53 = (uint)param_6[((ulong)*(uint *)(lVar36 + (long)(int)((&DAT_004c3e80)
                                                                                  [uVar45] +
                                                                                  (int)uVar32 +
                                                                                 *param_5 *
                                                                                 (*(int *)(
                                                  "A0123456789ABCDEF" + (ulong)uVar45 * 4 + 0x11) +
                                                  (int)uVar27)) * 4) & 0xffffff) + uVar41];
                  }
                  rcIntArray::resize((rcIntArray *)plVar42,*puVar29 + 1);
                  iVar50 = 40000;
                  uVar24 = uVar43 & 0xffffffff;
                  uVar41 = uVar27 & 0xffffffff;
                  uVar47 = uVar32 & 0xffffffff;
                  *(uint *)(*plVar42 + (long)(int)*puVar29 * 4 + -4) = uVar53;
                  uVar8 = uVar45;
                  do {
                    uVar19 = (ulong)uVar8;
                    iVar50 = iVar50 + -1;
                    if (iVar50 == 0) break;
                    iVar49 = (int)uVar24;
                    uVar25 = ((ulong)*(uint *)(*(long *)(param_5 + 0x12) + (long)iVar49 * 8 + 4) &
                             0xffffff) >> uVar19 * 6 & 0x3f;
                    iVar22 = (int)uVar25;
                    if (iVar22 == 0x3f) {
                      if (param_6[iVar49] == 0) goto LAB_00de4e40;
                      uVar40 = 0;
LAB_00de522c:
                      if (uVar40 == uVar53) {
                        iVar49 = 1;
                      }
                      else {
                        rcIntArray::resize((rcIntArray *)plVar42,*puVar29 + 1);
                        iVar49 = 1;
                        *(uint *)(*plVar42 + (long)(int)*puVar29 * 4 + -4) = uVar40;
                        uVar53 = uVar40;
                      }
                    }
                    else {
                      uVar4 = *(int *)("A0123456789ABCDEF" + uVar19 * 4 + 0x11) + (int)uVar41;
                      uVar5 = (&DAT_004c3e80)[uVar19] + (int)uVar47;
                      iVar37 = uVar5 + uVar4 * *param_5;
                      uVar40 = (uint)param_6[((ulong)*(uint *)(*(long *)(param_5 + 0x10) +
                                                              (long)iVar37 * 4) & 0xffffff) + uVar25
                                            ];
                      if (param_6[((ulong)*(uint *)(*(long *)(param_5 + 0x10) + (long)iVar37 * 4) &
                                  0xffffff) + uVar25] != param_6[iVar49]) goto LAB_00de522c;
                      uVar41 = (ulong)uVar4;
                      uVar47 = (ulong)uVar5;
                      iVar49 = 3;
                      uVar24 = (ulong)((*(uint *)(*(long *)(param_5 + 0x10) + (long)iVar37 * 4) &
                                       0xffffff) + iVar22);
                    }
                    uVar8 = iVar49 + uVar8 & 3;
                  } while (uVar43 != uVar24 || uVar8 != uVar45);
                  uVar41 = (ulong)*puVar29;
                  if (1 < (int)*puVar29) {
                    iVar50 = 0;
                    lVar36 = *plVar42;
                    do {
                      iVar22 = iVar50 + 1;
                      iVar49 = 0;
                      uVar53 = (uint)uVar41;
                      if (uVar53 != 0) {
                        iVar49 = iVar22 / (int)uVar53;
                      }
                      uVar47 = uVar41;
                      if (*(int *)(lVar36 + (long)iVar50 * 4) ==
                          *(int *)(lVar36 + (long)(int)(iVar22 - iVar49 * uVar53) * 4)) {
                        uVar47 = (ulong)(uVar53 - 1);
                        if (iVar50 < (int)(uVar53 - 1)) {
                          lVar17 = (long)iVar50;
                          do {
                            puVar6 = (undefined4 *)(lVar36 + lVar17 * 4);
                            lVar17 = lVar17 + 1;
                            *puVar6 = puVar6[1];
                            uVar53 = *puVar29;
                            uVar47 = (long)(int)uVar53 - 1;
                          } while (lVar17 < (long)uVar47);
                        }
                        iVar22 = iVar50;
                        if ((int)uVar53 < 1) {
                          uVar47 = (ulong)uVar53;
                        }
                        else {
                          *puVar29 = (uint)uVar47;
                        }
                      }
                      iVar50 = iVar22;
                      uVar41 = uVar47 & 0xffffffff;
                    } while (iVar50 < (int)uVar47);
                  }
                }
              }
LAB_00de4e40:
              uVar43 = uVar43 + 1;
            } while (uVar43 < uVar35);
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar7);
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar20);
    }
    local_90 = (void *)0x0;
    local_88 = 0;
    rcIntArray::resize((rcIntArray *)&local_90,0x20);
    local_a0 = (int *)0x0;
    local_98 = 0;
    rcIntArray::resize((rcIntArray *)&local_a0,0x20);
    lVar23 = 0;
    do {
      if (((0 < *(short *)((long)pvVar14 + lVar23 * 0x30 + 4)) &&
          (*(int *)((long)pvVar14 + lVar23 * 0x30) != 0)) &&
         (pcVar44 = (char *)((long)pvVar14 + lVar23 * 0x30 + 8), *pcVar44 == '\0')) {
        rcIntArray::resize((rcIntArray *)&local_90,0);
        rcIntArray::resize((rcIntArray *)&local_a0,0);
        *pcVar44 = '\x01';
        rcIntArray::resize((rcIntArray *)&local_90,(int)local_88 + 1);
        *(int *)((long)local_90 + (long)(int)local_88 * 4 + -4) = (int)lVar23;
        if ((int)local_88 == 0) {
          bVar13 = false;
          iVar50 = 0;
        }
        else {
          iVar50 = 0;
          bVar13 = false;
          do {
            iVar22 = (int)local_88 + -1;
            iVar49 = (int)local_88;
            if (0 < (int)local_88) {
              local_88 = CONCAT44(local_88._4_4_,iVar22);
              iVar49 = iVar22;
            }
            iVar49 = *(int *)((long)local_90 + (long)iVar49 * 4);
            piVar46 = (int *)((long)pvVar14 + (long)iVar49 * 0x30);
            iVar22 = *piVar46;
            rcIntArray::resize((rcIntArray *)&local_a0,(int)local_98 + 1);
            local_a0[(long)(int)local_98 + -1] = iVar49;
            iVar49 = piVar46[6];
            if (0 < iVar49) {
              lVar28 = 0;
              do {
                uVar7 = *(uint *)(*(long *)(piVar46 + 4) + lVar28 * 4);
                if ((uVar7 >> 0xf & 1) == 0) {
                  pcVar44 = (char *)((long)pvVar14 + (long)(int)uVar7 * 0x30 + 8);
                  if ((*pcVar44 == '\0') &&
                     (uVar21 = *(ushort *)((long)pvVar14 + (long)(int)uVar7 * 0x30 + 4),
                     uVar21 != 0 && (uVar21 & 0x8000) == 0)) {
                    rcIntArray::resize((rcIntArray *)&local_90,(int)local_88 + 1);
                    *(uint *)((long)local_90 + (long)(int)local_88 * 4 + -4) = (uint)uVar21;
                    iVar49 = piVar46[6];
                    *pcVar44 = '\x01';
                  }
                }
                else {
                  bVar13 = true;
                }
                lVar28 = lVar28 + 1;
              } while (lVar28 < iVar49);
            }
            iVar50 = iVar22 + iVar50;
          } while ((int)local_88 != 0);
        }
        if ((iVar50 < param_2) && (!bVar13)) {
          uVar27 = local_98 & 0xffffffff;
          piVar46 = local_a0;
          if (0 < (int)local_98) {
            do {
              uVar27 = uVar27 - 1;
              *(undefined4 *)((long)pvVar14 + (long)*piVar46 * 0x30) = 0;
              *(undefined2 *)((long)pvVar14 + (long)*piVar46 * 0x30 + 4) = 0;
              piVar46 = piVar46 + 1;
            } while (uVar27 != 0);
          }
        }
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != lVar2);
    lVar23 = 0;
    iVar50 = 0;
code_r0x00de54e0:
    uVar21 = *(ushort *)((long)pvVar14 + lVar23 * 0x30 + 4);
    iVar22 = iVar50;
    if (0 < (short)uVar21) {
      piVar46 = (int *)((long)pvVar14 + lVar23 * 0x30);
      if (*piVar46 != 0) {
        if (param_3 < *piVar46) {
          uVar7 = *(uint *)((long)pvVar14 + lVar23 * 0x30 + 0x18);
          uVar27 = (ulong)uVar7;
          if ((0 < (int)uVar7) &&
             (piVar30 = *(int **)((long)pvVar14 + lVar23 * 0x30 + 0x10), *piVar30 != 0)) {
            uVar32 = 1;
            do {
              uVar43 = uVar32;
              if (uVar27 == uVar43) break;
              uVar32 = uVar43 + 1;
            } while (piVar30[uVar43] != 0);
            if (uVar27 <= uVar43) goto joined_r0x00de555c;
          }
        }
        else {
          uVar7 = *(uint *)((long)pvVar14 + lVar23 * 0x30 + 0x18);
          uVar27 = (ulong)uVar7;
joined_r0x00de555c:
          if (0 < (int)uVar7) {
            uVar7 = CONCAT22(0,uVar21);
            uVar32 = 0;
            uVar35 = uVar27 & 0xfffffff8;
            puVar29 = (uint *)((long)pvVar14 + lVar23 * 0x30 + 0x18);
            lVar28 = *(long *)((long)pvVar14 + lVar23 * 0x30 + 0x10);
            ppuVar51 = (uint **)((long)pvVar14 + lVar23 * 0x30 + 0x20);
            puVar3 = (uint *)((long)pvVar14 + lVar23 * 0x30 + 0x28);
            uVar43 = (ulong)uVar7;
            iVar49 = 0xfffffff;
            do {
              uVar20 = *(uint *)(lVar28 + uVar32 * 4);
              lVar36 = (long)(int)uVar20;
              uVar41 = uVar43;
              iVar37 = iVar49;
              if (((((uVar20 >> 0xf & 1) == 0) &&
                   (uVar11 = *(ushort *)((long)pvVar14 + lVar36 * 0x30 + 4), 0 < (short)uVar11)) &&
                  (iVar48 = *(int *)((long)pvVar14 + lVar36 * 0x30), iVar48 < iVar49)) &&
                 (*(char *)((long)pvVar14 + lVar23 * 0x30 + 6) ==
                  *(char *)((long)pvVar14 + lVar36 * 0x30 + 6))) {
                uVar20 = CONCAT22(0,uVar11);
                if ((uint)uVar27 < 8) {
                  uVar53 = 0;
                  uVar47 = 0;
LAB_00de5654:
                  lVar17 = uVar27 - uVar47;
                  puVar18 = (uint *)(lVar28 + uVar47 * 4);
                  do {
                    if (*puVar18 == uVar20) {
                      uVar53 = uVar53 + 1;
                    }
                    lVar17 = lVar17 + -1;
                    puVar18 = puVar18 + 1;
                  } while (lVar17 != 0);
                }
                else {
                  iVar52 = 0;
                  iVar54 = 0;
                  iVar55 = 0;
                  iVar56 = 0;
                  iVar57 = 0;
                  iVar58 = 0;
                  iVar59 = 0;
                  iVar60 = 0;
                  auVar63._4_2_ = uVar11;
                  auVar63._0_4_ = uVar20;
                  auVar63._6_2_ = 0;
                  auVar63._8_2_ = uVar11;
                  auVar63._10_2_ = 0;
                  auVar63._12_2_ = uVar11;
                  auVar63._14_2_ = 0;
                  uVar47 = uVar35;
                  pauVar16 = (undefined (*) [16])(lVar28 + 0x10);
                  do {
                    pauVar1 = pauVar16 + -1;
                    auVar61 = *pauVar16;
                    pauVar16 = pauVar16 + 2;
                    uVar47 = uVar47 - 8;
                    auVar62 = NEON_cmeq(*pauVar1,auVar63,4);
                    auVar61 = NEON_cmeq(auVar61,auVar63,4);
                    iVar52 = iVar52 - auVar62._0_4_;
                    iVar54 = iVar54 - auVar62._4_4_;
                    iVar55 = iVar55 - auVar62._8_4_;
                    iVar56 = iVar56 - auVar62._12_4_;
                    iVar57 = iVar57 - auVar61._0_4_;
                    iVar58 = iVar58 - auVar61._4_4_;
                    iVar59 = iVar59 - auVar61._8_4_;
                    iVar60 = iVar60 - auVar61._12_4_;
                  } while (uVar47 != 0);
                  uVar53 = iVar57 + iVar52 + iVar58 + iVar54 + iVar59 + iVar55 + iVar60 + iVar56;
                  uVar47 = uVar35;
                  if (uVar35 != uVar27) goto LAB_00de5654;
                }
                if (uVar53 < 2) {
                  uVar53 = *puVar3;
                  if ((int)uVar53 < 1) {
LAB_00de56bc:
                    uVar53 = *(uint *)((long)pvVar14 + lVar36 * 0x30 + 0x18);
                    uVar47 = (ulong)uVar53;
                    if (0 < (int)uVar53) {
                      lVar17 = *(long *)((long)pvVar14 + lVar36 * 0x30 + 0x10);
                      if (uVar53 < 8) {
                        uVar19 = 0;
                        uVar53 = 0;
LAB_00de572c:
                        lVar15 = uVar47 - uVar19;
                        puVar18 = (uint *)(lVar17 + uVar19 * 4);
                        do {
                          if (*puVar18 == uVar7) {
                            uVar53 = uVar53 + 1;
                          }
                          lVar15 = lVar15 + -1;
                          puVar18 = puVar18 + 1;
                        } while (lVar15 != 0);
                      }
                      else {
                        uVar19 = uVar47 & 0xfffffff8;
                        pauVar16 = (undefined (*) [16])(lVar17 + 0x10);
                        iVar52 = 0;
                        iVar54 = 0;
                        iVar55 = 0;
                        iVar56 = 0;
                        iVar57 = 0;
                        iVar58 = 0;
                        iVar59 = 0;
                        iVar60 = 0;
                        uVar24 = uVar19;
                        do {
                          pauVar1 = pauVar16 + -1;
                          auVar63 = *pauVar16;
                          pauVar16 = pauVar16 + 2;
                          uVar24 = uVar24 - 8;
                          auVar61._4_2_ = uVar21;
                          auVar61._0_4_ = uVar7;
                          auVar61._6_2_ = 0;
                          auVar61._8_2_ = uVar21;
                          auVar61._10_2_ = 0;
                          auVar61._12_2_ = uVar21;
                          auVar61._14_2_ = 0;
                          auVar61 = NEON_cmeq(*pauVar1,auVar61,4);
                          auVar62._4_2_ = uVar21;
                          auVar62._0_4_ = uVar7;
                          auVar62._6_2_ = 0;
                          auVar62._8_2_ = uVar21;
                          auVar62._10_2_ = 0;
                          auVar62._12_2_ = uVar21;
                          auVar62._14_2_ = 0;
                          auVar63 = NEON_cmeq(auVar63,auVar62,4);
                          iVar52 = iVar52 - auVar61._0_4_;
                          iVar54 = iVar54 - auVar61._4_4_;
                          iVar55 = iVar55 - auVar61._8_4_;
                          iVar56 = iVar56 - auVar61._12_4_;
                          iVar57 = iVar57 - auVar63._0_4_;
                          iVar58 = iVar58 - auVar63._4_4_;
                          iVar59 = iVar59 - auVar63._8_4_;
                          iVar60 = iVar60 - auVar63._12_4_;
                        } while (uVar24 != 0);
                        uVar53 = iVar57 + iVar52 + iVar58 + iVar54 +
                                 iVar59 + iVar55 + iVar60 + iVar56;
                        if (uVar19 != uVar47) goto LAB_00de572c;
                      }
                      if (1 < uVar53) goto LAB_00de55a8;
                    }
                    uVar53 = *(uint *)((long)pvVar14 + lVar36 * 0x30 + 0x28);
                    uVar41 = (ulong)uVar20;
                    iVar37 = iVar48;
                    if ((0 < (int)uVar53) &&
                       (puVar18 = *(uint **)((long)pvVar14 + lVar36 * 0x30 + 0x20), uVar41 = uVar43,
                       iVar37 = iVar49, *puVar18 != uVar7)) {
                      uVar41 = 1;
                      do {
                        uVar47 = uVar41;
                        if (uVar53 == uVar47) break;
                        uVar41 = uVar47 + 1;
                      } while (puVar18[uVar47] != uVar7);
                      uVar41 = (ulong)uVar20;
                      iVar37 = iVar48;
                      if (uVar47 < uVar53) {
                        uVar41 = uVar43;
                        iVar37 = iVar49;
                      }
                    }
                  }
                  else {
                    puVar18 = *ppuVar51;
                    if (*puVar18 != uVar20) {
                      uVar47 = 1;
                      do {
                        uVar24 = uVar47;
                        if (uVar53 == uVar24) break;
                        uVar47 = uVar24 + 1;
                      } while (puVar18[uVar24] != uVar20);
                      if (uVar53 <= uVar24) goto LAB_00de56bc;
                    }
                  }
                }
              }
LAB_00de55a8:
              uVar32 = uVar32 + 1;
              uVar43 = uVar41;
              iVar49 = iVar37;
            } while (uVar32 != uVar27);
            uVar20 = (uint)uVar41;
            if (uVar20 != uVar7) {
              uVar21 = *(ushort *)((long)pvVar14 + uVar41 * 0x30 + 4);
              local_80 = (uint *)0x0;
              local_78 = 0;
              puVar18 = (uint *)((long)pvVar14 + uVar41 * 0x30 + 0x18);
              rcIntArray::resize((rcIntArray *)&local_80,*puVar18);
              plVar42 = (long *)((long)pvVar14 + uVar41 * 0x30 + 0x10);
              lVar28 = *plVar42;
              if (0 < (int)*puVar18) {
                lVar36 = 0;
                do {
                  lVar17 = lVar36 + 1;
                  local_80[lVar36] = *(uint *)(lVar28 + lVar36 * 4);
                  lVar36 = lVar17;
                } while (lVar17 < (int)*puVar18);
              }
              uVar27 = local_78 & 0xffffffff;
              if (0 < (int)local_78) {
                iVar49 = 1;
                this = (uint **)((long)pvVar14 + lVar23 * 0x30 + 0x10);
                puVar33 = local_80;
                do {
                  if (*puVar33 == uVar7) {
                    uVar53 = *puVar29;
                    if (0 < (int)uVar53) {
                      uVar45 = (uint)uVar21;
                      if (**this == uVar45) {
                        uVar27 = 0;
                        bVar13 = true;
                        goto LAB_00de58e4;
                      }
                      uVar27 = 0;
                      goto LAB_00de58c4;
                    }
                    break;
                  }
                  uVar27 = uVar27 - 1;
                  puVar33 = puVar33 + 1;
                  iVar49 = iVar49 + 1;
                } while (uVar27 != 0);
              }
              rcFree(local_80);
            }
          }
        }
      }
    }
    goto LAB_00de5898;
  }
  rcContext::log(param_1,(char *)0x3,"filterSmallRegions: Out of memory \'regions\' (%d).",lVar2);
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return;
  }
LAB_00de5e38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar14 != (void *)0x0);
  while (lVar28 = uVar27 + 1, uVar27 = uVar27 + 1, (*this)[lVar28] != uVar45) {
LAB_00de58c4:
    if ((ulong)uVar53 - 1 == uVar27) {
      rcFree(local_80);
      goto LAB_00de5898;
    }
  }
  bVar13 = uVar27 < uVar53;
LAB_00de58e4:
  rcIntArray::resize((rcIntArray *)plVar42,0);
  iVar37 = (int)local_78;
  if (1 < (int)local_78) {
    iVar48 = 1;
    do {
      iVar52 = 0;
      if (iVar37 != 0) {
        iVar52 = iVar49 / iVar37;
      }
      uVar53 = local_80[(uint)(iVar49 - iVar52 * iVar37)];
      rcIntArray::resize((rcIntArray *)plVar42,*puVar18 + 1);
      iVar49 = iVar49 + 1;
      iVar48 = iVar48 + 1;
      *(uint *)(*plVar42 + (long)(int)*puVar18 * 4 + -4) = uVar53;
    } while (iVar37 != iVar48);
  }
  uVar53 = *puVar29;
  if (1 < (int)uVar53) {
    uVar45 = 1;
    do {
      iVar49 = (int)uVar27 + uVar45;
      iVar37 = 0;
      if (uVar53 != 0) {
        iVar37 = iVar49 / (int)uVar53;
      }
      uVar8 = (*this)[iVar49 - iVar37 * uVar53];
      rcIntArray::resize((rcIntArray *)plVar42,*puVar18 + 1);
      uVar45 = uVar45 + 1;
      *(uint *)(*plVar42 + (long)(int)*puVar18 * 4 + -4) = uVar8;
    } while (uVar53 != uVar45);
  }
  uVar27 = (ulong)*puVar18;
  if (1 < (int)*puVar18) {
    iVar49 = 0;
    lVar28 = *(long *)((long)pvVar14 + uVar41 * 0x30 + 0x10);
    do {
      iVar37 = iVar49 + 1;
      iVar48 = 0;
      uVar53 = (uint)uVar27;
      if (uVar53 != 0) {
        iVar48 = iVar37 / (int)uVar53;
      }
      if (*(int *)(lVar28 + (long)iVar49 * 4) ==
          *(int *)(lVar28 + (long)(int)(iVar37 - iVar48 * uVar53) * 4)) {
        uVar27 = (ulong)(uVar53 - 1);
        if (iVar49 < (int)(uVar53 - 1)) {
          lVar36 = (long)iVar49;
          do {
            puVar6 = (undefined4 *)(lVar28 + lVar36 * 4);
            lVar36 = lVar36 + 1;
            *puVar6 = puVar6[1];
            uVar27 = (long)(int)*puVar18 - 1;
          } while (lVar36 < (long)uVar27);
          if ((int)*puVar18 < 1) break;
        }
        uVar53 = (uint)uVar27;
        *puVar18 = uVar53;
        iVar37 = iVar49;
      }
      iVar49 = iVar37;
      if (((int)uVar53 < 2) || ((int)uVar27 <= iVar49)) break;
    } while( true );
  }
  uVar53 = *puVar3;
  if (0 < (int)uVar53) {
    lVar28 = 0;
    this_00 = (uint **)((long)pvVar14 + uVar41 * 0x30 + 0x20);
    puVar29 = (uint *)((long)pvVar14 + uVar41 * 0x30 + 0x28);
    do {
      uVar45 = *puVar29;
      uVar27 = (ulong)uVar45;
      uVar8 = (*ppuVar51)[lVar28];
      if (0 < (int)uVar45) {
        puVar18 = *this_00;
        do {
          if (*puVar18 == uVar8) goto LAB_00de5a8c;
          uVar27 = uVar27 - 1;
          puVar18 = puVar18 + 1;
        } while (uVar27 != 0);
      }
      rcIntArray::resize((rcIntArray *)this_00,uVar45 + 1);
      (*this_00)[(long)(int)*puVar29 + -1] = uVar8;
      uVar53 = *puVar3;
LAB_00de5a8c:
      lVar28 = lVar28 + 1;
    } while (lVar28 < (int)uVar53);
  }
  *(int *)((long)pvVar14 + uVar41 * 0x30) = *(int *)((long)pvVar14 + uVar41 * 0x30) + *piVar46;
  *piVar46 = 0;
  rcIntArray::resize((rcIntArray *)this,0);
  rcFree(local_80);
  if (bVar13) {
    lVar28 = 0;
    do {
      puVar31 = (ushort *)((long)pvVar14 + lVar28 * 0x30 + 4);
      uVar21 = *puVar31;
      if (0 < (short)uVar21) {
        if (uVar21 == uVar7) {
          *puVar31 = (ushort)uVar41;
        }
        plVar42 = (long *)((long)pvVar14 + lVar28 * 0x30 + 0x10);
        lVar36 = *plVar42;
        puVar29 = (uint *)((long)pvVar14 + lVar28 * 0x30 + 0x18);
        uVar53 = *puVar29;
        if ((int)uVar53 < 1) {
          bVar13 = false;
        }
        else {
          lVar17 = 0;
          bVar13 = false;
          do {
            if (*(uint *)(lVar36 + lVar17 * 4) == uVar7) {
              *(uint *)(lVar36 + lVar17 * 4) = uVar20;
              bVar13 = true;
              uVar53 = *puVar29;
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < (int)uVar53);
        }
        piVar46 = (int *)((long)pvVar14 + lVar28 * 0x30 + 0x28);
        iVar22 = *piVar46;
        if (0 < iVar22) {
          lVar36 = 0;
          lVar17 = *(long *)((long)pvVar14 + lVar28 * 0x30 + 0x20);
          do {
            if (*(uint *)(lVar17 + lVar36 * 4) == uVar7) {
              *(uint *)(lVar17 + lVar36 * 4) = uVar20;
              iVar22 = *piVar46;
            }
            lVar36 = lVar36 + 1;
          } while (lVar36 < iVar22);
        }
        if ((bVar13) && (uVar27 = (ulong)*puVar29, 1 < (int)*puVar29)) {
          iVar22 = 0;
          lVar36 = *plVar42;
          do {
            iVar49 = iVar22 + 1;
            iVar37 = 0;
            uVar53 = (uint)uVar27;
            if (uVar53 != 0) {
              iVar37 = iVar49 / (int)uVar53;
            }
            if (*(int *)(lVar36 + (long)iVar22 * 4) ==
                *(int *)(lVar36 + (long)(int)(iVar49 - iVar37 * uVar53) * 4)) {
              uVar27 = (ulong)(uVar53 - 1);
              if (iVar22 < (int)(uVar53 - 1)) {
                lVar17 = (long)iVar22;
                do {
                  puVar6 = (undefined4 *)(lVar36 + lVar17 * 4);
                  lVar17 = lVar17 + 1;
                  *puVar6 = puVar6[1];
                  uVar27 = (long)(int)*puVar29 - 1;
                } while (lVar17 < (long)uVar27);
                if ((int)*puVar29 < 1) break;
              }
              uVar53 = (uint)uVar27;
              *puVar29 = uVar53;
              iVar49 = iVar22;
            }
            iVar22 = iVar49;
            if (((int)uVar53 < 2) || ((int)uVar27 <= iVar22)) break;
          } while( true );
        }
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar2);
    iVar22 = iVar50 + 1;
  }
LAB_00de5898:
  lVar23 = lVar23 + 1;
  iVar50 = iVar22;
  if (lVar23 != lVar2) goto code_r0x00de54e0;
  lVar23 = 0;
  iVar50 = 0;
  if (iVar22 < 1) goto LAB_00de5c98;
  goto code_r0x00de54e0;
LAB_00de5c98:
  lVar23 = 0;
  do {
    lVar28 = lVar23 + 0x30;
    *(bool *)((long)pvVar14 + lVar23 + 7) = 0 < *(short *)((long)pvVar14 + lVar23 + 4);
    lVar23 = lVar28;
  } while (lVar2 * 0x30 - lVar28 != 0);
  lVar23 = 0;
  uVar21 = 0;
  psVar34 = (short *)((long)pvVar14 + 0x34);
  lVar28 = lVar2;
  do {
    lVar28 = lVar28 + -1;
    if (*(char *)((long)pvVar14 + lVar23 * 0x30 + 7) != '\0') {
      uVar21 = uVar21 + 1;
      sVar9 = *(short *)((long)pvVar14 + lVar23 * 0x30 + 4);
      lVar36 = lVar28;
      psVar38 = psVar34;
      do {
        psVar38[-0x18] = uVar21;
        *(undefined *)((long)psVar38 + -0x2d) = 0;
        psVar39 = psVar38;
        do {
          if (lVar36 == 0) goto LAB_00de5cdc;
          psVar38 = psVar39 + 0x18;
          sVar10 = *psVar39;
          lVar36 = lVar36 + -1;
          psVar39 = psVar38;
        } while (sVar10 != sVar9);
      } while( true );
    }
LAB_00de5cdc:
    lVar23 = lVar23 + 1;
    psVar34 = psVar34 + 0x18;
  } while (lVar23 != lVar2);
  *param_4 = uVar21;
  uVar27 = (ulong)param_5[2];
  if (0 < (int)param_5[2]) {
    do {
      if (-1 < (short)*param_6) {
        *param_6 = *(ushort *)((long)pvVar14 + (ulong)*param_6 * 0x30 + 4);
      }
      param_6 = param_6 + 1;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  lVar23 = 0;
  do {
    rcFree(*(void **)((long)pvVar14 + lVar23 + 0x20));
    rcFree(*(void **)((long)pvVar14 + lVar23 + 0x10));
    lVar23 = lVar23 + 0x30;
  } while (lVar2 * 0x30 - lVar23 != 0);
  rcFree(pvVar14);
  rcFree(local_a0);
  rcFree(local_90);
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return;
  }
  goto LAB_00de5e38;
}


