// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d4319c
// Entry Point: 00d4319c
// Size: 2508 bytes
// Signature: undefined FUN_00d4319c(void)


undefined8 FUN_00d4319c(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  uVar7 = (long)param_3 - (long)param_2;
  uVar8 = uVar7 & 0xfffffffffffffffe;
  if (uVar8 != 0 && (uVar7 & 1) != 0) {
    param_3 = param_2 + uVar8;
  }
  if (((uVar7 & 1) != 0) && (uVar8 == 0)) {
    return 0xffffffff;
  }
  uVar6 = (uint)*param_2;
  if (0xdb < *param_2) {
    if ((uVar6 - 0xdc < 4) || ((uVar6 == 0xff && (0xfd < param_2[1])))) {
switchD_00d43270_caseD_0:
      *param_4 = param_2;
      return 0;
    }
    goto switchD_00d43270_caseD_b;
  }
  if (uVar6 - 0xd8 < 4) {
switchD_00d43270_caseD_7:
    if ((long)param_3 - (long)param_2 < 4) {
      return 0xfffffffe;
    }
    pbVar10 = param_2 + 4;
    goto LAB_00d432c0;
  }
  if (uVar6 != 0) goto switchD_00d43270_caseD_b;
  lVar2 = param_1 + 0x88;
  switch(*(undefined *)(lVar2 + (ulong)param_2[1])) {
  case 0:
  case 1:
  case 8:
    goto switchD_00d43270_caseD_0;
  case 2:
    pbVar9 = param_2 + 2;
    uVar8 = (long)param_3 - (long)pbVar9;
    if ((long)uVar8 < 2) {
      return 0xffffffff;
    }
    bVar3 = *pbVar9;
    uVar6 = (uint)bVar3;
    if (bVar3 < 0xdc) {
      if (uVar6 - 0xd8 < 4) goto joined_r0x00d43640;
      if (uVar6 != 0) {
LAB_00d43544:
        uVar7 = (ulong)param_2[3];
        goto switchD_00d4351c_caseD_1d;
      }
      uVar7 = (ulong)param_2[3];
      switch(*(undefined *)(lVar2 + uVar7)) {
      case 6:
joined_r0x00d43874:
        if (uVar8 < 3) {
          return 0xfffffffe;
        }
        break;
      case 0xf:
        uVar4 = FUN_00d44fcc(param_1,param_2 + 4);
        return uVar4;
      case 0x10:
        pbVar9 = param_2 + 4;
        if ((long)param_3 - (long)pbVar9 < 2) {
          return 0xffffffff;
        }
        if (*pbVar9 == 0) {
          if (*(char *)(lVar2 + (ulong)param_2[5]) == '\x14') {
            uVar4 = FUN_00d45cc8(param_2 + 6,param_3,param_4);
            return uVar4;
          }
          if (*(char *)(lVar2 + (ulong)param_2[5]) == '\x1b') {
            uVar4 = FUN_00d457d0(param_1,param_2 + 6);
            return uVar4;
          }
        }
        break;
      case 0x11:
        pbVar9 = param_2 + 4;
        uVar8 = (long)param_3 - (long)pbVar9;
        if ((long)uVar8 < 2) {
          return 0xffffffff;
        }
        bVar3 = *pbVar9;
        uVar6 = (uint)bVar3;
        if (0xdb < bVar3) {
          if (uVar6 - 0xdc < 4) break;
          if (uVar6 != 0xff) goto LAB_00d438ec;
          uVar7 = (ulong)param_2[5];
          if (0xfd < param_2[5]) break;
switchD_00d4386c_caseD_1d:
          if ((*(uint *)(&DAT_0054734c +
                        (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar3] << 5)) >>
               (ulong)((uint)uVar7 & 0x1f) & 1) != 0) {
switchD_00d4386c_caseD_16:
            if ((long)(param_3 + (-6 - (long)param_2)) < 2) {
              return 0xffffffff;
            }
            pbVar9 = param_2 + 8;
            pbVar10 = param_3 + (-8 - (long)param_2);
LAB_00d43998:
            bVar3 = pbVar9[-2];
            uVar6 = (uint)bVar3;
            if (uVar6 < 0xdc) {
              if (uVar6 != 0) {
                if (uVar6 - 0xd8 < 4) {
switchD_00d439d4_caseD_7:
                  if (pbVar10 + 2 < (byte *)0x4) {
                    return 0xfffffffe;
                  }
                }
                else {
LAB_00d439f4:
                  uVar8 = (ulong)pbVar9[-1];
switchD_00d439d4_caseD_1d:
                  if ((*(uint *)(&DAT_0054734c +
                                (uVar8 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar3] << 5)) >>
                       (ulong)((uint)uVar8 & 0x1f) & 1) != 0) goto LAB_00d43980;
                }
                goto switchD_00d439d4_caseD_8;
              }
              uVar8 = (ulong)pbVar9[-1];
              if (*(byte *)(lVar2 + uVar8) - 0x16 < 6) {
LAB_00d43980:
                pbVar9 = pbVar9 + 2;
                bVar1 = (long)pbVar10 < 2;
                pbVar10 = pbVar10 + -2;
                if (bVar1) {
                  return 0xffffffff;
                }
                goto LAB_00d43998;
              }
              switch((uint)*(byte *)(lVar2 + uVar8)) {
              case 6:
                if (pbVar10 + 2 < (byte *)0x3) {
                  return 0xfffffffe;
                }
                break;
              case 7:
                goto switchD_00d439d4_caseD_7;
              case 9:
              case 10:
              case 0x15:
                if ((long)pbVar10 < 2) {
                  return 0xffffffff;
                }
                goto LAB_00d43af0;
              case 0xb:
                goto switchD_00d439d4_caseD_b;
              case 0x1d:
                goto switchD_00d439d4_caseD_1d;
              }
            }
            else if (bVar3 == 0xff) {
              uVar8 = (ulong)pbVar9[-1];
              if (pbVar9[-1] < 0xfe) goto switchD_00d439d4_caseD_1d;
            }
            else if (3 < bVar3 - 0xdc) goto LAB_00d439f4;
switchD_00d439d4_caseD_8:
            pbVar9 = pbVar9 + -2;
            goto switchD_00d4386c_caseD_8;
          }
          break;
        }
        if (3 < uVar6 - 0xd8) {
          if (uVar6 == 0) {
            uVar7 = (ulong)param_2[5];
            switch(*(undefined *)(lVar2 + uVar7)) {
            case 6:
              goto joined_r0x00d43874;
            case 7:
              goto joined_r0x00d43640;
            default:
switchD_00d4386c_caseD_8:
              *param_4 = pbVar9;
              return 0;
            case 0x16:
            case 0x18:
              goto switchD_00d4386c_caseD_16;
            case 0x1d:
              goto switchD_00d4386c_caseD_1d;
            }
          }
LAB_00d438ec:
          uVar7 = (ulong)param_2[5];
          goto switchD_00d4386c_caseD_1d;
        }
      case 7:
joined_r0x00d43640:
        if (uVar8 < 4) {
          return 0xfffffffe;
        }
        break;
      case 0x16:
      case 0x18:
        goto switchD_00d4351c_caseD_16;
      case 0x1d:
        goto switchD_00d4351c_caseD_1d;
      }
switchD_00d4351c_caseD_5:
      *param_4 = pbVar9;
      return 0;
    }
    if (uVar6 - 0xdc < 4) goto switchD_00d4351c_caseD_5;
    if (uVar6 != 0xff) goto LAB_00d43544;
    uVar7 = (ulong)param_2[3];
    if (0xfd < param_2[3]) goto switchD_00d4351c_caseD_5;
