// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db61ac
// Entry Point: 00db61ac
// Size: 2028 bytes
// Signature: undefined FUN_00db61ac(void)


undefined8 FUN_00db61ac(long **param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  char cVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  byte bVar21;
  byte bVar22;
  ulong uVar23;
  ushort uVar24;
  uint uVar25;
  long **pplVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint local_a0;
  uint local_9c;
  
  pplVar26 = (long **)*param_1;
  lVar12 = **pplVar26;
  if ((*(uint *)(lVar12 + 0x16c) & 0x600000) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar12,"lost rgb to gray");
  }
  if ((*(uint *)(lVar12 + 0x16c) >> 7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar12,"unexpected compose");
  }
  lVar27 = (*pplVar26)[1];
  uVar2 = *(uint *)(pplVar26 + 2);
  uVar3 = *(uint *)((long)pplVar26 + 0xc);
  cVar8 = png_get_channels(lVar12,lVar27);
  if (cVar8 != '\x02') {
                    /* WARNING: Subroutine does not return */
    png_error(lVar12,"lost/gained channels");
  }
  uVar28 = *(uint *)((long)pplVar26 + 0x14);
  if ((uVar28 & 5) == 1) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar12,"unexpected 8-bit transformation");
  }
  cVar8 = *(char *)(lVar12 + 0x29c);
  if (cVar8 == '\0') {
    local_a0 = 1;
    cVar4 = *(char *)(lVar27 + 0x24);
  }
  else {
    if (cVar8 != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(lVar12,"unknown interlace type");
    }
    local_a0 = 7;
    cVar4 = *(char *)(lVar27 + 0x24);
  }
  if (cVar4 == '\x10') {
    plVar1 = param_1[6];
    plVar9 = param_1[7];
    uVar30 = (uVar28 & 1) + 1;
    if ((long)plVar9 < 0) {
      plVar9 = (long *)((long)plVar9 + 1);
    }
    bVar7 = (uVar28 & 0x21) == 0x21;
    uVar31 = uVar30 * uVar3;
    lVar27 = (long)plVar9 >> 1;
    uVar19 = (ulong)bVar7;
    if ((uVar28 & 1) == 0) {
      local_9c = 0;
      if (cVar8 != '\x01') goto LAB_00db6638;
      do {
        uVar10 = 7 - local_9c >> 1;
        uVar28 = uVar10;
        if (local_9c == 0 || local_9c - 1 == 0) {
          uVar28 = 3;
        }
        uVar11 = (local_9c & 1) << (ulong)(3 - (local_9c + 1 >> 1) & 0x1f) & 7;
        if ((uVar3 + ~(-1 << (ulong)(uVar28 & 0x1f))) - uVar11 >> (ulong)(uVar28 & 0x1f) != 0) {
          uVar11 = uVar11 * uVar30;
          uVar29 = 8 >> (ulong)((int)(local_9c - 1) >> 1 & 0x1f);
          uVar28 = (local_9c & 1 ^ 1) << (ulong)(3 - (local_9c >> 1) & 0x1f) & 7;
          if (local_9c < 3) {
            uVar29 = 8;
          }
          uVar10 = uVar30 << (ulong)(uVar10 & 0x1f);
          if (uVar28 < uVar2) goto LAB_00db6654;
        }
        while( true ) {
          local_9c = local_9c + 1;
          if (local_9c == local_a0) {
            return 1;
          }
          if (*(char *)(lVar12 + 0x29c) == '\x01') break;
LAB_00db6638:
          uVar11 = 0;
          uVar28 = 0;
          uVar29 = 1;
          uVar10 = uVar30;
          if (uVar2 != 0) {
LAB_00db6654:
            plVar9 = param_1[5];
            do {
              png_read_row(lVar12,plVar9,0);
              plVar9 = param_1[5];
              if (uVar11 < uVar31) {
                lVar15 = lVar27 * (ulong)uVar28;
                plVar20 = plVar1;
                plVar13 = plVar9;
                do {
                  uVar6 = *(ushort *)((long)plVar13 + 2);
                  uVar24 = *(ushort *)plVar13;
                  if (uVar6 != 0xffff) {
                    if (uVar6 == 0) {
                      uVar24 = 0;
                    }
                    else {
                      uVar24 = (ushort)(((uint)uVar6 * (uint)uVar24 + 0x7fff) / 0xffff);
                    }
                  }
                  *(ushort *)
                   ((long)plVar20 + uVar19 * 2 + (ulong)uVar11 * 2 + lVar27 * 2 * (ulong)uVar28) =
                       uVar24;
                  plVar20 = (long *)((long)plVar20 + (ulong)uVar10 * 2);
                  plVar13 = (long *)((long)plVar13 + 4);
                } while ((long)plVar20 + ((ulong)uVar11 + lVar15) * 2 <
                         (long)plVar1 + (ulong)uVar31 * 2 + lVar15 * 2);
              }
              uVar28 = uVar28 + uVar29;
            } while (uVar28 < uVar2);
          }
        }
      } while( true );
    }
    local_9c = 0;
    if (cVar8 != '\x01') goto LAB_00db67fc;
    do {
      uVar10 = 7 - local_9c >> 1;
      uVar28 = uVar10;
      if (local_9c == 0 || local_9c - 1 == 0) {
        uVar28 = 3;
      }
      uVar11 = (local_9c & 1) << (ulong)(3 - (local_9c + 1 >> 1) & 0x1f) & 7;
      if ((uVar3 + ~(-1 << (ulong)(uVar28 & 0x1f))) - uVar11 >> (ulong)(uVar28 & 0x1f) != 0) {
        uVar11 = uVar11 * uVar30;
        uVar29 = 8 >> (ulong)((int)(local_9c - 1) >> 1 & 0x1f);
        uVar28 = (local_9c & 1 ^ 1) << (ulong)(3 - (local_9c >> 1) & 0x1f) & 7;
        if (local_9c < 3) {
          uVar29 = 8;
        }
        uVar10 = uVar30 << (ulong)(uVar10 & 0x1f);
        if (uVar28 < uVar2) goto LAB_00db6818;
      }
      while( true ) {
        local_9c = local_9c + 1;
        if (local_9c == local_a0) {
          return 1;
        }
        if (*(char *)(lVar12 + 0x29c) == '\x01') break;
LAB_00db67fc:
        uVar11 = 0;
        uVar28 = 0;
        uVar29 = 1;
        uVar10 = uVar30;
        if (uVar2 != 0) {
LAB_00db6818:
          lVar15 = (ulong)uVar11 * 2;
          plVar9 = param_1[5];
          do {
            png_read_row(lVar12,plVar9,0);
            plVar9 = param_1[5];
            if (uVar11 < uVar31) {
              lVar16 = lVar27 * 2 * (ulong)uVar28;
              lVar18 = lVar27 * (ulong)uVar28;
              plVar20 = plVar1;
              plVar13 = plVar9;
              do {
                uVar6 = *(ushort *)((long)plVar13 + 2);
                uVar25 = (uint)uVar6;
                if (uVar25 == 0) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = *(ushort *)plVar13;
                  if (uVar25 != 0xffff) {
                    uVar24 = (ushort)((uVar25 * uVar24 + 0x7fff) / 0xffff);
                  }
                }
                *(ushort *)((long)plVar20 + uVar19 * 2 + lVar15 + lVar16) = uVar24;
                plVar13 = (long *)((long)plVar13 + 4);
                *(ushort *)((long)plVar20 + (ulong)!bVar7 * 2 + lVar15 + lVar16) = uVar6;
                plVar20 = (long *)((long)plVar20 + (ulong)uVar10 * 2);
              } while ((long)plVar20 + ((ulong)uVar11 + lVar18) * 2 <
                       (long)plVar1 + (ulong)uVar31 * 2 + lVar18 * 2);
            }
            uVar28 = uVar28 + uVar29;
          } while (uVar28 < uVar2);
        }
      }
    } while( true );
  }
  if (cVar4 != '\b') {
                    /* WARNING: Subroutine does not return */
    png_error(lVar12,"unexpected bit depth");
  }
  plVar9 = param_1[6];
  plVar1 = param_1[7];
  local_9c = 0;
  if (cVar8 != '\x01') goto LAB_00db63f8;
