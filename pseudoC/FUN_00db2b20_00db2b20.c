// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db2b20
// Entry Point: 00db2b20
// Size: 6928 bytes
// Signature: undefined FUN_00db2b20(void)


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00db2b20(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined uVar20;
  ushort uVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  ulong uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uVar31;
  size_t __n;
  ushort *puVar32;
  uint uVar33;
  undefined2 uVar34;
  undefined *puVar35;
  long lVar36;
  long **pplVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  undefined8 local_a0;
  undefined local_80 [2];
  undefined8 local_7e;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  pplVar37 = (long **)*param_1;
  uVar17 = *(uint *)((long)pplVar37 + 0x14);
  lVar36 = **pplVar37;
  uVar25 = (ulong)uVar17 & 4;
  iVar22 = (int)uVar25;
  uVar26 = 1;
  if (iVar22 != 0) {
    uVar26 = 2;
  }
  bVar2 = *(byte *)(lVar36 + 0x29f);
  if ((bVar2 >> 2 & 1) == 0) {
    if (*(short *)(lVar36 + 0x298) != 0 && (uVar17 & 1) == 0) goto LAB_00db2b98;
LAB_00db2bb4:
    uVar14 = 0xff;
    uVar39 = uVar14;
    uVar33 = uVar14;
    if (iVar22 != 0) {
      uVar14 = 0xffff;
      uVar39 = uVar14;
      uVar33 = uVar14;
    }
  }
  else {
    if ((uVar17 & 1) != 0) goto LAB_00db2bb4;
LAB_00db2b98:
    if (iVar22 == 0) {
      pbVar29 = (byte *)param_1[4];
      if (pbVar29 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar36,"background color must be supplied to remove alpha/transparency");
      }
      uVar39 = (uint)pbVar29[1];
      uVar14 = uVar39;
      uVar33 = uVar39;
      if ((uVar17 >> 1 & 1) != 0) {
        uVar14 = (uint)pbVar29[2];
        uVar33 = (uint)*pbVar29;
      }
    }
    else {
      uVar14 = 0;
      uVar39 = 0;
      uVar33 = 0;
    }
  }
  if ((*(ushort *)(lVar36 + 0x522) & 1) == 0) {
    if ((*(char *)(lVar36 + 0x2a0) == '\x10') && ((*(byte *)(pplVar37 + 3) >> 2 & 1) == 0)) {
      uVar24 = 100000;
    }
    else {
      uVar24 = 0xb18f;
    }
    *(undefined4 *)(lVar36 + 0x4d8) = uVar24;
    *(ushort *)(lVar36 + 0x522) = *(ushort *)(lVar36 + 0x522) | 1;
  }
  switch(bVar2) {
  case 0:
    if (8 < *(byte *)(lVar36 + 0x2a0)) {
      if (*(uint *)((long)pplVar37 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar36,"gray[16] color-map: too few entries");
      }
      iVar16 = 0;
      do {
        FUN_00db4e5c(param_1,iVar16,iVar16,iVar16,iVar16,0xff,1);
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0x100);
      if (*(short *)(lVar36 + 0x298) != 0) {
        if ((uVar17 & 1) == 0) {
          if ((uVar33 == uVar39) && (uVar39 == uVar14)) {
            uVar17 = uVar14;
            if (iVar22 != 0) {
              uVar17 = uVar14 * 0xff >> 0xf;
              uVar17 = (uint)(ushort)(&png_sRGB_base)[uVar17] +
                       ((uVar14 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar17] >> 0xc) >>
                       8 & 0xff;
              FUN_00db4e5c(param_1,uVar17,uVar14,uVar14,uVar14,0xffff,2);
            }
            uVar34 = (undefined2)uVar17;
            goto LAB_00db2d1c;
          }
          uVar24 = 0xff;
          if (iVar22 != 0) {
            uVar24 = 0xffff;
          }
        }
        else {
          uVar24 = 0;
        }
        FUN_00db4e5c(param_1,0xfe,uVar33,uVar39,uVar14,uVar24,uVar26);
        uVar17 = 2;
        iVar15 = 1;
        sVar4 = *(short *)(lVar36 + 0x298);
        uVar39 = 0x100;
        uVar14 = 0xfe;
        goto joined_r0x00db39e8;
      }
LAB_00db357c:
      uVar17 = 0;
      uVar14 = 0x100;
      uVar13 = 0x100;
      goto LAB_00db4130;
    }
    uVar13 = 1 << (ulong)(*(byte *)(lVar36 + 0x2a0) & 0x1f);
    if (*(uint *)((long)pplVar37 + 0x1c) < uVar13) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar36,"gray[8] color-map: too few entries");
    }
    uVar27 = uVar13 - 1 & 0xff;
    uVar24 = 0xff;
    if (*(short *)(lVar36 + 0x298) == 0) {
      uVar24 = 0;
      uVar38 = 0x100;
    }
    else {
      uVar38 = (uint)*(ushort *)(lVar36 + 0x330);
      if (iVar22 != 0) {
        uVar24 = 0xffff;
      }
      if ((uVar17 & 1) != 0) {
        uVar24 = 0;
      }
    }
    uVar17 = 0;
    if (uVar27 != 0) {
      uVar17 = 0xff / uVar27;
    }
    uVar27 = 0;
    iVar22 = 0;
    do {
      while (uVar38 != uVar27) {
        FUN_00db4e5c(param_1,uVar27,iVar22,iVar22,iVar22,0xff,3);
        uVar27 = uVar27 + 1;
        iVar22 = iVar22 + uVar17;
        if (uVar13 == uVar27) goto LAB_00db3f7c;
      }
      FUN_00db4e5c(param_1,uVar38,uVar33,uVar39,uVar14,uVar24,uVar26);
      uVar27 = uVar27 + 1;
      iVar22 = iVar22 + uVar17;
    } while (uVar13 != uVar27);
