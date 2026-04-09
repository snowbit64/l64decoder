// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC3
// Entry Point: 00a8c54c
// Size: 2864 bytes
// Signature: undefined __cdecl decodeBC3(uchar * param_1, uint param_2, uint param_3, uchar * param_4, uint param_5)


/* DXTUtil::decodeBC3(unsigned char const*, unsigned int, unsigned int, unsigned char*, unsigned
   int) */

void DXTUtil::decodeBC3(uchar *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  uVar3 = param_2;
  if (3 < param_2) {
    uVar3 = 4;
  }
  uVar4 = (4 - uVar3) * 3;
  if (3 < param_2) {
    uVar4 = 0;
  }
  uVar16 = (ulong)uVar4;
  uVar4 = param_3;
  if (3 < param_3) {
    uVar4 = 4;
  }
  if (param_3 != 0) {
    uVar5 = uVar3;
    if ((int)uVar3 < 2) {
      uVar5 = 1;
    }
    uVar9 = param_5 * param_2;
    uVar23 = 0;
    uVar14 = 0;
    uVar19 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar9 << 1;
    uVar6 = uVar4;
    if ((int)uVar4 < 2) {
      uVar6 = 1;
    }
    do {
      if (param_2 != 0) {
        uVar25 = 0;
        uVar24 = uVar23;
        do {
          uVar20 = *(ulong *)param_1;
          bVar21 = *param_1;
          uVar12 = (uint)bVar21;
          bVar7 = *(byte *)((long)param_1 + 1);
          uVar15 = (uint)bVar7;
          uVar17 = (uint)uVar20;
          uVar11 = uVar17 >> 0x10 & 7;
          uVar18 = (uint)bVar7;
          uVar13 = (uint)bVar21;
          bVar22 = bVar21;
          if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
            if (uVar15 < bVar21) {
              uVar8 = iVar10 * uVar18 + (8 - uVar11) * uVar13;
              uVar11 = (uVar8 & 0xffff) * 0x2493 >> 0x10;
              bVar22 = (byte)(uVar11 + ((uVar8 - uVar11 & 0xfffe) >> 1) >> 2);
            }
            else if (uVar11 < 6) {
              bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * (uint)bVar21 & 0xffff) / 5);
            }
            else {
              bVar22 = -(uVar11 != 6);
            }
          }
          pbVar1 = param_4 + uVar24 + 3;
          *pbVar1 = bVar22;
          if ((int)uVar3 < 2) {
            uVar20 = uVar20 >> 0x13;
          }
          else {
            uVar11 = uVar17 >> 0x13 & 7;
            bVar22 = bVar21;
            if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
              if (uVar15 < uVar12) {
                uVar18 = iVar10 * uVar18 + (8 - uVar11) * uVar13;
                uVar11 = (uVar18 & 0xffff) * 0x2493 >> 0x10;
                bVar22 = (byte)(uVar11 + ((uVar18 - uVar11 & 0xfffe) >> 1) >> 2);
              }
              else if (uVar11 < 6) {
                bVar22 = (byte)((iVar10 * uVar18 + (6 - uVar11) * uVar13 & 0xffff) / 5);
              }
              else {
                bVar22 = -(uVar11 != 6);
              }
            }
            pbVar2 = pbVar1 + (int)param_5;
            *pbVar2 = bVar22;
            if (uVar5 == 2) {
              uVar20 = uVar20 >> 0x16;
            }
            else {
              uVar11 = uVar17 >> 0x16 & 7;
              bVar22 = bVar21;
              if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                if (uVar15 < uVar12) {
                  uVar18 = iVar10 * uVar15 + (8 - uVar11) * uVar13;
                  uVar11 = (uVar18 & 0xffff) * 0x2493 >> 0x10;
                  bVar22 = (byte)(uVar11 + ((uVar18 - uVar11 & 0xfffe) >> 1) >> 2);
                }
                else if (uVar11 < 6) {
                  bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                }
                else {
                  bVar22 = -(uVar11 != 6);
                }
              }
              pbVar2[(int)param_5] = bVar22;
              if (uVar5 == 3) {
                uVar20 = uVar20 >> 0x19;
              }
              else {
                uVar11 = uVar17 >> 0x19 & 7;
                bVar22 = bVar21;
                if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                  if (uVar15 < uVar12) {
                    uVar18 = iVar10 * uVar15 + (8 - uVar11) * uVar13;
                    uVar11 = (uVar18 & 0xffff) * 0x2493 >> 0x10;
                    bVar22 = (byte)(uVar11 + ((uVar18 - uVar11 & 0xfffe) >> 1) >> 2);
                  }
                  else if (uVar11 < 6) {
                    bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar13 & 0xffff) / 5);
                  }
                  else {
                    bVar22 = -(uVar11 != 6);
                  }
                }
                uVar20 = uVar20 >> 0x1c;
                (pbVar2 + (int)param_5)[(int)param_5] = bVar22;
              }
            }
          }
          if (1 < (int)uVar4) {
            uVar20 = uVar20 >> (uVar16 & 0x3f);
            uVar18 = (uint)uVar20;
            uVar11 = uVar18 & 7;
            bVar22 = bVar21;
            if (((uVar20 & 7) != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
              if (uVar15 < uVar12) {
                uVar17 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                uVar11 = (uVar17 & 0xffff) * 0x2493 >> 0x10;
                bVar22 = (byte)(uVar11 + ((uVar17 - uVar11 & 0xfffe) >> 1) >> 2);
              }
              else if (uVar11 < 6) {
                bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
              }
              else {
                bVar22 = -(uVar11 != 6);
              }
            }
            pbVar2 = pbVar1 + (int)uVar9;
            *pbVar2 = bVar22;
            if ((int)uVar3 < 2) {
              uVar20 = uVar20 >> 3;
            }
            else {
              uVar11 = uVar18 >> 3 & 7;
              bVar22 = bVar21;
              if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                if (uVar15 < uVar12) {
                  uVar17 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                  uVar11 = (uVar17 & 0xffff) * 0x2493 >> 0x10;
                  bVar22 = (byte)(uVar11 + ((uVar17 - uVar11 & 0xfffe) >> 1) >> 2);
                }
                else if (uVar11 < 6) {
                  bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                }
                else {
                  bVar22 = -(uVar11 != 6);
                }
              }
              pbVar2 = pbVar2 + (int)param_5;
              *pbVar2 = bVar22;
              if (uVar5 == 2) {
                uVar20 = uVar20 >> 6;
              }
              else {
                uVar11 = uVar18 >> 6 & 7;
                bVar22 = bVar21;
                if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                  if (uVar15 < uVar12) {
                    uVar17 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                    uVar11 = (uVar17 & 0xffff) * 0x2493 >> 0x10;
                    bVar22 = (byte)(uVar11 + ((uVar17 - uVar11 & 0xfffe) >> 1) >> 2);
                  }
                  else if (uVar11 < 6) {
                    bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                  }
                  else {
                    bVar22 = -(uVar11 != 6);
                  }
                }
                pbVar2[(int)param_5] = bVar22;
                if (uVar5 == 3) {
                  uVar20 = uVar20 >> 9;
                }
                else {
                  uVar11 = uVar18 >> 9 & 7;
                  bVar22 = bVar21;
                  if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                    if (uVar15 < uVar12) {
                      uVar18 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                      uVar11 = (uVar18 & 0xffff) * 0x2493 >> 0x10;
                      bVar22 = (byte)(uVar11 + ((uVar18 - uVar11 & 0xfffe) >> 1) >> 2);
                    }
                    else if (uVar11 < 6) {
                      bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                    }
                    else {
                      bVar22 = -(uVar11 != 6);
                    }
                  }
                  uVar20 = uVar20 >> 0xc;
                  (pbVar2 + (int)param_5)[(int)param_5] = bVar22;
                }
              }
            }
            if (uVar6 != 2) {
              uVar20 = uVar20 >> (uVar16 & 0x3f);
              uVar18 = (uint)uVar20;
              uVar11 = uVar18 & 7;
              bVar22 = bVar21;
              if (((uVar20 & 7) != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                if (uVar15 < uVar12) {
                  uVar17 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                  uVar11 = (uVar17 & 0xffff) * 0x2493 >> 0x10;
                  bVar22 = (byte)(uVar11 + ((uVar17 - uVar11 & 0xfffe) >> 1) >> 2);
                }
                else if (uVar11 < 6) {
                  bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                }
                else {
                  bVar22 = -(uVar11 != 6);
                }
              }
              pbVar2 = pbVar1 + uVar19;
              *pbVar2 = bVar22;
              if ((int)uVar3 < 2) {
                uVar20 = uVar20 >> 3;
              }
              else {
                uVar11 = uVar18 >> 3 & 7;
                bVar22 = bVar21;
                if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                  if (uVar15 < uVar12) {
                    uVar17 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                    uVar11 = (uVar17 & 0xffff) * 0x2493 >> 0x10;
                    bVar22 = (byte)(uVar11 + ((uVar17 - uVar11 & 0xfffe) >> 1) >> 2);
                  }
                  else if (uVar11 < 6) {
                    bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                  }
                  else {
                    bVar22 = -(uVar11 != 6);
                  }
                }
                pbVar2 = pbVar2 + (int)param_5;
                *pbVar2 = bVar22;
                if (uVar5 == 2) {
                  uVar20 = uVar20 >> 6;
                }
                else {
                  uVar11 = uVar18 >> 6 & 7;
                  bVar22 = bVar21;
                  if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                    if (uVar15 < uVar12) {
                      uVar17 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                      uVar11 = (uVar17 & 0xffff) * 0x2493 >> 0x10;
                      bVar22 = (byte)(uVar11 + ((uVar17 - uVar11 & 0xfffe) >> 1) >> 2);
                    }
                    else if (uVar11 < 6) {
                      bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                    }
                    else {
                      bVar22 = -(uVar11 != 6);
                    }
                  }
                  pbVar2[(int)param_5] = bVar22;
                  if (uVar5 == 3) {
                    uVar20 = uVar20 >> 9;
                  }
                  else {
                    uVar11 = uVar18 >> 9 & 7;
                    bVar22 = bVar21;
                    if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                      if (uVar15 < uVar12) {
                        uVar18 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                        uVar11 = (uVar18 & 0xffff) * 0x2493 >> 0x10;
                        bVar22 = (byte)(uVar11 + ((uVar18 - uVar11 & 0xfffe) >> 1) >> 2);
                      }
                      else if (uVar11 < 6) {
                        bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                      }
                      else {
                        bVar22 = -(uVar11 != 6);
                      }
                    }
                    uVar20 = uVar20 >> 0xc;
                    (pbVar2 + (int)param_5)[(int)param_5] = bVar22;
                  }
                }
              }
              if (uVar6 != 3) {
                uVar20 = uVar20 >> (uVar16 & 0x3f);
                uVar18 = (uint)uVar20;
                uVar11 = uVar18 & 7;
                bVar22 = bVar21;
                if (((uVar20 & 7) != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                  if (uVar15 < uVar13) {
                    uVar13 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                    uVar11 = (uVar13 & 0xffff) * 0x2493 >> 0x10;
                    bVar22 = (byte)(uVar11 + ((uVar13 - uVar11 & 0xfffe) >> 1) >> 2);
                  }
                  else if (uVar11 < 6) {
                    bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar13 & 0xffff) / 5);
                  }
                  else {
                    bVar22 = -(uVar11 != 6);
                  }
                }
                pbVar1 = pbVar1 + uVar19 + (long)(int)uVar9;
                *pbVar1 = bVar22;
                if (1 < (int)uVar3) {
                  uVar11 = uVar18 >> 3 & 7;
                  bVar22 = bVar21;
                  if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                    if (uVar15 < uVar12) {
                      uVar13 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                      uVar11 = (uVar13 & 0xffff) * 0x2493 >> 0x10;
                      bVar22 = (byte)(uVar11 + ((uVar13 - uVar11 & 0xfffe) >> 1) >> 2);
                    }
                    else if (uVar11 < 6) {
                      bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                    }
                    else {
                      bVar22 = -(uVar11 != 6);
                    }
                  }
                  pbVar1 = pbVar1 + (int)param_5;
                  *pbVar1 = bVar22;
                  if (uVar5 != 2) {
                    uVar11 = uVar18 >> 6 & 7;
                    bVar22 = bVar21;
                    if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar22 = bVar7, iVar10 != 0)) {
                      if (uVar15 < uVar12) {
                        uVar13 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                        uVar11 = (uVar13 & 0xffff) * 0x2493 >> 0x10;
                        bVar22 = (byte)(uVar11 + ((uVar13 - uVar11 & 0xfffe) >> 1) >> 2);
                      }
                      else if (uVar11 < 6) {
                        bVar22 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                      }
                      else {
                        bVar22 = -(uVar11 != 6);
                      }
                    }
                    pbVar1[(int)param_5] = bVar22;
                    if (uVar5 != 3) {
                      uVar11 = uVar18 >> 9 & 7;
                      if ((uVar11 != 0) && (iVar10 = uVar11 - 1, bVar21 = bVar7, iVar10 != 0)) {
                        if (uVar15 < uVar12) {
                          uVar12 = iVar10 * uVar15 + (8 - uVar11) * uVar12;
                          uVar11 = (uVar12 & 0xffff) * 0x2493 >> 0x10;
                          bVar21 = (byte)(uVar11 + ((uVar12 - uVar11 & 0xfffe) >> 1) >> 2);
                        }
                        else if (uVar11 < 6) {
                          bVar21 = (byte)((iVar10 * uVar15 + (6 - uVar11) * uVar12 & 0xffff) / 5);
                        }
                        else {
                          bVar21 = -(uVar11 != 6);
                        }
                      }
                      (pbVar1 + (int)param_5)[(int)param_5] = bVar21;
                    }
                  }
                }
              }
            }
          }
          decodeDXTColor((uchar *)((long)param_1 + 8),uVar3,uVar4,param_5,uVar9,param_4 + uVar24);
          param_1 = (uchar *)((long)param_1 + 0x10);
          uVar25 = uVar25 + 4;
          uVar24 = uVar24 + param_5 * 4;
        } while (uVar25 < param_2);
      }
      uVar14 = uVar14 + 4;
      uVar23 = uVar23 + uVar9 * 4;
    } while (uVar14 < param_3);
  }
  return;
}


