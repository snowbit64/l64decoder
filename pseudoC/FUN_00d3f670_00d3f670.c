// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3f670
// Entry Point: 00d3f670
// Size: 2620 bytes
// Signature: undefined FUN_00d3f670(void)


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00d3f670(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  uVar7 = (long)param_3 - (long)param_2;
  uVar11 = uVar7 & 0xfffffffffffffffe;
  if (uVar11 != 0 && (uVar7 & 1) != 0) {
    param_3 = param_2 + uVar11;
  }
  if (((uVar7 & 1) != 0) && (uVar11 == 0)) {
    return 0xffffffff;
  }
  uVar5 = (uint)param_2[1];
  if (0xdb < param_2[1]) {
    if ((uVar5 - 0xdc < 4) || ((uVar5 == 0xff && (0xfd < *param_2)))) {
switchD_00d3f744_caseD_0:
      *param_4 = param_2;
      return 0;
    }
    goto switchD_00d3f744_caseD_b;
  }
  if (uVar5 - 0xd8 < 4) {
switchD_00d3f744_caseD_7:
    if ((long)param_3 - (long)param_2 < 4) {
      return 0xfffffffe;
    }
    pbVar8 = param_2 + 4;
    goto LAB_00d3f7a0;
  }
  if (uVar5 != 0) goto switchD_00d3f744_caseD_b;
  lVar2 = param_1 + 0x88;
  switch(*(undefined *)(lVar2 + (ulong)*param_2)) {
  case 0:
  case 1:
  case 8:
    goto switchD_00d3f744_caseD_0;
  case 2:
    pbVar9 = param_2 + 2;
    uVar11 = (long)param_3 - (long)pbVar9;
    if ((long)uVar11 < 2) {
      return 0xffffffff;
    }
    bVar3 = param_2[3];
    uVar5 = (uint)bVar3;
    if (0xdb < bVar3) {
      if (uVar5 - 0xdc < 4) goto switchD_00d3fa18_caseD_5;
      if (uVar5 != 0xff) goto LAB_00d3fa4c;
      uVar7 = (ulong)*pbVar9;
      if (0xfd < *pbVar9) goto switchD_00d3fa18_caseD_5;
switchD_00d3fa18_caseD_1d:
      if ((*(uint *)(&DAT_0054734c + (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar3] << 5))
           >> (ulong)((uint)uVar7 & 0x1f) & 1) != 0) {
switchD_00d3fa18_caseD_16:
        pbVar9 = param_2 + 4;
        uVar11 = (long)param_3 - (long)pbVar9;
        if ((long)uVar11 < 2) {
          return 0xffffffff;
        }
        bVar1 = false;
        do {
          bVar3 = pbVar9[1];
          uVar5 = (uint)bVar3;
          if (0xdb < bVar3) {
            if (uVar5 == 0xff) {
              uVar7 = (ulong)*pbVar9;
              if (0xfd < *pbVar9) break;
            }
            else {
              if (uVar5 - 0xdc < 4) break;
LAB_00d3fc4c:
              uVar7 = (ulong)*pbVar9;
            }
switchD_00d3fbc4_caseD_1d:
            if ((*(uint *)(&DAT_0054734c +
                          (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar3] << 5)) >>
                 (ulong)((uint)uVar7 & 0x1f) & 1) != 0) {
              lVar4 = 2;
              goto switchD_00d3fbc4_caseD_16;
            }
            break;
          }
          if (uVar5 != 0) {
            if (3 < uVar5 - 0xd8) goto LAB_00d3fc4c;
switchD_00d3fbc4_caseD_7:
            if (uVar11 < 4) {
              return 0xfffffffe;
            }
            break;
          }
          uVar7 = (ulong)*pbVar9;
          lVar4 = 2;
          switch(*(undefined *)(lVar2 + uVar7)) {
          default:
            goto switchD_00d3fa18_caseD_5;
          case 6:
            if (uVar11 < 3) {
              return 0xfffffffe;
            }
            goto switchD_00d3fa18_caseD_5;
          case 7:
            goto switchD_00d3fbc4_caseD_7;
          case 9:
          case 10:
          case 0x15:
            pbVar9 = pbVar9 + 2;
            uVar11 = (long)param_3 - (long)pbVar9;
            if ((long)uVar11 < 2) {
              return 0xffffffff;
            }
            goto LAB_00d3fcec;
          case 0xb:
            goto switchD_00d3fbc4_caseD_b;
          case 0x11:
            goto switchD_00d3fbc4_caseD_11;
          case 0x17:
            if (bVar1) goto switchD_00d3fa18_caseD_5;
            pbVar8 = pbVar9 + 2;
            uVar11 = (long)param_3 - (long)pbVar8;
            if ((long)uVar11 < 2) {
              return 0xffffffff;
            }
            bVar3 = pbVar9[3];
            uVar5 = (uint)bVar3;
            if (uVar5 < 0xdc) {
              if (uVar5 == 0) {
                uVar7 = (ulong)*pbVar8;
                bVar1 = true;
                lVar4 = 4;
                switch(*(undefined *)(lVar2 + uVar7)) {
                case 6:
                  if (uVar11 < 3) {
                    return 0xfffffffe;
                  }
                  break;
                case 7:
                  goto switchD_00d3fc14_caseD_7;
                case 0x16:
                case 0x18:
                  goto switchD_00d3fbc4_caseD_16;
                case 0x1d:
                  goto switchD_00d3fc14_caseD_1d;
                }
              }
              else {
                if (3 < uVar5 - 0xd8) goto LAB_00d3fc90;
switchD_00d3fc14_caseD_7:
                if (uVar11 < 4) {
                  return 0xfffffffe;
                }
              }
switchD_00d3fc14_caseD_5:
              *param_4 = pbVar8;
              return 0;
            }
            if (bVar3 == 0xff) {
              uVar7 = (ulong)*pbVar8;
              if (0xfd < *pbVar8) goto switchD_00d3fc14_caseD_5;
            }
            else {
              if (bVar3 - 0xdc < 4) goto switchD_00d3fc14_caseD_5;
LAB_00d3fc90:
              uVar7 = (ulong)*pbVar8;
            }
switchD_00d3fc14_caseD_1d:
            if ((*(uint *)(&DAT_0054734c +
                          (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar3] << 5)) >>
                 (ulong)((uint)uVar7 & 0x1f) & 1) == 0) goto switchD_00d3fc14_caseD_5;
            bVar1 = true;
            lVar4 = 4;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
switchD_00d3fbc4_caseD_16:
            pbVar9 = pbVar9 + lVar4;
            uVar11 = (long)param_3 - (long)pbVar9;
            if ((long)uVar11 < 2) {
              return 0xffffffff;
            }
            break;
          case 0x1d:
            goto switchD_00d3fbc4_caseD_1d;
          }
        } while( true );
      }
      goto switchD_00d3fa18_caseD_5;
    }
    if (uVar5 - 0xd8 < 4) {
switchD_00d3fa18_caseD_7:
      if (uVar11 < 4) {
        return 0xfffffffe;
      }
      goto switchD_00d3fa18_caseD_5;
    }
    if (uVar5 != 0) {
LAB_00d3fa4c:
      uVar7 = (ulong)*pbVar9;
      goto switchD_00d3fa18_caseD_1d;
    }
    uVar7 = (ulong)*pbVar9;
    switch(*(undefined *)(lVar2 + uVar7)) {
    case 6:
      if (uVar11 < 3) {
        return 0xfffffffe;
      }
      break;
    case 7:
      goto switchD_00d3fa18_caseD_7;
    case 0xf:
      uVar11 = FUN_00d41510(param_1,param_2 + 4);
      return uVar11;
    case 0x10:
      pbVar9 = param_2 + 4;
      if ((long)param_3 - (long)pbVar9 < 2) {
        return 0xffffffff;
      }
      if (param_2[5] == 0) {
        if (*(char *)(lVar2 + (ulong)*pbVar9) == '\x14') {
          uVar11 = FUN_00d42204(param_2 + 6,param_3,param_4);
          return uVar11;
        }
        if (*(char *)(lVar2 + (ulong)*pbVar9) == '\x1b') {
          uVar11 = FUN_00d41d10(param_1,param_2 + 6);
          return uVar11;
        }
      }
      break;
    case 0x11:
      pbVar9 = param_2 + 4;
      uVar11 = (long)param_3 - (long)pbVar9;
      if ((long)uVar11 < 2) {
        return 0xffffffff;
      }
      bVar3 = param_2[5];
      uVar5 = (uint)bVar3;
      if (bVar3 < 0xdc) {
        if (uVar5 - 0xd8 < 4) {
switchD_00d3fd60_caseD_7:
          if (uVar11 < 4) {
            return 0xfffffffe;
          }
          break;
        }
        if (uVar5 == 0) {
          uVar7 = (ulong)*pbVar9;
          uVar5 = 0;
          switch(*(undefined *)(lVar2 + uVar7)) {
          case 6:
            if (uVar11 < 3) {
              return 0xfffffffe;
            }
            goto switchD_00d3fa18_caseD_5;
          case 7:
            goto switchD_00d3fd60_caseD_7;
          default:
            goto switchD_00d3fd60_caseD_8;
          case 0x16:
          case 0x18:
            goto switchD_00d3fd60_caseD_16;
          case 0x1d:
            goto switchD_00d3fd60_caseD_1d;
          }
        }
LAB_00d3fe5c:
        uVar7 = (ulong)*pbVar9;
      }
      else {
        if (uVar5 - 0xdc < 4) break;
        if (uVar5 != 0xff) goto LAB_00d3fe5c;
        uVar7 = (ulong)*pbVar9;
        if (0xfd < *pbVar9) break;
      }
switchD_00d3fd60_caseD_1d:
      if ((*(uint *)(&DAT_0054734c + (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar3] << 5))
           >> (ulong)((uint)uVar7 & 0x1f) & 1) == 0) break;