LAB_00db3f7c:
    if (*(byte *)(lVar36 + 0x2a0) < 8) {
      png_set_packing(lVar36);
    }
    uVar17 = 0;
    uVar14 = 0x100;
    bVar2 = *(byte *)(lVar36 + 0x2a0);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(lVar36,"invalid PNG color type");
  case 2:
  case 6:
    if ((uVar17 >> 1 & 1) == 0) {
      png_set_rgb_to_gray_fixed(lVar36,1,0xffffffff,0xffffffff);
      if (*(char *)(lVar36 + 0x29f) == '\x06') {
        if ((uVar17 & 1) != 0) {
LAB_00db3598:
          if (*(uint *)((long)pplVar37 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
            png_error(lVar36,"rgb[ga] color-map: too few entries");
          }
          uVar39 = FUN_00db53f0(param_1);
          iVar15 = 1;
          uVar17 = 1;
          sVar4 = *(short *)(lVar36 + 0x298);
          uVar14 = 0xe7;
          goto joined_r0x00db39e8;
        }
        if (*(uint *)((long)pplVar37 + 0x1c) < 0x100) {
LAB_00db45cc:
                    /* WARNING: Subroutine does not return */
          png_error(lVar36,"rgb[gray] color-map: too few entries");
        }
LAB_00db3d08:
        iVar16 = *(int *)(lVar36 + 0x4d8);
        if ((iVar16 < 100000) &&
           ((iVar16 == 0 || (iVar16 = png_gamma_significant((iVar16 * 0xb + 2) / 5), iVar16 == 0))))
        goto LAB_00db3d94;
        iVar16 = 0;
        iVar15 = 3;
        do {
          FUN_00db4e5c(param_1,iVar16,iVar16,iVar16,iVar16,0xff,3);
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x100);
        bVar12 = true;
        cVar3 = *(char *)(lVar36 + 0x29f);
      }
      else {
        if ((*(short *)(lVar36 + 0x298) != 0) && ((uVar17 & 1) != 0)) goto LAB_00db3598;
        if (*(uint *)((long)pplVar37 + 0x1c) < 0x100) goto LAB_00db45cc;
        if (*(short *)(lVar36 + 0x298) != 0) goto LAB_00db3d08;
LAB_00db3d94:
        iVar16 = 0;
        iVar15 = 1;
        do {
          FUN_00db4e5c(param_1,iVar16,iVar16,iVar16,iVar16,0xff,1);
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x100);
        bVar12 = false;
        cVar3 = *(char *)(lVar36 + 0x29f);
      }
      if ((cVar3 == '\x06') || (*(short *)(lVar36 + 0x298) != 0)) {
        if (bVar12) {
          uVar17 = uVar39;
          if (iVar22 == 0) {
            uVar17 = (uint)(ushort)(&png_sRGB_table)[uVar39];
          }
          uVar17 = png_gamma_16bit_correct(uVar17,*(undefined4 *)(lVar36 + 0x4d8));
          uVar17 = (uVar17 & 0xffff) * 0xff + 0x807f >> 0x10;
LAB_00db3e94:
          FUN_00db4e5c(param_1,uVar17,uVar39,uVar39,uVar39,0,uVar26);
          uVar39 = uVar17;
        }
        else if (iVar22 != 0) {
          uVar17 = uVar39 * 0xff >> 0xf;
          uVar26 = 2;
          uVar17 = (uint)(ushort)(&png_sRGB_base)[uVar17] +
                   ((uVar39 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar17] >> 0xc) >> 8 &
                   0xff;
          goto LAB_00db3e94;
        }
        uVar34 = (undefined2)uVar39;
        local_80[0] = 0;
        local_7e = CONCAT26(uVar34,CONCAT24(uVar34,CONCAT22(uVar34,uVar34)));
        png_set_background_fixed(lVar36,local_80,1,0,0);
        uVar17 = 0;
        uVar14 = 0x100;
        sVar4 = *(short *)(lVar36 + 0x298);
        uVar39 = 0x100;
        goto joined_r0x00db39e8;
      }
      uVar17 = 0;
      uVar13 = 0x100;
      uVar14 = 0x100;
    }
    else {
      if ((bVar2 != 6) && (*(short *)(lVar36 + 0x298) == 0)) {
        if (*(uint *)((long)pplVar37 + 0x1c) < 0xd8) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar36,"rgb color-map: too few entries");
        }
        uVar13 = FUN_00db5784(param_1);
        uVar17 = 3;
        uVar14 = 0x100;
        goto LAB_00db4130;
      }
      if ((uVar17 & 1) == 0) {
        if (*(uint *)((long)pplVar37 + 0x1c) < 0xf4) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar36,"rgb-alpha color-map: too few entries");
        }
        lVar40 = ((ulong)uVar17 & 3) + 1;
        __n = lVar40 + lVar40 * (uVar25 >> 2);
        uVar13 = FUN_00db5784(param_1);
        FUN_00db4e5c(param_1,uVar13,uVar33,uVar39,uVar14,0,uVar26);
        uVar17 = uVar33;
        uVar27 = uVar39;
        uVar38 = uVar39;
        if (iVar22 != 0) {
          uVar17 = uVar33 * 0xff >> 0xf;
          uVar27 = uVar39 * 0xff >> 0xf;
          uVar38 = uVar14 * 0xff >> 0xf;
          uVar17 = (uint)(ushort)(&png_sRGB_base)[uVar17] +
                   ((uVar33 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar17] >> 0xc) >> 8 &
                   0xff;
          uVar27 = (uint)(ushort)(&png_sRGB_base)[uVar27] +
                   ((uVar39 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar27] >> 0xc) >> 8 &
                   0xff;
          uVar38 = (uint)(ushort)(&png_sRGB_base)[uVar38] +
                   ((uVar14 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar38] >> 0xc) >> 8 &
                   0xff;
        }
        iVar16 = memcmp((void *)(param_1[3] + (ulong)(uVar13 * (int)__n)),
                        (void *)(param_1[3] +
                                ((ulong)(((int)((ulong)uVar17 * 5 + 0x82 >> 8) * 6 +
                                         (uVar27 * 5 + 0x82 >> 8)) * 6 + (uVar38 * 5 + 0x82 >> 8)) &
                                0xff) * __n),__n);
        if (iVar16 == 0) {
          local_80[0] = 0;
          local_7e = CONCAT26((short)uVar39,
                              CONCAT24((short)uVar14,CONCAT22((short)uVar39,(short)uVar33)));
          png_set_background_fixed(lVar36,local_80,1,0,0);
          uVar17 = 3;
          uVar14 = 0x100;
          goto LAB_00db4130;
        }
        local_a0 = 0;
        uVar17 = uVar39 * 0x7f7f + (uVar39 * 0x7f7f >> 0x10) + 0x8000 >> 0x10;
        uVar38 = (uVar14 * 0x7f + 0x1b2a80) * 0x101;
        uVar27 = uVar14 * 0x7f7f + (uVar14 * 0x7f7f >> 0x10) + 0x8000 >> 0x10;
        uVar19 = (uVar14 * 0x7f + 0x7fff80) * 0x101;
        uVar38 = uVar38 + (uVar38 >> 0x10) + 0x8000 >> 0x10;
        uVar6 = (uVar39 * 0x7f + 0x1b2a80) * 0x101;
        uVar5 = (uVar39 * 0x7f + 0x7fff80) * 0x101;
        uVar19 = uVar19 + (uVar19 >> 0x10) + 0x8000 >> 0x10;
        uVar5 = uVar5 + (uVar5 >> 0x10) + 0x8000 >> 0x10;
        uVar6 = uVar6 + (uVar6 >> 0x10) + 0x8000 >> 0x10;
        do {
          iVar16 = uVar13 + local_a0._4_4_;
          if (iVar22 == 0) {
            uVar25 = (ulong)(ushort)(&png_sRGB_table)[uVar33] * 0x7f +
                     (ulong)(ushort)(&png_sRGB_table)[local_a0 & 0xffffffff] * 0x80;
            uVar31 = uVar25 >> 0xf;
            uVar1 = (ulong)(ushort)(&png_sRGB_table)[uVar14] * 0x7f;
            uVar30 = (ulong)(ushort)(&png_sRGB_table)[uVar39] * 0x7f >> 0xf;
            uVar28 = (uint)((ulong)(ushort)(&png_sRGB_table)[uVar39] * 0x7f);
            uVar18 = (uint)(ushort)(&png_sRGB_base)[uVar31] +
                     (((uint)uVar25 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar31] >> 0xc) >> 8 &
                     0xff;
            uVar7 = (uint)(ushort)(&png_sRGB_base)[uVar30] +
                    ((uVar28 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar30] >> 0xc) >> 8 & 0xff;
            uVar8 = (uint)(ushort)(&png_sRGB_base)[uVar1 >> 0xf] +
                    (((uint)uVar1 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar1 >> 0xf] >> 0xc) >>
                    8 & 0xff;
            FUN_00db4e5c(param_1,iVar16 + 1,uVar18,uVar7,uVar8,0,uVar26);
            uVar25 = (ulong)(&DAT_001b2a80 + uVar1) >> 0xf;
            uVar9 = (uint)(ushort)(&png_sRGB_base)[uVar25] +
                    (((uint)(&DAT_001b2a80 + uVar1) & 0x7fff) *
                     (uint)(byte)(&png_sRGB_delta)[uVar25] >> 0xc) >> 8 & 0xff;
            FUN_00db4e5c(param_1,iVar16 + 2,uVar18,uVar7,uVar9,0,uVar26);
            uVar25 = uVar1 + 0x7fff80 >> 0xf;
            uVar10 = (uint)(ushort)(&png_sRGB_base)[uVar25] +
                     (((uint)(uVar1 + 0x7fff80) & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar25] >>
                     0xc) >> 8 & 0xff;
            FUN_00db4e5c(param_1,iVar16 + 3,uVar18,uVar7,uVar10,0,uVar26);
            uVar7 = uVar28 + 0x1b2a80 >> 0xf;
            uVar7 = (uint)(ushort)(&png_sRGB_base)[uVar7] +
                    ((uVar28 + 0x1b2a80 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar7] >> 0xc) >>
                    8 & 0xff;
            FUN_00db4e5c(param_1,iVar16 + 4,uVar18,uVar7,uVar8,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 5,uVar18,uVar7,uVar9,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 6,uVar18,uVar7,uVar10,0,uVar26);
            uVar7 = uVar28 + 0x7fff80 >> 0xf;
            uVar7 = (uint)(ushort)(&png_sRGB_base)[uVar7] +
                    ((uVar28 + 0x7fff80 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar7] >> 0xc) >>
                    8 & 0xff;
            FUN_00db4e5c(param_1,iVar16 + 7,uVar18,uVar7,
                         (uint)(ushort)(&png_sRGB_base)[uVar1 >> 0xf] +
                         (((uint)uVar1 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar1 >> 0xf] >>
                         0xc) >> 8 & 0xff,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 8,uVar18,uVar7,uVar9,0,uVar26);
          }
          else {
            uVar18 = ((int)((ulong)(ushort)(&png_sRGB_table)[local_a0 & 0xffffffff] * 0x80) +
                     uVar33 * 0x7f) * 0x101;
            uVar18 = uVar18 + (uVar18 >> 0x10) + 0x8000 >> 0x10;
            FUN_00db4e5c(param_1,iVar16 + 1,uVar18,uVar17,uVar27,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 2,uVar18,uVar17,uVar38,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 3,uVar18,uVar17,uVar19,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 4,uVar18,uVar6,uVar27,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 5,uVar18,uVar6,uVar38,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 6,uVar18,uVar6,uVar19,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 7,uVar18,uVar5,uVar27,0,uVar26);
            FUN_00db4e5c(param_1,iVar16 + 8,uVar18,uVar5,uVar38,0,uVar26);
            uVar7 = uVar5;
            uVar10 = uVar19;
          }
          FUN_00db4e5c(param_1,iVar16 + 9,uVar18,uVar7,uVar10,0,uVar26);
          uVar18 = (int)local_a0 << 1;
          iVar16 = local_a0._4_4_ + 9;
          local_a0 = CONCAT44(iVar16,uVar18) | 0x7f;
        } while ((uVar18 | 0x7f) < 0x100);
        uVar17 = 4;
        iVar15 = 1;
        sVar4 = *(short *)(lVar36 + 0x298);
        uVar39 = uVar13 + iVar16 + 1;
        uVar14 = uVar13;
      }
      else {
        if (*(uint *)((long)pplVar37 + 0x1c) < 0xf4) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar36,"rgb+alpha color-map: too few entries");
        }
        uVar14 = FUN_00db5784(param_1);
        iVar15 = 1;
        FUN_00db4e5c(param_1,uVar14,0xff,0xff,0xff,0,1);
        FUN_00db4e5c(param_1,uVar14 + 1,0,0,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 2,0,0,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 3,0,0,0xff,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 4,0,0x7f,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 5,0,0x7f,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 6,0,0x7f,0xff,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 7,0,0xff,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 8,0,0xff,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 9,0,0xff,0xff,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 10,0x7f,0,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0xb,0x7f,0,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0xc,0x7f,0,0xff,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0xd,0x7f,0x7f,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0xe,0x7f,0x7f,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0xf,0x7f,0x7f,0xff,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x10,0x7f,0xff,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x11,0x7f,0xff,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x12,0x7f,0xff,0xff,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x13,0xff,0,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x14,0xff,0,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x15,0xff,0,0xff,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x16,0xff,0x7f,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x17,0xff,0x7f,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x18,0xff,0x7f,0xff,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x19,0xff,0xff,0,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x1a,0xff,0xff,0x7f,0x80,1);
        FUN_00db4e5c(param_1,uVar14 + 0x1b,0xff,0xff,0xff,0x80,1);
        uVar17 = 4;
        sVar4 = *(short *)(lVar36 + 0x298);
        uVar39 = uVar14 + 0x1c;
      }
