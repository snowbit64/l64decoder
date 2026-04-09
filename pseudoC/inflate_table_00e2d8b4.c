// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflate_table
// Entry Point: 00e2d8b4
// Size: 1664 bytes
// Signature: undefined inflate_table(void)


void inflate_table(undefined8 param_1,ushort *param_2,uint param_3,long *param_4,uint *param_5,
                  undefined *param_6)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined uVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ushort *puVar24;
  uint uVar25;
  uint uVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined *puVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  ushort uVar33;
  undefined uVar34;
  uint uVar35;
  uint local_b4;
  ushort auStack_b0 [5];
  short local_a6;
  short local_a4;
  short local_a2;
  short local_a0;
  short local_9e;
  short local_9c;
  short local_9a;
  short local_98;
  short local_96;
  short local_94;
  short local_92;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  if (param_3 == 0) {
    uVar26 = *param_5;
LAB_00e2d92c:
    if (local_78._4_2_ != 0) {
      uVar25 = 0;
      uVar17 = 0xe;
      goto LAB_00e2da2c;
    }
    if (local_78._2_2_ != 0) {
      uVar25 = 0;
      uVar17 = 0xd;
      goto LAB_00e2da2c;
    }
    if ((ushort)local_78 != 0) {
      uVar25 = 0;
      uVar17 = 0xc;
      goto LAB_00e2da2c;
    }
    if (local_80._6_2_ != 0) {
      uVar25 = 0;
      uVar17 = 0xb;
      goto LAB_00e2da2c;
    }
    if (local_80._4_2_ != 0) {
      uVar25 = 0;
      uVar17 = 10;
      goto LAB_00e2da2c;
    }
    if (local_80._2_2_ != 0) {
      uVar25 = 0;
      uVar17 = 9;
      goto LAB_00e2da2c;
    }
    if ((ushort)local_80 != 0) {
      uVar25 = 0;
      uVar17 = 8;
      goto LAB_00e2da2c;
    }
    if (uStack_88._6_2_ != 0) {
      uVar25 = 0;
      uVar17 = 7;
      goto LAB_00e2da2c;
    }
    if (uStack_88._4_2_ != 0) {
      uVar25 = 0;
      uVar17 = 6;
      goto LAB_00e2da2c;
    }
    if (uStack_88._2_2_ != 0) {
      uVar25 = 0;
      uVar17 = 5;
      goto LAB_00e2da2c;
    }
    if ((ushort)uStack_88 != 0) {
      uVar25 = 0;
      uVar17 = 4;
      goto LAB_00e2da2c;
    }
    if (local_90._6_2_ != 0) {
      uVar25 = 0;
      uVar17 = 3;
      goto LAB_00e2da2c;
    }
    if (local_90._4_2_ != 0) {
      uVar25 = 0;
      uVar17 = 2;
      goto LAB_00e2da2c;
    }
    if (local_90._2_2_ == 0) {
      puVar19 = (undefined4 *)*param_4;
      uVar23 = 1;
      *param_4 = (long)(puVar19 + 1);
      *puVar19 = 0x140;
      puVar19 = (undefined4 *)*param_4;
      *param_4 = (long)(puVar19 + 1);
      *puVar19 = 0x140;
LAB_00e2de88:
      param_1 = 0;
      *param_5 = uVar23;
      goto LAB_00e2db84;
    }
    bVar8 = 0;
    uVar25 = 0;
    uVar17 = 1;
    uVar18 = 1;
    uVar23 = 1;
    uVar9 = local_90;
    uVar10 = uStack_88;
    uVar11 = local_80;
    uVar12 = local_78;
    if ((uVar26 != 0) != 0) {
      uVar23 = (uint)(uVar26 != 0);
    }
  }
  else {
    uVar18 = (ulong)param_3;
    puVar24 = param_2;
    do {
      uVar18 = uVar18 - 1;
      *(short *)((long)&local_90 + (ulong)*puVar24 * 2) =
           *(short *)((long)&local_90 + (ulong)*puVar24 * 2) + 1;
      puVar24 = puVar24 + 1;
    } while (uVar18 != 0);
    uVar25 = (uint)local_78._6_2_;
    uVar26 = *param_5;
    if (local_78._6_2_ == 0) goto LAB_00e2d92c;
    uVar17 = 0xf;
LAB_00e2da2c:
    uVar18 = (ulong)uVar17;
    uVar6 = uVar17;
    if (uVar26 <= uVar17) {
      uVar6 = uVar26;
    }
    uVar22 = 1;
    do {
      uVar9 = local_90;
      uVar10 = uStack_88;
      uVar11 = local_80;
      uVar12 = local_78;
      if (*(short *)((long)&local_90 + uVar22 * 2) != 0) {
        bVar8 = 1;
        uVar23 = (uint)uVar22;
        uVar18 = uVar22;
        if ((uint)uVar22 <= uVar6) {
          uVar23 = uVar6;
        }
        goto joined_r0x00e2da88;
      }
      uVar22 = uVar22 + 1;
    } while (uVar18 != uVar22);
    bVar8 = 1;
    uVar23 = uVar17;
    if (uVar17 <= uVar6) {
      uVar23 = uVar6;
    }
  }