switchD_00d3fd60_caseD_16:
      pbVar9 = param_2 + 6;
      if ((long)param_3 - (long)pbVar9 < 2) {
        return 0xffffffff;
      }
      pbVar8 = param_3 + (-8 - (long)param_2);
      while( true ) {
        bVar3 = pbVar9[1];
        uVar5 = (uint)bVar3;
        if (uVar5 < 0xdc) break;
        if (bVar3 == 0xff) {
          uVar11 = (ulong)*pbVar9;
          if (0xfd < *pbVar9) goto switchD_00d3fa18_caseD_5;
        }
        else {
          if (bVar3 - 0xdc < 4) goto switchD_00d3fa18_caseD_5;
LAB_00d3ff68:
          uVar11 = (ulong)*pbVar9;
        }
switchD_00d3ff48_caseD_1d:
        if ((*(uint *)(&DAT_0054734c +
                      (uVar11 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar3] << 5)) >>
             (ulong)((uint)uVar11 & 0x1f) & 1) == 0) goto switchD_00d3fa18_caseD_5;
LAB_00d3fef0:
        pbVar9 = pbVar9 + 2;
        bVar1 = (long)pbVar8 < 2;
        pbVar8 = pbVar8 + -2;
        if (bVar1) {
          return 0xffffffff;
        }
      }
      if (uVar5 == 0) {
        uVar11 = (ulong)*pbVar9;
        if (*(byte *)(lVar2 + uVar11) - 0x16 < 6) goto LAB_00d3fef0;
        uVar5 = 0;
        switch((uint)*(byte *)(lVar2 + uVar11)) {
        case 6:
          if (pbVar8 + 2 < (byte *)0x3) {
            return 0xfffffffe;
          }
          break;
        case 7:
          goto switchD_00d3ff48_caseD_7;
        default:
          goto switchD_00d3fd60_caseD_8;
        case 9:
        case 10:
        case 0x15:
          pbVar10 = pbVar9;
          if ((long)pbVar8 < 2) {
            return 0xffffffff;
          }
          while (pbVar9 = pbVar10 + 2, pbVar10[3] == 0) {
            bVar3 = *(byte *)(lVar2 + (ulong)*pbVar9);
            if (1 < bVar3 - 9 && bVar3 != 0x15) {
              if (bVar3 == 0xb) goto switchD_00d3ff48_caseD_b;
              break;
            }
            pbVar8 = pbVar8 + -2;
            pbVar10 = pbVar9;
            if ((long)pbVar8 < 2) {
              return 0xffffffff;
            }
          }
          break;
        case 0xb:
          goto switchD_00d3ff48_caseD_b;
        case 0x1d:
          goto switchD_00d3ff48_caseD_1d;
        }
      }
      else {
        if (3 < uVar5 - 0xd8) goto LAB_00d3ff68;
switchD_00d3ff48_caseD_7:
        if (pbVar8 + 2 < (byte *)0x4) {
          return 0xfffffffe;
        }
      }
      break;
    case 0x16:
    case 0x18:
      goto switchD_00d3fa18_caseD_16;
    case 0x1d:
      goto switchD_00d3fa18_caseD_1d;
    }
