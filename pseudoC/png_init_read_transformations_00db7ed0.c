// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_init_read_transformations
// Entry Point: 00db7ed0
// Size: 3208 bytes
// Signature: undefined png_init_read_transformations(void)


/* WARNING: Type propagation algorithm not settling */

void png_init_read_transformations(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  long lVar21;
  short sVar22;
  ulong uVar23;
  long lVar24;
  short sVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  long lVar30;
  byte *pbVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  iVar13 = *(int *)(param_1 + 0x4d8);
  iVar14 = *(int *)(param_1 + 0x2dc);
  if (iVar13 == 0) {
    if (iVar14 == 0) {
      *(undefined4 *)(param_1 + 0x4d8) = 100000;
      *(undefined4 *)(param_1 + 0x2dc) = 100000;
    }
    else {
      uVar16 = png_reciprocal(iVar14);
      *(undefined4 *)(param_1 + 0x4d8) = uVar16;
    }
LAB_00db7fa0:
    *(ushort *)(param_1 + 0x522) = *(ushort *)(param_1 + 0x522) | 1;
LAB_00db7fac:
    uVar18 = *(uint *)(param_1 + 0x16c);
    uVar17 = uVar18 & 0xffffdfff;
    *(uint *)(param_1 + 0x16c) = uVar17;
  }
  else {
    if (iVar14 == 0) {
      uVar16 = png_reciprocal(iVar13);
      *(undefined4 *)(param_1 + 0x2dc) = uVar16;
      goto LAB_00db7fa0;
    }
    iVar13 = png_muldiv(&local_6c,iVar13,iVar14,100000);
    if (iVar13 != 0) {
      iVar13 = png_gamma_significant(local_6c);
      *(ushort *)(param_1 + 0x522) = *(ushort *)(param_1 + 0x522) | 1;
      if (iVar13 != 0) goto LAB_00db7f70;
      goto LAB_00db7fac;
    }
    *(ushort *)(param_1 + 0x522) = *(ushort *)(param_1 + 0x522) | 1;
LAB_00db7f70:
    uVar18 = *(uint *)(param_1 + 0x16c);
    uVar17 = uVar18 | 0x2000;
    *(uint *)(param_1 + 0x16c) = uVar17;
  }
  if ((uVar18 & 0x40080) == 0x40000) {
    *(undefined2 *)(param_1 + 0x298) = 0;
    *(uint *)(param_1 + 0x16c) = uVar17 & 0xfd7ffeff;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
  }
  iVar13 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2dc));
  uVar17 = *(uint *)(param_1 + 0x16c);
  uVar18 = uVar17;
  if (iVar13 == 0) {
    *(uint *)(param_1 + 0x16c) = uVar17 & 0xff7fffff;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
    uVar18 = uVar17 & 0xff7fffff;
  }
  if ((uVar17 & 0x600000) != 0) {
    png_colorspace_set_rgb_coefficients(param_1);
    uVar18 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar18 >> 8 & 1) == 0) {
    if (((((uVar18 ^ 0xffffffff) & 0x4080) == 0) &&
        (sVar25 = *(short *)(param_1 + 0x2b6), sVar25 == *(short *)(param_1 + 0x2b8))) &&
       (sVar25 == *(short *)(param_1 + 0x2ba))) {
      *(short *)(param_1 + 700) = sVar25;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x800;
    }
  }
  else if ((*(byte *)(param_1 + 0x29f) >> 1 & 1) == 0) {
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x800;
  }
  bVar10 = *(byte *)(param_1 + 0x29f);
  uVar17 = uVar18;
  if (bVar10 == 3) {
    uVar5 = *(ushort *)(param_1 + 0x298);
    uVar23 = (ulong)uVar5;
    if (uVar5 == 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
LAB_00db8180:
      uVar17 = uVar18 & 0xff7ffe7f;
      *(uint *)(param_1 + 0x16c) = uVar17;
    }
    else {
      bVar8 = false;
      pcVar20 = *(char **)(param_1 + 800);
      uVar27 = uVar23;
      do {
        if (*pcVar20 != -1) {
          if (*pcVar20 != '\0') goto joined_r0x00db81f8;
          bVar8 = true;
        }
        uVar27 = uVar27 - 1;
        pcVar20 = pcVar20 + 1;
      } while (uVar27 != 0);
      uVar17 = uVar18 & 0xff7fffff;
      *(uint *)(param_1 + 0x16c) = uVar17;
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
      if (!bVar8) goto LAB_00db8180;
    }
joined_r0x00db81f8:
    if (((uVar17 ^ 0xffffffff) & 0x1100) == 0) {
      pbVar29 = (byte *)(*(long *)(param_1 + 0x288) + (ulong)*(byte *)(param_1 + 0x2b4) * 3);
      bVar10 = pbVar29[1];
      bVar11 = pbVar29[2];
      *(ushort *)(param_1 + 0x2b6) = (ushort)*pbVar29;
      *(ushort *)(param_1 + 0x2b8) = (ushort)bVar10;
      *(ushort *)(param_1 + 0x2ba) = (ushort)bVar11;
      if (((uVar17 & 0x2080000) == 0x80000) && (uVar5 != 0)) {
        lVar21 = *(long *)(param_1 + 800);
        if (uVar5 < 8) {
          uVar26 = 0;
LAB_00db82bc:
          lVar24 = uVar23 - uVar26;
          pbVar29 = (byte *)(lVar21 + uVar26);
          do {
            lVar24 = lVar24 + -1;
            *pbVar29 = ~*pbVar29;
            pbVar29 = pbVar29 + 1;
          } while (lVar24 != 0);
        }
        else if (uVar5 < 0x20) {
          uVar27 = 0;
LAB_00db8290:
          uVar26 = uVar23 & 0xfff8;
          lVar24 = uVar27 - uVar26;
          puVar28 = (undefined8 *)(lVar21 + uVar27);
          do {
            uVar34 = *puVar28;
            lVar24 = lVar24 + 8;
            *puVar28 = CONCAT17(~(byte)((ulong)uVar34 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar34 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar34 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar34 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar34 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar34
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar34 >> 8),~(byte)uVar34)))))));
            puVar28 = puVar28 + 1;
          } while (lVar24 != 0);
          if (uVar26 != uVar23) goto LAB_00db82bc;
        }
        else {
          uVar26 = uVar23 & 0xffe0;
          puVar28 = (undefined8 *)(lVar21 + 0x10);
          uVar27 = uVar26;
          do {
            auVar33 = *(undefined (*) [16])(puVar28 + -2);
            uVar35 = puVar28[1];
            uVar34 = *puVar28;
            uVar27 = uVar27 - 0x20;
            auVar32._0_8_ =
                 CONCAT17(~auVar33[7],
                          CONCAT16(~auVar33[6],
                                   CONCAT15(~auVar33[5],
                                            CONCAT14(~auVar33[4],
                                                     CONCAT13(~auVar33[3],
                                                              CONCAT12(~auVar33[2],
                                                                       CONCAT11(~auVar33[1],
                                                                                ~auVar33[0])))))));
            auVar32[8] = ~auVar33[8];
            auVar32[9] = ~auVar33[9];
            auVar32[10] = ~auVar33[10];
            auVar32[11] = ~auVar33[11];
            auVar32[12] = ~auVar33[12];
            auVar32[13] = ~auVar33[13];
            auVar32[14] = ~auVar33[14];
            auVar32[15] = ~auVar33[15];
            puVar28[-1] = auVar32._8_8_;
            puVar28[-2] = auVar32._0_8_;
            puVar28[1] = CONCAT17(~(byte)((ulong)uVar35 >> 0x38),
                                  CONCAT16(~(byte)((ulong)uVar35 >> 0x30),
                                           CONCAT15(~(byte)((ulong)uVar35 >> 0x28),
                                                    CONCAT14(~(byte)((ulong)uVar35 >> 0x20),
                                                             CONCAT13(~(byte)((ulong)uVar35 >> 0x18)
                                                                      ,CONCAT12(~(byte)((ulong)
                                                  uVar35 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uVar35 >> 8),~(byte)uVar35
                                                          )))))));
            *puVar28 = CONCAT17(~(byte)((ulong)uVar34 >> 0x38),
                                CONCAT16(~(byte)((ulong)uVar34 >> 0x30),
                                         CONCAT15(~(byte)((ulong)uVar34 >> 0x28),
                                                  CONCAT14(~(byte)((ulong)uVar34 >> 0x20),
                                                           CONCAT13(~(byte)((ulong)uVar34 >> 0x18),
                                                                    CONCAT12(~(byte)((ulong)uVar34
                                                                                    >> 0x10),
                                                                             CONCAT11(~(byte)((ulong
                                                  )uVar34 >> 8),~(byte)uVar34)))))));
            puVar28 = puVar28 + 4;
          } while (uVar27 != 0);
          if (uVar26 != uVar23) {
            uVar27 = uVar26;
            if ((uVar5 & 0x18) == 0) goto LAB_00db82bc;
            goto LAB_00db8290;
          }
        }
        uVar17 = *(uint *)(param_1 + 0x16c);
      }
    }
  }
  else {
    if ((bVar10 >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x16c) = uVar18 & 0xff7fffff;
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
      uVar17 = uVar18 & 0xff7fffff;
      if (*(short *)(param_1 + 0x298) == 0) {
        *(uint *)(param_1 + 0x16c) = uVar18 & 0xff7ffe7f;
        uVar17 = uVar18 & 0xff7ffe7f;
      }
    }
    if ((((uVar17 ^ 0xffffffff) & 0x1100) == 0) && ((bVar10 >> 1 & 1) == 0)) {
      cVar2 = *(char *)(param_1 + 0x2a0);
      sVar25 = *(short *)(param_1 + 700);
      sVar22 = *(short *)(param_1 + 0x330);
      if (cVar2 == '\x04') {
        sVar25 = sVar25 * 0x11;
        sVar22 = sVar22 * 0x11;
LAB_00db8208:
        *(short *)(param_1 + 0x2ba) = sVar25;
        *(short *)(param_1 + 0x2b8) = sVar25;
        *(short *)(param_1 + 0x2b6) = sVar25;
      }
      else if (cVar2 == '\x02') {
        sVar25 = sVar25 * 0x55;
        sVar22 = sVar22 * 0x55;
        *(short *)(param_1 + 0x2ba) = sVar25;
        *(short *)(param_1 + 0x2b8) = sVar25;
        *(short *)(param_1 + 0x2b6) = sVar25;
      }
      else {
        if (cVar2 != '\x01') goto LAB_00db8208;
        sVar25 = sVar25 * 0xff;
        sVar22 = sVar22 * 0xff;
        *(short *)(param_1 + 0x2ba) = sVar25;
        *(short *)(param_1 + 0x2b8) = sVar25;
        *(short *)(param_1 + 0x2b6) = sVar25;
      }
      if ((uVar17 >> 0x19 & 1) == 0) {
        *(short *)(param_1 + 0x32e) = sVar22;
        *(short *)(param_1 + 0x32c) = sVar22;
        *(short *)(param_1 + 0x32a) = sVar22;
      }
    }
  }
  if (((uVar17 & 0x380) == 0x280) && (*(char *)(param_1 + 0x2a0) != '\x10')) {
    auVar33 = NEON_umull(*(undefined8 *)(param_1 + 0x2b6),0xff00ff00ff00ff,2);
    *(undefined8 *)(param_1 + 0x2b6) =
         CONCAT26((short)((uint)(auVar33._12_4_ + 0x807f) >> 0x10),
                  CONCAT24((short)((uint)(auVar33._8_4_ + 0x807f) >> 0x10),
                           CONCAT22((short)((uint)(auVar33._4_4_ + 0x807f) >> 0x10),
                                    (short)((uint)(auVar33._0_4_ + 0x807f) >> 0x10))));
  }
  if (((((uVar17 & 0x4000400) != 0) && ((uVar17 & 0x80) != 0)) && ((uVar17 >> 8 & 1) == 0)) &&
     (*(char *)(param_1 + 0x2a0) == '\x10')) {
    auVar33 = ZEXT816(0x101010101010101);
    uVar34 = *(undefined8 *)(param_1 + 0x2b6);
    *(undefined8 *)(param_1 + 0x2b6) =
         CONCAT26((short)((ulong)uVar34 >> 0x30) * auVar33._6_2_,
                  CONCAT24((short)((ulong)uVar34 >> 0x20) * auVar33._4_2_,
                           CONCAT22((short)((ulong)uVar34 >> 0x10) * auVar33._2_2_,
                                    (short)uVar34 * auVar33._0_2_)));
  }
  *(undefined8 *)(param_1 + 0x2be) = *(undefined8 *)(param_1 + 0x2b4);
  *(undefined2 *)(param_1 + 0x2c6) = *(undefined2 *)(param_1 + 700);
  if ((uVar17 >> 0xd & 1) == 0) {
    if ((uVar17 & 0x600000) != 0) {
      iVar13 = png_gamma_significant(*(undefined4 *)(param_1 + 0x4d8));
      if ((iVar13 != 0) ||
         (iVar13 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2dc)), iVar13 != 0))
      goto LAB_00db83d4;
      uVar17 = *(uint *)(param_1 + 0x16c);
    }
    if (((uVar17 & 0x80) != 0) &&
       (((iVar13 = png_gamma_significant(*(undefined4 *)(param_1 + 0x4d8)), iVar13 != 0 ||
         (iVar13 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2dc)), iVar13 != 0)) ||
        ((*(char *)(param_1 + 0x2ac) == '\x03' &&
         (iVar13 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2b0)), iVar13 != 0))))))
    goto LAB_00db83d4;
    uVar17 = *(uint *)(param_1 + 0x16c);
    if ((uVar17 >> 0x17 & 1) != 0) {
      iVar13 = png_gamma_significant(*(undefined4 *)(param_1 + 0x2dc));
      if (iVar13 != 0) goto LAB_00db83d4;
      uVar17 = *(uint *)(param_1 + 0x16c);
    }
    if (((uVar17 >> 7 & 1) == 0) || (*(char *)(param_1 + 0x29f) != '\x03')) goto LAB_00db886c;
    uVar5 = *(ushort *)(param_1 + 0x298);
    if ((ulong)uVar5 != 0) {
      uVar23 = 0;
      bVar10 = *(byte *)(param_1 + 0x2b6);
      bVar11 = *(byte *)(param_1 + 0x2b8);
      bVar3 = *(byte *)(param_1 + 0x2ba);
      pbVar29 = (byte *)(*(long *)(param_1 + 0x288) + 1);
      do {
        lVar21 = *(long *)(param_1 + 800);
        bVar4 = *(byte *)(lVar21 + uVar23);
        if (bVar4 != 0xff) {
          if (bVar4 == 0) {
            pbVar29[-1] = bVar10;
            *pbVar29 = bVar11;
            pbVar29[1] = bVar3;
          }
          else {
            uVar17 = (uint)pbVar29[-1] * (uint)bVar4 + (uint)bVar10 * (bVar4 ^ 0xff) + 0x80;
            pbVar29[-1] = (byte)(uVar17 + ((uVar17 & 0xff00) >> 8) >> 8);
            uVar17 = (uint)*(byte *)(lVar21 + uVar23) * (uint)*pbVar29 +
                     (uint)bVar11 * (*(byte *)(lVar21 + uVar23) ^ 0xff) + 0x80;
            *pbVar29 = (byte)(uVar17 + ((uVar17 & 0xff00) >> 8) >> 8);
            uVar17 = (uint)*(byte *)(lVar21 + uVar23) * (uint)pbVar29[1] +
                     (uint)bVar3 * (*(byte *)(lVar21 + uVar23) ^ 0xff) + 0x80;
            pbVar29[1] = (byte)(uVar17 + ((uVar17 & 0xff00) >> 8) >> 8);
          }
        }
        uVar23 = uVar23 + 1;
        pbVar29 = pbVar29 + 3;
      } while (uVar5 != uVar23);
      uVar17 = *(uint *)(param_1 + 0x16c);
    }
    uVar17 = uVar17 & 0xffffff7f;
