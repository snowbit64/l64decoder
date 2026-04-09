// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_read_transformations
// Entry Point: 00db8d9c
// Size: 11432 bytes
// Signature: undefined png_do_read_transformations(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_do_read_transformations(long param_1,uint *param_2)

{
  bool bVar1;
  byte *pbVar2;
  undefined (*pauVar3) [16];
  uint uVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  bool bVar17;
  ushort uVar18;
  undefined auVar19 [16];
  unkbyte9 Var20;
  undefined auVar21 [16];
  unkbyte9 Var22;
  bool bVar23;
  uint uVar24;
  undefined8 uVar25;
  ushort *puVar26;
  undefined (*pauVar27) [16];
  ulong uVar28;
  ulong uVar29;
  undefined uVar30;
  int iVar31;
  long lVar32;
  undefined *puVar33;
  byte *pbVar34;
  ushort *puVar35;
  undefined uVar36;
  ulong uVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined8 *puVar40;
  uint uVar41;
  undefined *puVar42;
  undefined uVar43;
  byte *pbVar44;
  byte *pbVar45;
  uint uVar46;
  ulong *puVar47;
  ushort uVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  long lVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  byte *local_70;
  byte *local_68;
  int local_60;
  int local_5c;
  long local_58;
  
  lVar12 = tpidr_el0;
  local_58 = *(long *)(lVar12 + 0x28);
  lVar32 = *(long *)(param_1 + 0x260);
  if (lVar32 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"NULL row buffer");
  }
  if ((*(uint *)(param_1 + 0x168) & 0x4040) == 0x4000) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Uninitialized row");
  }
  if ((*(uint *)(param_1 + 0x16c) >> 0xc & 1) != 0) {
    uVar48 = *(ushort *)(param_1 + 0x298);
    if (*(char *)(param_2 + 4) == '\x03') {
      if (((uVar48 != 0) && (*(char *)(param_1 + 0x2a0) == '\b')) &&
         (*(long *)(param_1 + 0x410) == 0)) {
        uVar25 = png_malloc(param_1,0x400);
        *(undefined8 *)(param_1 + 0x410) = uVar25;
        png_riffle_palette_neon(param_1);
        if (*(char *)(param_2 + 4) != '\x03') goto LAB_00db9284;
        lVar32 = *(long *)(param_1 + 0x260);
        uVar48 = *(ushort *)(param_1 + 0x298);
      }
      bVar56 = *(byte *)((long)param_2 + 0x11);
      lVar32 = lVar32 + 1;
      lVar51 = *(long *)(param_1 + 0x288);
      lVar53 = *(long *)(param_1 + 800);
      uVar41 = *param_2;
      uVar52 = (ulong)uVar41;
      if (bVar56 < 8) {
        uVar37 = uVar52;
        if (bVar56 == 1) {
          local_70 = (byte *)(lVar32 + uVar52 + -1);
          local_68 = (byte *)(lVar32 + (ulong)(uVar41 - 1 >> 3));
          if (uVar41 == 0) {
LAB_00db9198:
            uVar37 = 0;
          }
          else {
            uVar24 = -uVar41 & 7;
            iVar31 = uVar41 - 1;
            *local_70 = *local_68 >> (ulong)uVar24 & 1;
            if (uVar24 == 7) goto LAB_00db90b0;
            while (uVar24 = uVar24 + 1, iVar31 != 0) {
              while( true ) {
                local_70 = local_70 + -1;
                iVar31 = iVar31 + -1;
                *local_70 = *local_68 >> (ulong)(uVar24 & 0x1f) & 1;
                if (uVar24 != 7) break;
LAB_00db90b0:
                local_68 = local_68 + -1;
                uVar24 = 0;
                if (iVar31 == 0) goto LAB_00db919c;
              }
            }
          }
        }
        else if (bVar56 == 2) {
          local_70 = (byte *)(lVar32 + uVar52 + -1);
          local_68 = (byte *)(lVar32 + (ulong)(uVar41 - 1 >> 2));
          if (uVar41 == 0) goto LAB_00db9198;
          uVar24 = ~(uVar41 * 2 + 6) & 6;
          iVar31 = uVar41 - 1;
          *local_70 = *local_68 >> (ulong)uVar24 & 3;
          if (uVar24 == 6) goto LAB_00db9150;
          while (uVar24 = uVar24 + 2, iVar31 != 0) {
            while( true ) {
              local_70 = local_70 + -1;
              iVar31 = iVar31 + -1;
              *local_70 = *local_68 >> (ulong)(uVar24 & 0x1f) & 3;
              if (uVar24 != 6) break;
LAB_00db9150:
              local_68 = local_68 + -1;
              uVar24 = 0;
              if (iVar31 == 0) goto LAB_00db919c;
            }
          }
        }
        else if (bVar56 == 4) {
          local_70 = (byte *)(lVar32 + uVar52 + -1);
          local_68 = (byte *)(lVar32 + (ulong)(uVar41 - 1 >> 1));
          if (uVar41 == 0) goto LAB_00db9198;
          uVar24 = (uVar41 & 1) << 2;
          iVar31 = uVar41 - 1;
          *local_70 = *local_68 >> (ulong)uVar24 & 0xf;
          if ((uVar41 & 1) == 1) goto LAB_00db8ecc;
          while (uVar24 = uVar24 + 4, iVar31 != 0) {
            while( true ) {
              local_70 = local_70 + -1;
              iVar31 = iVar31 + -1;
              *local_70 = *local_68 >> (ulong)(uVar24 & 0x1f) & 0xf;
              if (uVar24 != 4) break;
LAB_00db8ecc:
              local_68 = local_68 + -1;
              uVar24 = 0;
              if (iVar31 == 0) goto LAB_00db919c;
            }
          }
        }
LAB_00db919c:
        *(ulong *)(param_2 + 2) = uVar37;
        *(undefined *)((long)param_2 + 0x11) = 8;
        *(undefined *)((long)param_2 + 0x13) = 8;
      }
      else if (bVar56 != 8) goto LAB_00db9284;
      local_68 = (byte *)(lVar32 + uVar52 + -1);
      if (uVar48 == 0) {
        uVar52 = (ulong)(uVar41 * 3);
        local_70 = (byte *)(lVar32 + uVar52 + -1);
        uVar24 = png_do_expand_palette_rgb8_neon(param_1,param_2,lVar32,&local_68,&local_70);
        if (uVar24 < uVar41) {
          iVar31 = uVar41 - uVar24;
          do {
            iVar31 = iVar31 + -1;
            *local_70 = *(byte *)(lVar51 + (ulong)*local_68 * 3 + 2);
            pbVar44 = local_70 + -2;
            local_70[-1] = *(byte *)(lVar51 + (ulong)*local_68 * 3 + 1);
            local_70 = local_70 + -3;
            *pbVar44 = *(byte *)(lVar51 + (ulong)*local_68 * 3);
            local_68 = local_68 + -1;
          } while (iVar31 != 0);
        }
        uVar43 = 0x18;
        uVar30 = 3;
        uVar36 = 2;
      }
      else {
        local_70 = (byte *)(lVar32 + uVar52 * 4 + -1);
        if (*(long *)(param_1 + 0x410) == 0) {
          uVar24 = 0;
          if (uVar41 != 0) goto LAB_00db8f8c;
        }
        else {
          uVar24 = png_do_expand_palette_rgba8_neon(param_1,param_2,lVar32,&local_68,&local_70);
          if (uVar24 < uVar41) {
LAB_00db8f8c:
            iVar31 = uVar41 - uVar24;
            do {
              pbVar44 = local_70;
              if (*local_68 < uVar48) {
                *local_70 = *(byte *)(lVar53 + (ulong)*local_68);
              }
              else {
                *local_70 = 0xff;
              }
              local_70 = local_70 + -1;
              iVar31 = iVar31 + -1;
              *local_70 = *(byte *)(lVar51 + (ulong)*local_68 * 3 + 2);
              pbVar44[-2] = *(byte *)(lVar51 + (ulong)*local_68 * 3 + 1);
              local_70 = pbVar44 + -4;
              pbVar44[-3] = *(byte *)(lVar51 + (ulong)*local_68 * 3);
              local_68 = local_68 + -1;
            } while (iVar31 != 0);
          }
        }
        uVar43 = 0x20;
        uVar52 = (ulong)(uVar41 << 2);
        uVar30 = 4;
        uVar36 = 6;
      }
      *(undefined *)((long)param_2 + 0x11) = 8;
      *(undefined *)((long)param_2 + 0x13) = uVar43;
      *(ulong *)(param_2 + 2) = uVar52;
      *(undefined *)(param_2 + 4) = uVar36;
      *(undefined *)((long)param_2 + 0x12) = uVar30;
    }
    else {
      if ((uVar48 == 0) || ((*(uint *)(param_1 + 0x16c) >> 0x19 & 1) == 0)) {
        lVar51 = 0;
      }
      else {
        lVar51 = param_1 + 0x328;
      }
      FUN_00dbba44(param_2,lVar32 + 1,lVar51);
    }
  }
