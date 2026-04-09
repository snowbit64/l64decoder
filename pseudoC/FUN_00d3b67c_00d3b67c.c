// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3b67c
// Entry Point: 00d3b67c
// Size: 2012 bytes
// Signature: undefined FUN_00d3b67c(void)


ulong FUN_00d3b67c(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar1 = param_1 + 0x88;
  uVar12 = 0x12;
  lVar7 = 1;
  switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
  case 2:
    if (0 < (long)param_3 - (long)(param_2 + 1)) {
      bVar2 = *(byte *)(lVar1 + (ulong)param_2[1]);
      if (bVar2 < 0x1e) {
        uVar11 = (uint)bVar2;
        if ((1 << (ulong)(uVar11 & 0x1f) & 0x214000e0U) != 0) {
          *param_4 = param_2;
          return 0x1d;
        }
        if (uVar11 == 0xf) {
          uVar12 = FUN_00d3d964(param_1,param_2 + 2,param_3,param_4);
          return uVar12;
        }
        if (uVar11 == 0x10) {
          uVar12 = FUN_00d3d84c(param_1,param_2 + 2,param_3,param_4);
          return uVar12;
        }
      }
switchD_00d3bb38_caseD_c:
      *param_4 = param_2 + 1;
      return 0;
    }
    goto LAB_00d3bb78;
  default:
switchD_00d3b6e4_caseD_3:
    uVar12 = 0;
    *param_4 = param_2;
    break;
  case 4:
    pbVar8 = param_2 + 1;
    if ((long)param_3 - (long)pbVar8 < 1) {
      return 0xffffffe6;
    }
    if (*pbVar8 == 0x5d) {
      if ((ulong)((long)param_3 - (long)pbVar8) < 2) goto LAB_00d3bb78;
      if (param_2[2] == 0x3e) {
        *param_4 = param_2 + 3;
        return 0x22;
      }
    }
    uVar12 = 0x1a;
    *param_4 = pbVar8;
    break;
  case 5:
    if ((long)param_3 - (long)param_2 < 2) {
      return 0xfffffffe;
    }
    iVar5 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
    if (iVar5 == 0) {
      iVar5 = (**(code **)(param_1 + 0x188))(param_1,param_2);
      if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
      uVar12 = 0x13;
      lVar7 = 2;
    }
    else {
      uVar12 = 0x12;
      lVar7 = 2;
    }
  case 0x16:
  case 0x18:
switchD_00d3b6e4_caseD_16:
    iVar5 = (int)uVar12;
    param_2 = param_2 + lVar7;
    while (uVar9 = (long)param_3 - (long)param_2, 0 < (long)uVar9) {
      iVar5 = (int)uVar12;
      switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
      case 5:
        if (uVar9 < 2) {
          return 0xfffffffe;
        }
        iVar5 = (**(code **)(param_1 + 0x188))(param_1,param_2);
        if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
        pbVar8 = param_2 + 2;
        break;
      case 6:
        if (uVar9 < 3) {
          return 0xfffffffe;
        }
        iVar5 = (**(code **)(param_1 + 400))(param_1,param_2);
        if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
        pbVar8 = param_2 + 3;
        break;
      case 7:
        if (uVar9 < 4) {
          return 0xfffffffe;
        }
        iVar5 = (**(code **)(param_1 + 0x198))(param_1,param_2);
        if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
        pbVar8 = param_2 + 4;
        break;
      default:
        goto switchD_00d3b6e4_caseD_3;
      case 9:
      case 10:
      case 0xb:
      case 0x14:
      case 0x15:
      case 0x1e:
      case 0x20:
      case 0x23:
      case 0x24:
        goto switchD_00d3b76c_caseD_9;
      case 0xf:
        if (iVar5 != 0x13) {
          *param_4 = param_2 + 1;
          return 0x1e;
        }
        goto switchD_00d3b6e4_caseD_3;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        pbVar8 = param_2 + 1;
        break;
      case 0x17:
        pbVar8 = param_2 + 1;
        if (iVar5 == 0x29) {
          uVar12 = 0x13;
        }
        else if (iVar5 == 0x12) {
          uVar9 = (long)param_3 - (long)pbVar8;
          if ((long)uVar9 < 1) goto LAB_00d3bb78;
          uVar12 = 0x13;
          switch(*(undefined *)(lVar1 + (ulong)*pbVar8)) {
          case 5:
            if (uVar9 < 2) {
              return 0xfffffffe;
            }
            iVar5 = (**(code **)(param_1 + 0x188))(param_1,pbVar8);
            if (iVar5 == 0) goto switchD_00d3b820_caseD_1d;
            pbVar8 = param_2 + 3;
            uVar12 = 0x29;
            break;
          case 6:
            if (uVar9 < 3) {
              return 0xfffffffe;
            }
            iVar5 = (**(code **)(param_1 + 400))(param_1,pbVar8);
            if (iVar5 == 0) goto switchD_00d3b820_caseD_1d;
            pbVar8 = param_2 + 4;
            uVar12 = 0x29;
            break;
          case 7:
            if (uVar9 < 4) {
              return 0xfffffffe;
            }
            iVar5 = (**(code **)(param_1 + 0x198))(param_1,pbVar8);
            if (iVar5 == 0) goto switchD_00d3b820_caseD_1d;
            pbVar8 = param_2 + 5;
            uVar12 = 0x29;
            break;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
            pbVar8 = param_2 + 2;
            uVar12 = 0x29;
            break;
          case 0x1d:
switchD_00d3b820_caseD_1d:
            *param_4 = pbVar8;
            return 0;
          }
        }
        break;
      case 0x21:
        if (iVar5 != 0x13) {
          *param_4 = param_2 + 1;
          return 0x1f;
        }
        goto switchD_00d3b6e4_caseD_3;
      case 0x22:
        if (iVar5 != 0x13) {
          *param_4 = param_2 + 1;
          return 0x20;
        }
        goto switchD_00d3b6e4_caseD_3;
      }
      iVar5 = (int)uVar12;
      param_2 = pbVar8;
    }
    uVar12 = (ulong)(uint)-iVar5;
    break;
  case 6:
    if ((long)param_3 - (long)param_2 < 3) {
      return 0xfffffffe;
    }
    iVar5 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if (iVar5 == 0) {
      iVar5 = (**(code **)(param_1 + 400))(param_1,param_2);
      if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
      uVar12 = 0x13;
      lVar7 = 3;
    }
    else {
      uVar12 = 0x12;
      lVar7 = 3;
    }
    goto switchD_00d3b6e4_caseD_16;
  case 7:
    if ((long)param_3 - (long)param_2 < 4) {
      return 0xfffffffe;
    }
    iVar5 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if (iVar5 == 0) {
      iVar5 = (**(code **)(param_1 + 0x198))(param_1,param_2);
      if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
      uVar12 = 0x13;
      lVar7 = 4;
    }
    else {
      uVar12 = 0x12;
      lVar7 = 4;
    }
    goto switchD_00d3b6e4_caseD_16;
  case 9:
    if (param_2 + 1 == param_3) {
      *param_4 = param_3;
      return 0xfffffff1;
    }
  case 10:
  case 0x15:
    pbVar8 = param_2 + 1;
    lVar7 = (long)param_3 - (long)pbVar8;
    pbVar10 = pbVar8;
    if (0 < lVar7) {
      lVar4 = lVar7 + 1;
      do {
        cVar3 = *(char *)(lVar1 + (ulong)*pbVar8);
        if ((cVar3 != '\x15' && cVar3 != '\n') &&
           (pbVar10 = pbVar8, cVar3 != '\t' || pbVar8 + 1 == param_3)) break;
        pbVar8 = pbVar8 + 1;
        lVar7 = lVar7 + -1;
        pbVar10 = param_2 + lVar4;
      } while (0 < lVar7);
    }
    uVar12 = 0xf;
    *param_4 = pbVar10;
    break;
  case 0xb:
    uVar12 = 0x11;
    *param_4 = param_2 + 1;
    break;
  case 0xc:
    uVar6 = 0xc;
    goto LAB_00d3ba2c;
  case 0xd:
    uVar6 = 0xd;