joined_r0x00e2da88:
  local_90 = uVar9;
  uStack_88 = uVar10;
  local_80 = uVar11;
  local_78 = uVar12;
  if (local_90._2_2_ < 3) {
    local_90._4_2_ = (ushort)((ulong)uVar9 >> 0x20);
    iVar32 = 4 - ((uint)local_90._4_2_ + (uint)local_90._2_2_ * 2);
    if (-1 < iVar32) {
      local_90._6_2_ = (ushort)((ulong)uVar9 >> 0x30);
      iVar32 = iVar32 * 2 - (uint)local_90._6_2_;
      if (-1 < iVar32) {
        uStack_88._0_2_ = (ushort)uVar10;
        iVar32 = iVar32 * 2 - (uint)(ushort)uStack_88;
        if (-1 < iVar32) {
          uStack_88._2_2_ = (ushort)((ulong)uVar10 >> 0x10);
          iVar32 = iVar32 * 2 - (uint)uStack_88._2_2_;
          if (-1 < iVar32) {
            uStack_88._4_2_ = (ushort)((ulong)uVar10 >> 0x20);
            iVar32 = iVar32 * 2 - (uint)uStack_88._4_2_;
            if (-1 < iVar32) {
              uStack_88._6_2_ = (ushort)((ulong)uVar10 >> 0x30);
              iVar32 = iVar32 * 2 - (uint)uStack_88._6_2_;
              if (-1 < iVar32) {
                local_80._0_2_ = (ushort)uVar11;
                iVar32 = iVar32 * 2 - (uint)(ushort)local_80;
                if (-1 < iVar32) {
                  local_80._2_2_ = (ushort)((ulong)uVar11 >> 0x10);
                  iVar32 = iVar32 * 2 - (uint)local_80._2_2_;
                  if (-1 < iVar32) {
                    local_80._4_2_ = (ushort)((ulong)uVar11 >> 0x20);
                    iVar32 = iVar32 * 2 - (uint)local_80._4_2_;
                    if (-1 < iVar32) {
                      local_80._6_2_ = (ushort)((ulong)uVar11 >> 0x30);
                      iVar32 = iVar32 * 2 - (uint)local_80._6_2_;
                      if (-1 < iVar32) {
                        local_78._0_2_ = (ushort)uVar12;
                        iVar32 = iVar32 * 2 - (uint)(ushort)local_78;
                        if (-1 < iVar32) {
                          local_78._2_2_ = (ushort)((ulong)uVar12 >> 0x10);
                          iVar32 = iVar32 * 2 - (uint)local_78._2_2_;
                          if (-1 < iVar32) {
                            local_78._4_2_ = (ushort)((ulong)uVar12 >> 0x20);
                            iVar32 = iVar32 * 2 - (uint)local_78._4_2_;
                            if ((-1 < iVar32) && (iVar32 = iVar32 * 2 - uVar25, -1 < iVar32)) {
                              iVar14 = (int)param_1;
                              if ((iVar32 == 0) || (!(bool)(iVar14 == 0 | bVar8))) {
                                auStack_b0[2] = local_90._2_2_;
                                auStack_b0[4] = local_90._6_2_ + local_90._4_2_ + local_90._2_2_;
                                auStack_b0[1] = 0;
                                local_a6 = (ushort)uStack_88 + auStack_b0[4];
                                auStack_b0[3] = local_90._4_2_ + local_90._2_2_;
                                local_a4 = uStack_88._2_2_ + local_a6;
                                local_a2 = uStack_88._4_2_ + local_a4;
                                local_a0 = uStack_88._6_2_ + local_a2;
                                local_9e = (ushort)local_80 + local_a0;
                                local_9c = local_80._2_2_ + local_9e;
                                local_9a = local_80._4_2_ + local_9c;
                                local_98 = local_80._6_2_ + local_9a;
                                local_96 = (ushort)local_78 + local_98;
                                local_94 = local_78._2_2_ + local_96;
                                local_92 = local_78._4_2_ + local_94;
                                if (param_3 != 0) {
                                  uVar22 = 0;
                                  do {
                                    uVar28 = (ulong)param_2[uVar22];
                                    if (uVar28 != 0) {
                                      uVar33 = auStack_b0[uVar28];
                                      *(short *)(param_6 + (ulong)uVar33 * 2) = (short)uVar22;
                                      auStack_b0[uVar28] = uVar33 + 1;
                                    }
                                    uVar22 = uVar22 + 1;
                                  } while (param_3 != uVar22);
                                }
                                if (iVar14 == 0) {
                                  uVar26 = 0x14;
                                  bVar13 = false;
                                  puVar27 = param_6;
                                  puVar29 = param_6;
LAB_00e2dca4:
                                  uVar22 = 0;
                                  local_b4 = 1 << (ulong)(uVar23 & 0x1f);
                                  uVar25 = 0;
                                  uVar6 = local_b4 - 1;
                                  lVar16 = *param_4;
                                  uVar31 = 0xffffffff;
                                  uVar20 = uVar23;
                                  uVar15 = 0;
                                  do {
                                    uVar3 = 1 << (ulong)(uVar20 & 0x1f);
                                    do {
                                      uVar33 = *(ushort *)(param_6 + uVar22 * 2);
                                      uVar20 = (uint)uVar18;
                                      if (uVar33 + 1 < uVar26) {
                                        uVar34 = 0;
                                      }
                                      else if (uVar26 < uVar33 || uVar26 == uVar33) {
                                        lVar30 = (ulong)(uVar33 - uVar26) * 2;
                                        uVar34 = puVar27[lVar30];
                                        uVar33 = *(ushort *)(puVar29 + lVar30);
                                      }
                                      else {
                                        uVar33 = 0;
                                        uVar34 = 0x60;
                                      }
                                      iVar32 = -1 << (ulong)(uVar20 - uVar15 & 0x1f);
                                      uVar21 = uVar3;
                                      do {
                                        uVar35 = (uVar25 >> (ulong)(uVar15 & 0x1f)) + iVar32 +
                                                 uVar21;
                                        uVar21 = uVar21 + iVar32;
                                        puVar1 = (undefined *)(lVar16 + (ulong)uVar35 * 4);
                                        *puVar1 = uVar34;
                                        uVar4 = (undefined)(uVar20 - uVar15);
                                        puVar1[1] = uVar4;
                                        *(ushort *)(puVar1 + 2) = uVar33;
                                      } while (uVar21 != 0);
                                      uVar21 = 1 << (ulong)(uVar20 - 1 & 0x1f);
                                      do {
                                        uVar35 = uVar21;
                                        uVar21 = uVar35 >> 1;
                                      } while ((uVar35 & uVar25) != 0);
                                      lVar30 = (uVar18 & 0xffffffff) * 2;
                                      uVar21 = uVar35 - 1 & uVar25;
                                      uVar25 = 0;
                                      if (uVar35 != 0) {
                                        uVar25 = uVar21 + uVar35;
                                      }
                                      uVar22 = (ulong)((int)uVar22 + 1);
                                      sVar5 = *(short *)((long)&local_90 + lVar30) + -1;
                                      *(short *)((long)&local_90 + lVar30) = sVar5;
                                      if (sVar5 == 0) {
                                        if (uVar20 == uVar17) {
                                          if (uVar25 != 0) {
                                            puVar27 = (undefined *)(lVar16 + (ulong)uVar25 * 4);
                                            *puVar27 = 0x40;
                                            puVar27[1] = uVar4;
                                            *(undefined2 *)(puVar27 + 2) = 0;
                                          }
                                          *param_4 = *param_4 + (ulong)local_b4 * 4;
                                          goto LAB_00e2de88;
                                        }
                                        uVar18 = (ulong)param_2[*(ushort *)(param_6 + uVar22 * 2)];
                                      }
                                      uVar21 = (uint)uVar18;
                                    } while ((uVar21 <= uVar23) ||
                                            (uVar35 = uVar25 & uVar6, uVar35 == uVar31));
                                    uVar2 = uVar23;
                                    if (uVar15 != 0) {
                                      uVar2 = uVar15;
                                    }
                                    uVar20 = uVar21 - uVar2;
                                    iVar32 = 1 << (ulong)(uVar20 & 0x1f);
                                    if (uVar21 < uVar17) {
                                      uVar20 = uVar17 - uVar2;
                                      uVar28 = uVar18 & 0xffffffff;
                                      do {
                                        iVar32 = iVar32 - (uint)*(ushort *)
                                                                 ((long)&local_90 + uVar28 * 2);
                                        if (iVar32 < 1) {
                                          uVar20 = (int)uVar28 - uVar2;
                                          break;
                                        }
                                        iVar32 = iVar32 * 2;
                                        uVar28 = uVar28 + 1;
                                      } while ((uint)uVar28 < uVar17);
                                      iVar32 = 1 << (ulong)(uVar20 & 0x1f);
                                    }
                                    local_b4 = iVar32 + local_b4;
                                    if ((((uint)param_1 & (uint)(0x354 < local_b4)) != 0) ||
                                       ((bool)(bVar13 & 0x250 < local_b4))) goto LAB_00e2dec4;
                                    lVar30 = *param_4;
                                    lVar16 = lVar16 + (ulong)uVar3 * 4;
                                    puVar1 = (undefined *)(lVar30 + (ulong)uVar35 * 4);
                                    *puVar1 = (char)uVar20;
                                    puVar1[1] = (char)uVar23;
                                    *(short *)(puVar1 + 2) =
                                         (short)((uint)((int)lVar16 - (int)lVar30) >> 2);
                                    uVar31 = uVar35;
                                    uVar15 = uVar2;
                                  } while( true );
                                }
                                if (iVar14 == 1) {
                                  if (uVar23 < 10) {
                                    bVar13 = false;
                                    uVar26 = 0x101;
                                    puVar27 = &DAT_0055ee2e;
                                    puVar29 = &DAT_0055edf0;
                                    goto LAB_00e2dca4;
                                  }
                                }
                                else {
                                  bVar13 = iVar14 == 2;
                                  uVar26 = 0;
                                  param_1 = 0;
                                  puVar27 = &UNK_0055eeac;
                                  puVar29 = &UNK_0055ee6c;
                                  if ((!bVar13) || (uVar23 < 10)) goto LAB_00e2dca4;
LAB_00e2dec4:
                                  param_1 = 1;
                                }
                                goto LAB_00e2db84;
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
          }
        }
      }
    }
  }
  param_1 = 0xffffffff;
LAB_00e2db84:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


