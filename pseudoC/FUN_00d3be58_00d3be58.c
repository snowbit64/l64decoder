// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3be58
// Entry Point: 00d3be58
// Size: 2252 bytes
// Signature: undefined FUN_00d3be58(void)


undefined8 FUN_00d3be58(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar8 = param_1 + 0x88;
  switch(*(undefined *)(lVar8 + (ulong)*param_2)) {
  case 0:
  case 1:
  case 8:
    break;
  case 2:
    pbVar6 = param_2 + 1;
    uVar5 = (long)param_3 - (long)pbVar6;
    if ((long)uVar5 < 1) {
      return 0xffffffff;
    }
    lVar9 = 1;
    switch(*(undefined *)(lVar8 + (ulong)*pbVar6)) {
    case 5:
      if (uVar5 < 2) {
        return 0xfffffffe;
      }
      uVar4 = (**(code **)(param_1 + 0x1a0))(param_1,pbVar6);
      if ((int)uVar4 == 0) {
LAB_00d3c43c:
        *param_4 = pbVar6;
        return uVar4;
      }
      lVar9 = 2;
      break;
    case 6:
      if (uVar5 < 3) {
        return 0xfffffffe;
      }
      uVar4 = (**(code **)(param_1 + 0x1a8))(param_1,pbVar6);
      if ((int)uVar4 == 0) goto LAB_00d3c43c;
      lVar9 = 3;
      break;
    case 7:
      if (uVar5 < 4) {
        return 0xfffffffe;
      }
      uVar4 = (**(code **)(param_1 + 0x1b0))(param_1,pbVar6);
      if ((int)uVar4 == 0) goto LAB_00d3c43c;
      lVar9 = 4;
      break;
    default:
switchD_00d3bf28_caseD_8:
      *param_4 = pbVar6;
      return 0;
    case 0xf:
      uVar4 = FUN_00d3d964(param_1,param_2 + 2,param_3,param_4);
      return uVar4;
    case 0x10:
      pbVar7 = param_2 + 2;
      if ((long)param_3 - (long)pbVar7 < 1) {
        return 0xffffffff;
      }
      if (*(char *)(lVar8 + (ulong)*pbVar7) == '\x14') {
        uVar4 = FUN_00d3e4b8(param_2 + 3,param_3,param_4);
        return uVar4;
      }
      if (*(char *)(lVar8 + (ulong)*pbVar7) == '\x1b') {
        uVar4 = FUN_00d3df1c(param_1,param_2 + 3,param_3,param_4);
        return uVar4;
      }
      goto LAB_00d3c448;
    case 0x11:
      param_2 = param_2 + 2;
      uVar5 = (long)param_3 - (long)param_2;
      if ((long)uVar5 < 1) {
        return 0xffffffff;
      }
      uVar4 = 0;
      lVar9 = 1;
      switch(*(undefined *)(lVar8 + (ulong)*param_2)) {
      case 5:
        if (uVar5 < 2) {
          return 0xfffffffe;
        }
        uVar4 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
        if ((int)uVar4 != 0) {
          lVar9 = 2;
          goto switchD_00d3c41c_caseD_16;
        }
        break;
      case 6:
        if (uVar5 < 3) {
          return 0xfffffffe;
        }
        uVar4 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
        if ((int)uVar4 != 0) {
          lVar9 = 3;
          goto switchD_00d3c41c_caseD_16;
        }
        break;
      case 7:
        if (uVar5 < 4) {
          return 0xfffffffe;
        }
        uVar4 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
        if ((int)uVar4 != 0) {
          lVar9 = 4;
          goto switchD_00d3c41c_caseD_16;
        }
        break;
      case 0x16:
      case 0x18:
switchD_00d3c41c_caseD_16:
        param_2 = param_2 + lVar9;
        uVar5 = (long)param_3 - (long)param_2;
        if ((long)uVar5 < 1) {
          return 0xffffffff;
        }
        do {
          uVar4 = 0;
          lVar9 = 1;
          switch(*(undefined *)(lVar8 + (ulong)*param_2)) {
          case 5:
            if (uVar5 < 2) {
              return 0xfffffffe;
            }
            uVar4 = (**(code **)(param_1 + 0x188))(param_1,param_2);
            if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
            lVar9 = 2;
            break;
          case 6:
            if (uVar5 < 3) {
              return 0xfffffffe;
            }
            uVar4 = (**(code **)(param_1 + 400))(param_1,param_2);
            if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
            lVar9 = 3;
            break;
          case 7:
            if (uVar5 < 4) {
              return 0xfffffffe;
            }
            uVar4 = (**(code **)(param_1 + 0x198))(param_1,param_2);
            if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
            lVar9 = 4;
            break;
          default:
            goto switchD_00d3c41c_caseD_8;
          case 9:
          case 10:
          case 0x15:
            param_2 = param_2 + 1;
            lVar9 = (long)param_3 - (long)param_2;
            if (lVar9 < 1) {
              return 0xffffffff;
            }
            while (bVar1 = *(byte *)(lVar8 + (ulong)*param_2), bVar1 - 9 < 2 || bVar1 == 0x15) {
              param_2 = param_2 + 1;
              lVar9 = lVar9 + -1;
              if (lVar9 < 1) {
                return 0xffffffff;
              }
            }
            if (bVar1 != 0xb) {
              uVar4 = 0;
              goto switchD_00d3c41c_caseD_8;
            }
          case 0xb:
            *param_4 = param_2 + 1;
            return 5;
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
            break;
          }
          param_2 = param_2 + lVar9;
          uVar5 = (long)param_3 - (long)param_2;
          if ((long)uVar5 < 1) {
            return 0xffffffff;
          }
        } while( true );
      }
switchD_00d3c41c_caseD_8:
      *param_4 = param_2;
      return uVar4;
    case 0x16:
    case 0x18:
      break;
    }
    param_2 = pbVar6 + lVar9;
    uVar5 = (long)param_3 - (long)param_2;
    if ((long)uVar5 < 1) {
      return 0xffffffff;
    }
    bVar2 = false;
    do {
      lVar9 = 1;
      switch(*(undefined *)(lVar8 + (ulong)*param_2)) {
      case 5:
        if (uVar5 < 2) {
          return 0xfffffffe;
        }
        uVar4 = (**(code **)(param_1 + 0x188))(param_1,param_2);
        if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
        lVar9 = 2;
        break;
      case 6:
        if (uVar5 < 3) {
          return 0xfffffffe;
        }
        uVar4 = (**(code **)(param_1 + 400))(param_1,param_2);
        if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
        lVar9 = 3;
        break;
      case 7:
        if (uVar5 < 4) {
          return 0xfffffffe;
        }
        uVar4 = (**(code **)(param_1 + 0x198))(param_1,param_2);
        if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
        lVar9 = 4;
        break;
      default:
        goto switchD_00d3beb4_caseD_0;
      case 9:
      case 10:
      case 0x15:
        param_2 = param_2 + 1;
        uVar5 = (long)param_3 - (long)param_2;
        if ((long)uVar5 < 1) {
          return 0xffffffff;
        }
        goto LAB_00d3c518;
      case 0xb:
        goto switchD_00d3c1c0_caseD_b;
      case 0x11:
        goto switchD_00d3c1c0_caseD_11;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        break;
      case 0x17:
        if (bVar2) goto switchD_00d3beb4_caseD_0;
        pbVar6 = param_2 + 1;
        uVar5 = (long)param_3 - (long)pbVar6;
        if ((long)uVar5 < 1) {
          return 0xffffffff;
        }
        bVar2 = true;
        lVar9 = 2;
        switch(*(undefined *)(lVar8 + (ulong)*pbVar6)) {
        case 5:
          if (uVar5 < 2) {
            return 0xfffffffe;
          }
          uVar4 = (**(code **)(param_1 + 0x1a0))(param_1,pbVar6);
          if ((int)uVar4 == 0) goto LAB_00d3c43c;
          bVar2 = true;
          lVar9 = 3;
          break;
        case 6:
          if (uVar5 < 3) {
            return 0xfffffffe;
          }
          uVar4 = (**(code **)(param_1 + 0x1a8))(param_1,pbVar6);
          if ((int)uVar4 == 0) goto LAB_00d3c43c;
          bVar2 = true;
          lVar9 = 4;
          break;
        case 7:
          if (uVar5 < 4) {
            return 0xfffffffe;
          }
          uVar4 = (**(code **)(param_1 + 0x1b0))(param_1,pbVar6);
          if ((int)uVar4 == 0) goto LAB_00d3c43c;
          bVar2 = true;
          lVar9 = 5;
          break;
        default:
          goto switchD_00d3bf28_caseD_8;
        case 0x16:
        case 0x18:
          break;
        }
      }
      param_2 = param_2 + lVar9;
      uVar5 = (long)param_3 - (long)param_2;
      if ((long)uVar5 < 1) {
        return 0xffffffff;
      }
    } while( true );
  case 3:
    uVar4 = FUN_00d3e180(param_1,param_2 + 1,param_3,param_4);
    return uVar4;
  case 4:
    pbVar6 = param_2 + 1;
    if ((long)param_3 - (long)pbVar6 < 1) {
      return 0xfffffffb;
    }
    if (*pbVar6 != 0x5d) goto joined_r0x00d3c078;
    pbVar7 = param_2 + 2;
    if ((long)param_3 - (long)pbVar7 < 1) {
      return 0xfffffffb;
    }
    if (*pbVar7 != 0x3e) goto joined_r0x00d3c078;
    goto LAB_00d3c448;
  case 5:
    if ((long)param_3 - (long)param_2 < 2) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar3 == 0) {
      pbVar6 = param_2 + 2;
      goto joined_r0x00d3c078;
    }
    break;
  case 6:
    if ((long)param_3 - (long)param_2 < 3) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1c0))(param_1,param_2);
    if (iVar3 == 0) {
      pbVar6 = param_2 + 3;
      goto joined_r0x00d3c078;
    }
    break;
  case 7:
    if ((long)param_3 - (long)param_2 < 4) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1c8))(param_1,param_2);
    if (iVar3 == 0) {
      pbVar6 = param_2 + 4;
      goto joined_r0x00d3c078;
    }
    break;
  case 9:
    if ((long)param_3 - (long)(param_2 + 1) < 1) {
      return 0xfffffffd;
    }
    uVar4 = 7;
    pbVar7 = param_2 + 2;
    if (*(char *)(lVar8 + (ulong)param_2[1]) != '\n') {
      pbVar7 = param_2 + 1;
    }
    goto LAB_00d3c16c;
  case 10:
    uVar4 = 7;
    pbVar7 = param_2 + 1;
    goto LAB_00d3c16c;
  default:
    pbVar6 = param_2 + 1;
