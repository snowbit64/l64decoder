// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_combine_row
// Entry Point: 00dbfd5c
// Size: 1700 bytes
// Signature: undefined png_combine_row(void)


void png_combine_row(long param_1,byte *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  undefined4 *__dest;
  undefined4 *__src;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte bVar22;
  ulong uVar23;
  byte bVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  bVar12 = *(byte *)(param_1 + 0x2a7);
  if (bVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal row logic error");
  }
  lVar8 = *(long *)(param_1 + 0x260);
  uVar26 = *(uint *)(param_1 + 0x230);
  uVar23 = (ulong)uVar26;
  bVar3 = *(byte *)(param_1 + 0x29d);
  if (*(ulong *)(param_1 + 0x278) != 0) {
    uVar16 = uVar23 * bVar12 + 7 >> 3;
    if (7 < bVar12) {
      uVar16 = uVar23 * (bVar12 >> 3);
    }
    if (*(ulong *)(param_1 + 0x278) != uVar16) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"internal row size calculation error");
    }
  }
  if (uVar26 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal row width error");
  }
  uVar16 = uVar23 * bVar12;
  pbVar20 = (byte *)(lVar8 + 1);
  bVar6 = bVar12 >> 3;
  uVar27 = (ulong)bVar6;
  uVar9 = (uint)uVar16 & 7;
  if ((uVar16 & 7) == 0) {
    bVar22 = 0;
    bVar24 = 0;
    pbVar21 = (byte *)0x0;
    cVar4 = *(char *)(param_1 + 0x29c);
  }
  else {
    uVar25 = uVar27 * uVar23;
    if (bVar12 < 8) {
      uVar25 = uVar16 + 7 >> 3;
    }
    pbVar21 = param_2 + (uVar25 - 1);
    bVar22 = *pbVar21;
    if ((*(byte *)(param_1 + 0x16e) & 1) == 0) {
      bVar24 = (byte)(0xff >> (ulong)uVar9);
      cVar4 = *(char *)(param_1 + 0x29c);
    }
    else {
      bVar24 = (byte)(0xff << (ulong)uVar9);
      cVar4 = *(char *)(param_1 + 0x29c);
    }
  }
  if (((cVar4 != '\0') && ((*(uint *)(param_1 + 0x16c) >> 1 & 1) != 0)) && (bVar3 < 6)) {
    uVar9 = (uint)bVar3;
    if (param_3 == 1) {
      if ((bVar3 & 1) != 0) {
        uVar28 = 1;
        goto LAB_00dbfeb4;
      }
    }
    else if (param_3 == 0) {
      uVar28 = uVar9 & 1;
LAB_00dbfeb4:
      uVar28 = uVar28 << (ulong)(3 - (uVar9 + 1 >> 1) & 0x1f) & 7;
      if (uVar26 <= uVar28) {
        return;
      }
      uVar13 = (uint)bVar12;
      if (7 < bVar12) {
        if ((bVar12 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"invalid user transform pixel depth");
        }
        lVar14 = uVar23 * uVar27;
        uVar28 = uVar28 * bVar6;
        uVar23 = (ulong)uVar28;
        uVar16 = lVar14 - uVar23;
        __dest = (undefined4 *)(param_2 + uVar23);
        __src = (undefined4 *)(pbVar20 + uVar23);
        if (param_3 != 0) {
          uVar5 = (uint)bVar6 << (ulong)(6 - uVar9 >> 1 & 0x1f);
          uVar13 = (uint)uVar16;
          if (uVar5 <= uVar16) {
            uVar13 = uVar5;
          }
          uVar27 = (ulong)uVar13;
        }
        uVar13 = (uint)uVar27;
        uVar9 = (uint)bVar6 << (ulong)(7 - uVar9 >> 1 & 0x1f);
        uVar25 = (ulong)uVar9;
        if (uVar13 == 1) {
          *(undefined *)__dest = *(undefined *)__src;
          for (; uVar25 < uVar16; uVar16 = uVar16 - uVar25) {
            uVar23 = uVar25 + uVar23;
            param_2[uVar23] = pbVar20[uVar23];
          }
          return;
        }
        if (uVar13 == 2) {
          do {
            bVar7 = uVar16 < uVar25;
            uVar16 = uVar16 - uVar25;
            param_2[uVar23] = *(byte *)(lVar8 + uVar23 + 1);
            (param_2 + uVar23)[1] = *(byte *)(lVar8 + uVar23 + 2);
            if (bVar7 || uVar16 == 0) {
              return;
            }
            uVar23 = uVar23 + uVar25;
          } while (1 < uVar16);
          param_2[uVar23] = *(byte *)(lVar8 + uVar23 + 1);
          return;
        }
        if (uVar13 == 3) {
          *(undefined *)__dest = *(undefined *)__src;
          *(undefined *)((long)__dest + 1) = *(undefined *)((long)__src + 1);
          *(undefined *)((long)__dest + 2) = *(undefined *)((long)__src + 2);
          if (uVar16 <= uVar25) {
            return;
          }
          do {
            uVar23 = uVar25 + uVar23;
            pbVar20 = (byte *)(lVar8 + 3 + uVar23);
            pbVar21 = param_2 + uVar23;
            uVar16 = uVar16 - uVar25;
            *pbVar21 = pbVar20[-2];
            pbVar21[1] = pbVar20[-1];
            pbVar21[2] = *pbVar20;
          } while (uVar25 < uVar16);
          return;
        }
        if (((0xf < uVar13) || (((ulong)__dest & 1) != 0)) ||
           ((((ulong)__src & 1) != 0 || (((uVar27 & 1) != 0 || ((uVar9 & 1) != 0)))))) {
          memcpy(__dest,__src,uVar27);
          if (uVar16 <= uVar25) {
            return;
          }
          uVar26 = (uVar26 * bVar6 - uVar28) - uVar9;
          do {
            uVar23 = uVar25 + uVar23;
            uVar28 = uVar26;
            if (uVar27 <= uVar16 - uVar25) {
              uVar28 = (uint)uVar27;
            }
            uVar27 = (ulong)uVar28;
            uVar16 = uVar16 - uVar25;
            memcpy(param_2 + uVar23,pbVar20 + uVar23,uVar27);
            uVar26 = uVar26 - uVar9;
          } while (uVar25 < uVar16);
          return;
        }
        if ((((((ulong)__dest & 3) != 0) || (((ulong)__src & 3) != 0)) || ((uVar27 & 3) != 0)) ||
           ((uVar9 & 3) != 0)) {
          uVar17 = (ulong)(uVar9 - uVar13 >> 1);
          lVar8 = uVar17 * 2;
          uVar18 = uVar27;
          uVar23 = (lVar14 - uVar25) - uVar23;
          do {
            do {
              uVar19 = uVar23;
              puVar15 = (undefined4 *)((long)__src + 2);
              uVar18 = uVar18 - 2;
              puVar11 = (undefined4 *)((long)__dest + 2);
              *(undefined2 *)__dest = *(undefined2 *)__src;
              __dest = puVar11;
              __src = puVar15;
              uVar23 = uVar19;
            } while (uVar18 != 0);
            bVar7 = uVar16 < uVar25;
            uVar16 = uVar16 - uVar25;
            if (bVar7 || uVar16 == 0) {
              return;
            }
            __dest = (undefined4 *)((long)puVar11 + lVar8);
            __src = (undefined4 *)((long)puVar15 + lVar8);
            uVar18 = uVar27;
            uVar23 = uVar19 - uVar25;
          } while (uVar27 <= uVar16);
          if ((7 < uVar16) &&
             (((undefined4 *)((long)__src + uVar16) <= __dest ||
              ((undefined4 *)((long)__dest + uVar16) <= __src)))) {
            if (uVar16 < 0x20) {
              uVar27 = 0;
            }
            else {
              uVar27 = uVar16 & 0xffffffffffffffe0;
              uVar23 = uVar19 & 0xffffffffffffffe0;
              do {
                puVar1 = (undefined8 *)((long)puVar15 + lVar8);
                puVar2 = (undefined8 *)((long)puVar11 + lVar8);
                lVar8 = lVar8 + 0x20;
                uVar23 = uVar23 - 0x20;
                uVar29 = *puVar1;
                uVar31 = puVar1[3];
                uVar30 = puVar1[2];
                puVar2[1] = puVar1[1];
                *puVar2 = uVar29;
                puVar2[3] = uVar31;
                puVar2[2] = uVar30;
              } while (uVar23 != 0);
              if (uVar16 == uVar27) {
                return;
              }
              if ((uVar16 & 0x18) == 0) {
                __dest = (undefined4 *)((long)__dest + uVar27);
                __src = (undefined4 *)((long)__src + uVar27);
                uVar16 = uVar16 & 0x1f;
                goto LAB_00dc03bc;
              }
            }
            uVar23 = uVar16 & 0xfffffffffffffff8;
            __src = (undefined4 *)((long)__src + uVar23);
            __dest = (undefined4 *)((long)__dest + uVar23);
            lVar14 = uVar27 + uVar17 * 2;
            lVar8 = uVar27 - (uVar19 & 0xfffffffffffffff8);
            do {
              lVar8 = lVar8 + 8;
              *(undefined8 *)((long)puVar11 + lVar14) = *(undefined8 *)((long)puVar15 + lVar14);
              lVar14 = lVar14 + 8;
            } while (lVar8 != 0);
            bVar7 = uVar16 == uVar23;
            uVar16 = uVar16 & 7;
            if (bVar7) {
              return;
            }
          }
LAB_00dc03bc:
          do {
            uVar16 = uVar16 - 1;
            *(undefined *)__dest = *(undefined *)__src;
            __dest = (undefined4 *)((long)__dest + 1);
            __src = (undefined4 *)((long)__src + 1);
          } while (uVar16 != 0);
          return;
        }
        uVar17 = (ulong)(uVar9 - uVar13 >> 2);
        lVar8 = uVar17 * 4;
        uVar18 = uVar27;
        uVar23 = (lVar14 - uVar25) - uVar23;
        do {
          do {
            uVar19 = uVar23;
            puVar15 = __src + 1;
            uVar18 = uVar18 - 4;
            puVar11 = __dest + 1;
            *__dest = *__src;
            __dest = puVar11;
            __src = puVar15;
            uVar23 = uVar19;
          } while (uVar18 != 0);
          bVar7 = uVar16 < uVar25;
          uVar16 = uVar16 - uVar25;
          if (bVar7 || uVar16 == 0) {
            return;
          }
          __dest = puVar11 + uVar17;
          __src = puVar15 + uVar17;
          uVar18 = uVar27;
          uVar23 = uVar19 - uVar25;
        } while (uVar27 <= uVar16);
        if ((7 < uVar16) &&
           (((undefined4 *)((long)__src + uVar16) <= __dest ||
            ((undefined4 *)((long)__dest + uVar16) <= __src)))) {
          if (uVar16 < 0x20) {
            uVar27 = 0;
          }
          else {
            uVar27 = uVar16 & 0xffffffffffffffe0;
            uVar23 = uVar19 & 0xffffffffffffffe0;
            do {
              puVar1 = (undefined8 *)((long)puVar15 + lVar8);
              puVar2 = (undefined8 *)((long)puVar11 + lVar8);
              lVar8 = lVar8 + 0x20;
              uVar23 = uVar23 - 0x20;
              uVar29 = *puVar1;
              uVar31 = puVar1[3];
              uVar30 = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = uVar29;
              puVar2[3] = uVar31;
              puVar2[2] = uVar30;
            } while (uVar23 != 0);
            if (uVar16 == uVar27) {
              return;
            }
            if ((uVar16 & 0x18) == 0) {
              __dest = (undefined4 *)((long)__dest + uVar27);
              __src = (undefined4 *)((long)__src + uVar27);
              uVar16 = uVar16 & 0x1f;
              goto LAB_00dc039c;
            }
          }
          uVar23 = uVar16 & 0xfffffffffffffff8;
          __src = (undefined4 *)((long)__src + uVar23);
          __dest = (undefined4 *)((long)__dest + uVar23);
          lVar14 = uVar27 + uVar17 * 4;
          lVar8 = uVar27 - (uVar19 & 0xfffffffffffffff8);
          do {
            lVar8 = lVar8 + 8;
            *(undefined8 *)((long)puVar11 + lVar14) = *(undefined8 *)((long)puVar15 + lVar14);
            lVar14 = lVar14 + 8;
          } while (lVar8 != 0);
          bVar7 = uVar16 == uVar23;
          uVar16 = uVar16 & 7;
          if (bVar7) {
            return;
          }
        }
LAB_00dc039c:
        do {
          uVar16 = uVar16 - 1;
          *(undefined *)__dest = *(undefined *)__src;
          __dest = (undefined4 *)((long)__dest + 1);
          __src = (undefined4 *)((long)__src + 1);
        } while (uVar16 != 0);
        return;
      }
      uVar26 = 0;
      if (uVar13 != 0) {
        uVar26 = 8 / uVar13;
      }
      lVar8 = 1;
      if (uVar13 != 2) {
        lVar8 = 2;
      }
      lVar14 = 0;
      if (uVar13 != 1) {
        lVar14 = lVar8;
      }
      if ((*(uint *)(param_1 + 0x16c) >> 0x10 & 1) == 0) {
        if (param_3 == 0) {
          puVar10 = (uint *)(&UNK_00549d34 + lVar14 * 0x18 + (ulong)bVar3 * 4);
        }
        else {
          puVar10 = (uint *)(&UNK_00549da0 + lVar14 * 0xc + ((ulong)bVar3 & 0xfe) * 2);
        }
      }
      else if (param_3 == 0) {
        puVar10 = (uint *)(&UNK_00549cec + (ulong)uVar9 * 4 + lVar14 * 0x18);
      }
      else {
        puVar10 = (uint *)(&UNK_00549d7c + ((ulong)bVar3 & 0xfe) * 2 + lVar14 * 0xc);
      }
      uVar9 = *puVar10;
      do {
        if ((uVar9 & 0xff) != 0) {
          if ((uVar9 & 0xff) == 0xff) {
            bVar12 = *pbVar20;
          }
          else {
            bVar12 = (byte)uVar9 & *pbVar20 | *param_2 & ((byte)uVar9 ^ 0xff);
          }
          *param_2 = bVar12;
        }
        uVar9 = uVar9 >> 8 | uVar9 << 0x18;
        bVar7 = uVar26 <= uVar23;
        uVar23 = uVar23 - uVar26;
        param_2 = param_2 + 1;
        pbVar20 = pbVar20 + 1;
      } while (bVar7 && uVar23 != 0);
      goto LAB_00dbfe7c;
    }
  }
  __n = uVar27 * uVar23;
  if (bVar12 < 8) {
    __n = uVar16 + 7 >> 3;
  }
  memcpy(param_2,pbVar20,__n);
LAB_00dbfe7c:
  if (pbVar21 != (byte *)0x0) {
    *pbVar21 = *pbVar21 & (bVar24 ^ 0xff) | bVar24 & bVar22;
  }
  return;
}