switchD_00d4351c_caseD_1d:
    if ((*(uint *)(&DAT_0054734c + (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar3] << 5))
         >> (ulong)((uint)uVar7 & 0x1f) & 1) == 0) goto switchD_00d4351c_caseD_5;
switchD_00d4351c_caseD_16:
    param_2 = param_2 + 4;
    uVar8 = (long)param_3 - (long)param_2;
    if ((long)uVar8 < 2) {
      return 0xffffffff;
    }
    bVar1 = false;
    while( true ) {
      bVar3 = *param_2;
      uVar6 = (uint)bVar3;
      if (bVar3 < 0xdc) break;
      if (uVar6 == 0xff) {
        uVar7 = (ulong)param_2[1];
        if (0xfd < param_2[1]) goto switchD_00d436c8_caseD_5;
      }
      else {
        if (uVar6 - 0xdc < 4) goto switchD_00d436c8_caseD_5;
LAB_00d43750:
        uVar7 = (ulong)param_2[1];
      }
switchD_00d436c8_caseD_1d:
      if ((*(uint *)(&DAT_0054734c + (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar3] << 5))
           >> (ulong)((uint)uVar7 & 0x1f) & 1) == 0) goto switchD_00d436c8_caseD_5;
      lVar5 = 2;
switchD_00d436c8_caseD_16:
      param_2 = param_2 + lVar5;
      uVar8 = (long)param_3 - (long)param_2;
      if ((long)uVar8 < 2) {
        return 0xffffffff;
      }
    }
    if (uVar6 == 0) {
      uVar7 = (ulong)param_2[1];
      lVar5 = 2;
      switch(*(undefined *)(lVar2 + uVar7)) {
      case 6:
        if (uVar8 < 3) {
          return 0xfffffffe;
        }
        break;
      case 7:
        goto switchD_00d436c8_caseD_7;
      case 9:
      case 10:
      case 0x15:
        pbVar10 = param_3 + (-2 - (long)param_2);
        if ((long)pbVar10 < 2) {
          return 0xffffffff;
        }
        param_2 = param_2 + 4;
LAB_00d437f8:
        bVar3 = param_2[-2];
        uVar8 = (ulong)bVar3;
        if (bVar3 != 0) {
          if (3 < bVar3 - 0xd8) {
            if (bVar3 - 0xdc < 4) goto switchD_00d43820_caseD_5;
            if (bVar3 == 0xff) {
              uVar7 = (ulong)param_2[-1];
              if (0xfd < param_2[-1]) goto switchD_00d43820_caseD_5;
              uVar8 = 0xff;
            }
            else {
              uVar7 = (ulong)param_2[-1];
            }
LAB_00d43aac:
            if ((*(uint *)(&DAT_0054734c +
                          (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[uVar8] << 5)) >>
                 (ulong)((uint)uVar7 & 0x1f) & 1) != 0) {
switchD_00d43820_caseD_16:
              uVar4 = FUN_00d45da4();
              return uVar4;
            }
            goto switchD_00d43820_caseD_5;
          }
switchD_00d43820_caseD_7:
          if (pbVar10 < (byte *)0x4) {
            return 0xfffffffe;
          }
          goto switchD_00d43820_caseD_5;
        }
        uVar7 = (ulong)param_2[-1];
        switch(*(undefined *)(lVar2 + uVar7)) {
        case 6:
          if (pbVar10 < (byte *)0x3) {
            return 0xfffffffe;
          }
        default:
switchD_00d43820_caseD_5:
          *param_4 = param_2 + -2;
          return 0;
        case 7:
          goto switchD_00d43820_caseD_7;
        case 9:
        case 10:
        case 0x15:
          goto switchD_00d43820_caseD_9;
        case 0xb:
          param_2 = param_2 + -2;
          goto switchD_00d436c8_caseD_b;
        case 0x11:
          param_2 = param_2 + -2;
          break;
        case 0x16:
        case 0x18:
          goto switchD_00d43820_caseD_16;
        case 0x1d:
          uVar8 = 0;
          goto LAB_00d43aac;
        }
        goto switchD_00d436c8_caseD_11;
      case 0xb:
switchD_00d436c8_caseD_b:
        *param_4 = param_2 + 2;
        return 2;
      case 0x11:
switchD_00d436c8_caseD_11:
        pbVar10 = param_2 + 2;
        if ((long)param_3 - (long)pbVar10 < 2) {
          return 0xffffffff;
        }
        if ((*pbVar10 == 0) && (param_2[3] == 0x3e)) {
          *param_4 = param_2 + 4;
          return 4;
        }
LAB_00d435b8:
        *param_4 = pbVar10;
        return 0;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        goto switchD_00d436c8_caseD_16;
      case 0x17:
        if (bVar1) break;
        pbVar10 = param_2 + 2;
        uVar8 = (long)param_3 - (long)pbVar10;
        if ((long)uVar8 < 2) {
          return 0xffffffff;
        }
        bVar3 = *pbVar10;
        uVar6 = (uint)bVar3;
        if (0xdb < uVar6) {
          if (bVar3 == 0xff) {
            uVar7 = (ulong)param_2[3];
            if (0xfd < param_2[3]) goto switchD_00d43718_caseD_5;
          }
          else {
            if (bVar3 - 0xdc < 4) goto switchD_00d43718_caseD_5;
LAB_00d43794:
            uVar7 = (ulong)param_2[3];
          }
switchD_00d43718_caseD_1d:
          if ((*(uint *)(&DAT_0054734c +
                        (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar3] << 5)) >>
               (ulong)((uint)uVar7 & 0x1f) & 1) == 0) goto switchD_00d43718_caseD_5;
          bVar1 = true;
          lVar5 = 4;
          goto switchD_00d436c8_caseD_16;
        }
        if (uVar6 == 0) {
          uVar7 = (ulong)param_2[3];
          bVar1 = true;
          lVar5 = 4;
          switch(*(undefined *)(lVar2 + uVar7)) {
          case 6:
            if (uVar8 < 3) {
              return 0xfffffffe;
            }
            break;
          case 7:
            goto switchD_00d43718_caseD_7;
          case 0x16:
          case 0x18:
            goto switchD_00d436c8_caseD_16;
          case 0x1d:
            goto switchD_00d43718_caseD_1d;
          }
        }
        else {
          if (3 < uVar6 - 0xd8) goto LAB_00d43794;
switchD_00d43718_caseD_7:
          if (uVar8 < 4) {
            return 0xfffffffe;
          }
        }
switchD_00d43718_caseD_5:
        *param_4 = pbVar10;
        return 0;
      case 0x1d:
        goto switchD_00d436c8_caseD_1d;
      }
    }
    else {
      if (3 < uVar6 - 0xd8) goto LAB_00d43750;
switchD_00d436c8_caseD_7:
      if (uVar8 < 4) {
        return 0xfffffffe;
      }
    }