joined_r0x00d3c078:
    pbVar7 = pbVar6;
    uVar5 = (long)param_3 - (long)pbVar7;
    if ((long)uVar5 < 1) {
      uVar4 = 6;
      goto LAB_00d3c16c;
    }
    switch(*(undefined *)(lVar8 + (ulong)*pbVar7)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
      break;
    case 4:
      if (uVar5 < 2) break;
      pbVar6 = pbVar7 + 1;
      if (*pbVar6 != 0x5d) goto joined_r0x00d3c078;
      if (uVar5 < 3) break;
      if (pbVar7[2] == 0x3e) goto LAB_00d3c444;
      goto joined_r0x00d3c078;
    case 5:
      if ((1 < uVar5) && (iVar3 = (**(code **)(param_1 + 0x1b8))(param_1,pbVar7), iVar3 == 0)) {
        pbVar6 = pbVar7 + 2;
        goto joined_r0x00d3c078;
      }
      break;
    case 6:
      if ((2 < uVar5) && (iVar3 = (**(code **)(param_1 + 0x1c0))(param_1,pbVar7), iVar3 == 0)) {
        pbVar6 = pbVar7 + 3;
        goto joined_r0x00d3c078;
      }
      break;
    case 7:
      if ((3 < uVar5) && (iVar3 = (**(code **)(param_1 + 0x1c8))(param_1,pbVar7), iVar3 == 0)) {
        pbVar6 = pbVar7 + 4;
        goto joined_r0x00d3c078;
      }
      break;
    default:
      pbVar6 = pbVar7 + 1;
      goto joined_r0x00d3c078;
    }
    *param_4 = pbVar7;
    return 6;
  }