switchD_00d3fa18_caseD_5:
    *param_4 = pbVar9;
    return 0;
  case 3:
    uVar11 = FUN_00d41f18(param_1,param_2 + 2);
    return uVar11;
  case 4:
    pbVar8 = param_2 + 2;
    if ((long)param_3 - (long)pbVar8 < 2) {
      return 0xfffffffb;
    }
    if ((param_2[3] == 0) && (*pbVar8 == 0x5d)) {
      pbVar9 = param_2 + 4;
      if ((long)param_3 - (long)pbVar9 < 2) {
        return 0xfffffffb;
      }
      if ((param_2[5] == 0) && (*pbVar9 == 0x3e)) goto switchD_00d3fa18_caseD_5;
    }
    break;
  case 5:
    if ((long)param_3 - (long)param_2 < 2) {
      return 0xfffffffe;
    }
  default:
switchD_00d3f744_caseD_b:
    pbVar8 = param_2 + 2;
    break;
  case 6:
    if ((long)param_3 - (long)param_2 < 3) {
      return 0xfffffffe;
    }
    pbVar8 = param_2 + 3;
    break;
  case 7:
    goto switchD_00d3f744_caseD_7;
  case 9:
    pbVar8 = param_2 + 2;
    if (1 < (long)param_3 - (long)pbVar8) {
      pbVar9 = pbVar8;
      if ((param_2[3] == 0) && (pbVar9 = param_2 + 4, *(char *)(lVar2 + (ulong)param_2[2]) != '\n'))
      {
        pbVar9 = pbVar8;
      }
      *param_4 = pbVar9;
      return 7;
    }
    return 0xfffffffd;
  case 10:
    *param_4 = param_2 + 2;
    return 7;
  }