LAB_00db8868:
    *(uint *)(param_1 + 0x16c) = uVar17;
  }
  else {
LAB_00db83d4:
    png_build_gamma_table(param_1,*(undefined *)(param_1 + 0x2a0));
    uVar17 = *(uint *)(param_1 + 0x16c);
    if ((uVar17 >> 7 & 1) == 0) {
      if ((*(char *)(param_1 + 0x29f) == '\x03') &&
         (((uVar17 >> 0xc & 1) == 0 || ((uVar17 & 0x600000) == 0)))) {
        uVar23 = (ulong)*(ushort *)(param_1 + 0x290);
        if (uVar23 != 0) {
          lVar21 = *(long *)(param_1 + 0x2e0);
          pbVar29 = (byte *)(*(long *)(param_1 + 0x288) + 1);
          do {
            uVar23 = uVar23 - 1;
            pbVar29[-1] = *(byte *)(lVar21 + (ulong)pbVar29[-1]);
            *pbVar29 = *(byte *)(lVar21 + (ulong)*pbVar29);
            pbVar29[1] = *(byte *)(lVar21 + (ulong)pbVar29[1]);
            pbVar29 = pbVar29 + 3;
          } while (uVar23 != 0);
        }
        uVar17 = uVar17 & 0xffffdfff;
        goto LAB_00db8868;
      }
    }
    else {
      if ((uVar17 & 0x600000) != 0) {
        png_warning(param_1,"libpng does not support gamma+background+rgb_to_gray");
      }
      if (*(char *)(param_1 + 0x29f) == '\x03') {
        cVar2 = *(char *)(param_1 + 0x2ac);
        lVar21 = *(long *)(param_1 + 0x288);
        uVar16 = 100000;
        uVar5 = *(ushort *)(param_1 + 0x290);
        if (cVar2 == '\x01') {
          uVar15 = *(undefined4 *)(param_1 + 0x2dc);
          iVar13 = png_gamma_significant(100000);
          uVar12 = *(undefined2 *)(param_1 + 0x2b6);
          if (iVar13 != 0) goto LAB_00db867c;
LAB_00db8704:
          bVar9 = (byte)uVar12;
          bVar10 = *(byte *)(param_1 + 0x2b8);
          bVar11 = *(byte *)(param_1 + 0x2ba);
          iVar13 = png_gamma_significant(uVar15);
          uVar6 = *(ushort *)(param_1 + 0x2b6);
          if (iVar13 == 0) goto LAB_00db871c;
LAB_00db86bc:
          uVar17 = png_gamma_8bit_correct(uVar6,uVar15);
          uVar18 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2b8),uVar15);
          uVar19 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2ba),uVar15);
        }
        else {
          if (cVar2 == '\x03') {
            uVar15 = png_reciprocal(*(undefined4 *)(param_1 + 0x2b0));
            uVar16 = png_reciprocal2(*(undefined4 *)(param_1 + 0x2b0),
                                     *(undefined4 *)(param_1 + 0x2dc));
LAB_00db866c:
            iVar13 = png_gamma_significant(uVar16);
            uVar12 = *(undefined2 *)(param_1 + 0x2b6);
            if (iVar13 == 0) goto LAB_00db8704;
LAB_00db867c:
            bVar9 = png_gamma_8bit_correct(uVar12,uVar16);
            bVar10 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2b8),uVar16);
            bVar11 = png_gamma_8bit_correct(*(undefined2 *)(param_1 + 0x2ba),uVar16);
            iVar13 = png_gamma_significant(uVar15);
            uVar6 = *(ushort *)(param_1 + 0x2b6);
            if (iVar13 != 0) goto LAB_00db86bc;