switchD_00d3beb4_caseD_0:
  *param_4 = param_2;
  return 0;
LAB_00d3c444:
  pbVar7 = pbVar7 + 2;
  goto LAB_00d3c448;
switchD_00d3c1c0_caseD_b:
  uVar4 = 2;
  pbVar7 = param_2 + 1;
  goto LAB_00d3c16c;
switchD_00d3c538_caseD_9:
  param_2 = param_2 + 1;
  uVar5 = uVar5 - 1;
  if ((long)uVar5 < 1) {
    return 0xffffffff;
  }
LAB_00d3c518:
  switch(*(undefined *)(lVar8 + (ulong)*param_2)) {
  case 5:
    if (uVar5 < 2) {
      return 0xfffffffe;
    }
    uVar4 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
    if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
    lVar8 = 3;
    break;
  case 6:
    if (uVar5 < 3) {
      return 0xfffffffe;
    }
    uVar4 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
    lVar8 = 4;
    break;
  case 7:
    if (uVar5 < 4) {
      return 0xfffffffe;
    }
    uVar4 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if ((int)uVar4 == 0) goto switchD_00d3c41c_caseD_8;
    lVar8 = 5;
    break;
  default:
    goto switchD_00d3beb4_caseD_0;
  case 9:
  case 10:
  case 0x15:
    goto switchD_00d3c538_caseD_9;
  case 0xb:
    goto switchD_00d3c1c0_caseD_b;
  case 0x11:
    goto switchD_00d3c1c0_caseD_11;
  case 0x16:
  case 0x18:
    lVar8 = 2;
  }
  uVar4 = FUN_00d3e560(param_1,param_2 + lVar8 + -1,param_3,param_4);
  return uVar4;
switchD_00d3c1c0_caseD_11:
  pbVar7 = param_2 + 1;
  if ((long)param_3 - (long)pbVar7 < 1) {
    return 0xffffffff;
  }
  if (*pbVar7 == 0x3e) {
    uVar4 = 4;
    pbVar7 = param_2 + 2;
    goto LAB_00d3c16c;
  }
LAB_00d3c448:
  uVar4 = 0;
LAB_00d3c16c:
  *param_4 = pbVar7;
  return uVar4;
}