switchD_00d436c8_caseD_5:
    *param_4 = param_2;
    return 0;
  case 3:
    uVar4 = FUN_00d459d8(param_1,param_2 + 2);
    return uVar4;
  case 4:
    pbVar10 = param_2 + 2;
    if ((long)param_3 - (long)pbVar10 < 2) {
      return 0xfffffffb;
    }
    if ((*pbVar10 == 0) && (param_2[3] == 0x5d)) {
      pbVar9 = param_2 + 4;
      if ((long)param_3 - (long)pbVar9 < 2) {
        return 0xfffffffb;
      }
      if ((*pbVar9 == 0) && (param_2[5] == 0x3e)) goto switchD_00d4351c_caseD_5;
    }
    break;
  case 5:
    if ((long)param_3 - (long)param_2 < 2) {
      return 0xfffffffe;
    }
  default:
switchD_00d43270_caseD_b:
    pbVar10 = param_2 + 2;
    break;
  case 6:
    if ((long)param_3 - (long)param_2 < 3) {
      return 0xfffffffe;
    }
    pbVar10 = param_2 + 3;
    break;
  case 7:
    goto switchD_00d43270_caseD_7;
  case 9:
    pbVar10 = param_2 + 2;
    if (1 < (long)param_3 - (long)pbVar10) {
      pbVar9 = pbVar10;
      if ((*pbVar10 == 0) && (pbVar9 = param_2 + 4, *(char *)(lVar2 + (ulong)param_2[3]) != '\n')) {
        pbVar9 = pbVar10;
      }
      *param_4 = pbVar9;
      return 7;
    }
    return 0xfffffffd;
  case 10:
    *param_4 = param_2 + 2;
    return 7;
  }
