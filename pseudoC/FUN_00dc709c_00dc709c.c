// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc709c
// Entry Point: 00dc709c
// Size: 872 bytes
// Signature: undefined FUN_00dc709c(void)


undefined8 FUN_00dc709c(long *param_1)

{
  undefined *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  undefined uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  undefined *__s;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ushort *puVar20;
  
  puVar6 = (undefined8 *)*param_1;
  lVar12 = param_1[5];
  lVar14 = param_1[7];
  iVar15 = *(int *)(puVar6 + 2);
  uVar10 = *(uint *)((long)puVar6 + 0x14);
  uVar17 = (ulong)uVar10 & 2;
  uVar19 = *(undefined8 *)*puVar6;
  uVar11 = uVar17 | 1;
  if ((uVar10 & 1) == 0) {
    if (iVar15 != 0) {
      uVar10 = *(int *)((long)puVar6 + 0xc) * (int)uVar11;
      if (uVar10 == 0) {
        do {
          png_write_row(uVar19,lVar14);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      else {
        do {
          lVar7 = 0;
          do {
            uVar11 = (ulong)*(ushort *)(lVar12 + lVar7 * 2) * 0xff;
            uVar17 = uVar11 >> 0xf;
            *(char *)(lVar14 + lVar7) =
                 (char)((uint)(ushort)(&png_sRGB_base)[uVar17] +
                        (((uint)uVar11 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar17] >> 0xc) >>
                       8);
            lVar7 = lVar7 + 1;
          } while ((ulong)(lVar14 + lVar7) < lVar14 + (ulong)uVar10);
          png_write_row(uVar19,lVar14);
          iVar15 = iVar15 + -1;
          lVar12 = lVar12 + ((ulong)param_1[6] >> 1 & 0x7fff) * 2;
        } while (iVar15 != 0);
      }
    }
  }
  else {
    if ((uVar10 & 0x20) != 0) {
      uVar11 = 0xffffffffffffffff;
    }
    if (iVar15 != 0) {
      iVar16 = (int)uVar17;
      uVar4 = *(int *)((long)puVar6 + 0xc) * (iVar16 + 2);
      if (uVar4 == 0) {
        png_write_row(uVar19,lVar14);
        while (iVar15 = iVar15 + -1, iVar15 != 0) {
          png_write_row(uVar19,param_1[7]);
        }
      }
      else {
        uVar17 = (ulong)((uVar10 & 0x20) >> 5);
        uVar18 = (ulong)uVar10 & 2;
        puVar1 = (undefined *)(lVar14 + uVar17);
        puVar20 = (ushort *)(lVar12 + uVar17 * 2);
        __s = puVar1;
        puVar13 = puVar20;
        do {
          do {
            uVar2 = puVar20[uVar11];
            uVar10 = (uint)uVar2 * 0xff + 0x807f;
            uVar3 = uVar10 >> 0x10;
            uVar8 = 0;
            __s[uVar11] = (char)(uVar10 >> 0x10);
            uVar10 = (uint)uVar2;
            uVar5 = (uint)uVar2;
            if ((uVar3 != 0) && (uVar3 != 0xff)) {
              uVar8 = 0;
              if (uVar5 != 0) {
                uVar8 = ((uVar2 >> 1) + 0x7f7f8080) / uVar10;
              }
            }
            if (uVar10 < 0x80) {
              memset(__s,0xff,uVar18 | 1);
              puVar20 = puVar20 + uVar18;
              __s = __s + uVar18;
            }
            else {
              uVar2 = *puVar20;
              uVar9 = (undefined)uVar2;
              if (uVar2 < uVar5) {
                if (uVar2 != 0) {
                  uVar3 = uVar8 * uVar2 + 0x40 >> 7;
                  if (0xff7e < uVar10) {
                    uVar3 = (uint)uVar2 * 0xff;
                  }
                  uVar9 = (undefined)
                          ((uint)(ushort)(&png_sRGB_base)[uVar3 >> 0xf] +
                           ((uVar3 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar3 >> 0xf] >> 0xc)
                          >> 8);
                }
              }
              else {
                uVar9 = 0xff;
              }
              *__s = uVar9;
              if (iVar16 != 0) {
                uVar2 = puVar20[1];
                uVar9 = (undefined)uVar2;
                if (uVar2 < uVar10) {
                  if (uVar2 != 0) {
                    uVar10 = uVar8 * uVar2 + 0x40 >> 7;
                    if (0xff7e < uVar5) {
                      uVar10 = (uint)uVar2 * 0xff;
                    }
                    uVar9 = (undefined)
                            ((uint)(ushort)(&png_sRGB_base)[uVar10 >> 0xf] +
                             ((uVar10 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar10 >> 0xf] >>
                             0xc) >> 8);
                  }
                  __s[1] = uVar9;
                  uVar10 = (uint)puVar20[2];
                  if (puVar20[2] < uVar5) goto LAB_00dc7338;
LAB_00dc73a0:
                  uVar9 = 0xff;
                }
                else {
                  __s[1] = 0xff;
                  uVar10 = (uint)puVar20[2];
                  if (uVar5 <= uVar10) goto LAB_00dc73a0;
LAB_00dc7338:
                  if (uVar10 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar3 = uVar8 * uVar10 + 0x40 >> 7;
                    if (0xff7e < uVar5) {
                      uVar3 = uVar10 * 0xff;
                    }
                    uVar9 = (undefined)
                            ((uint)(ushort)(&png_sRGB_base)[uVar3 >> 0xf] +
                             ((uVar3 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar3 >> 0xf] >> 0xc)
                            >> 8);
                  }
                }
                puVar20 = puVar20 + 2;
                __s = __s + 2;
                *__s = uVar9;
              }
            }
            puVar20 = puVar20 + 2;
            __s = __s + 2;
          } while (__s < puVar1 + uVar4);
          png_write_row(uVar19,param_1[7]);
          iVar15 = iVar15 + -1;
          puVar20 = puVar13 + ((ulong)param_1[6] >> 1 & 0x7fff);
          __s = puVar1;
          puVar13 = puVar20;
        } while (iVar15 != 0);
      }
    }
  }
  return 1;
}


