// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db5e9c
// Entry Point: 00db5e9c
// Size: 784 bytes
// Signature: undefined FUN_00db5e9c(void)


undefined8 FUN_00db5e9c(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long **pplVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  uint local_84;
  uint local_78;
  
  pplVar10 = (long **)*param_1;
  lVar8 = **pplVar10;
  cVar3 = *(char *)(lVar8 + 0x29c);
  if (cVar3 == '\0') {
    uVar14 = 1;
  }
  else {
    if (cVar3 != '\x01') {
                    /* WARNING: Subroutine does not return */
      png_error(lVar8,"unknown interlace type");
    }
    uVar14 = 7;
  }
  uVar1 = *(uint *)(pplVar10 + 2);
  iVar2 = *(int *)((long)pplVar10 + 0xc);
  uVar24 = (ulong)*(uint *)((long)pplVar10 + 0x14) & 2;
  iVar23 = (int)uVar24;
  lVar11 = param_1[7];
  iVar9 = (int)(uVar24 | 1);
  uVar6 = iVar9 * iVar2;
  local_84 = 0;
  if (cVar3 != '\x01') goto LAB_00db5fdc;
  do {
    uVar5 = 7 - local_84 >> 1;
    uVar20 = uVar5;
    if (local_84 == 0 || local_84 - 1 == 0) {
      uVar20 = 3;
    }
    uVar7 = (local_84 & 1) << (ulong)(3 - (local_84 + 1 >> 1) & 0x1f) & 7;
    if ((iVar2 + ~(-1 << (ulong)(uVar20 & 0x1f))) - uVar7 >> (ulong)(uVar20 & 0x1f) != 0) {
      uVar7 = uVar7 * iVar9;
      local_78 = 8 >> (ulong)((int)(local_84 - 1) >> 1 & 0x1f);
      uVar20 = (local_84 & 1 ^ 1) << (ulong)(3 - (local_84 >> 1) & 0x1f) & 7;
      if (local_84 < 3) {
        local_78 = 8;
      }
      uVar21 = (ulong)(uint)(iVar9 << (ulong)(uVar5 & 0x1f));
      if (uVar20 < uVar1) goto LAB_00db5ffc;
    }
    while( true ) {
      local_84 = local_84 + 1;
      if (local_84 == uVar14) {
        return 1;
      }
      if (*(char *)(lVar8 + 0x29c) == '\x01') break;
LAB_00db5fdc:
      uVar7 = 0;
      uVar20 = 0;
      local_78 = 1;
      uVar21 = uVar24 | 1;
      if (uVar1 != 0) {
LAB_00db5ffc:
        do {
          lVar22 = param_1[5];
          png_read_row(lVar8,lVar22,0);
          if (uVar7 < uVar6) {
            lVar12 = param_1[6] + lVar11 * (ulong)uVar20;
            pbVar15 = (byte *)(lVar22 + 1);
            pbVar13 = (byte *)(lVar12 + (ulong)uVar7);
            do {
              bVar16 = pbVar15[uVar24];
              if (bVar16 != 0) {
                if (bVar16 == 0xff) {
                  *pbVar13 = pbVar15[-1];
                  if (iVar23 != 0) {
                    pbVar13[1] = *pbVar15;
                    bVar16 = pbVar15[1];
LAB_00db605c:
                    pbVar13[2] = bVar16;
                  }
                }
                else {
                  uVar17 = (ulong)bVar16 ^ 0xff;
                  uVar18 = (ulong)pbVar15[-1] * 0xffff +
                           (ushort)(&png_sRGB_table)[*pbVar13] * uVar17;
                  uVar19 = uVar18 >> 0xf;
                  *pbVar13 = (byte)((uint)(ushort)(&png_sRGB_base)[uVar19] +
                                    (((uint)uVar18 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar19]
                                    >> 0xc) >> 8);
                  if (iVar23 != 0) {
                    uVar18 = (ulong)*pbVar15 * 0xffff +
                             (ushort)(&png_sRGB_table)[pbVar13[1]] * uVar17;
                    uVar19 = uVar18 >> 0xf;
                    uVar4 = (&png_sRGB_table)[pbVar13[2]];
                    pbVar13[1] = (byte)((uint)(ushort)(&png_sRGB_base)[uVar19] +
                                        (((uint)uVar18 & 0x7fff) *
                                         (uint)(byte)(&png_sRGB_delta)[uVar19] >> 0xc) >> 8);
                    uVar17 = (ulong)pbVar15[1] * 0xffff + uVar4 * uVar17;
                    uVar18 = uVar17 >> 0xf;
                    bVar16 = (byte)((uint)(ushort)(&png_sRGB_base)[uVar18] +
                                    (((uint)uVar17 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar18]
                                    >> 0xc) >> 8);
                    goto LAB_00db605c;
                  }
                }
              }
              pbVar13 = pbVar13 + uVar21;
              pbVar15 = pbVar15 + (iVar23 + 2);
            } while (pbVar13 < (byte *)(lVar12 + (ulong)uVar6));
          }
          uVar20 = uVar20 + local_78;
        } while (uVar20 < uVar1);
      }
    }
  } while( true );
}