LAB_00db871c:
            uVar17 = (uint)uVar6;
            bVar3 = *(byte *)(param_1 + 0x2b8);
            bVar4 = *(byte *)(param_1 + 0x2ba);
          }
          else {
            uVar15 = 100000;
            if (cVar2 != '\x02') goto LAB_00db866c;
            lVar24 = *(long *)(param_1 + 0x2e0);
            lVar30 = *(long *)(param_1 + 0x2f8);
            bVar9 = *(byte *)(lVar24 + (ulong)*(ushort *)(param_1 + 0x2b6));
            bVar10 = *(byte *)(lVar24 + (ulong)*(ushort *)(param_1 + 0x2b8));
            bVar11 = *(byte *)(lVar24 + (ulong)*(ushort *)(param_1 + 0x2ba));
            uVar17 = (uint)*(byte *)(lVar30 + (ulong)*(ushort *)(param_1 + 0x2b6));
            bVar3 = *(byte *)(lVar30 + (ulong)*(ushort *)(param_1 + 0x2b8));
            bVar4 = *(byte *)(lVar30 + (ulong)*(ushort *)(param_1 + 0x2ba));
          }
          uVar19 = (uint)bVar4;
          uVar18 = (uint)bVar3;
        }
        if (uVar5 != 0) {
          uVar23 = 0;
          pbVar29 = (byte *)(lVar21 + 1);
LAB_00db8778:
          do {
            if (uVar23 < *(ushort *)(param_1 + 0x298)) {
              lVar21 = *(long *)(param_1 + 800);
              bVar3 = *(byte *)(lVar21 + uVar23);
              if (bVar3 == 0xff) goto LAB_00db8740;
              if (bVar3 == 0) {
                pbVar29[-1] = bVar9;
                *pbVar29 = bVar10;
                pbVar29[1] = bVar11;
                uVar23 = uVar23 + 1;
                pbVar29 = pbVar29 + 3;
                if (uVar5 == uVar23) break;
                goto LAB_00db8778;
              }
              lVar30 = *(long *)(param_1 + 0x2f8);
              uVar1 = (uint)*(byte *)(lVar30 + (ulong)pbVar29[-1]) * (uint)bVar3 +
                      (bVar3 ^ 0xff) * (uVar17 & 0xff) + 0x80;
              lVar24 = *(long *)(param_1 + 0x2f0);
              pbVar29[-1] = *(byte *)(lVar24 + ((ulong)(uVar1 + (uVar1 >> 8 & 0xff) >> 8) & 0xff));
              uVar1 = (uint)*(byte *)(lVar21 + uVar23) * (uint)*(byte *)(lVar30 + (ulong)*pbVar29) +
                      (*(byte *)(lVar21 + uVar23) ^ 0xff) * (uVar18 & 0xff) + 0x80;
              *pbVar29 = *(byte *)(lVar24 + ((ulong)(uVar1 + (uVar1 >> 8 & 0xff) >> 8) & 0xff));
              uVar1 = (uint)*(byte *)(lVar21 + uVar23) * (uint)*(byte *)(lVar30 + (ulong)pbVar29[1])
                      + (*(byte *)(lVar21 + uVar23) ^ 0xff) * (uVar19 & 0xff) + 0x80;
              pbVar29[1] = *(byte *)(lVar24 + ((ulong)(uVar1 + (uVar1 >> 8 & 0xff) >> 8) & 0xff));
            }
            else {
LAB_00db8740:
              lVar21 = *(long *)(param_1 + 0x2e0);
              pbVar29[-1] = *(byte *)(lVar21 + (ulong)pbVar29[-1]);
              *pbVar29 = *(byte *)(lVar21 + (ulong)*pbVar29);
              pbVar29[1] = *(byte *)(lVar21 + (ulong)pbVar29[1]);
            }
            pbVar29 = pbVar29 + 3;
            uVar23 = uVar23 + 1;
          } while (uVar5 != uVar23);
        }
        uVar17 = *(uint *)(param_1 + 0x16c) & 0xffffdf7f;
        goto LAB_00db8868;
      }
      cVar2 = *(char *)(param_1 + 0x2ac);
      if (cVar2 == '\x03') {
        uVar16 = png_reciprocal(*(undefined4 *)(param_1 + 0x2b0));
        uVar15 = *(undefined4 *)(param_1 + 0x2b0);
LAB_00db8528:
        uVar15 = png_reciprocal2(uVar15,*(undefined4 *)(param_1 + 0x2dc));
      }
      else {
        if (cVar2 == '\x02') {
          uVar16 = png_reciprocal(*(undefined4 *)(param_1 + 0x4d8));
          uVar15 = *(undefined4 *)(param_1 + 0x4d8);
          goto LAB_00db8528;
        }
        if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"invalid background gamma type");
        }
        uVar16 = *(undefined4 *)(param_1 + 0x2dc);
        uVar15 = 100000;
      }
      iVar13 = png_gamma_significant(uVar16);
      iVar14 = png_gamma_significant(uVar15);
      if (iVar13 != 0) {
        uVar12 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 700),uVar16);
        *(undefined2 *)(param_1 + 0x2c6) = uVar12;
      }
      if (iVar14 != 0) {
        uVar12 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 700),uVar15);
        *(undefined2 *)(param_1 + 700) = uVar12;
      }
      sVar25 = *(short *)(param_1 + 0x2b6);
      if (((sVar25 == *(short *)(param_1 + 0x2b8)) && (sVar25 == *(short *)(param_1 + 0x2ba))) &&
         (sVar25 == *(short *)(param_1 + 700))) {
        uVar12 = *(undefined2 *)(param_1 + 0x2c6);
        *(short *)(param_1 + 0x2ba) = sVar25;
        *(short *)(param_1 + 0x2b8) = sVar25;
        *(short *)(param_1 + 0x2b6) = sVar25;
        *(undefined2 *)(param_1 + 0x2c4) = uVar12;
        *(undefined2 *)(param_1 + 0x2c2) = uVar12;
        *(undefined2 *)(param_1 + 0x2c0) = uVar12;
      }
      else {
        if (iVar13 != 0) {
          uVar12 = png_gamma_correct(param_1,sVar25,uVar16);
          *(undefined2 *)(param_1 + 0x2c0) = uVar12;
          uVar12 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2b8),uVar16);
          *(undefined2 *)(param_1 + 0x2c2) = uVar12;
          uVar12 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2ba),uVar16);
          *(undefined2 *)(param_1 + 0x2c4) = uVar12;
        }
        if (iVar14 != 0) {
          uVar12 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2b6),uVar15);
          *(undefined2 *)(param_1 + 0x2b6) = uVar12;
          uVar12 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2b8),uVar15);
          *(undefined2 *)(param_1 + 0x2b8) = uVar12;
          uVar12 = png_gamma_correct(param_1,*(undefined2 *)(param_1 + 0x2ba),uVar15);
          *(undefined2 *)(param_1 + 0x2ba) = uVar12;
        }
      }
      uVar17 = *(uint *)(param_1 + 0x16c);
      *(undefined *)(param_1 + 0x2ac) = 1;
    }
  }