LAB_00d3f7a0:
  uVar11 = (long)param_3 - (long)pbVar8;
  if (1 < (long)uVar11) {
    do {
      bVar3 = pbVar8[1];
      uVar5 = (uint)bVar3;
      if (0xdb < uVar5) {
        if (bVar3 == 0xff) {
          if (0xfd < *pbVar8) goto switchD_00d3f82c_caseD_0;
        }
        else if (bVar3 - 0xdc < 4) goto switchD_00d3f82c_caseD_0;
        goto switchD_00d3f82c_caseD_5;
      }
      if (uVar5 - 0xd8 < 4) {
switchD_00d3f82c_caseD_7:
        if (uVar11 < 4) {
switchD_00d3f82c_caseD_0:
          *param_4 = pbVar8;
          return 6;
        }
        pbVar9 = pbVar8 + 4;
        goto LAB_00d3f7d4;
      }
      if (uVar5 == 0) {
        switch(*(undefined *)(param_1 + 0x88 + (ulong)*pbVar8)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
        case 9:
        case 10:
          goto switchD_00d3f82c_caseD_0;
        case 4:
          if (uVar11 < 4) goto switchD_00d3f82c_caseD_0;
          pbVar9 = pbVar8 + 2;
          if ((pbVar8[3] == 0) && (*pbVar9 == 0x5d)) {
            if (uVar11 < 6) goto switchD_00d3f82c_caseD_0;
            if ((pbVar8[5] == 0) && (pbVar8 = pbVar8 + 4, *pbVar8 == 0x3e)) goto LAB_00d3fe30;
          }
          break;
        default:
          goto switchD_00d3f82c_caseD_5;
        case 6:
          if (uVar11 < 3) goto switchD_00d3f82c_caseD_0;
          pbVar9 = pbVar8 + 3;
          break;
        case 7:
          goto switchD_00d3f82c_caseD_7;
        }
      }
      else {
switchD_00d3f82c_caseD_5:
        pbVar9 = pbVar8 + 2;
      }
LAB_00d3f7d4:
      pbVar8 = pbVar9;
      uVar11 = (long)param_3 - (long)pbVar8;
    } while (1 < (long)uVar11);
  }
  *param_4 = pbVar8;
  return 6;