LAB_00d3ba2c:
    uVar12 = FUN_00d3d674(uVar6,param_1,param_2 + 1,param_3,param_4);
    return uVar12;
  case 0x13:
    param_2 = param_2 + 1;
    uVar9 = (long)param_3 - (long)param_2;
    if (0 < (long)uVar9) {
      uVar12 = 0;
      lVar7 = 1;
      switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
      case 5:
        if (uVar9 < 2) {
          return 0xfffffffe;
        }
        iVar5 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
        if (iVar5 != 0) {
          lVar7 = 2;
          goto switchD_00d3ba94_caseD_16;
        }
        break;
      case 6:
        if (uVar9 < 3) {
          return 0xfffffffe;
        }
        iVar5 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
        if (iVar5 != 0) {
          lVar7 = 3;
          goto switchD_00d3ba94_caseD_16;
        }
        break;
      case 7:
        if (uVar9 < 4) {
          return 0xfffffffe;
        }
        iVar5 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
        if (iVar5 != 0) {
          lVar7 = 4;
          goto switchD_00d3ba94_caseD_16;
        }
        break;
      default:
switchD_00d3b76c_caseD_9:
        *param_4 = param_2;
        return uVar12;
      case 0x16:
      case 0x18:
switchD_00d3ba94_caseD_16:
        param_2 = param_2 + lVar7;
        uVar9 = (long)param_3 - (long)param_2;
        if ((long)uVar9 < 1) {
          return 0xffffffec;
        }
        do {
          uVar12 = 0;
          lVar7 = 1;
          switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
          case 5:
            if (uVar9 < 2) {
              return 0xfffffffe;
            }
            iVar5 = (**(code **)(param_1 + 0x188))(param_1,param_2);
            if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
            lVar7 = 2;
            break;
          case 6:
            if (uVar9 < 3) {
              return 0xfffffffe;
            }
            iVar5 = (**(code **)(param_1 + 400))(param_1,param_2);
            if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
            lVar7 = 3;
            break;
          case 7:
            if (uVar9 < 4) {
              return 0xfffffffe;
            }
            iVar5 = (**(code **)(param_1 + 0x198))(param_1,param_2);
            if (iVar5 == 0) goto switchD_00d3b6e4_caseD_3;
            lVar7 = 4;
            break;
          default:
            goto switchD_00d3b76c_caseD_9;
          case 9:
          case 10:
          case 0xb:
          case 0x15:
          case 0x1e:
          case 0x20:
          case 0x24:
            uVar12 = 0x14;
            goto switchD_00d3b76c_caseD_9;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
            break;
          }
          param_2 = param_2 + lVar7;
          uVar9 = (long)param_3 - (long)param_2;
          if ((long)uVar9 < 1) {
            return 0xffffffec;
          }
        } while( true );
      }
      goto switchD_00d3b6e4_caseD_3;
    }