LAB_00db886c:
  if (((uVar17 & 0x1008) != 8) || (*(char *)(param_1 + 0x29f) != '\x03')) goto LAB_00db8a28;
  uVar5 = *(ushort *)(param_1 + 0x290);
  uVar23 = (ulong)uVar5;
  *(uint *)(param_1 + 0x16c) = uVar17 & 0xfffffff7;
  if (*(byte *)(param_1 + 0x310) - 1 < 7) {
    if (uVar5 != 0) {
      uVar17 = 8 - *(byte *)(param_1 + 0x310);
      pbVar29 = *(byte **)(param_1 + 0x288);
      if (uVar5 == 1) {
        uVar26 = 0;
      }
      else {
        uVar26 = uVar23 & 0xfffe;
        uVar27 = uVar26;
        pbVar31 = pbVar29;
        do {
          uVar27 = uVar27 - 2;
          *pbVar31 = *pbVar31 >> (ulong)(uVar17 & 0x1f);
          pbVar31[3] = pbVar31[3] >> (ulong)(uVar17 & 0x1f);
          pbVar31 = pbVar31 + 6;
        } while (uVar27 != 0);
        if (uVar26 == uVar23) goto LAB_00db891c;
      }
      lVar21 = uVar23 - uVar26;
      pbVar29 = pbVar29 + uVar26 * 3;
      do {
        lVar21 = lVar21 + -1;
        *pbVar29 = *pbVar29 >> (ulong)(uVar17 & 0x1f);
        pbVar29 = pbVar29 + 3;
      } while (lVar21 != 0);
      goto LAB_00db891c;
    }
  }
  else {
LAB_00db891c:
    if ((0xfffffff8 < *(byte *)(param_1 + 0x311) - 8) && (uVar5 != 0)) {
      uVar17 = 8 - *(byte *)(param_1 + 0x311);
      lVar21 = *(long *)(param_1 + 0x288);
      if (uVar5 < 2) {
        uVar26 = 0;
      }
      else {
        uVar26 = uVar23 & 0xfffe;
        pbVar29 = (byte *)(lVar21 + 4);
        uVar27 = uVar26;
        do {
          uVar27 = uVar27 - 2;
          pbVar29[-3] = pbVar29[-3] >> (ulong)(uVar17 & 0x1f);
          *pbVar29 = *pbVar29 >> (ulong)(uVar17 & 0x1f);
          pbVar29 = pbVar29 + 6;
        } while (uVar27 != 0);
        if (uVar26 == uVar23) goto LAB_00db89a0;
      }
      lVar24 = uVar23 - uVar26;
      pbVar29 = (byte *)(lVar21 + uVar26 * 3 + 1);
      do {
        lVar24 = lVar24 + -1;
        *pbVar29 = *pbVar29 >> (ulong)(uVar17 & 0x1f);
        pbVar29 = pbVar29 + 3;
      } while (lVar24 != 0);
    }
  }