LAB_00db6298:
  uVar30 = 7 - local_9c >> 1;
  uVar28 = uVar30;
  if (local_9c == 0 || local_9c - 1 == 0) {
    uVar28 = 3;
  }
  uVar31 = (local_9c & 1) << (ulong)(3 - (local_9c + 1 >> 1) & 0x1f) & 7;
  if ((uVar3 + ~(-1 << (ulong)(uVar28 & 0x1f))) - uVar31 >> (ulong)(uVar28 & 0x1f) == 0)
  goto LAB_00db64f4;
  uVar10 = 1 << (ulong)(uVar30 & 0x1f);
  uVar30 = 8 >> (ulong)((int)(local_9c - 1) >> 1 & 0x1f);
  uVar28 = (local_9c & 1 ^ 1) << (ulong)(3 - (local_9c >> 1) & 0x1f) & 7;
  if (local_9c < 3) {
    uVar30 = 8;
  }
  plVar13 = param_1[4];
  if (plVar13 != (long *)0x0) goto LAB_00db6414;
  do {
    if (uVar28 < uVar2) {
      do {
        plVar13 = param_1[5];
        png_read_row(lVar12,plVar13,0);
        if (uVar31 < uVar3) {
          lVar27 = (long)plVar1 * (ulong)uVar28;
          pbVar17 = (byte *)((long)plVar13 + 1);
          pbVar14 = (byte *)((long)plVar9 + (ulong)uVar31 + lVar27);
          do {
            bVar5 = *pbVar17;
            if (bVar5 != 0) {
              bVar21 = pbVar17[-1];
              if (bVar5 != 0xff) {
                uVar19 = (ulong)(ushort)(&png_sRGB_table)[bVar21] * (ulong)bVar5 +
                         ((ulong)bVar5 ^ 0xff) * (ulong)(ushort)(&png_sRGB_table)[*pbVar14];
                uVar23 = uVar19 >> 0xf;
                bVar21 = (byte)((uint)(ushort)(&png_sRGB_base)[uVar23] +
                                (((uint)uVar19 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar23] >>
                                0xc) >> 8);
              }
              *pbVar14 = bVar21;
            }
            pbVar14 = pbVar14 + uVar10;
            pbVar17 = pbVar17 + 2;
          } while (pbVar14 < (byte *)((long)plVar9 + (ulong)uVar3 + lVar27));
        }
        uVar28 = uVar28 + uVar30;
      } while (uVar28 < uVar2);
    }
LAB_00db64f4:
    while( true ) {
      local_9c = local_9c + 1;
      if (local_9c == local_a0) {
        return 1;
      }
      if (*(char *)(lVar12 + 0x29c) == '\x01') goto LAB_00db6298;
LAB_00db63f8:
      uVar28 = 0;
      uVar31 = 0;
      uVar30 = 1;
      uVar10 = 1;
      plVar13 = param_1[4];
      if (plVar13 == (long *)0x0) break;
LAB_00db6414:
      if (uVar28 < uVar2) {
        bVar5 = *(byte *)((long)plVar13 + 1);
        uVar6 = (&png_sRGB_table)[bVar5];
        do {
          plVar13 = param_1[5];
          png_read_row(lVar12,plVar13,0);
          if (uVar31 < uVar3) {
            lVar27 = (long)plVar1 * (ulong)uVar28;
            pbVar14 = (byte *)((long)plVar9 + (ulong)uVar31 + lVar27);
            pbVar17 = (byte *)((long)plVar13 + 1);
            do {
              bVar21 = *pbVar17;
              bVar22 = bVar5;
              if (bVar21 != 0) {
                bVar22 = pbVar17[-1];
                if (bVar21 != 0xff) {
                  uVar19 = ((ulong)bVar21 ^ 0xff) * (ulong)uVar6 +
                           (ulong)(ushort)(&png_sRGB_table)[bVar22] * (ulong)bVar21;
                  uVar23 = uVar19 >> 0xf;
                  bVar22 = (byte)((uint)(ushort)(&png_sRGB_base)[uVar23] +
                                  (((uint)uVar19 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar23]
                                  >> 0xc) >> 8);
                }
              }
              *pbVar14 = bVar22;
              pbVar14 = pbVar14 + uVar10;
              pbVar17 = pbVar17 + 2;
            } while (pbVar14 < (byte *)((long)plVar9 + (ulong)uVar3 + lVar27));
          }
          uVar28 = uVar28 + uVar30;
        } while (uVar28 < uVar2);
      }
    }
  } while( true );
}