joined_r0x00db39e8:
      uVar13 = uVar39;
      if ((sVar4 != 0) && ((*(byte *)(lVar36 + 0x29f) >> 2 & 1) == 0)) {
        png_set_tRNS_to_alpha(lVar36);
      }
    }
    if (iVar15 != 3) {
      if (iVar15 != 1) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar36,"bad data option (internal error)");
      }
      goto LAB_00db4130;
    }
    bVar2 = *(byte *)(lVar36 + 0x2a0);
    break;
  case 3:
    if ((ulong)*(ushort *)(lVar36 + 0x298) == 0) {
      lVar40 = 0;
    }
    else {
      lVar40 = *(long *)(lVar36 + 800);
    }
    uVar13 = (uint)*(ushort *)(lVar36 + 0x290);
    if (0xff < uVar13) {
      uVar13 = 0x100;
    }
    if (*(uint *)((long)pplVar37 + 0x1c) < uVar13) {
                    /* WARNING: Subroutine does not return */
      png_error(lVar36,"palette color-map: too few entries");
    }
    if (uVar13 != 0) {
      uVar25 = 0;
      uVar1 = 0;
      if (lVar40 != 0) {
        uVar1 = (ulong)*(ushort *)(lVar36 + 0x298);
      }
      puVar35 = (undefined *)(*(long *)(lVar36 + 0x288) + 1);
      do {
        if (((lVar40 == 0 || (uVar17 & 1) != 0) || uVar1 <= uVar25) ||
           (bVar2 = *(byte *)(lVar40 + uVar25), bVar2 == 0xff)) {
          if (uVar25 < uVar1) {
            uVar20 = *(undefined *)(lVar40 + uVar25);
          }
          else {
            uVar20 = 0xff;
          }
          FUN_00db4e5c(param_1,uVar25 & 0xffffffff,puVar35[-1],*puVar35,puVar35[1],uVar20,3);
        }
        else if (bVar2 == 0) {
          FUN_00db4e5c(param_1,uVar25 & 0xffffffff,uVar33,uVar39,uVar14,0,uVar26);
        }
        else {
          iVar16 = FUN_00db58b8(param_1,puVar35[-1],3);
          iVar15 = FUN_00db58b8(param_1,uVar33,uVar26);
          uVar27 = iVar16 * (uint)bVar2 + iVar15 * (bVar2 ^ 0xff);
          if (iVar22 == 0) {
            uVar27 = (uint)(ushort)(&png_sRGB_base)[uVar27 >> 0xf] +
                     ((uVar27 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar27 >> 0xf] >> 0xc) >> 8
                     & 0xff;
          }
          else {
            uVar27 = uVar27 * 0x101 + (uVar27 * 0x101 >> 0x10) + 0x8000 >> 0x10;
          }
          bVar2 = *(byte *)(lVar40 + uVar25);
          iVar16 = FUN_00db58b8(param_1,*puVar35,3);
          iVar15 = FUN_00db58b8(param_1,uVar39,uVar26);
          uVar38 = iVar16 * (uint)bVar2 + iVar15 * (bVar2 ^ 0xff);
          if (iVar22 == 0) {
            uVar38 = (uint)(ushort)(&png_sRGB_base)[uVar38 >> 0xf] +
                     ((uVar38 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar38 >> 0xf] >> 0xc) >> 8
                     & 0xff;
          }
          else {
            uVar38 = uVar38 * 0x101 + (uVar38 * 0x101 >> 0x10) + 0x8000 >> 0x10;
          }
          bVar2 = *(byte *)(lVar40 + uVar25);
          iVar16 = FUN_00db58b8(param_1,puVar35[1],3);
          iVar15 = FUN_00db58b8(param_1,uVar14,uVar26);
          uVar19 = iVar16 * (uint)bVar2 + iVar15 * (bVar2 ^ 0xff);
          if (iVar22 == 0) {
            uVar21 = (ushort)*(byte *)(lVar40 + uVar25);
            uVar19 = (uint)(ushort)(&png_sRGB_base)[uVar19 >> 0xf] +
                     ((uVar19 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19 >> 0xf] >> 0xc) >> 8
                     & 0xff;
          }
          else {
            uVar19 = uVar19 * 0x101 + (uVar19 * 0x101 >> 0x10) + 0x8000 >> 0x10;
            uVar21 = CONCAT11(*(undefined *)(lVar40 + uVar25),*(undefined *)(lVar40 + uVar25));
          }
          FUN_00db4e5c(param_1,uVar25 & 0xffffffff,uVar27,uVar38,uVar19,uVar21,uVar26);
        }
        uVar25 = uVar25 + 1;
        puVar35 = puVar35 + 3;
      } while (uVar13 != uVar25);
    }
    if (*(byte *)(lVar36 + 0x2a0) < 8) {
      png_set_packing(lVar36);
    }
    uVar17 = 0;
    uVar14 = 0x100;
    bVar2 = *(byte *)(lVar36 + 0x2a0);
    break;
  case 4:
    if ((uVar17 & 1) == 0) {
      if (((uVar17 >> 1 & 1) == 0) || ((uVar33 == uVar39 && (uVar39 == uVar14)))) {
        if (*(uint *)((long)pplVar37 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
          png_error(lVar36,"gray-alpha color-map: too few entries");
        }
        iVar16 = 0;
        do {
          FUN_00db4e5c(param_1,iVar16,iVar16,iVar16,iVar16,0xff,1);
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x100);
        uVar17 = uVar39;
        if (iVar22 != 0) {
          uVar17 = uVar39 * 0xff >> 0xf;
          uVar17 = (uint)(ushort)(&png_sRGB_base)[uVar17] +
                   ((uVar39 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar17] >> 0xc) >> 8 &
                   0xff;
          FUN_00db4e5c(param_1,uVar17,uVar39,uVar39,uVar39,0xffff,2);
        }
        uVar34 = (undefined2)uVar17;
LAB_00db2d1c:
        local_80[0] = 0;
        local_7e = CONCAT26(uVar34,CONCAT24(uVar34,CONCAT22(uVar34,uVar34)));
        png_set_background_fixed(lVar36,local_80,1,0,0);
        goto LAB_00db357c;
      }
      if (*(uint *)((long)pplVar37 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar36,"ga-alpha color-map: too few entries");
      }
      uVar25 = 0x73;
      iVar16 = 0;
      do {
        iVar15 = iVar16 + 1;
        iVar23 = (int)(uVar25 * 0x1bb4a405 >> 0x20);
        uVar17 = iVar23 + ((uint)((int)uVar25 - iVar23) >> 1) >> 7;
        FUN_00db4e5c(param_1,iVar16,uVar17,uVar17,uVar17,0xff,1);
        uVar25 = (ulong)((int)uVar25 + 0x100);
        iVar16 = iVar15;
      } while (iVar15 != 0xe7);
      uVar24 = 0xff;
      if (iVar22 != 0) {
        uVar24 = 0xffff;
      }
      FUN_00db4e5c(param_1,0xe7,(ulong)uVar33,(ulong)uVar39,(ulong)uVar14,uVar24,uVar26);
      if (iVar22 == 0) {
        uVar33 = (uint)(ushort)(&png_sRGB_table)[uVar33];
        uVar39 = (uint)(ushort)(&png_sRGB_table)[uVar39];
        uVar14 = (uint)(ushort)(&png_sRGB_table)[uVar14];
      }
      lVar40 = -6;
      puVar32 = &png_sRGB_table;
      do {
        iVar22 = (uint)*puVar32 * 0x33;
        uVar17 = iVar22 + uVar33 * 0xcc;
        uVar13 = iVar22 + uVar39 * 0xcc;
        uVar38 = uVar17 >> 0xf;
        uVar27 = iVar22 + uVar14 * 0xcc;
        uVar19 = uVar13 >> 0xf;
        uVar5 = uVar27 >> 0xf;
        FUN_00db4e5c(param_1,(int)lVar40 + 0xee,
                     (uint)(ushort)(&png_sRGB_base)[uVar38] +
                     ((uVar17 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar38] >> 0xc) >> 8 & 0xff,
                     (uint)(ushort)(&png_sRGB_base)[uVar19] +
                     ((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19] >> 0xc) >> 8 & 0xff,
                     (uint)(ushort)(&png_sRGB_base)[uVar5] +
                     ((uVar27 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar5] >> 0xc) >> 8 & 0xff,
                     0xff,1);
        bVar12 = lVar40 != -1;
        lVar40 = lVar40 + 1;
        puVar32 = puVar32 + 0x33;
      } while (bVar12);
      lVar40 = -6;
      puVar32 = &png_sRGB_table;
      do {
        iVar22 = (uint)*puVar32 * 0x66;
        uVar17 = iVar22 + uVar33 * 0x99;
        uVar13 = iVar22 + uVar39 * 0x99;
        uVar38 = uVar17 >> 0xf;
        uVar27 = iVar22 + uVar14 * 0x99;
        uVar19 = uVar13 >> 0xf;
        uVar5 = uVar27 >> 0xf;
        FUN_00db4e5c(param_1,(int)lVar40 + 0xf4,
                     (uint)(ushort)(&png_sRGB_base)[uVar38] +
                     ((uVar17 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar38] >> 0xc) >> 8 & 0xff,
                     (uint)(ushort)(&png_sRGB_base)[uVar19] +
                     ((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19] >> 0xc) >> 8 & 0xff,
                     (uint)(ushort)(&png_sRGB_base)[uVar5] +
                     ((uVar27 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar5] >> 0xc) >> 8 & 0xff,
                     0xff,1);
        bVar12 = lVar40 != -1;
        lVar40 = lVar40 + 1;
        puVar32 = puVar32 + 0x33;
      } while (bVar12);
      lVar40 = -6;
      puVar32 = &png_sRGB_table;
      do {
        iVar22 = (uint)*puVar32 * 0x99;
        uVar17 = iVar22 + uVar33 * 0x66;
        uVar13 = iVar22 + uVar39 * 0x66;
        uVar38 = uVar17 >> 0xf;
        uVar27 = iVar22 + uVar14 * 0x66;
        uVar19 = uVar13 >> 0xf;
        uVar5 = uVar27 >> 0xf;
        FUN_00db4e5c(param_1,(int)lVar40 + 0xfa,
                     (uint)(ushort)(&png_sRGB_base)[uVar38] +
                     ((uVar17 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar38] >> 0xc) >> 8 & 0xff,
                     (uint)(ushort)(&png_sRGB_base)[uVar19] +
                     ((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19] >> 0xc) >> 8 & 0xff,
                     (uint)(ushort)(&png_sRGB_base)[uVar5] +
                     ((uVar27 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar5] >> 0xc) >> 8 & 0xff,
                     0xff,1);
        bVar12 = lVar40 != -1;
        lVar40 = lVar40 + 1;
        puVar32 = puVar32 + 0x33;
      } while (bVar12);
      lVar40 = -6;
      uVar17 = 1;
      puVar32 = &png_sRGB_table;
      do {
        iVar22 = (uint)*puVar32 * 0xcc;
        uVar13 = iVar22 + uVar33 * 0x33;
        uVar27 = iVar22 + uVar39 * 0x33;
        uVar19 = uVar13 >> 0xf;
        uVar38 = iVar22 + uVar14 * 0x33;
        uVar5 = uVar27 >> 0xf;
        uVar6 = uVar38 >> 0xf;
        FUN_00db4e5c(param_1,(int)lVar40 + 0x100,
                     (uint)(ushort)(&png_sRGB_base)[uVar19] +
                     ((uVar13 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19] >> 0xc) >> 8 & 0xff,
                     (uint)(ushort)(&png_sRGB_base)[uVar5] +
                     ((uVar27 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar5] >> 0xc) >> 8 & 0xff,
                     (uint)(ushort)(&png_sRGB_base)[uVar6] +
                     ((uVar38 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar6] >> 0xc) >> 8 & 0xff,
                     0xff,1);
        bVar12 = lVar40 != -1;
        lVar40 = lVar40 + 1;
        puVar32 = puVar32 + 0x33;
      } while (bVar12);
      uVar13 = 0x100;
      uVar14 = 0xe7;
    }
    else {
      if (*(uint *)((long)pplVar37 + 0x1c) < 0x100) {
                    /* WARNING: Subroutine does not return */
        png_error(lVar36,"gray+alpha color-map: too few entries");
      }
      uVar13 = FUN_00db53f0(param_1);
      uVar17 = 1;
      uVar14 = 0xe7;
    }
LAB_00db4130:
    png_set_alpha_mode_fixed(lVar36,0,220000);
    bVar2 = *(byte *)(lVar36 + 0x2a0);
  }
  if (8 < bVar2) {
    png_set_scale_16(lVar36);
  }
  if ((0x100 < uVar13) || (*(uint *)((long)pplVar37 + 0x1c) < uVar13)) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar36,"color map overflow (BAD internal error)");
  }
  *(uint *)((long)pplVar37 + 0x1c) = uVar13;
  switch(uVar17) {
  case 0:
  case 3:
    if (uVar14 == 0x100) {
LAB_00db41c8:
      *(uint *)(param_1 + 9) = uVar17;
      if (*(long *)(lVar11 + 0x28) == local_70) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    break;
  case 1:
    if (uVar14 == 0xe7) goto LAB_00db41c8;
    break;
  case 2:
    if ((uVar14 == 0xfe) && (0xfe < uVar13)) goto LAB_00db41c8;
    break;
  case 4:
    if (uVar14 == 0xd8) goto LAB_00db41c8;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(lVar36,"bad processing option (internal error)");
  }
                    /* WARNING: Subroutine does not return */
  png_error(lVar36,"bad background index (internal error)");
}