LAB_00db89a0:
  if ((0xfffffff8 < *(byte *)(param_1 + 0x312) - 8) && (uVar5 != 0)) {
    uVar17 = 8 - *(byte *)(param_1 + 0x312);
    lVar21 = *(long *)(param_1 + 0x288);
    if (uVar5 < 2) {
      uVar26 = 0;
    }
    else {
      uVar26 = uVar23 & 0xfffe;
      pbVar29 = (byte *)(lVar21 + 5);
      uVar27 = uVar26;
      do {
        uVar27 = uVar27 - 2;
        pbVar29[-3] = pbVar29[-3] >> (ulong)(uVar17 & 0x1f);
        *pbVar29 = *pbVar29 >> (ulong)(uVar17 & 0x1f);
        pbVar29 = pbVar29 + 6;
      } while (uVar27 != 0);
      if (uVar26 == uVar23) goto LAB_00db8a28;
    }
    lVar24 = uVar23 - uVar26;
    pbVar29 = (byte *)(lVar21 + uVar26 * 3 + 2);
    do {
      lVar24 = lVar24 + -1;
      *pbVar29 = *pbVar29 >> (ulong)(uVar17 & 0x1f);
      pbVar29 = pbVar29 + 3;
    } while (lVar24 != 0);
  }
LAB_00db8a28:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