LAB_00d3bb78:
    uVar12 = 0xffffffff;
    break;
  case 0x14:
    uVar12 = 0x19;
    *param_4 = param_2 + 1;
    break;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
    uVar12 = 0x13;
    lVar7 = 1;
    goto switchD_00d3b6e4_caseD_16;
  case 0x1e:
    uVar12 = FUN_00d3dd1c(param_1,param_2 + 1,param_3,param_4);
    return uVar12;
  case 0x1f:
    uVar12 = 0x17;
    *param_4 = param_2 + 1;
    break;
  case 0x20:
    pbVar8 = param_2 + 1;
    if ((long)param_3 - (long)pbVar8 < 1) {
      return 0xffffffe8;
    }
    switch(*(undefined *)(lVar1 + (ulong)*pbVar8)) {
    case 9:
    case 10:
    case 0xb:
    case 0x15:
    case 0x20:
    case 0x23:
    case 0x24:
      uVar12 = 0x18;
      *param_4 = pbVar8;
      break;
    default:
      goto switchD_00d3bb38_caseD_c;
    case 0xf:
      uVar12 = 0x23;
      *param_4 = param_2 + 2;
      break;
    case 0x21:
      uVar12 = 0x24;
      *param_4 = param_2 + 2;
      break;
    case 0x22:
      uVar12 = 0x25;
      *param_4 = param_2 + 2;
    }
    break;
  case 0x23:
    uVar12 = 0x26;
    *param_4 = param_2 + 1;
    break;
  case 0x24:
    uVar12 = 0x15;
    *param_4 = param_2 + 1;
  }
  return uVar12;
}