LAB_00d3fcec:
  bVar3 = pbVar9[1];
  uVar7 = (ulong)bVar3;
  if (bVar3 == 0) {
    uVar6 = (ulong)*pbVar9;
    switch(*(undefined *)(lVar2 + uVar6)) {
    default:
      goto switchD_00d3fa18_caseD_5;
    case 6:
      if (uVar11 < 3) {
        return 0xfffffffe;
      }
      goto switchD_00d3fa18_caseD_5;
    case 7:
      goto switchD_00d3fd14_caseD_7;
    case 9:
    case 10:
    case 0x15:
      pbVar9 = pbVar9 + 2;
      uVar11 = uVar11 - 2;
      if ((long)uVar11 < 2) {
        return 0xffffffff;
      }
      goto LAB_00d3fcec;
    case 0xb:
      goto switchD_00d3fbc4_caseD_b;
    case 0x11:
      goto switchD_00d3fbc4_caseD_11;
    case 0x16:
    case 0x18:
      goto switchD_00d3fd14_caseD_16;
    case 0x1d:
      uVar7 = 0;
    }
  }
  else {
    if (bVar3 - 0xd8 < 4) {
switchD_00d3fd14_caseD_7:
      if (uVar11 < 4) {
        return 0xfffffffe;
      }
      goto switchD_00d3fa18_caseD_5;
    }
    if (bVar3 - 0xdc < 4) goto switchD_00d3fa18_caseD_5;
    if (bVar3 == 0xff) {
      uVar6 = (ulong)*pbVar9;
      if (*pbVar9 < 0xfe) {
        uVar7 = 0xff;
        goto LAB_00d3fff4;
      }
      goto switchD_00d3fa18_caseD_5;
    }
    uVar6 = (ulong)*pbVar9;
  }
LAB_00d3fff4:
  if ((*(uint *)(&DAT_0054734c + (uVar6 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[uVar7] << 5)) >>
       (ulong)((uint)uVar6 & 0x1f) & 1) != 0) {
switchD_00d3fd14_caseD_16:
    uVar11 = FUN_00d422e0(param_1,pbVar9 + 2);
    return uVar11;
  }
  goto switchD_00d3fa18_caseD_5;
switchD_00d3fbc4_caseD_b:
  *param_4 = pbVar9 + 2;
  return 2;
switchD_00d3fbc4_caseD_11:
  pbVar8 = pbVar9 + 2;
  if ((long)param_3 - (long)pbVar8 < 2) {
    return 0xffffffff;
  }
  if ((pbVar9[3] == 0) && (*pbVar8 == 0x3e)) {
    *param_4 = pbVar9 + 4;
    return 4;
  }
LAB_00d3fe30:
  *param_4 = pbVar8;
  return 0;
switchD_00d3ff48_caseD_b:
  pbVar9 = pbVar9 + 2;
  uVar5 = 5;
switchD_00d3fd60_caseD_8:
  *param_4 = pbVar9;
  return (ulong)uVar5;
}