LAB_00d432c0:
  uVar8 = (long)param_3 - (long)pbVar10;
  if (1 < (long)uVar8) {
    do {
      bVar3 = *pbVar10;
      uVar6 = (uint)bVar3;
      if (0xdb < uVar6) {
        if (bVar3 == 0xff) {
          if (0xfd < pbVar10[1]) goto switchD_00d4334c_caseD_0;
        }
        else if (bVar3 - 0xdc < 4) goto switchD_00d4334c_caseD_0;
        goto switchD_00d4334c_caseD_5;
      }
      if (uVar6 - 0xd8 < 4) {
switchD_00d4334c_caseD_7:
        if (uVar8 < 4) {
switchD_00d4334c_caseD_0:
          *param_4 = pbVar10;
          return 6;
        }
        pbVar9 = pbVar10 + 4;
        goto LAB_00d432f4;
      }
      if (uVar6 == 0) {
        switch(*(undefined *)(param_1 + 0x88 + (ulong)pbVar10[1])) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
        case 9:
        case 10:
          goto switchD_00d4334c_caseD_0;
        case 4:
          if (uVar8 < 4) goto switchD_00d4334c_caseD_0;
          pbVar9 = pbVar10 + 2;
          if ((*pbVar9 == 0) && (pbVar10[3] == 0x5d)) {
            if (uVar8 < 6) goto switchD_00d4334c_caseD_0;
            if ((pbVar10[4] == 0) && (pbVar10[5] == 0x3e)) {
              pbVar10 = pbVar10 + 4;
              goto LAB_00d435b8;
            }
          }
          break;
        default:
          goto switchD_00d4334c_caseD_5;
        case 6:
          if (uVar8 < 3) goto switchD_00d4334c_caseD_0;
          pbVar9 = pbVar10 + 3;
          break;
        case 7:
          goto switchD_00d4334c_caseD_7;
        }
      }
      else {
switchD_00d4334c_caseD_5:
        pbVar9 = pbVar10 + 2;
      }
LAB_00d432f4:
      pbVar10 = pbVar9;
      uVar8 = (long)param_3 - (long)pbVar10;
    } while (1 < (long)uVar8);
  }
  *param_4 = pbVar10;
  return 6;
switchD_00d43820_caseD_9:
  pbVar10 = pbVar10 + -2;
  param_2 = param_2 + 2;
  if ((long)pbVar10 < 2) {
    return 0xffffffff;
  }
  goto LAB_00d437f8;
LAB_00d43af0:
  if (*pbVar9 != 0) goto switchD_00d4351c_caseD_5;
  bVar3 = *(byte *)(lVar2 + (ulong)pbVar9[1]);
  if (1 < bVar3 - 9 && bVar3 != 0x15) {
    if (bVar3 == 0xb) {
      pbVar9 = pbVar9 + 2;
switchD_00d439d4_caseD_b:
      *param_4 = pbVar9;
      return 5;
    }
    goto switchD_00d4351c_caseD_5;
  }
  pbVar9 = pbVar9 + 2;
  pbVar10 = pbVar10 + -2;
  if ((long)pbVar10 < 2) {
    return 0xffffffff;
  }
  goto LAB_00d43af0;
}


