// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fixupQuotedString
// Entry Point: 00ee82e4
// Size: 1956 bytes
// Signature: undefined __cdecl fixupQuotedString(basic_string * param_1)


/* Luau::Lexer::fixupQuotedString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

undefined8 Luau::Lexer::fixupQuotedString(basic_string *param_1)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  byte bVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar2 = (ulong)(*(byte *)param_1 >> 1);
  if ((*(byte *)param_1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 2);
  }
  if ((uVar2 != 0) &&
     (lVar5 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
                        ((char)param_1,0x5c), lVar5 != -1)) {
    bVar3 = *(byte *)param_1;
    lVar5 = 0;
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 2);
    }
    if (uVar2 != 0) {
      uVar9 = 0;
      pcVar1 = (char *)((long)param_1 + 1);
      pcVar7 = pcVar1;
      if ((bVar3 & 1) != 0) {
        pcVar7 = *(char **)(param_1 + 4);
      }
      cVar10 = *pcVar7;
      if (cVar10 != '\\') goto LAB_00ee83dc;
      do {
        if (uVar9 + 1 == uVar2) {
          return 0;
        }
        bVar3 = pcVar7[uVar9 + 1];
        uVar11 = uVar9 + 2;
        uVar14 = (uint)bVar3;
        uVar12 = uVar11;
        if (bVar3 < 0x75) {
          if (uVar14 == 10) {
            pcVar7[lVar5] = '\n';
            lVar6 = lVar5 + 1;
          }
          else if (uVar14 == 0xd) {
            lVar6 = lVar5 + 1;
            pcVar7[lVar5] = '\n';
            if (uVar11 < uVar2) {
              pcVar7 = pcVar1;
              if ((*(byte *)param_1 & 1) != 0) {
                pcVar7 = *(char **)(param_1 + 4);
              }
              uVar12 = uVar9 + 3;
              if (pcVar7[uVar11] != '\n') {
                uVar12 = uVar11;
              }
            }
          }
          else {
            if (bVar3 == 0) {
              return 0;
            }
LAB_00ee8974:
            uVar13 = uVar14 - 0x30;
            if (uVar13 < 10) {
              uVar12 = uVar2;
              if (uVar11 != uVar2) {
                if ((byte)pcVar7[uVar11] - 0x30 < 10) {
                  uVar13 = ((byte)pcVar7[uVar11] - 0x30) + uVar13 * 10;
                  uVar11 = uVar9 + 3;
                  if ((uVar11 != uVar2) && ((byte)pcVar7[uVar11] - 0x30 < 10)) {
                    uVar13 = ((byte)pcVar7[uVar11] - 0x30) + uVar13 * 10;
                    uVar11 = uVar9 + 4;
                  }
                }
                uVar12 = uVar11;
                if (0xff < uVar13) {
                  return 0;
                }
              }
              pcVar7[lVar5] = (char)uVar13;
              lVar6 = lVar5 + 1;
            }
            else {
              bVar8 = 7;
              switch(uVar14) {
              case 0x61:
                break;
              case 0x62:
                bVar8 = 8;
                break;
              default:
                bVar8 = bVar3;
                break;
              case 0x66:
                bVar8 = 0xc;
                break;
              case 0x6e:
                bVar8 = 10;
                break;
              case 0x72:
                bVar8 = 0xd;
                break;
              case 0x74:
                bVar8 = 9;
                break;
              case 0x76:
                bVar8 = 0xb;
              }
              lVar6 = lVar5 + 1;
              pcVar7[lVar5] = bVar8;
            }
          }
        }
        else if (bVar3 == 0x75) {
          if (uVar2 < uVar9 + 5) {
            return 0;
          }
          if (pcVar7[uVar11] != '{') {
            return 0;
          }
          bVar3 = pcVar7[uVar9 + 3];
          if (bVar3 == 0x7d) {
            return 0;
          }
          if (uVar9 + 3 == uVar2) {
            return 0;
          }
          uVar14 = bVar3 - 0x30;
          if ((9 < uVar14) && (5 < (bVar3 | 0x20) - 0x61)) {
            return 0;
          }
          if (9 < uVar14) {
            uVar14 = (bVar3 | 0x20) - 0x57;
          }
          uVar11 = uVar9 + 4;
          if (uVar11 == uVar2) {
            return 0;
          }
          bVar3 = pcVar7[uVar11];
          if (bVar3 != 0x7d) {
            uVar13 = bVar3 - 0x30;
            if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
              return 0;
            }
            if (9 < uVar13) {
              uVar13 = (bVar3 | 0x20) - 0x57;
            }
            uVar11 = uVar9 + 5;
            if (uVar11 == uVar2) {
              return 0;
            }
            bVar3 = pcVar7[uVar11];
            uVar14 = uVar13 + uVar14 * 0x10;
            if (bVar3 != 0x7d) {
              uVar13 = bVar3 - 0x30;
              if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                return 0;
              }
              if (9 < uVar13) {
                uVar13 = (bVar3 | 0x20) - 0x57;
              }
              uVar11 = uVar9 + 6;
              if (uVar11 == uVar2) {
                return 0;
              }
              bVar3 = pcVar7[uVar11];
              uVar14 = uVar13 + uVar14 * 0x10;
              if (bVar3 != 0x7d) {
                uVar13 = bVar3 - 0x30;
                if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                  return 0;
                }
                if (9 < uVar13) {
                  uVar13 = (bVar3 | 0x20) - 0x57;
                }
                uVar11 = uVar9 + 7;
                if (uVar11 == uVar2) {
                  return 0;
                }
                bVar3 = pcVar7[uVar11];
                uVar14 = uVar13 + uVar14 * 0x10;
                if (bVar3 != 0x7d) {
                  uVar13 = bVar3 - 0x30;
                  if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                    return 0;
                  }
                  if (9 < uVar13) {
                    uVar13 = (bVar3 | 0x20) - 0x57;
                  }
                  uVar11 = uVar9 + 8;
                  if (uVar11 == uVar2) {
                    return 0;
                  }
                  bVar3 = pcVar7[uVar11];
                  uVar14 = uVar13 + uVar14 * 0x10;
                  if (bVar3 != 0x7d) {
                    uVar13 = bVar3 - 0x30;
                    if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                      return 0;
                    }
                    if (9 < uVar13) {
                      uVar13 = (bVar3 | 0x20) - 0x57;
                    }
                    uVar11 = uVar9 + 9;
                    if (uVar11 == uVar2) {
                      return 0;
                    }
                    bVar3 = pcVar7[uVar11];
                    uVar14 = uVar13 + uVar14 * 0x10;
                    if (bVar3 != 0x7d) {
                      uVar13 = bVar3 - 0x30;
                      if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                        return 0;
                      }
                      if (9 < uVar13) {
                        uVar13 = (bVar3 | 0x20) - 0x57;
                      }
                      uVar11 = uVar9 + 10;
                      if (uVar11 == uVar2) {
                        return 0;
                      }
                      bVar3 = pcVar7[uVar11];
                      uVar14 = uVar13 + uVar14 * 0x10;
                      if (bVar3 != 0x7d) {
                        uVar13 = bVar3 - 0x30;
                        if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                          return 0;
                        }
                        if (9 < uVar13) {
                          uVar13 = (bVar3 | 0x20) - 0x57;
                        }
                        uVar11 = uVar9 + 0xb;
                        if (uVar11 == uVar2) {
                          return 0;
                        }
                        bVar3 = pcVar7[uVar11];
                        uVar14 = uVar13 + uVar14 * 0x10;
                        if (bVar3 != 0x7d) {
                          uVar13 = bVar3 - 0x30;
                          if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                            return 0;
                          }
                          if (9 < uVar13) {
                            uVar13 = (bVar3 | 0x20) - 0x57;
                          }
                          uVar11 = uVar9 + 0xc;
                          if (uVar11 == uVar2) {
                            return 0;
                          }
                          bVar3 = pcVar7[uVar11];
                          uVar14 = uVar13 + uVar14 * 0x10;
                          if (bVar3 != 0x7d) {
                            uVar13 = bVar3 - 0x30;
                            if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                              return 0;
                            }
                            if (9 < uVar13) {
                              uVar13 = (bVar3 | 0x20) - 0x57;
                            }
                            uVar11 = uVar9 + 0xd;
                            if (uVar11 == uVar2) {
                              return 0;
                            }
                            bVar3 = pcVar7[uVar11];
                            uVar14 = uVar13 + uVar14 * 0x10;
                            if (bVar3 != 0x7d) {
                              uVar13 = bVar3 - 0x30;
                              if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                                return 0;
                              }
                              if (9 < uVar13) {
                                uVar13 = (bVar3 | 0x20) - 0x57;
                              }
                              uVar11 = uVar9 + 0xe;
                              if (uVar11 == uVar2) {
                                return 0;
                              }
                              bVar3 = pcVar7[uVar11];
                              uVar14 = uVar13 + uVar14 * 0x10;
                              if (bVar3 != 0x7d) {
                                uVar13 = bVar3 - 0x30;
                                if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                                  return 0;
                                }
                                if (9 < uVar13) {
                                  uVar13 = (bVar3 | 0x20) - 0x57;
                                }
                                uVar11 = uVar9 + 0xf;
                                if (uVar11 == uVar2) {
                                  return 0;
                                }
                                bVar3 = pcVar7[uVar11];
                                uVar14 = uVar13 + uVar14 * 0x10;
                                if (bVar3 != 0x7d) {
                                  uVar13 = bVar3 - 0x30;
                                  if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                                    return 0;
                                  }
                                  if (9 < uVar13) {
                                    uVar13 = (bVar3 | 0x20) - 0x57;
                                  }
                                  uVar11 = uVar9 + 0x10;
                                  if (uVar11 == uVar2) {
                                    return 0;
                                  }
                                  bVar3 = pcVar7[uVar11];
                                  uVar14 = uVar13 + uVar14 * 0x10;
                                  if (bVar3 != 0x7d) {
                                    uVar13 = bVar3 - 0x30;
                                    if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                                      return 0;
                                    }
                                    if (9 < uVar13) {
                                      uVar13 = (bVar3 | 0x20) - 0x57;
                                    }
                                    uVar11 = uVar9 + 0x11;
                                    if (uVar11 == uVar2) {
                                      return 0;
                                    }
                                    bVar3 = pcVar7[uVar11];
                                    uVar14 = uVar13 + uVar14 * 0x10;
                                    if (bVar3 != 0x7d) {
                                      uVar13 = bVar3 - 0x30;
                                      if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                                        return 0;
                                      }
                                      if (9 < uVar13) {
                                        uVar13 = (bVar3 | 0x20) - 0x57;
                                      }
                                      uVar11 = uVar9 + 0x12;
                                      if (uVar11 == uVar2) {
                                        return 0;
                                      }
                                      bVar3 = pcVar7[uVar11];
                                      uVar14 = uVar13 + uVar14 * 0x10;
                                      if (bVar3 != 0x7d) {
                                        uVar13 = bVar3 - 0x30;
                                        if ((9 < uVar13) && (5 < (bVar3 | 0x20) - 0x61)) {
                                          return 0;
                                        }
                                        if (9 < uVar13) {
                                          uVar13 = (bVar3 | 0x20) - 0x57;
                                        }
                                        uVar11 = uVar9 + 0x13;
                                        uVar14 = uVar13 + uVar14 * 0x10;
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
          if (uVar11 == uVar2) {
            return 0;
          }
          if (pcVar7[uVar11] != '}') {
            return 0;
          }
          lVar6 = FUN_00ee8a88(pcVar7 + lVar5,uVar14);
          if (lVar6 == 0) {
            return 0;
          }
          uVar12 = uVar11 + 1;
          lVar6 = lVar6 + lVar5;
        }
        else if (uVar14 == 0x78) {
          if (uVar2 < uVar9 + 4) {
            return 0;
          }
          bVar3 = pcVar7[uVar11];
          uVar14 = bVar3 - 0x30;
          if ((9 < uVar14) && (5 < (bVar3 | 0x20) - 0x61)) {
            return 0;
          }
          uVar13 = (byte)pcVar7[uVar9 + 3] - 0x30;
          uVar4 = (byte)pcVar7[uVar9 + 3] | 0x20;
          if ((9 < uVar13) && (5 < uVar4 - 0x61)) {
            return 0;
          }
          if (9 < uVar14) {
            uVar14 = bVar3 + 9;
          }
          if (9 < uVar13) {
            uVar13 = uVar4 + 0xa9;
          }
          pcVar7[lVar5] = (char)uVar13 + (char)(uVar14 << 4);
          uVar12 = uVar9 + 4;
          lVar6 = lVar5 + 1;
        }
        else {
          if (uVar14 != 0x7a) goto LAB_00ee8974;
          lVar6 = lVar5;
          if (uVar11 < uVar2) {
            while (((byte)pcVar7[uVar11] - 9 < 5 || (uVar12 = uVar11, (byte)pcVar7[uVar11] == 0x20))
                  ) {
              uVar11 = uVar11 + 1;
              if (uVar2 == uVar11) goto LAB_00ee8a40;
            }
          }
        }
        while( true ) {
          uVar9 = uVar12;
          lVar5 = lVar6;
          if (uVar2 <= uVar9) goto LAB_00ee8a40;
          pcVar7 = pcVar1;
          if ((*(byte *)param_1 & 1) != 0) {
            pcVar7 = *(char **)(param_1 + 4);
          }
          cVar10 = pcVar7[uVar9];
          if (cVar10 == '\\') break;
LAB_00ee83dc:
          lVar6 = lVar5 + 1;
          pcVar7[lVar5] = cVar10;
          uVar12 = uVar9 + 1;
        }
      } while( true );
    }
LAB_00ee8a40:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)param_1,(char)lVar5);
  }
  return 1;
}