LAB_00db9284:
  uVar41 = *(uint *)(param_1 + 0x16c);
  if (((uVar41 & 0x40080) == 0x40000) && ((*(byte *)(param_2 + 4) | 2) == 6)) {
    png_do_strip_channel(param_2,*(long *)(param_1 + 0x260) + 1,0);
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if (((uVar41 & 0x600000) != 0) && (bVar56 = *(byte *)(param_2 + 4), (bVar56 & 3) == 2)) {
    uVar48 = *(ushort *)(param_1 + 0x40a);
    uVar7 = *(ushort *)(param_1 + 0x40c);
    puVar35 = (ushort *)(*(long *)(param_1 + 0x260) + 1);
    iVar31 = 0x8000 - ((uint)uVar48 + (uint)uVar7);
    uVar41 = *param_2;
    uVar52 = (ulong)uVar41;
    uVar24 = (uint)uVar48;
    uVar46 = (uint)uVar7;
    if (*(char *)((long)param_2 + 0x11) == '\b') {
      lVar32 = *(long *)(param_1 + 0x2f0);
      if ((lVar32 != 0) && (lVar51 = *(long *)(param_1 + 0x2f8), lVar51 != 0)) {
        bVar23 = false;
        puVar26 = puVar35;
joined_r0x00db931c:
        if (uVar41 != 0) {
          do {
            bVar54 = *(byte *)puVar35;
            if ((bVar54 == *(byte *)((long)puVar35 + 1)) && (bVar54 == *(byte *)(puVar35 + 1))) {
              if (*(long *)(param_1 + 0x2e0) != 0) {
                pbVar44 = (byte *)(*(long *)(param_1 + 0x2e0) + (ulong)bVar54);
                goto LAB_00db939c;
              }
            }
            else {
              bVar23 = true;
              pbVar44 = (byte *)(lVar32 + (ulong)(*(byte *)(lVar51 + (ulong)*(byte *)((long)puVar35
                                                                                     + 1)) * uVar46
                                                  + *(byte *)(lVar51 + (ulong)bVar54) * uVar24 +
                                                  iVar31 * (uint)*(byte *)(lVar51 + (ulong)*(byte *)
                                                  (puVar35 + 1)) + 0x4000 >> 0xf));
LAB_00db939c:
              bVar54 = *pbVar44;
            }
            *(byte *)puVar26 = bVar54;
            if ((bVar56 >> 2 & 1) != 0) goto LAB_00db932c;
            puVar35 = (ushort *)((long)puVar35 + 3);
            uVar41 = uVar41 - 1;
            puVar26 = (ushort *)((long)puVar26 + 1);
            if (uVar41 == 0) break;
          } while( true );
        }
        goto LAB_00db95f0;
      }
      bVar23 = false;
      if (uVar41 != 0) {
        uVar37 = uVar52;
        puVar26 = puVar35;
        if ((bVar56 >> 2 & 1) == 0) {
          do {
            bVar56 = *(byte *)puVar35;
            if ((uint)bVar56 != (uint)*(byte *)((long)puVar35 + 1) ||
                (uint)bVar56 != (uint)*(byte *)(puVar35 + 1)) {
              bVar23 = true;
              bVar56 = (byte)(bVar56 * uVar24 + *(byte *)((long)puVar35 + 1) * uVar46 +
                              iVar31 * (uint)*(byte *)(puVar35 + 1) >> 0xf);
            }
            uVar41 = (int)uVar37 - 1;
            puVar35 = (ushort *)((long)puVar35 + 3);
            *(byte *)puVar26 = bVar56;
            uVar37 = (ulong)uVar41;
            puVar26 = (ushort *)((long)puVar26 + 1);
          } while (uVar41 != 0);
        }
        else {
          do {
            bVar56 = *(byte *)puVar35;
            if ((uint)bVar56 != (uint)*(byte *)((long)puVar35 + 1) ||
                (uint)bVar56 != (uint)*(byte *)(puVar35 + 1)) {
              bVar23 = true;
              bVar56 = (byte)(bVar56 * uVar24 + *(byte *)((long)puVar35 + 1) * uVar46 +
                              iVar31 * (uint)*(byte *)(puVar35 + 1) >> 0xf);
            }
            *(byte *)puVar26 = bVar56;
            uVar41 = (int)uVar37 - 1;
            pbVar44 = (byte *)((long)puVar35 + 3);
            puVar35 = puVar35 + 2;
            *(byte *)((long)puVar26 + 1) = *pbVar44;
            uVar37 = (ulong)uVar41;
            puVar26 = puVar26 + 1;
          } while (uVar41 != 0);
        }
      }
    }
    else {
      lVar32 = *(long *)(param_1 + 0x308);
      if ((lVar32 != 0) && (lVar51 = *(long *)(param_1 + 0x300), lVar51 != 0)) {
        bVar23 = false;
        puVar26 = puVar35;
        uVar37 = uVar52;
joined_r0x00db93d4:
        if (uVar41 != 0) {
          do {
            bVar54 = *(byte *)((long)puVar35 + 1);
            bVar55 = *(byte *)puVar35;
            bVar57 = *(byte *)((long)puVar35 + 3);
            bVar5 = *(byte *)(puVar35 + 1);
            uVar29 = (ulong)puVar35[2] & 0xff00;
            uVar18 = (ushort)(((ulong)puVar35[2] << 0x38) >> 0x30);
            if ((CONCAT11(bVar5,bVar57) == CONCAT11(bVar55,bVar54)) &&
               (CONCAT11(bVar55,bVar54) == (ushort)((byte)(uVar29 >> 8) | uVar18))) {
              if (*(long *)(param_1 + 0x2e8) != 0) {
                uVar9 = *(undefined2 *)
                         (*(long *)(*(long *)(param_1 + 0x2e8) +
                                   (ulong)(bVar57 >> ((ulong)*(uint *)(param_1 + 0x2d8) & 0x3f)) * 8
                                   ) + (ulong)bVar5 * 2);
                goto LAB_00db94c0;
              }
            }
            else {
              uVar28 = (ulong)*(uint *)(param_1 + 0x2d8);
              bVar23 = true;
              uVar41 = (uint)*(ushort *)
                              (*(long *)(lVar32 + (ulong)(bVar57 >> (uVar28 & 0x3f)) * 8) +
                              (ulong)bVar5 * 2) * (uint)uVar7 +
                       (uint)*(ushort *)
                              (*(long *)(lVar32 + (ulong)(bVar54 >> (uVar28 & 0x3f)) * 8) +
                              (ulong)bVar55 * 2) * (uint)uVar48 +
                       iVar31 * (uint)*(ushort *)
                                       (*(long *)(lVar32 + (((uVar29 << 0x30) >> 0x38) >>
                                                           (uVar28 & 0x3f)) * 8) +
                                       (ulong)(uVar18 >> 8) * 2) + 0x4000;
              uVar9 = *(undefined2 *)
                       (*(long *)(lVar51 + (((ulong)(uVar41 >> 0xf) & 0xff) >> (uVar28 & 0x3f)) * 8)
                       + (ulong)(uVar41 >> 0x17 & 0xff) * 2);
LAB_00db94c0:
              bVar54 = (byte)uVar9;
              bVar55 = (byte)((ushort)uVar9 >> 8);
            }
            *(byte *)puVar26 = bVar55;
            *(byte *)((long)puVar26 + 1) = bVar54;
            if ((bVar56 >> 2 & 1) != 0) goto LAB_00db93e4;
            puVar35 = puVar35 + 3;
            puVar26 = puVar26 + 1;
            uVar41 = (int)uVar37 - 1;
            uVar37 = (ulong)uVar41;
            if (uVar41 == 0) break;
          } while( true );
        }
        goto LAB_00db95f0;
      }
      bVar23 = false;
      puVar26 = puVar35;
      uVar37 = uVar52;
      while (uVar41 != 0) {
        while( true ) {
          uVar4 = (((puVar35[1] & 0xff00) << 0x10) >> 8 | (uint)puVar35[1] << 0x18) >> 0x10;
          uVar10 = (((*puVar35 & 0xff00) << 0x10) >> 8 | (uint)*puVar35 << 0x18) >> 0x10;
          uVar11 = (((puVar35[2] & 0xff00) << 0x10) >> 8 | (uint)puVar35[2] << 0x18) >> 0x10;
          uVar41 = uVar4 * uVar46 + uVar10 * uVar24 + uVar11 * iVar31 + 0x4000;
          *(byte *)puVar26 = (byte)(uVar41 >> 0x17);
          *(byte *)((long)puVar26 + 1) = (byte)(uVar41 >> 0xf);
          if ((bVar56 >> 2 & 1) != 0) break;
          puVar35 = puVar35 + 3;
          puVar26 = puVar26 + 1;
          uVar41 = (int)uVar37 - 1;
          uVar37 = (ulong)uVar41;
          bVar23 = (bool)(bVar23 | (uVar10 != uVar4 || uVar10 != uVar11));
          if (uVar41 == 0) goto LAB_00db95f0;
        }
        *(byte *)(puVar26 + 1) = *(byte *)(puVar35 + 3);
        pbVar44 = (byte *)((long)puVar35 + 7);
        puVar35 = puVar35 + 4;
        *(byte *)((long)puVar26 + 3) = *pbVar44;
        uVar41 = (int)uVar37 - 1;
        uVar37 = (ulong)uVar41;
        bVar23 = (bool)(bVar23 | (uVar10 != uVar4 || uVar10 != uVar11));
        puVar26 = puVar26 + 2;
      }
    }
LAB_00db95f0:
    iVar31 = *(byte *)((long)param_2 + 0x12) - 2;
    uVar41 = (uint)*(byte *)((long)param_2 + 0x11) * iVar31;
    *(char *)((long)param_2 + 0x12) = (char)iVar31;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd;
    *(char *)((long)param_2 + 0x13) = (char)uVar41;
    if ((uVar41 & 0xff) < 8) {
      *(ulong *)(param_2 + 2) = ((ulong)uVar41 & 0xff) * uVar52 + 7 >> 3;
    }
    else {
      *(ulong *)(param_2 + 2) = (uVar41 >> 3 & 0x1f) * uVar52;
    }
    if (bVar23) {
      uVar41 = *(uint *)(param_1 + 0x16c);
      *(undefined *)(param_1 + 0x408) = 1;
      if ((uVar41 & 0x600000) == 0x400000) {
        png_warning(param_1,"png_do_rgb_to_gray found nongray pixel");
        uVar41 = *(uint *)(param_1 + 0x16c);
      }
      if ((uVar41 & 0x600000) == 0x200000) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"png_do_rgb_to_gray found nongray pixel");
      }
    }
    else {
      uVar41 = *(uint *)(param_1 + 0x16c);
    }
  }
  if (((uVar41 >> 0xe & 1) != 0) && ((*(byte *)(param_1 + 0x165) >> 3 & 1) == 0)) {
    FUN_00dbbe90(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar41 >> 7 & 1) != 0) {
    pbVar44 = *(byte **)(param_1 + 0x260);
    lVar32 = *(long *)(param_1 + 0x2e0);
    lVar50 = *(long *)(param_1 + 0x2f0);
    uVar52 = *(ulong *)(param_1 + 0x2f8);
    puVar35 = (ushort *)(pbVar44 + 1);
    lVar51 = *(long *)(param_1 + 0x2e8);
    lVar53 = *(long *)(param_1 + 0x300);
    lVar49 = *(long *)(param_1 + 0x308);
    uVar37 = (ulong)*(uint *)(param_1 + 0x2d8);
    uVar41 = *(uint *)(param_1 + 0x168);
    uVar24 = *param_2;
    switch(*(undefined *)(param_2 + 4)) {
    case 0:
      uVar48 = (&switchD_00db986c::switchdataD_00549cac)[*(byte *)((long)param_2 + 0x11) - 1] * 4 +
               0x968c;
      switch((uint)*(byte *)((long)param_2 + 0x11)) {
      case 1:
        if (uVar24 != 0) {
          uVar48 = *(ushort *)(param_1 + 0x330);
          uVar41 = 7;
          do {
            if ((*(byte *)puVar35 >> (ulong)(uVar41 & 0x1f) & 1) == uVar48) {
              *(byte *)puVar35 =
                   (char)*(undefined2 *)(param_1 + 700) << (ulong)(uVar41 & 0x1f) |
                   (byte)(0x7f7f >> (ulong)(7 - uVar41 & 0x1f)) & *(byte *)puVar35;
            }
            bVar23 = uVar41 == 0;
            uVar41 = uVar41 - 1;
            if (bVar23) {
              puVar35 = (ushort *)((long)puVar35 + 1);
              uVar41 = 7;
            }
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        break;
      case 2:
        if (lVar32 == 0) {
          if (uVar24 != 0) {
            uVar48 = *(ushort *)(param_1 + 0x330);
            uVar41 = 6;
            do {
              if ((*(byte *)puVar35 >> (ulong)(uVar41 & 0x1f) & 3) == uVar48) {
                *(byte *)puVar35 =
                     (char)*(undefined2 *)(param_1 + 700) << (ulong)(uVar41 & 0x1f) |
                     (byte)(0x3f3f >> (ulong)(6 - uVar41 & 0x1f)) & *(byte *)puVar35;
              }
              bVar23 = uVar41 == 0;
              uVar41 = uVar41 - 2;
              if (bVar23) {
                puVar35 = (ushort *)((long)puVar35 + 1);
                uVar41 = 6;
              }
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
        else if (uVar24 != 0) {
          uVar48 = *(ushort *)(param_1 + 0x330);
          uVar52 = 6;
          do {
            uVar37 = (ulong)(*(byte *)puVar35 >> (uVar52 & 0x3f)) & 3;
            uVar41 = (uint)uVar52;
            if ((uint)uVar37 == (uint)uVar48) {
              bVar54 = (byte)(0x3f3f >> (ulong)(6 - uVar41 & 0x1f));
              bVar56 = (char)*(undefined2 *)(param_1 + 700) << (ulong)(uVar41 & 0x1f);
            }
            else {
              bVar54 = (byte)(0x3f3f >> (ulong)(6 - uVar41 & 0x1f));
              bVar56 = (*(byte *)(lVar32 + uVar37 * 0x55) >> 6) << (ulong)(uVar41 & 0x1f);
            }
            uVar46 = 6;
            if (uVar41 != 0) {
              uVar46 = uVar41 - 2;
            }
            uVar52 = (ulong)uVar46;
            *(byte *)puVar35 = bVar56 | bVar54 & *(byte *)puVar35;
            if (uVar41 == 0) {
              puVar35 = (ushort *)((long)puVar35 + 1);
            }
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        break;
      case 4:
        if (lVar32 == 0) {
          if (uVar24 != 0) {
            uVar48 = *(ushort *)(param_1 + 0x330);
            uVar41 = 4;
            do {
              if ((*(byte *)puVar35 >> (ulong)(uVar41 & 0x1f) & 0xf) == uVar48) {
                *(byte *)puVar35 =
                     (char)*(undefined2 *)(param_1 + 700) << (ulong)(uVar41 & 0x1f) |
                     (byte)(0xf0f >> (ulong)(4 - uVar41 & 0x1f)) & *(byte *)puVar35;
              }
              bVar23 = uVar41 == 0;
              uVar41 = uVar41 - 4;
              if (bVar23) {
                puVar35 = (ushort *)((long)puVar35 + 1);
                uVar41 = 4;
              }
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
        else if (uVar24 != 0) {
          uVar48 = *(ushort *)(param_1 + 0x330);
          uVar52 = 4;
          do {
            uVar37 = (ulong)(*(byte *)puVar35 >> (uVar52 & 0x3f)) & 0xf;
            uVar41 = (uint)uVar52;
            if ((uint)uVar37 == (uint)uVar48) {
              bVar54 = (byte)(0xf0f >> (ulong)(4 - uVar41 & 0x1f));
              bVar56 = (char)*(undefined2 *)(param_1 + 700) << (ulong)(uVar41 & 0x1f);
            }
            else {
              bVar54 = (byte)(0xf0f >> (ulong)(4 - uVar41 & 0x1f));
              bVar56 = (*(byte *)(lVar32 + (uVar37 | uVar37 << 4)) >> 4) << (ulong)(uVar41 & 0x1f);
            }
            uVar46 = 4;
            if (uVar41 != 0) {
              uVar46 = uVar41 - 4;
            }
            uVar52 = (ulong)uVar46;
            *(byte *)puVar35 = bVar56 | bVar54 & *(byte *)puVar35;
            if (uVar41 == 0) {
              puVar35 = (ushort *)((long)puVar35 + 1);
            }
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        break;
      case 8:
        if (lVar32 == 0) {
          if (uVar24 != 0) {
            uVar7 = *(ushort *)(param_1 + 0x330);
            uVar37 = (ulong)(uVar24 - 1);
            if (uVar24 - 1 != 0) {
              uVar29 = uVar37 + 1;
              uVar37 = uVar29 & 0x1fffffffe;
              puVar35 = (ushort *)((long)puVar35 + uVar37);
              uVar28 = uVar37;
              do {
                pbVar34 = pbVar44 + 2;
                if (uVar7 == pbVar44[1]) {
                  uVar48 = (ushort)*(byte *)(param_1 + 700);
                  bVar56 = *pbVar34;
                }
                else {
                  bVar56 = *pbVar34;
                }
                if (uVar7 == bVar56) {
                  uVar52 = (ulong)*(byte *)(param_1 + 700);
                }
                if (uVar7 == pbVar44[1]) {
                  pbVar44[1] = (byte)uVar48;
                }
                if (uVar7 == bVar56) {
                  *pbVar34 = (byte)uVar52;
                }
                uVar28 = uVar28 - 2;
                pbVar44 = pbVar34;
              } while (uVar28 != 0);
              if (uVar29 == uVar37) break;
            }
            iVar31 = uVar24 - (int)uVar37;
            do {
              if (uVar7 == *(byte *)puVar35) {
                *(byte *)puVar35 = *(byte *)(param_1 + 700);
              }
              puVar35 = (ushort *)((long)puVar35 + 1);
              iVar31 = iVar31 + -1;
            } while (iVar31 != 0);
          }
        }
        else if (uVar24 != 0) {
          uVar48 = *(ushort *)(param_1 + 0x330);
          do {
            while (uVar48 != *(byte *)puVar35) {
              uVar24 = uVar24 - 1;
              *(byte *)puVar35 = *(byte *)(lVar32 + (ulong)*(byte *)puVar35);
              puVar35 = (ushort *)((long)puVar35 + 1);
              if (uVar24 == 0) goto switchD_00db9844_caseD_1;
            }
            uVar24 = uVar24 - 1;
            *(byte *)puVar35 = *(byte *)(param_1 + 700);
            puVar35 = (ushort *)((long)puVar35 + 1);
          } while (uVar24 != 0);
        }
        break;
      case 0x10:
        if (lVar51 == 0) {
          if (uVar24 != 0) {
            uVar48 = *(ushort *)(param_1 + 0x330);
            do {
              if ((((*(ushort *)(pbVar44 + 1) & 0xff00) << 0x10) >> 8 |
                  (uint)*(ushort *)(pbVar44 + 1) << 0x18) >> 0x10 == (uint)uVar48) {
                uVar7 = *(ushort *)(param_1 + 700);
                *(ushort *)(pbVar44 + 1) = uVar7 >> 8 | (ushort)((uVar7 & 0xff00ff) << 8);
              }
              uVar24 = uVar24 - 1;
              pbVar44 = pbVar44 + 2;
            } while (uVar24 != 0);
          }
        }
        else if (uVar24 != 0) {
          sVar8 = *(short *)(param_1 + 0x330);
          do {
            puVar26 = (ushort *)(param_1 + 700);
            if (CONCAT11(*(byte *)puVar35,*(byte *)((long)puVar35 + 1)) != sVar8) {
              puVar26 = (ushort *)
                        (*(long *)(lVar51 + (ulong)(*(byte *)((long)puVar35 + 1) >> (uVar37 & 0x3f))
                                            * 8) + (ulong)*(byte *)puVar35 * 2);
            }
            uVar24 = uVar24 - 1;
            *puVar35 = *puVar26 >> 8 | (ushort)((*puVar26 & 0xff00ff) << 8);
            puVar35 = puVar35 + 1;
          } while (uVar24 != 0);
        }
      }
      break;
    case 2:
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (lVar32 == 0) {
          if (uVar24 != 0) {
            uVar48 = *(ushort *)(param_1 + 0x32a);
            do {
              pbVar34 = pbVar44 + 3;
              if (((uVar48 == pbVar44[1]) && (*(ushort *)(param_1 + 0x32c) == (ushort)pbVar44[2]))
                 && (*(ushort *)(param_1 + 0x32e) == (ushort)*pbVar34)) {
                pbVar44[1] = *(byte *)(param_1 + 0x2b6);
                pbVar44[2] = *(byte *)(param_1 + 0x2b8);
                *pbVar34 = *(byte *)(param_1 + 0x2ba);
              }
              uVar24 = uVar24 - 1;
              pbVar44 = pbVar34;
            } while (uVar24 != 0);
          }
        }
        else if (uVar24 != 0) {
          uVar48 = *(ushort *)(param_1 + 0x32a);
          pbVar44 = pbVar44 + 3;
          do {
            while( true ) {
              if (((uVar48 != pbVar44[-2]) || (*(ushort *)(param_1 + 0x32c) != (ushort)pbVar44[-1]))
                 || (*(ushort *)(param_1 + 0x32e) != (ushort)*pbVar44)) break;
              pbVar44[-2] = *(byte *)(param_1 + 0x2b6);
              pbVar44[-1] = *(byte *)(param_1 + 0x2b8);
              uVar24 = uVar24 - 1;
              *pbVar44 = *(byte *)(param_1 + 0x2ba);
              pbVar44 = pbVar44 + 3;
              if (uVar24 == 0) goto switchD_00db9844_caseD_1;
            }
            pbVar44[-2] = *(byte *)(lVar32 + (ulong)pbVar44[-2]);
            pbVar44[-1] = *(byte *)(lVar32 + (ulong)pbVar44[-1]);
            uVar24 = uVar24 - 1;
            *pbVar44 = *(byte *)(lVar32 + (ulong)*pbVar44);
            pbVar44 = pbVar44 + 3;
          } while (uVar24 != 0);
        }
      }
      else if (lVar51 == 0) {
        if (uVar24 != 0) {
          uVar48 = *(ushort *)(param_1 + 0x32a);
          puVar35 = (ushort *)(pbVar44 + 3);
          do {
            if ((((((puVar35[-1] & 0xff00) << 0x10) >> 8 | (uint)puVar35[-1] << 0x18) >> 0x10 ==
                  (uint)uVar48) &&
                ((((*puVar35 & 0xff00) << 0x10) >> 8 | (uint)*puVar35 << 0x18) >> 0x10 ==
                 (uint)*(ushort *)(param_1 + 0x32c))) &&
               ((((puVar35[1] & 0xff00) << 0x10) >> 8 | (uint)puVar35[1] << 0x18) >> 0x10 ==
                (uint)*(ushort *)(param_1 + 0x32e))) {
              puVar35[-1] = *(ushort *)(param_1 + 0x2b6) >> 8 |
                            (ushort)((*(ushort *)(param_1 + 0x2b6) & 0xff00ff) << 8);
              *puVar35 = *(ushort *)(param_1 + 0x2b8) >> 8 |
                         (ushort)((*(ushort *)(param_1 + 0x2b8) & 0xff00ff) << 8);
              puVar35[1] = *(ushort *)(param_1 + 0x2ba) >> 8 |
                           (ushort)((*(ushort *)(param_1 + 0x2ba) & 0xff00ff) << 8);
            }
            uVar24 = uVar24 - 1;
            puVar35 = puVar35 + 3;
          } while (uVar24 != 0);
        }
      }
      else if (uVar24 != 0) {
        sVar8 = *(short *)(param_1 + 0x32a);
        puVar35 = (ushort *)(pbVar44 + 3);
        do {
          if (((CONCAT11(*(byte *)(puVar35 + -1),*(byte *)((long)puVar35 + -1)) == sVar8) &&
              (CONCAT11(*(byte *)puVar35,*(byte *)((long)puVar35 + 1)) ==
               *(short *)(param_1 + 0x32c))) &&
             (CONCAT11(*(byte *)(puVar35 + 1),*(byte *)((long)puVar35 + 3)) ==
              *(short *)(param_1 + 0x32e))) {
            puVar35[-1] = *(ushort *)(param_1 + 0x2b6) >> 8 |
                          (ushort)((*(ushort *)(param_1 + 0x2b6) & 0xff00ff) << 8);
            *puVar35 = *(ushort *)(param_1 + 0x2b8) >> 8 |
                       (ushort)((*(ushort *)(param_1 + 0x2b8) & 0xff00ff) << 8);
            puVar26 = (ushort *)(param_1 + 0x2ba);
          }
          else {
            uVar48 = *(ushort *)
                      (*(long *)(lVar51 + (ulong)(*(byte *)((long)puVar35 + -1) >> (uVar37 & 0x3f))
                                          * 8) + (ulong)*(byte *)(puVar35 + -1) * 2);
            puVar35[-1] = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
            uVar48 = *(ushort *)
                      (*(long *)(lVar51 + (ulong)(*(byte *)((long)puVar35 + 1) >> (uVar37 & 0x3f)) *
                                          8) + (ulong)*(byte *)puVar35 * 2);
            *puVar35 = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
            puVar26 = (ushort *)
                      (*(long *)(lVar51 + (ulong)(*(byte *)((long)puVar35 + 3) >> (uVar37 & 0x3f)) *
                                          8) + (ulong)*(byte *)(puVar35 + 1) * 2);
          }
          uVar24 = uVar24 - 1;
          puVar35[1] = *puVar26 >> 8 | (ushort)((*puVar26 & 0xff00ff) << 8);
          puVar35 = puVar35 + 3;
        } while (uVar24 != 0);
      }
      break;
    case 4:
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (((uVar52 == 0) || (lVar50 == 0)) || (lVar32 == 0)) {
          for (; uVar24 != 0; uVar24 = uVar24 - 1) {
            bVar56 = *(byte *)((long)puVar35 + 1);
            if (bVar56 != 0xff) {
              if (bVar56 == 0) {
                bVar56 = *(byte *)(param_1 + 700);
              }
              else {
                uVar41 = (uint)*(byte *)puVar35 * (uint)bVar56 +
                         (uint)*(ushort *)(param_1 + 700) * (bVar56 ^ 0xff) + 0x80 & 0xffff;
                bVar56 = (byte)(uVar41 + (uVar41 >> 8) >> 8);
              }
              *(byte *)puVar35 = bVar56;
            }
            puVar35 = puVar35 + 1;
          }
        }
        else {
          for (; uVar24 != 0; uVar24 = uVar24 - 1) {
            bVar56 = *(byte *)((long)puVar35 + 1);
            if (bVar56 == 0) {
              bVar56 = *(byte *)(param_1 + 700);
            }
            else if (bVar56 == 0xff) {
              bVar56 = *(byte *)(lVar32 + (ulong)*(byte *)puVar35);
            }
            else {
              uVar46 = (uint)*(byte *)(uVar52 + *(byte *)puVar35) * (uint)bVar56 +
                       (uint)*(ushort *)(param_1 + 0x2c6) * (bVar56 ^ 0xff) + 0x80 & 0xffff;
              uVar46 = uVar46 + (uVar46 >> 8);
              if ((uVar41 >> 0xd & 1) == 0) {
                bVar56 = *(byte *)(lVar50 + ((ulong)(uVar46 >> 8) & 0xff));
              }
              else {
                bVar56 = (byte)(uVar46 >> 8);
              }
            }
            *(byte *)puVar35 = bVar56;
            puVar35 = puVar35 + 1;
          }
        }
      }
      else if (((lVar51 == 0) || (lVar53 == 0)) || (lVar49 == 0)) {
        if (uVar24 != 0) {
          pbVar44 = pbVar44 + 2;
          do {
            uVar41 = (((*(ushort *)(pbVar44 + 1) & 0xff00) << 0x10) >> 8 |
                     (uint)*(ushort *)(pbVar44 + 1) << 0x18) >> 0x10;
            if (uVar41 != 0xffff) {
              if (uVar41 == 0) {
                *(ushort *)(pbVar44 + -1) =
                     *(ushort *)(param_1 + 700) >> 8 |
                     (ushort)((*(ushort *)(param_1 + 700) & 0xff00ff) << 8);
              }
              else {
                uVar41 = ((((*(ushort *)(pbVar44 + -1) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar44 + -1) << 0x18) >> 0x10) * uVar41 +
                         (uVar41 ^ 0xffff) * (uint)*(ushort *)(param_1 + 700) + 0x8000;
                iVar31 = uVar41 + (uVar41 >> 0x10);
                pbVar44[-1] = (byte)((uint)iVar31 >> 0x18);
                *pbVar44 = (byte)((uint)iVar31 >> 0x10);
              }
            }
            pbVar44 = pbVar44 + 4;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      else if (uVar24 != 0) {
        pbVar44 = pbVar44 + 2;
        do {
          while (uVar46 = (((*(ushort *)(pbVar44 + 1) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar44 + 1) << 0x18) >> 0x10, uVar46 == 0) {
            *(ushort *)(pbVar44 + -1) =
                 *(ushort *)(param_1 + 700) >> 8 |
                 (ushort)((*(ushort *)(param_1 + 700) & 0xff00ff) << 8);
            pbVar44 = pbVar44 + 4;
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) goto switchD_00db9844_caseD_1;
          }
          if (uVar46 == 0xffff) {
            uVar48 = *(ushort *)
                      (*(long *)(lVar51 + (ulong)(*pbVar44 >> (uVar37 & 0x3f)) * 8) +
                      (ulong)pbVar44[-1] * 2);
            *(ushort *)(pbVar44 + -1) = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
          }
          else {
            uVar46 = (uVar46 ^ 0xffff) * (uint)*(ushort *)(param_1 + 0x2c6) +
                     uVar46 * *(ushort *)
                               (*(long *)(lVar49 + (ulong)(*pbVar44 >> (uVar37 & 0x3f)) * 8) +
                               (ulong)pbVar44[-1] * 2) + 0x8000;
            uVar46 = uVar46 + (uVar46 >> 0x10);
            if ((uVar41 >> 0xd & 1) == 0) {
              uVar9 = *(undefined2 *)
                       (*(long *)(lVar53 + (((ulong)(uVar46 >> 0x10) & 0xff) >> (uVar37 & 0x3f)) * 8
                                 ) + (ulong)(uVar46 >> 0x18) * 2);
              pbVar44[-1] = (byte)((ushort)uVar9 >> 8);
              *pbVar44 = (byte)uVar9;
            }
            else {
              pbVar44[-1] = (byte)(uVar46 >> 0x18);
              *pbVar44 = (byte)(uVar46 >> 0x10);
            }
          }
          uVar24 = uVar24 - 1;
          pbVar44 = pbVar44 + 4;
        } while (uVar24 != 0);
      }
      break;
    case 6:
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (((uVar52 == 0) || (lVar50 == 0)) || (lVar32 == 0)) {
          if (uVar24 != 0) {
            pbVar44 = pbVar44 + 2;
            do {
              bVar56 = pbVar44[2];
              uVar41 = (uint)bVar56;
              if (uVar41 != 0xff) {
                if (uVar41 == 0) {
                  pbVar44[-1] = *(byte *)(param_1 + 0x2b6);
                  *pbVar44 = *(byte *)(param_1 + 0x2b8);
                  bVar56 = *(byte *)(param_1 + 0x2ba);
                }
                else {
                  uVar4 = bVar56 ^ 0xff;
                  uVar46 = *(ushort *)(param_1 + 0x2b6) * uVar4 + (uint)pbVar44[-1] * (uint)bVar56 +
                           0x80;
                  pbVar44[-1] = (byte)(uVar46 + (uVar46 >> 8 & 0xff) >> 8);
                  uVar46 = *(ushort *)(param_1 + 0x2b8) * uVar4 + *pbVar44 * uVar41 + 0x80;
                  *pbVar44 = (byte)(uVar46 + (uVar46 >> 8 & 0xff) >> 8);
                  uVar41 = *(ushort *)(param_1 + 0x2ba) * uVar4 + pbVar44[1] * uVar41 + 0x80;
                  bVar56 = (byte)(uVar41 + (uVar41 >> 8 & 0xff) >> 8);
                }
                pbVar44[1] = bVar56;
              }
              pbVar44 = pbVar44 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
        else if (uVar24 != 0) {
          pbVar44 = pbVar44 + 2;
          do {
            while( true ) {
              bVar56 = pbVar44[2];
              uVar37 = (ulong)bVar56;
              if (bVar56 != 0) break;
              pbVar44[-1] = *(byte *)(param_1 + 0x2b6);
              *pbVar44 = *(byte *)(param_1 + 0x2b8);
              pbVar44[1] = *(byte *)(param_1 + 0x2ba);
              pbVar44 = pbVar44 + 4;
              uVar24 = uVar24 - 1;
              if (uVar24 == 0) goto switchD_00db9844_caseD_1;
            }
            if (bVar56 == 0xff) {
              pbVar44[-1] = *(byte *)(lVar32 + (ulong)pbVar44[-1]);
              *pbVar44 = *(byte *)(lVar32 + (ulong)*pbVar44);
              pbVar44[1] = *(byte *)(lVar32 + (ulong)pbVar44[1]);
            }
            else {
              uVar28 = (ulong)~(uint)bVar56;
              uVar29 = (ulong)*(ushort *)(param_1 + 0x2c0) * (uVar28 & 0xff) +
                       *(byte *)(uVar52 + pbVar44[-1]) * uVar37 + 0x80;
              uVar29 = uVar29 + (uVar29 >> 8 & 0xff);
              if ((uVar41 >> 0xd & 1) == 0) {
                bVar56 = *(byte *)(lVar50 + (uVar29 >> 8 & 0xff));
              }
              else {
                bVar56 = (byte)(uVar29 >> 8);
              }
              pbVar44[-1] = bVar56;
              uVar29 = (ulong)*(ushort *)(param_1 + 0x2c2) * (uVar28 & 0xff) +
                       *(byte *)(uVar52 + *pbVar44) * uVar37 + 0x80;
              uVar29 = uVar29 + (uVar29 >> 8 & 0xff);
              if ((uVar41 >> 0xd & 1) == 0) {
                bVar56 = *(byte *)(lVar50 + (uVar29 >> 8 & 0xff));
              }
              else {
                bVar56 = (byte)(uVar29 >> 8);
              }
              *pbVar44 = bVar56;
              uVar37 = (ulong)*(ushort *)(param_1 + 0x2c4) * (uVar28 & 0xff) +
                       *(byte *)(uVar52 + pbVar44[1]) * uVar37 + 0x80;
              uVar37 = uVar37 + (uVar37 >> 8 & 0xff);
              if ((uVar41 >> 0xd & 1) == 0) {
                pbVar44[1] = *(byte *)(lVar50 + (uVar37 >> 8 & 0xff));
              }
              else {
                pbVar44[1] = (byte)(uVar37 >> 8);
              }
            }
            uVar24 = uVar24 - 1;
            pbVar44 = pbVar44 + 4;
          } while (uVar24 != 0);
        }
      }
      else if (((lVar51 == 0) || (lVar53 == 0)) || (lVar49 == 0)) {
        if (uVar24 != 0) {
          pbVar44 = pbVar44 + 4;
          do {
            uVar41 = (((*(ushort *)(pbVar44 + 3) & 0xff00) << 0x10) >> 8 |
                     (uint)*(ushort *)(pbVar44 + 3) << 0x18) >> 0x10;
            if (uVar41 != 0xffff) {
              if (uVar41 == 0) {
                *(ushort *)(pbVar44 + -3) =
                     *(ushort *)(param_1 + 0x2b6) >> 8 |
                     (ushort)((*(ushort *)(param_1 + 0x2b6) & 0xff00ff) << 8);
                *(ushort *)(pbVar44 + -1) =
                     *(ushort *)(param_1 + 0x2b8) >> 8 |
                     (ushort)((*(ushort *)(param_1 + 0x2b8) & 0xff00ff) << 8);
                *(ushort *)(pbVar44 + 1) =
                     *(ushort *)(param_1 + 0x2ba) >> 8 |
                     (ushort)((*(ushort *)(param_1 + 0x2ba) & 0xff00ff) << 8);
              }
              else {
                uVar4 = uVar41 ^ 0xffff;
                uVar46 = uVar4 * *(ushort *)(param_1 + 0x2b6) +
                         ((((*(ushort *)(pbVar44 + -3) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar44 + -3) << 0x18) >> 0x10) * uVar41 + 0x8000;
                iVar31 = uVar46 + (uVar46 >> 0x10);
                pbVar44[-3] = (byte)((uint)iVar31 >> 0x18);
                pbVar44[-2] = (byte)((uint)iVar31 >> 0x10);
                uVar46 = uVar4 * *(ushort *)(param_1 + 0x2b8) +
                         ((((*(ushort *)(pbVar44 + -1) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar44 + -1) << 0x18) >> 0x10) * uVar41 + 0x8000;
                iVar31 = uVar46 + (uVar46 >> 0x10);
                pbVar44[-1] = (byte)((uint)iVar31 >> 0x18);
                *pbVar44 = (byte)((uint)iVar31 >> 0x10);
                uVar41 = uVar4 * *(ushort *)(param_1 + 0x2ba) +
                         ((((*(ushort *)(pbVar44 + 1) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar44 + 1) << 0x18) >> 0x10) * uVar41 + 0x8000;
                iVar31 = uVar41 + (uVar41 >> 0x10);
                pbVar44[1] = (byte)((uint)iVar31 >> 0x18);
                pbVar44[2] = (byte)((uint)iVar31 >> 0x10);
              }
            }
            uVar24 = uVar24 - 1;
            pbVar44 = pbVar44 + 8;
          } while (uVar24 != 0);
        }
      }
      else if (uVar24 != 0) {
        pbVar44 = pbVar44 + 4;
        do {
          while (uVar46 = (((*(ushort *)(pbVar44 + 3) & 0xff00) << 0x10) >> 8 |
                          (uint)*(ushort *)(pbVar44 + 3) << 0x18) >> 0x10, uVar46 == 0) {
            *(ushort *)(pbVar44 + -3) =
                 *(ushort *)(param_1 + 0x2b6) >> 8 |
                 (ushort)((*(ushort *)(param_1 + 0x2b6) & 0xff00ff) << 8);
            *(ushort *)(pbVar44 + -1) =
                 *(ushort *)(param_1 + 0x2b8) >> 8 |
                 (ushort)((*(ushort *)(param_1 + 0x2b8) & 0xff00ff) << 8);
            *(ushort *)(pbVar44 + 1) =
                 *(ushort *)(param_1 + 0x2ba) >> 8 |
                 (ushort)((*(ushort *)(param_1 + 0x2ba) & 0xff00ff) << 8);
            uVar24 = uVar24 - 1;
            pbVar44 = pbVar44 + 8;
            if (uVar24 == 0) goto switchD_00db9844_caseD_1;
          }
          if (uVar46 == 0xffff) {
            uVar48 = *(ushort *)
                      (*(long *)(lVar51 + (ulong)(pbVar44[-2] >> (uVar37 & 0x3f)) * 8) +
                      (ulong)pbVar44[-3] * 2);
            *(ushort *)(pbVar44 + -3) = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
            uVar48 = *(ushort *)
                      (*(long *)(lVar51 + (ulong)(*pbVar44 >> (uVar37 & 0x3f)) * 8) +
                      (ulong)pbVar44[-1] * 2);
            *(ushort *)(pbVar44 + -1) = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
            uVar48 = *(ushort *)
                      (*(long *)(lVar51 + (ulong)(pbVar44[2] >> (uVar37 & 0x3f)) * 8) +
                      (ulong)pbVar44[1] * 2);
            *(ushort *)(pbVar44 + 1) = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
          }
          else {
            uVar10 = uVar46 ^ 0xffff;
            uVar4 = uVar10 * *(ushort *)(param_1 + 0x2c0) +
                    uVar46 * *(ushort *)
                              (*(long *)(lVar49 + (ulong)(pbVar44[-2] >> (uVar37 & 0x3f)) * 8) +
                              (ulong)pbVar44[-3] * 2) + 0x8000;
            uVar4 = uVar4 + (uVar4 >> 0x10);
            bVar56 = (byte)(uVar4 >> 0x18);
            if ((uVar41 >> 0xd & 1) == 0) {
              uVar9 = *(undefined2 *)
                       (*(long *)(lVar53 + (((ulong)(uVar4 >> 0x10) & 0xff) >> (uVar37 & 0x3f)) * 8)
                       + (ulong)(uVar4 >> 0x18) * 2);
              bVar54 = (byte)uVar9;
              bVar56 = (byte)((ushort)uVar9 >> 8);
            }
            else {
              bVar54 = (byte)(uVar4 >> 0x10);
            }
            pbVar44[-3] = bVar56;
            pbVar44[-2] = bVar54;
            uVar4 = uVar10 * *(ushort *)(param_1 + 0x2c2) +
                    uVar46 * *(ushort *)
                              (*(long *)(lVar49 + (ulong)(*pbVar44 >> (uVar37 & 0x3f)) * 8) +
                              (ulong)pbVar44[-1] * 2) + 0x8000;
            uVar4 = uVar4 + (uVar4 >> 0x10);
            bVar56 = (byte)(uVar4 >> 0x18);
            if ((uVar41 >> 0xd & 1) == 0) {
              uVar9 = *(undefined2 *)
                       (*(long *)(lVar53 + (((ulong)(uVar4 >> 0x10) & 0xff) >> (uVar37 & 0x3f)) * 8)
                       + (ulong)(uVar4 >> 0x18) * 2);
              bVar54 = (byte)uVar9;
              bVar56 = (byte)((ushort)uVar9 >> 8);
            }
            else {
              bVar54 = (byte)(uVar4 >> 0x10);
            }
            pbVar44[-1] = bVar56;
            *pbVar44 = bVar54;
            uVar46 = uVar10 * *(ushort *)(param_1 + 0x2c4) +
                     uVar46 * *(ushort *)
                               (*(long *)(lVar49 + (ulong)(pbVar44[2] >> (uVar37 & 0x3f)) * 8) +
                               (ulong)pbVar44[1] * 2) + 0x8000;
            uVar46 = uVar46 + (uVar46 >> 0x10);
            if ((uVar41 >> 0xd & 1) == 0) {
              uVar9 = *(undefined2 *)
                       (*(long *)(lVar53 + (((ulong)(uVar46 >> 0x10) & 0xff) >> (uVar37 & 0x3f)) * 8
                                 ) + (ulong)(uVar46 >> 0x18) * 2);
              pbVar44[1] = (byte)((ushort)uVar9 >> 8);
              pbVar44[2] = (byte)uVar9;
            }
            else {
              pbVar44[1] = (byte)(uVar46 >> 0x18);
              pbVar44[2] = (byte)(uVar46 >> 0x10);
            }
          }
          pbVar44 = pbVar44 + 8;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
  }
switchD_00db9844_caseD_1:
  if ((*(uint *)(param_1 + 0x16c) & 0x602000) == 0x2000) {
    if ((*(uint *)(param_1 + 0x16c) >> 7 & 1) == 0) {
      bVar56 = *(byte *)(param_1 + 0x29f);
    }
    else if ((*(short *)(param_1 + 0x298) != 0) ||
            (bVar56 = *(byte *)(param_1 + 0x29f), (bVar56 >> 2 & 1) != 0))
    goto switchD_00db9704_caseD_1;
    if (bVar56 != 3) {
      bVar56 = *(byte *)((long)param_2 + 0x11);
      pbVar44 = *(byte **)(param_1 + 0x260);
      uVar52 = (ulong)*(uint *)(param_1 + 0x2d8);
      lVar51 = *(long *)(param_1 + 0x2e0);
      lVar32 = *(long *)(param_1 + 0x2e8);
      uVar41 = *param_2;
      if (((bVar56 < 9) && (lVar51 != 0)) || ((bVar56 == 0x10 && (lVar32 != 0)))) {
        pbVar34 = pbVar44 + 1;
        switch(*(undefined *)(param_2 + 4)) {
        case 0:
          if ((bVar56 == 2) && (uVar41 != 0)) {
            uVar24 = 0;
            pbVar45 = pbVar34;
            do {
              bVar56 = *pbVar45;
              uVar37 = (ulong)bVar56;
              uVar24 = uVar24 + 4;
              uVar29 = uVar37 & 0x30;
              uVar28 = uVar37 & 0xc0;
              *pbVar45 = *(byte *)(lVar51 + (uVar29 | (uVar29 >> 4) << 6 | uVar29 >> 2 |
                                            (ulong)(bVar56 >> 4) & 3)) >> 2 & 0x30 |
                         *(byte *)(lVar51 + (uVar28 | bVar56 >> 6 | uVar28 >> 2 | uVar28 >> 4)) &
                         0xc0 | *(byte *)(lVar51 + ((uVar37 & 0xc) * 0x15 | (ulong)(bVar56 >> 2) & 3
                                                   )) >> 4 & 0xc |
                         *(byte *)(lVar51 + (uVar37 & 3) * 0x55) >> 6;
              pbVar45 = pbVar45 + 1;
            } while (uVar24 < uVar41);
            bVar56 = *(byte *)((long)param_2 + 0x11);
          }
          if (bVar56 == 4) {
            if (uVar41 != 0) {
              uVar24 = 0;
              do {
                bVar56 = *pbVar34;
                uVar24 = uVar24 + 2;
                uVar52 = (ulong)bVar56 & 0xf;
                *pbVar34 = *(byte *)(lVar51 + ((ulong)bVar56 & 0xf0 | (ulong)(bVar56 >> 4))) & 0xf0
                           | *(byte *)(lVar51 + (uVar52 | uVar52 << 4)) >> 4;
                pbVar34 = pbVar34 + 1;
              } while (uVar24 < uVar41);
            }
          }
          else if (bVar56 == 8) {
            for (; uVar41 != 0; uVar41 = uVar41 - 1) {
              *pbVar34 = *(byte *)(lVar51 + (ulong)*pbVar34);
              pbVar34 = pbVar34 + 1;
            }
          }
          else if (bVar56 == 0x10) {
            for (; uVar41 != 0; uVar41 = uVar41 - 1) {
              uVar48 = *(ushort *)
                        (*(long *)(lVar32 + (ulong)(pbVar44[2] >> (uVar52 & 0x3f)) * 8) +
                        (ulong)pbVar44[1] * 2);
              *(ushort *)(pbVar44 + 1) = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              pbVar44 = pbVar44 + 2;
            }
          }
          break;
        case 2:
          if (bVar56 == 8) {
            for (; uVar41 != 0; uVar41 = uVar41 - 1) {
              *pbVar34 = *(byte *)(lVar51 + (ulong)*pbVar34);
              pbVar34[1] = *(byte *)(lVar51 + (ulong)pbVar34[1]);
              pbVar34[2] = *(byte *)(lVar51 + (ulong)pbVar34[2]);
              pbVar34 = pbVar34 + 3;
            }
          }
          else if (uVar41 != 0) {
            puVar35 = (ushort *)(pbVar44 + 3);
            do {
              uVar41 = uVar41 - 1;
              uVar48 = *(ushort *)
                        (*(long *)(lVar32 + (ulong)(*(byte *)((long)puVar35 + -1) >> (uVar52 & 0x3f)
                                                   ) * 8) + (ulong)*(byte *)(puVar35 + -1) * 2);
              puVar35[-1] = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              uVar48 = *(ushort *)
                        (*(long *)(lVar32 + (ulong)(*(byte *)((long)puVar35 + 1) >> (uVar52 & 0x3f))
                                            * 8) + (ulong)*(byte *)puVar35 * 2);
              *puVar35 = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              uVar48 = *(ushort *)
                        (*(long *)(lVar32 + (ulong)(*(byte *)((long)puVar35 + 3) >> (uVar52 & 0x3f))
                                            * 8) + (ulong)*(byte *)(puVar35 + 1) * 2);
              puVar35[1] = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              puVar35 = puVar35 + 3;
            } while (uVar41 != 0);
          }
          break;
        case 4:
          if (bVar56 == 8) {
            for (; uVar41 != 0; uVar41 = uVar41 - 1) {
              *pbVar34 = *(byte *)(lVar51 + (ulong)*pbVar34);
              pbVar34 = pbVar34 + 2;
            }
          }
          else if (uVar41 != 0) {
            pbVar44 = pbVar44 + 2;
            do {
              uVar41 = uVar41 - 1;
              uVar48 = *(ushort *)
                        (*(long *)(lVar32 + (ulong)(*pbVar44 >> (uVar52 & 0x3f)) * 8) +
                        (ulong)pbVar44[-1] * 2);
              *(ushort *)(pbVar44 + -1) = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              pbVar44 = pbVar44 + 4;
            } while (uVar41 != 0);
          }
          break;
        case 6:
          if (bVar56 == 8) {
            for (; uVar41 != 0; uVar41 = uVar41 - 1) {
              *pbVar34 = *(byte *)(lVar51 + (ulong)*pbVar34);
              pbVar34[1] = *(byte *)(lVar51 + (ulong)pbVar34[1]);
              pbVar34[2] = *(byte *)(lVar51 + (ulong)pbVar34[2]);
              pbVar34 = pbVar34 + 4;
            }
          }
          else if (uVar41 != 0) {
            puVar35 = (ushort *)(pbVar44 + 3);
            do {
              uVar41 = uVar41 - 1;
              uVar48 = *(ushort *)
                        (*(long *)(lVar32 + (ulong)(*(byte *)((long)puVar35 + -1) >> (uVar52 & 0x3f)
                                                   ) * 8) + (ulong)*(byte *)(puVar35 + -1) * 2);
              puVar35[-1] = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              uVar48 = *(ushort *)
                        (*(long *)(lVar32 + (ulong)(*(byte *)((long)puVar35 + 1) >> (uVar52 & 0x3f))
                                            * 8) + (ulong)*(byte *)puVar35 * 2);
              *puVar35 = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              uVar48 = *(ushort *)
                        (*(long *)(lVar32 + (ulong)(*(byte *)((long)puVar35 + 3) >> (uVar52 & 0x3f))
                                            * 8) + (ulong)*(byte *)(puVar35 + 1) * 2);
              puVar35[1] = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              puVar35 = puVar35 + 4;
            } while (uVar41 != 0);
          }
        }
      }
    }
  }
switchD_00db9704_caseD_1:
  uVar41 = *(uint *)(param_1 + 0x16c);
  if ((((uVar41 ^ 0xffffffff) & 0x40080) == 0) && ((*(byte *)(param_2 + 4) | 2) == 6)) {
    png_do_strip_channel(param_2,*(long *)(param_1 + 0x260) + 1,0);
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if (((uVar41 >> 0x17 & 1) == 0) || (bVar56 = *(byte *)(param_2 + 4), (bVar56 >> 2 & 1) == 0))
  goto LAB_00dba084;
  if ((bVar56 >> 2 & 1) == 0) {
LAB_00dba074:
    png_warning(param_1,"png_do_encode_alpha: unexpected call");
  }
  else {
    uVar41 = *param_2;
    if (*(char *)((long)param_2 + 0x11) == '\x10') {
      lVar32 = *(long *)(param_1 + 0x300);
      if (lVar32 == 0) goto LAB_00dba074;
      uVar24 = 4;
      if ((bVar56 & 2) != 0) {
        uVar24 = 8;
      }
      if (uVar41 != 0) {
        uVar46 = *(uint *)(param_1 + 0x2d8);
        pbVar44 = (byte *)((ulong)(uVar24 - 2) + *(long *)(param_1 + 0x260) + 2);
        do {
          uVar41 = uVar41 - 1;
          uVar48 = *(ushort *)
                    (*(long *)(lVar32 + (ulong)(*pbVar44 >> ((ulong)uVar46 & 0x3f)) * 8) +
                    (ulong)pbVar44[-1] * 2);
          *(ushort *)(pbVar44 + -1) = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
          pbVar44 = pbVar44 + uVar24;
        } while (uVar41 != 0);
      }
    }
    else {
      if ((*(char *)((long)param_2 + 0x11) != '\b') ||
         (lVar32 = *(long *)(param_1 + 0x2f0), lVar32 == 0)) goto LAB_00dba074;
      uVar24 = 2;
      if ((bVar56 & 2) != 0) {
        uVar24 = 4;
      }
      if (uVar41 != 0) {
        pbVar44 = (byte *)(*(long *)(param_1 + 0x260) + 1 + (ulong)(uVar24 - 1));
        do {
          uVar41 = uVar41 - 1;
          *pbVar44 = *(byte *)(lVar32 + (ulong)*pbVar44);
          pbVar44 = pbVar44 + uVar24;
        } while (uVar41 != 0);
      }
    }
  }
LAB_00dba084:
  uVar41 = *(uint *)(param_1 + 0x16c);
  if (((uVar41 >> 0x1a & 1) != 0) && (*(char *)((long)param_2 + 0x11) == '\x10')) {
    if (0 < *(long *)(param_2 + 2)) {
      pbVar44 = (byte *)(*(long *)(param_1 + 0x260) + 1);
      pbVar34 = pbVar44 + *(long *)(param_2 + 2);
      pbVar45 = pbVar44;
      do {
        bVar56 = *pbVar44;
        pbVar2 = pbVar44 + 1;
        pbVar44 = pbVar44 + 2;
        *pbVar45 = bVar56 + (char)(((uint)*pbVar2 - (uint)bVar56) * 0xffff + 0x7fff80 >> 0x18);
        pbVar45 = pbVar45 + 1;
      } while (pbVar44 < pbVar34);
      uVar41 = *(uint *)(param_1 + 0x16c);
    }
    *(undefined *)((long)param_2 + 0x11) = 8;
    *(byte *)((long)param_2 + 0x13) = *(byte *)((long)param_2 + 0x12) << 3;
    *(ulong *)(param_2 + 2) = (ulong)(*param_2 * (uint)*(byte *)((long)param_2 + 0x12));
  }
  if (((uVar41 >> 10 & 1) != 0) && (*(char *)((long)param_2 + 0x11) == '\x10')) {
    lVar32 = *(long *)(param_2 + 2);
    if (0 < lVar32) {
      puVar39 = (undefined *)(*(long *)(param_1 + 0x260) + 1);
      puVar42 = puVar39;
      puVar38 = puVar39;
      do {
        puVar33 = puVar42 + 2;
        *puVar38 = *puVar42;
        puVar42 = puVar33;
        puVar38 = puVar38 + 1;
      } while (puVar33 < puVar39 + lVar32);
      uVar41 = *(uint *)(param_1 + 0x16c);
    }
    *(undefined *)((long)param_2 + 0x11) = 8;
    *(byte *)((long)param_2 + 0x13) = *(byte *)((long)param_2 + 0x12) << 3;
    *(ulong *)(param_2 + 2) = (ulong)(*param_2 * (uint)*(byte *)((long)param_2 + 0x12));
  }
  if ((uVar41 >> 6 & 1) != 0) {
    if (*(char *)((long)param_2 + 0x11) == '\b') {
      uVar41 = *param_2;
      uVar52 = (ulong)uVar41;
      lVar32 = *(long *)(param_1 + 0x3b0);
      lVar51 = *(long *)(param_1 + 0x3b8);
      pbVar44 = (byte *)(*(long *)(param_1 + 0x260) + 1);
      cVar6 = *(char *)(param_2 + 4);
      if ((lVar32 == 0) || (cVar6 != '\x02')) {
        if ((lVar32 != 0) && (cVar6 == '\x06')) {
          uVar37 = uVar52;
          pbVar34 = pbVar44;
          if (uVar41 == 0) goto LAB_00dba260;
          do {
            bVar56 = *pbVar44;
            uVar41 = (int)uVar37 - 1;
            pbVar45 = pbVar44 + 1;
            pbVar2 = pbVar44 + 2;
            pbVar44 = pbVar44 + 4;
            *pbVar34 = *(byte *)(lVar32 + (((ulong)*pbVar45 & 0xf8) << 2 |
                                           ((ulong)bVar56 & 0xf8) << 7 | (ulong)(*pbVar2 >> 3)));
            uVar37 = (ulong)uVar41;
            pbVar34 = pbVar34 + 1;
          } while (uVar41 != 0);
          goto LAB_00dba230;
        }
        if ((lVar51 != 0) && (cVar6 == '\x03')) {
          while (uVar41 != 0) {
            uVar41 = (int)uVar52 - 1;
            uVar52 = (ulong)uVar41;
            *pbVar44 = *(byte *)(lVar51 + (ulong)*pbVar44);
            pbVar44 = pbVar44 + 1;
          }
        }
      }
      else {
        uVar37 = uVar52;
        pbVar34 = pbVar44;
        if (uVar41 == 0) {
LAB_00dba260:
          uVar37 = 8;
          *(undefined *)(param_2 + 4) = 3;
          *(undefined2 *)((long)param_2 + 0x12) = 0x801;
LAB_00dba274:
          uVar52 = (uVar37 >> 3) * uVar52;
        }
        else {
          do {
            bVar56 = *pbVar44;
            uVar41 = (int)uVar37 - 1;
            pbVar45 = pbVar44 + 1;
            pbVar2 = pbVar44 + 2;
            pbVar44 = pbVar44 + 3;
            *pbVar34 = *(byte *)(lVar32 + (((ulong)*pbVar45 & 0xf8) << 2 |
                                           ((ulong)bVar56 & 0xf8) << 7 | (ulong)(*pbVar2 >> 3)));
            uVar37 = (ulong)uVar41;
            pbVar34 = pbVar34 + 1;
          } while (uVar41 != 0);
LAB_00dba230:
          bVar56 = *(byte *)((long)param_2 + 0x11);
          uVar37 = (ulong)bVar56;
          *(undefined *)(param_2 + 4) = 3;
          *(undefined *)((long)param_2 + 0x12) = 1;
          *(byte *)((long)param_2 + 0x13) = bVar56;
          if (7 < bVar56) goto LAB_00dba274;
          uVar52 = uVar37 * uVar52 + 7 >> 3;
        }
        *(ulong *)(param_2 + 2) = uVar52;
      }
    }
    if (*(long *)(param_2 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"png_do_quantize returned rowbytes=0");
    }
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if ((((uVar41 >> 9 & 1) != 0) && (*(char *)((long)param_2 + 0x11) == '\b')) &&
     (*(char *)(param_2 + 4) != '\x03')) {
    lVar32 = *(long *)(param_2 + 2);
    if (0 < lVar32) {
      puVar39 = (undefined *)(*(long *)(param_1 + 0x260) + 1 + lVar32 * 2);
      puVar42 = (undefined *)(*(long *)(param_1 + 0x260) + lVar32);
      do {
        uVar30 = *puVar42;
        puVar38 = puVar39 + -2;
        *puVar38 = uVar30;
        puVar39[-1] = uVar30;
        bVar23 = puVar42 < puVar38;
        puVar39 = puVar38;
        puVar42 = puVar42 + -1;
      } while (bVar23);
      lVar32 = *(long *)(param_2 + 2);
      uVar41 = *(uint *)(param_1 + 0x16c);
    }
    *(long *)(param_2 + 2) = lVar32 << 1;
    *(undefined *)((long)param_2 + 0x11) = 0x10;
    *(char *)((long)param_2 + 0x13) = *(char *)((long)param_2 + 0x12) << 4;
  }
  if (((uVar41 >> 0xe & 1) != 0) && ((*(byte *)(param_1 + 0x165) >> 3 & 1) != 0)) {
    FUN_00dbbe90(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar41 >> 5 & 1) != 0) {
    png_do_invert(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar41 >> 0x13 & 1) != 0) {
    lVar32 = *(long *)(param_1 + 0x260);
    uVar41 = *param_2;
    if (*(char *)(param_2 + 4) == '\x04') {
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (uVar41 != 0) {
          lVar32 = lVar32 + 1 + *(long *)(param_2 + 2);
          uVar52 = (ulong)(uVar41 - 1);
          if (uVar41 - 1 != 0) {
            uVar37 = uVar52 + 1;
            uVar52 = uVar37 & 0x1fffffffe;
            pbVar44 = (byte *)(lVar32 + -1);
            uVar29 = uVar52;
            do {
              uVar29 = uVar29 - 2;
              *pbVar44 = ~*pbVar44;
              pbVar44[-2] = ~pbVar44[-2];
              pbVar44 = pbVar44 + -4;
            } while (uVar29 != 0);
            lVar32 = lVar32 + uVar52 * -2;
            if (uVar37 == uVar52) goto LAB_00dba878;
          }
          iVar31 = uVar41 - (int)uVar52;
          pbVar44 = (byte *)(lVar32 + -1);
          do {
            iVar31 = iVar31 + -1;
            *pbVar44 = ~*pbVar44;
            pbVar44 = pbVar44 + -2;
          } while (iVar31 != 0);
        }
      }
      else if (uVar41 != 0) {
        pbVar44 = (byte *)(lVar32 + *(long *)(param_2 + 2));
        do {
          uVar41 = uVar41 - 1;
          *pbVar44 = ~*pbVar44;
          pbVar44[-1] = ~pbVar44[-1];
          pbVar44 = pbVar44 + -4;
        } while (uVar41 != 0);
      }
    }
    else if (*(char *)(param_2 + 4) == '\x06') {
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (uVar41 != 0) {
          lVar32 = lVar32 + 1 + *(long *)(param_2 + 2);
          uVar52 = (ulong)(uVar41 - 1);
          if (uVar41 - 1 != 0) {
            uVar37 = uVar52 + 1;
            uVar52 = uVar37 & 0x1fffffffe;
            pbVar44 = (byte *)(lVar32 + -1);
            uVar29 = uVar52;
            do {
              uVar29 = uVar29 - 2;
              *pbVar44 = ~*pbVar44;
              pbVar44[-4] = ~pbVar44[-4];
              pbVar44 = pbVar44 + -8;
            } while (uVar29 != 0);
            lVar32 = lVar32 + uVar52 * -4;
            if (uVar37 == uVar52) goto LAB_00dba878;
          }
          iVar31 = uVar41 - (int)uVar52;
          pbVar44 = (byte *)(lVar32 + -1);
          do {
            iVar31 = iVar31 + -1;
            *pbVar44 = ~*pbVar44;
            pbVar44 = pbVar44 + -4;
          } while (iVar31 != 0);
        }
      }
      else if (uVar41 != 0) {
        pbVar44 = (byte *)(lVar32 + *(long *)(param_2 + 2));
        do {
          uVar41 = uVar41 - 1;
          *pbVar44 = ~*pbVar44;
          pbVar44[-1] = ~pbVar44[-1];
          pbVar44 = pbVar44 + -8;
        } while (uVar41 != 0);
      }
    }
  }
LAB_00dba878:
  auVar19 = _DAT_004c4f40;
  Var22 = _DAT_004c4d70;
  auVar21 = _DAT_004c4a50;
  Var20 = _DAT_004c3bd0;
  auVar16 = _DAT_004c37b0;
  uVar41 = *(uint *)(param_1 + 0x16c);
  if (((uVar41 >> 3 & 1) != 0) && (bVar56 = *(byte *)(param_2 + 4), bVar56 != 3)) {
    uVar24 = (uint)*(byte *)((long)param_2 + 0x11);
    if ((bVar56 >> 1 & 1) == 0) {
      bVar54 = *(byte *)(param_1 + 0x318);
      uVar46 = 1;
    }
    else {
      bVar54 = *(byte *)(param_1 + 0x315);
      uVar46 = 3;
      local_68 = (byte *)((ulong)(uVar24 - *(byte *)(param_1 + 0x316)) << 0x20);
      local_60 = uVar24 - *(byte *)(param_1 + 0x317);
    }
    iVar31 = (int)((ulong)local_68 >> 0x20);
    uVar4 = uVar24 - bVar54;
    if ((bVar56 >> 2 & 1) != 0) {
      *(uint *)((long)&local_68 + (ulong)uVar46 * 4) = uVar24 - *(byte *)(param_1 + 0x319);
      uVar46 = uVar46 + 1;
    }
    bVar23 = 0 < (int)uVar4 && bVar54 != 0;
    uVar52 = *(ulong *)(param_1 + 0x260);
    if (0 >= (int)uVar4 || bVar54 == 0) {
      uVar4 = 0;
    }
    local_68 = (byte *)CONCAT44(iVar31,uVar4);
    if (uVar46 != 1) {
      bVar1 = (int)uVar24 <= iVar31;
      bVar17 = iVar31 < 1;
      if (bVar17 || bVar1) {
        iVar31 = 0;
      }
      bVar23 = !bVar17 && !bVar1 || bVar23;
      local_68 = (byte *)CONCAT44(iVar31,uVar4);
      if (uVar46 != 2) {
        bVar1 = (int)uVar24 <= local_60;
        bVar17 = local_60 < 1;
        if (bVar17 || bVar1) {
          local_60 = 0;
        }
        bVar23 = !bVar17 && !bVar1 || bVar23;
        if (uVar46 != 3) {
          bVar1 = (int)uVar24 <= local_5c;
          bVar17 = local_5c < 1;
          if (bVar17 || bVar1) {
            local_5c = 0;
          }
          bVar23 = !bVar17 && !bVar1 || bVar23;
        }
      }
    }
    if (bVar23) {
      pauVar3 = (undefined (*) [16])(uVar52 + 1);
      switch(uVar24 - 2 >> 1 | uVar24 << 0x1f) {
      case 0:
        lVar32 = *(long *)(param_2 + 2);
        if (0 < lVar32) {
          uVar37 = uVar52 + 2;
          if (uVar37 < lVar32 + uVar52 + 1) {
            uVar37 = lVar32 + uVar52 + 1;
          }
          uVar37 = uVar37 + ~uVar52;
          pauVar27 = pauVar3;
          if (7 < uVar37) {
            if (uVar37 < 0x20) {
              uVar28 = 0;
            }
            else {
              uVar28 = uVar37 & 0xffffffffffffffe0;
              puVar47 = (ulong *)(uVar52 + 0x11);
              uVar29 = uVar28;
              do {
                auVar16 = *(undefined (*) [16])(puVar47 + -2);
                uVar14 = puVar47[1];
                uVar13 = *puVar47;
                uVar29 = uVar29 - 0x20;
                *(byte *)puVar47 = auVar16[8] >> 1 & 0x55;
                *(byte *)((long)puVar47 + 1) = auVar16[9] >> 1 & 0x55;
                *(byte *)((long)puVar47 + 2) = auVar16[10] >> 1 & 0x55;
                *(byte *)((long)puVar47 + 3) = auVar16[11] >> 1 & 0x55;
                *(byte *)((long)puVar47 + 4) = auVar16[12] >> 1 & 0x55;
                *(byte *)((long)puVar47 + 5) = auVar16[13] >> 1 & 0x55;
                *(byte *)((long)puVar47 + 6) = auVar16[14] >> 1 & 0x55;
                *(byte *)((long)puVar47 + 7) = auVar16[15] >> 1 & 0x55;
                *(byte *)(puVar47 + -2) = auVar16[0] >> 1 & 0x55;
                *(byte *)((long)puVar47 + -0xf) = auVar16[1] >> 1 & 0x55;
                *(byte *)((long)puVar47 + -0xe) = auVar16[2] >> 1 & 0x55;
                *(byte *)((long)puVar47 + -0xd) = auVar16[3] >> 1 & 0x55;
                *(byte *)((long)puVar47 + -0xc) = auVar16[4] >> 1 & 0x55;
                *(byte *)((long)puVar47 + -0xb) = auVar16[5] >> 1 & 0x55;
                *(byte *)((long)puVar47 + -10) = auVar16[6] >> 1 & 0x55;
                *(byte *)((long)puVar47 + -9) = auVar16[7] >> 1 & 0x55;
                puVar47[1] = CONCAT17((byte)(uVar14 >> 0x39),
                                      CONCAT16((byte)(uVar14 >> 0x30) >> 1,
                                               CONCAT15((byte)(uVar14 >> 0x28) >> 1,
                                                        CONCAT14((byte)(uVar14 >> 0x20) >> 1,
                                                                 CONCAT13((byte)(uVar14 >> 0x18) >>
                                                                          1,CONCAT12((byte)(uVar14 
                                                  >> 0x10) >> 1,
                                                  CONCAT11((byte)(uVar14 >> 8) >> 1,
                                                           (byte)uVar14 >> 1))))))) &
                             0x5555555555555555;
                *puVar47 = CONCAT17((byte)(uVar13 >> 0x39),
                                    CONCAT16((byte)(uVar13 >> 0x30) >> 1,
                                             CONCAT15((byte)(uVar13 >> 0x28) >> 1,
                                                      CONCAT14((byte)(uVar13 >> 0x20) >> 1,
                                                               CONCAT13((byte)(uVar13 >> 0x18) >> 1,
                                                                        CONCAT12((byte)(uVar13 >>
                                                                                       0x10) >> 1,
                                                                                 CONCAT11((byte)(
                                                  uVar13 >> 8) >> 1,(byte)uVar13 >> 1))))))) &
                           0x5555555555555555;
                puVar47 = puVar47 + 4;
              } while (uVar29 != 0);
              if (uVar37 == uVar28) break;
              if ((uVar37 & 0x18) == 0) {
                pauVar27 = (undefined (*) [16])(*pauVar3 + uVar28);
                goto LAB_00dbb2fc;
              }
            }
            uVar37 = uVar52 + 2;
            if (uVar37 < lVar32 + uVar52 + 1) {
              uVar37 = lVar32 + uVar52 + 1;
            }
            uVar29 = uVar37 + ~uVar52 & 0xfffffffffffffff8;
            pauVar27 = (undefined (*) [16])(*pauVar3 + uVar29);
            lVar51 = uVar28 - uVar29;
            puVar47 = (ulong *)(uVar28 + uVar52 + 1);
            do {
              uVar28 = *puVar47;
              lVar51 = lVar51 + 8;
              *puVar47 = CONCAT17((byte)(uVar28 >> 0x39),
                                  CONCAT16((byte)(uVar28 >> 0x30) >> 1,
                                           CONCAT15((byte)(uVar28 >> 0x28) >> 1,
                                                    CONCAT14((byte)(uVar28 >> 0x20) >> 1,
                                                             CONCAT13((byte)(uVar28 >> 0x18) >> 1,
                                                                      CONCAT12((byte)(uVar28 >> 0x10
                                                                                     ) >> 1,
                                                                               CONCAT11((byte)(
                                                  uVar28 >> 8) >> 1,(byte)uVar28 >> 1))))))) &
                         0x5555555555555555;
              puVar47 = puVar47 + 1;
            } while (lVar51 != 0);
            if (uVar37 + ~uVar52 == uVar29) break;
          }
LAB_00dbb2fc:
          do {
            puVar39 = *pauVar27;
            (*pauVar27)[0] = (byte)(*pauVar27)[0] >> 1 & 0x55;
            pauVar27 = (undefined (*) [16])(puVar39 + 1);
          } while ((undefined (*) [16])(puVar39 + 1) < (undefined (*) [16])(*pauVar3 + lVar32));
        }
        break;
      case 1:
        lVar32 = *(long *)(param_2 + 2);
        if (0 < lVar32) {
          uVar41 = 0xf >> (ulong)(uVar4 & 0x1f);
          uVar37 = uVar52 + 2;
          if (uVar37 < lVar32 + uVar52 + 1) {
            uVar37 = lVar32 + uVar52 + 1;
          }
          uVar24 = uVar41 & 0xffffff00;
          bVar56 = (byte)uVar41 & 0xf | (byte)((uVar41 & 0xf) << 4);
          uVar37 = uVar37 + ~uVar52;
          pauVar27 = pauVar3;
          if (7 < uVar37) {
            auVar58._4_4_ = uVar4;
            auVar58._0_4_ = uVar4;
            auVar58._8_4_ = uVar4;
            auVar58._12_4_ = uVar4;
            bVar54 = (byte)(uVar24 >> 0x10);
            bVar55 = (byte)(uVar24 >> 0x18);
            bVar57 = (byte)(uVar24 >> 8);
            if (uVar37 < 0x10) {
              uVar28 = 0;
            }
            else {
              uVar28 = uVar37 & 0xfffffffffffffff0;
              auVar59 = NEON_neg(auVar58,4);
              uVar29 = uVar28;
              do {
                uVar29 = uVar29 - 0x10;
                auVar62 = a64_TBL(ZEXT816(0),*pauVar27,ZEXT816(0),auVar16);
                auVar60[9] = 0x10;
                auVar60._0_9_ = Var22;
                auVar60[10] = 0x10;
                auVar60[11] = 0x10;
                auVar60[12] = 7;
                auVar60[13] = 0x10;
                auVar60[14] = 0x10;
                auVar60[15] = 0x10;
                auVar63 = a64_TBL(ZEXT816(0),*pauVar27,ZEXT816(0),auVar60);
                auVar65 = a64_TBL(ZEXT816(0),*pauVar27,ZEXT816(0),auVar19);
                auVar66 = a64_TBL(ZEXT816(0),*pauVar27,ZEXT816(0),auVar21);
                auVar60 = NEON_ushl(auVar62,auVar59,4);
                auVar64 = NEON_ushl(auVar63,auVar59,4);
                auVar65 = NEON_ushl(auVar65,auVar59,4);
                auVar67 = NEON_ushl(auVar66,auVar59,4);
                auVar62[9] = 0x24;
                auVar62._0_9_ = Var20;
                auVar62[10] = 0x28;
                auVar62[11] = 0x2c;
                auVar62[12] = 0x30;
                auVar62[13] = 0x34;
                auVar62[14] = 0x38;
                auVar62[15] = 0x3c;
                auVar63[1] = auVar65[1] & bVar57;
                auVar63[0] = auVar65[0] & bVar56;
                auVar63[2] = auVar65[2] & bVar54;
                auVar63[3] = auVar65[3] & bVar55;
                auVar63[4] = auVar65[4] & bVar56;
                auVar63[5] = auVar65[5] & bVar57;
                auVar63[6] = auVar65[6] & bVar54;
                auVar63[7] = auVar65[7] & bVar55;
                auVar63[8] = auVar65[8] & bVar56;
                auVar63[9] = auVar65[9] & bVar57;
                auVar63[10] = auVar65[10] & bVar54;
                auVar63[11] = auVar65[11] & bVar55;
                auVar63[12] = auVar65[12] & bVar56;
                auVar63[13] = auVar65[13] & bVar57;
                auVar63[14] = auVar65[14] & bVar54;
                auVar63[15] = auVar65[15] & bVar55;
                auVar65[1] = auVar64[1] & bVar57;
                auVar65[0] = auVar64[0] & bVar56;
                auVar65[2] = auVar64[2] & bVar54;
                auVar65[3] = auVar64[3] & bVar55;
                auVar65[4] = auVar64[4] & bVar56;
                auVar65[5] = auVar64[5] & bVar57;
                auVar65[6] = auVar64[6] & bVar54;
                auVar65[7] = auVar64[7] & bVar55;
                auVar65[8] = auVar64[8] & bVar56;
                auVar65[9] = auVar64[9] & bVar57;
                auVar65[10] = auVar64[10] & bVar54;
                auVar65[11] = auVar64[11] & bVar55;
                auVar65[12] = auVar64[12] & bVar56;
                auVar65[13] = auVar64[13] & bVar57;
                auVar65[14] = auVar64[14] & bVar54;
                auVar65[15] = auVar64[15] & bVar55;
                auVar64[1] = auVar60[1] & bVar57;
                auVar64[0] = auVar60[0] & bVar56;
                auVar64[2] = auVar60[2] & bVar54;
                auVar64[3] = auVar60[3] & bVar55;
                auVar64[4] = auVar60[4] & bVar56;
                auVar64[5] = auVar60[5] & bVar57;
                auVar64[6] = auVar60[6] & bVar54;
                auVar64[7] = auVar60[7] & bVar55;
                auVar64[8] = auVar60[8] & bVar56;
                auVar64[9] = auVar60[9] & bVar57;
                auVar64[10] = auVar60[10] & bVar54;
                auVar64[11] = auVar60[11] & bVar55;
                auVar64[12] = auVar60[12] & bVar56;
                auVar64[13] = auVar60[13] & bVar57;
                auVar64[14] = auVar60[14] & bVar54;
                auVar64[15] = auVar60[15] & bVar55;
                auVar66[1] = auVar67[1] & bVar57;
                auVar66[0] = auVar67[0] & bVar56;
                auVar66[2] = auVar67[2] & bVar54;
                auVar66[3] = auVar67[3] & bVar55;
                auVar66[4] = auVar67[4] & bVar56;
                auVar66[5] = auVar67[5] & bVar57;
                auVar66[6] = auVar67[6] & bVar54;
                auVar66[7] = auVar67[7] & bVar55;
                auVar66[8] = auVar67[8] & bVar56;
                auVar66[9] = auVar67[9] & bVar57;
                auVar66[10] = auVar67[10] & bVar54;
                auVar66[11] = auVar67[11] & bVar55;
                auVar66[12] = auVar67[12] & bVar56;
                auVar66[13] = auVar67[13] & bVar57;
                auVar66[14] = auVar67[14] & bVar54;
                auVar66[15] = auVar67[15] & bVar55;
                auVar60 = a64_TBL(ZEXT816(0),auVar63,auVar65,auVar64,auVar66,auVar62);
                *(long *)(*pauVar27 + 8) = auVar60._8_8_;
                *(long *)*pauVar27 = auVar60._0_8_;
                pauVar27 = pauVar27 + 1;
              } while (uVar29 != 0);
              if (uVar37 == uVar28) break;
              if (((uint)uVar37 >> 3 & 1) == 0) {
                pauVar27 = (undefined (*) [16])(*pauVar3 + uVar28);
                goto LAB_00dbb2a4;
              }
            }
            auVar21 = _DAT_004c4f40;
            auVar16 = _DAT_004c4870;
            uVar37 = uVar52 + 2;
            if (uVar37 < lVar32 + uVar52 + 1) {
              uVar37 = lVar32 + uVar52 + 1;
            }
            uVar29 = uVar37 + ~uVar52 & 0xfffffffffffffff8;
            auVar19._9_7_ = _UNK_004c4d79;
            auVar19._0_9_ = _DAT_004c4d70;
            auVar58 = NEON_neg(auVar58,4);
            lVar51 = uVar28 - uVar29;
            puVar47 = (ulong *)(uVar28 + uVar52 + 1);
            do {
              lVar51 = lVar51 + 8;
              auVar59._8_8_ = 0;
              auVar59._0_8_ = *puVar47;
              auVar59 = a64_TBL(ZEXT816(0),auVar59,ZEXT816(0),auVar21);
              auVar67._8_8_ = 0;
              auVar67._0_8_ = *puVar47;
              auVar60 = a64_TBL(ZEXT816(0),auVar67,ZEXT816(0),auVar19);
              auVar59 = NEON_ushl(auVar59,auVar58,4);
              auVar60 = NEON_ushl(auVar60,auVar58,4);
              auVar61[0] = auVar60[0] & bVar56;
              auVar61[1] = auVar60[1] & bVar57;
              auVar61[2] = auVar60[2] & bVar54;
              auVar61[3] = auVar60[3] & bVar55;
              auVar61[4] = auVar60[4] & bVar56;
              auVar61[5] = auVar60[5] & bVar57;
              auVar61[6] = auVar60[6] & bVar54;
              auVar61[7] = auVar60[7] & bVar55;
              auVar61[8] = auVar60[8] & bVar56;
              auVar61[9] = auVar60[9] & bVar57;
              auVar61[10] = auVar60[10] & bVar54;
              auVar61[11] = auVar60[11] & bVar55;
              auVar61[12] = auVar60[12] & bVar56;
              auVar61[13] = auVar60[13] & bVar57;
              auVar61[14] = auVar60[14] & bVar54;
              auVar61[15] = auVar60[15] & bVar55;
              auVar15[1] = auVar59[1] & bVar57;
              auVar15[0] = auVar59[0] & bVar56;
              auVar15[2] = auVar59[2] & bVar54;
              auVar15[3] = auVar59[3] & bVar55;
              auVar15[4] = auVar59[4] & bVar56;
              auVar15[5] = auVar59[5] & bVar57;
              auVar15[6] = auVar59[6] & bVar54;
              auVar15[7] = auVar59[7] & bVar55;
              auVar15[8] = auVar59[8] & bVar56;
              auVar15[9] = auVar59[9] & bVar57;
              auVar15[10] = auVar59[10] & bVar54;
              auVar15[11] = auVar59[11] & bVar55;
              auVar15[12] = auVar59[12] & bVar56;
              auVar15[13] = auVar59[13] & bVar57;
              auVar15[14] = auVar59[14] & bVar54;
              auVar15[15] = auVar59[15] & bVar55;
              auVar59 = a64_TBL(ZEXT816(0),auVar15,auVar61,auVar16);
              *puVar47 = auVar59._0_8_;
              puVar47 = puVar47 + 1;
            } while (lVar51 != 0);
            pauVar27 = (undefined (*) [16])(*pauVar3 + uVar29);
            if (uVar37 + ~uVar52 == uVar29) break;
          }
LAB_00dbb2a4:
          do {
            puVar39 = *pauVar27;
            (*pauVar27)[0] = (byte)(*pauVar27)[0] >> (ulong)(uVar4 & 0x1f) & bVar56;
            pauVar27 = (undefined (*) [16])(puVar39 + 1);
          } while ((undefined (*) [16])(puVar39 + 1) < (undefined (*) [16])(*pauVar3 + lVar32));
        }
        break;
      case 3:
        lVar32 = *(long *)(param_2 + 2);
        if ((0 < lVar32) &&
           ((*pauVar3)[0] = (byte)(*pauVar3)[0] >> (ulong)(uVar4 & 0x1f), lVar32 != 1)) {
          pbVar44 = (byte *)(uVar52 + 2);
          uVar41 = (uint)(1 < uVar46);
          do {
            uVar24 = 0;
            if ((int)(uVar41 + 1) < (int)uVar46) {
              uVar24 = uVar41 + 1;
            }
            pbVar34 = pbVar44 + 1;
            *pbVar44 = *pbVar44 >>
                       (ulong)(*(uint *)((long)&local_68 + (long)(int)uVar41 * 4) & 0x1f);
            pbVar44 = pbVar34;
            uVar41 = uVar24;
          } while (pbVar34 < (byte *)(lVar32 + uVar52 + 1));
        }
        break;
      case 7:
        lVar32 = *(long *)(param_2 + 2);
        if ((0 < lVar32) &&
           (uVar41 = ((((*(ushort *)(uVar52 + 1) & 0xff00) << 0x10) >> 8 |
                      (uint)*(ushort *)(uVar52 + 1) << 0x18) >> 0x10) >> (ulong)(uVar4 & 0x1f),
           *(ushort *)(uVar52 + 1) =
                (ushort)(uVar41 >> 8) & 0xff | (ushort)((uVar41 & 0xff00ff) << 8), 2 < lVar32)) {
          puVar35 = (ushort *)(uVar52 + 3);
          uVar41 = (uint)(1 < uVar46);
          do {
            uVar4 = ((((*puVar35 & 0xff00) << 0x10) >> 8 | (uint)*puVar35 << 0x18) >> 0x10) >>
                    (ulong)(*(uint *)((long)&local_68 + (long)(int)uVar41 * 4) & 0x1f);
            uVar24 = 0;
            if ((int)(uVar41 + 1) < (int)uVar46) {
              uVar24 = uVar41 + 1;
            }
            puVar26 = puVar35 + 1;
            *puVar35 = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
            puVar35 = puVar26;
            uVar41 = uVar24;
          } while (puVar26 < (ushort *)(lVar32 + uVar52 + 1));
        }
      }
      uVar41 = *(uint *)(param_1 + 0x16c);
    }
  }
  if (((uVar41 >> 2 & 1) != 0) && (bVar56 = *(byte *)((long)param_2 + 0x11), bVar56 < 8)) {
    lVar51 = *(long *)(param_1 + 0x260);
    uVar41 = *param_2;
    uVar52 = (ulong)uVar41;
    lVar32 = lVar51 + 1;
    if (bVar56 == 4) {
      if (uVar41 != 0) {
        uVar24 = uVar41 & 1;
        pbVar44 = (byte *)(lVar32 + (ulong)(uVar41 - 1 >> 1));
        do {
          uVar46 = uVar24 << 2;
          bVar23 = uVar24 == 1;
          uVar24 = (uint)!bVar23;
          *(byte *)(lVar51 + uVar52) = *pbVar44 >> (ulong)uVar46 & 0xf;
          uVar52 = uVar52 - 1;
          pbVar44 = pbVar44 + -(ulong)bVar23;
        } while ((int)uVar52 != 0);
      }
    }
    else if (bVar56 == 2) {
      if (uVar41 != 0) {
        pbVar44 = (byte *)(lVar32 + (ulong)(uVar41 - 1 >> 2));
        uVar24 = ~(uVar41 * 2 + 6) & 6;
        do {
          bVar56 = *pbVar44;
          bVar23 = uVar24 == 6;
          pbVar44 = pbVar44 + -(ulong)bVar23;
          uVar4 = uVar24 & 0x1f;
          uVar46 = uVar24 + 2;
          uVar24 = 0;
          if (!bVar23) {
            uVar24 = uVar46;
          }
          *(byte *)(lVar51 + uVar52) = bVar56 >> (ulong)uVar4 & 3;
          uVar52 = uVar52 - 1;
        } while ((int)uVar52 != 0);
      }
    }
    else if ((bVar56 == 1) && (uVar41 != 0)) {
      pbVar44 = (byte *)(lVar32 + (ulong)(uVar41 - 1 >> 3));
      uVar24 = -uVar41 & 7;
      do {
        uVar46 = 0;
        if (uVar24 != 7) {
          uVar46 = uVar24 + 1;
        }
        *(byte *)(lVar51 + uVar52) = *pbVar44 >> (ulong)(uVar24 & 0x1f) & 1;
        uVar52 = uVar52 - 1;
        pbVar44 = pbVar44 + -(ulong)(uVar24 == 7);
        uVar24 = uVar46;
      } while ((int)uVar52 != 0);
    }
    *(undefined *)((long)param_2 + 0x11) = 8;
    *(byte *)((long)param_2 + 0x13) = *(byte *)((long)param_2 + 0x12) << 3;
    *(ulong *)(param_2 + 2) = (ulong)(uVar41 * *(byte *)((long)param_2 + 0x12));
  }
  if ((*(char *)(param_2 + 4) == '\x03') && (-1 < *(int *)(param_1 + 0x294))) {
    png_do_check_palette_indexes(param_1,param_2);
  }
  uVar41 = *(uint *)(param_1 + 0x16c);
  if ((uVar41 & 1) != 0) {
    png_do_bgr(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar41 >> 0x10 & 1) != 0) {
    png_do_packswap(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar41 >> 0xf & 1) != 0) {
    lVar51 = *(long *)(param_1 + 0x260);
    uVar48 = *(ushort *)(param_1 + 0x2aa);
    uVar24 = *(uint *)(param_1 + 0x168);
    lVar32 = lVar51 + 1;
    uVar46 = *param_2;
    uVar52 = (ulong)uVar46;
    uVar30 = (undefined)uVar48;
    uVar36 = (undefined)(uVar48 >> 8);
    if (*(char *)(param_2 + 4) == '\x02') {
      if (*(char *)((long)param_2 + 0x11) == '\x10') {
        if ((uVar24 >> 7 & 1) != 0) {
          puVar39 = (undefined *)(lVar32 + uVar52 * 8);
          if (1 < uVar46) {
            iVar31 = uVar46 - 1;
            puVar42 = (undefined *)(uVar52 * 6 + lVar51 + -2);
            do {
              *(ushort *)(puVar39 + -2) = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
              iVar31 = iVar31 + -1;
              puVar39[-3] = puVar42[2];
              puVar39[-4] = puVar42[1];
              puVar39[-5] = *puVar42;
              puVar39[-6] = puVar42[-1];
              puVar39[-7] = puVar42[-2];
              puVar38 = puVar42 + -3;
              puVar42 = puVar42 + -6;
              puVar39 = puVar39 + -8;
              *puVar39 = *puVar38;
            } while (iVar31 != 0);
          }
          uVar48 = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
          lVar32 = 3;
          uVar36 = 0x40;
          uVar43 = 4;
LAB_00dbb7a8:
          *(ushort *)(puVar39 + -2) = uVar48;
          goto LAB_00dbb7ac;
        }
        if (uVar46 != 0) {
          puVar39 = (undefined *)(uVar52 * 6 + lVar51 + -2);
          puVar42 = (undefined *)(lVar51 + uVar52 * 8 + -3);
          do {
            uVar41 = (int)uVar52 - 1;
            uVar52 = (ulong)uVar41;
            puVar42[3] = puVar39[2];
            puVar42[2] = puVar39[1];
            puVar42[1] = *puVar39;
            *puVar42 = puVar39[-1];
            puVar42[-1] = puVar39[-2];
            uVar43 = puVar39[-3];
            puVar42[-3] = uVar30;
            puVar42[-4] = uVar36;
            puVar39 = puVar39 + -6;
            puVar42[-2] = uVar43;
            puVar42 = puVar42 + -8;
          } while (uVar41 != 0);
        }
        lVar32 = 3;
        uVar36 = 0x40;
      }
      else {
        if (*(char *)((long)param_2 + 0x11) != '\b') goto LAB_00dbb7c0;
        if ((uVar24 >> 7 & 1) != 0) {
          puVar39 = (undefined *)(lVar32 + uVar52 * 4);
          if (1 < uVar46) {
            iVar31 = uVar46 - 1;
            puVar42 = (undefined *)(lVar51 + uVar52 * 3);
            do {
              puVar39[-1] = uVar30;
              iVar31 = iVar31 + -1;
              puVar39[-2] = *puVar42;
              puVar39[-3] = puVar42[-1];
              puVar38 = puVar42 + -2;
              puVar42 = puVar42 + -3;
              puVar39 = puVar39 + -4;
              *puVar39 = *puVar38;
            } while (iVar31 != 0);
          }
          lVar32 = 2;
          uVar36 = 0x20;
          uVar43 = 4;
          puVar39[-1] = uVar30;
          goto LAB_00dbb7ac;
        }
        if (uVar46 != 0) {
          puVar39 = (undefined *)(lVar51 + uVar52 * 3);
          puVar42 = (undefined *)(lVar51 + uVar52 * 4 + -1);
          do {
            uVar41 = (int)uVar52 - 1;
            uVar52 = (ulong)uVar41;
            puVar42[1] = *puVar39;
            *puVar42 = puVar39[-1];
            uVar36 = puVar39[-2];
            puVar42[-2] = uVar30;
            puVar39 = puVar39 + -3;
            puVar42[-1] = uVar36;
            puVar42 = puVar42 + -4;
          } while (uVar41 != 0);
        }
        lVar32 = 2;
        uVar36 = 0x20;
      }
      uVar43 = 4;
    }
    else {
      if (*(char *)(param_2 + 4) != '\0') goto LAB_00dbb7c0;
      if (*(char *)((long)param_2 + 0x11) == '\x10') {
        if ((uVar24 >> 7 & 1) != 0) {
          puVar39 = (undefined *)(lVar32 + uVar52 * 4);
          uVar48 = uVar48 >> 8 | (ushort)((uVar48 & 0xff00ff) << 8);
          if (1 < uVar46) {
            iVar31 = uVar46 - 1;
            puVar42 = (undefined *)(lVar51 + uVar52 * 2);
            do {
              *(ushort *)(puVar39 + -2) = uVar48;
              iVar31 = iVar31 + -1;
              puVar39[-3] = *puVar42;
              puVar38 = puVar42 + -1;
              puVar42 = puVar42 + -2;
              puVar39 = puVar39 + -4;
              *puVar39 = *puVar38;
            } while (iVar31 != 0);
          }
          uVar43 = 2;
          uVar36 = 0x20;
          lVar32 = 2;
          goto LAB_00dbb7a8;
        }
        if (uVar46 != 0) {
          puVar39 = (undefined *)(lVar51 + uVar52 * 2);
          puVar42 = (undefined *)(lVar51 + uVar52 * 4 + -1);
          do {
            uVar41 = (int)uVar52 - 1;
            uVar52 = (ulong)uVar41;
            puVar42[1] = *puVar39;
            uVar43 = puVar39[-1];
            puVar39 = puVar39 + -2;
            puVar42[-1] = uVar30;
            puVar42[-2] = uVar36;
            *puVar42 = uVar43;
            puVar42 = puVar42 + -4;
          } while (uVar41 != 0);
        }
        uVar43 = 2;
        uVar36 = 0x20;
        lVar32 = 2;
      }
      else {
        if (*(char *)((long)param_2 + 0x11) != '\b') goto LAB_00dbb7c0;
        if ((uVar24 >> 7 & 1) == 0) {
          if (uVar46 != 0) {
            puVar39 = (undefined *)(lVar51 + uVar52 * 2);
            do {
              uVar36 = *(undefined *)(lVar51 + uVar52);
              uVar52 = uVar52 - 1;
              puVar39[-1] = uVar30;
              *puVar39 = uVar36;
              puVar39 = puVar39 + -2;
            } while ((int)uVar52 != 0);
          }
          lVar32 = 1;
          uVar36 = 0x10;
          uVar43 = 2;
        }
        else {
          puVar39 = (undefined *)(lVar32 + uVar52 * 2);
          if (1 < uVar46) {
            do {
              puVar39[-1] = uVar30;
              puVar42 = (undefined *)(lVar51 + uVar52);
              uVar52 = uVar52 - 1;
              puVar39 = puVar39 + -2;
              *puVar39 = *puVar42;
            } while ((int)uVar52 != 1);
          }
          lVar32 = 1;
          uVar36 = 0x10;
          uVar43 = 2;
          puVar39[-1] = uVar30;
        }
      }
    }
LAB_00dbb7ac:
    *(undefined *)((long)param_2 + 0x12) = uVar43;
    uVar41 = *(uint *)(param_1 + 0x16c);
    *(undefined *)((long)param_2 + 0x13) = uVar36;
    *(ulong *)(param_2 + 2) = (ulong)(uVar46 << lVar32);
  }
LAB_00dbb7c0:
  if ((uVar41 >> 0x11 & 1) != 0) {
    lVar32 = *(long *)(param_1 + 0x260);
    uVar41 = *param_2;
    if (*(char *)(param_2 + 4) == '\x04') {
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (uVar41 != 0) {
          uVar52 = (ulong)(uVar41 - 1);
          lVar51 = lVar32 + 1 + *(long *)(param_2 + 2);
          if (uVar41 - 1 != 0) {
            uVar37 = uVar52 + 1;
            uVar52 = uVar37 & 0x1fffffffe;
            puVar39 = (undefined *)(*(long *)(param_2 + 2) + lVar32 + -1);
            lVar51 = lVar51 + uVar52 * -2;
            uVar29 = uVar52;
            do {
              uVar29 = uVar29 - 2;
              uVar30 = puVar39[1];
              uVar36 = puVar39[-1];
              puVar39[1] = *puVar39;
              puVar39[-1] = puVar39[-2];
              *puVar39 = uVar30;
              puVar39[-2] = uVar36;
              puVar39 = puVar39 + -4;
            } while (uVar29 != 0);
            if (uVar37 == uVar52) goto LAB_00dbb914;
          }
          iVar31 = uVar41 - (int)uVar52;
          puVar39 = (undefined *)(lVar51 + -1);
          do {
            iVar31 = iVar31 + -1;
            uVar30 = *puVar39;
            *puVar39 = puVar39[-1];
            puVar39[-1] = uVar30;
            puVar39 = puVar39 + -2;
          } while (iVar31 != 0);
        }
      }
      else if (uVar41 != 0) {
        lVar32 = *(long *)(param_2 + 2) + lVar32 + -1;
        do {
          uVar41 = uVar41 - 1;
          *(uint *)(lVar32 + -2) = *(uint *)(lVar32 + -2) >> 0x10 | *(uint *)(lVar32 + -2) << 0x10;
          lVar32 = lVar32 + -4;
        } while (uVar41 != 0);
      }
    }
    else if (*(char *)(param_2 + 4) == '\x06') {
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (uVar41 != 0) {
          puVar39 = (undefined *)(*(long *)(param_2 + 2) + lVar32 + -1);
          do {
            uVar41 = uVar41 - 1;
            uVar30 = puVar39[1];
            puVar39[1] = *puVar39;
            *puVar39 = puVar39[-1];
            puVar39[-1] = puVar39[-2];
            puVar39[-2] = uVar30;
            puVar39 = puVar39 + -4;
          } while (uVar41 != 0);
        }
      }
      else if (uVar41 != 0) {
        puVar40 = (undefined8 *)(*(long *)(param_2 + 2) + lVar32 + -7);
        do {
          uVar41 = uVar41 - 1;
          uVar25 = NEON_ext(*puVar40,*puVar40,6,1);
          *puVar40 = uVar25;
          puVar40 = puVar40 + -1;
        } while (uVar41 != 0);
      }
    }
  }
LAB_00dbb914:
  uVar41 = *(uint *)(param_1 + 0x16c);
  if ((uVar41 >> 4 & 1) != 0) {
    png_do_swap(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar41 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar41 >> 0x14 & 1) == 0) {
                    /* WARNING: Read-only address (ram,0x004c37b0) is written */
                    /* WARNING: Read-only address (ram,0x004c3bd0) is written */
                    /* WARNING: Read-only address (ram,0x004c4870) is written */
                    /* WARNING: Read-only address (ram,0x004c4a50) is written */
                    /* WARNING: Read-only address (ram,0x004c4d70) is written */
                    /* WARNING: Read-only address (ram,0x004c4d79) is written */
                    /* WARNING: Read-only address (ram,0x004c4f40) is written */
    if (*(long *)(lVar12 + 0x28) != local_58) {
LAB_00dbba00:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
                    /* WARNING: Read-only address (ram,0x004c37b0) is written */
                    /* WARNING: Read-only address (ram,0x004c3bd0) is written */
                    /* WARNING: Read-only address (ram,0x004c4870) is written */
                    /* WARNING: Read-only address (ram,0x004c4a50) is written */
                    /* WARNING: Read-only address (ram,0x004c4d70) is written */
                    /* WARNING: Read-only address (ram,0x004c4d79) is written */
                    /* WARNING: Read-only address (ram,0x004c4f40) is written */
    if (*(code **)(param_1 + 0x148) != (code *)0x0) {
      (**(code **)(param_1 + 0x148))(param_1,param_2,*(long *)(param_1 + 0x260) + 1);
    }
    if (*(char *)(param_1 + 0x160) != '\0') {
      *(char *)((long)param_2 + 0x11) = *(char *)(param_1 + 0x160);
    }
    bVar56 = *(byte *)(param_1 + 0x161);
    if (bVar56 == 0) {
      bVar56 = *(byte *)((long)param_2 + 0x12);
    }
    else {
      *(byte *)((long)param_2 + 0x12) = bVar56;
    }
    uVar41 = (uint)bVar56 * (uint)*(byte *)((long)param_2 + 0x11);
    *(char *)((long)param_2 + 0x13) = (char)uVar41;
    if ((uVar41 & 0xff) < 8) {
      *(ulong *)(param_2 + 2) = (ulong)*param_2 * ((ulong)uVar41 & 0xff) + 7 >> 3;
      lVar32 = *(long *)(lVar12 + 0x28);
    }
    else {
      *(ulong *)(param_2 + 2) = (ulong)*param_2 * (ulong)(uVar41 >> 3 & 0x1f);
      lVar32 = *(long *)(lVar12 + 0x28);
    }
    if (lVar32 != local_58) goto LAB_00dbba00;
  }
  return;
LAB_00db93e4:
  *(byte *)(puVar26 + 1) = *(byte *)(puVar35 + 3);
  pbVar44 = (byte *)((long)puVar35 + 7);
  puVar35 = puVar35 + 4;
  *(byte *)((long)puVar26 + 3) = *pbVar44;
  uVar41 = (int)uVar37 - 1;
  uVar37 = (ulong)uVar41;
  puVar26 = puVar26 + 2;
  goto joined_r0x00db93d4;
LAB_00db932c:
  pbVar44 = (byte *)((long)puVar35 + 3);
  puVar35 = puVar35 + 2;
  *(byte *)((long)puVar26 + 1) = *pbVar44;
  uVar41 = uVar41 - 1;
  puVar26 = puVar26 + 1;
  goto joined_r0x00db931c;
}


