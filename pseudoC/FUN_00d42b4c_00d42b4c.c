// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d42b4c
// Entry Point: 00d42b4c
// Size: 1616 bytes
// Signature: undefined FUN_00d42b4c(void)


ulong FUN_00d42b4c(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  uVar7 = (long)param_3 - (long)param_2;
  uVar9 = uVar7 & 0xfffffffffffffffe;
  if (uVar9 != 0 && (uVar7 & 1) != 0) {
    param_3 = param_2 + uVar9;
  }
  if (((uVar7 & 1) != 0) && (uVar9 == 0)) {
    return 0xffffffff;
  }
  bVar3 = *param_2;
  uVar6 = (uint)bVar3;
  if (0xdb < bVar3) {
    if (uVar6 - 0xdc < 4) goto switchD_00d42c04_caseD_3;
    if (uVar6 == 0xff) {
      uVar9 = (ulong)param_2[1];
      if (0xfd < param_2[1]) goto switchD_00d42c04_caseD_3;
    }
    else {
LAB_00d42c4c:
      uVar9 = (ulong)param_2[1];
    }
switchD_00d42c04_caseD_1d:
    uVar6 = 1 << (ulong)((uint)uVar9 & 0x1f);
    if ((uVar6 & *(uint *)(&DAT_0054734c +
                          ((uVar9 >> 5) << 2 | (ulong)(byte)(&DAT_0054784c)[bVar3] << 5))) != 0) {
switchD_00d42c04_caseD_16:
      uVar9 = 0x12;
      goto joined_r0x00d42c98;
    }
    if ((*(uint *)(&DAT_0054734c + ((uVar9 >> 5) << 2 | (ulong)(byte)(&DAT_0054794c)[bVar3] << 5)) &
        uVar6) == 0) goto switchD_00d42c04_caseD_3;
switchD_00d42c04_caseD_17:
    uVar9 = 0x13;
joined_r0x00d42c98:
    uVar7 = (long)param_3 - (long)(param_2 + 2);
    if ((long)uVar7 < 2) {
LAB_00d42e58:
      return (ulong)(uint)-(int)uVar9;
    }
    param_2 = param_2 + 2;
LAB_00d42cfc:
    bVar3 = *param_2;
    uVar6 = (uint)bVar3;
    if (0xdb < bVar3) {
      if (uVar6 == 0xff) {
        uVar10 = (ulong)param_2[1];
        if (0xfd < param_2[1]) goto switchD_00d42d2c_caseD_5;
      }
      else {
        if (uVar6 - 0xdc < 4) goto switchD_00d42d2c_caseD_5;
LAB_00d42da4:
        uVar10 = (ulong)param_2[1];
      }
switchD_00d42d2c_caseD_1d:
      if ((*(uint *)(&DAT_0054734c + (uVar10 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar3] << 5)
                    ) >> (ulong)((uint)uVar10 & 0x1f) & 1) == 0) goto switchD_00d42d2c_caseD_5;
switchD_00d42d2c_caseD_16:
      pbVar2 = param_2 + 2;
      goto switchD_00d42e04_caseD_8;
    }
    if (uVar6 != 0) {
      if (3 < uVar6 - 0xd8) goto LAB_00d42da4;
switchD_00d42d2c_caseD_7:
      if (uVar7 < 4) {
        return 0xfffffffe;
      }
      goto switchD_00d42d2c_caseD_5;
    }
    uVar10 = (ulong)param_2[1];
    iVar5 = (int)uVar9;
    switch(*(undefined *)(param_1 + 0x88 + uVar10)) {
    case 6:
      if (uVar7 < 3) {
        return 0xfffffffe;
      }
      break;
    case 7:
      goto switchD_00d42d2c_caseD_7;
    case 9:
    case 10:
    case 0xb:
    case 0x14:
    case 0x15:
    case 0x1e:
    case 0x20:
    case 0x23:
    case 0x24:
      *param_4 = param_2;
      return uVar9;
    case 0xf:
      if (iVar5 != 0x13) {
        *param_4 = param_2 + 2;
        return 0x1e;
      }
      break;
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      goto switchD_00d42d2c_caseD_16;
    case 0x17:
      pbVar2 = param_2 + 2;
      if (iVar5 == 0x29) {
LAB_00d42d68:
        uVar9 = 0x13;
      }
      else if (iVar5 == 0x12) {
        uVar7 = (long)param_3 - (long)pbVar2;
        if ((long)uVar7 < 2) {
          return 0xffffffff;
        }
        bVar3 = *pbVar2;
        uVar6 = (uint)bVar3;
        if (0xdb < bVar3) {
          if (3 < uVar6 - 0xdc) {
            if (uVar6 != 0xff) goto LAB_00d42e2c;
            uVar10 = (ulong)param_2[3];
            if (param_2[3] < 0xfe) goto switchD_00d42e04_caseD_1d;
          }
          goto LAB_00d42d68;
        }
        if (uVar6 == 0) {
          uVar10 = (ulong)param_2[3];
          uVar9 = 0x13;
          switch(*(undefined *)(param_1 + 0x88 + uVar10)) {
          case 5:
            break;
          case 6:
            if (uVar7 < 3) {
              return 0xfffffffe;
            }
            break;
          case 7:
            goto switchD_00d42e04_caseD_7;
          default:
            goto switchD_00d42e04_caseD_8;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
            goto switchD_00d42e04_caseD_16;
          case 0x1d:
            goto switchD_00d42e04_caseD_1d;
          }
        }
        else {
          if (3 < uVar6 - 0xd8) {
LAB_00d42e2c:
            uVar10 = (ulong)param_2[3];
switchD_00d42e04_caseD_1d:
            if ((*(uint *)(&DAT_0054734c +
                          (uVar10 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar3] << 5)) >>
                 (ulong)((uint)uVar10 & 0x1f) & 1) == 0) goto switchD_00d42e04_caseD_5;
switchD_00d42e04_caseD_16:
            uVar9 = 0x29;
            pbVar2 = param_2 + 4;
            goto switchD_00d42e04_caseD_8;
          }
switchD_00d42e04_caseD_7:
          if (uVar7 < 4) {
            return 0xfffffffe;
          }
        }
switchD_00d42e04_caseD_5:
        *param_4 = pbVar2;
        return 0;
      }
switchD_00d42e04_caseD_8:
      param_2 = pbVar2;
      uVar7 = (long)param_3 - (long)param_2;
      if ((long)uVar7 < 2) goto LAB_00d42e58;
      goto LAB_00d42cfc;
    case 0x1d:
      goto switchD_00d42d2c_caseD_1d;
    case 0x21:
      if (iVar5 != 0x13) {
        *param_4 = param_2 + 2;
        return 0x1f;
      }
      break;
    case 0x22:
      if (iVar5 != 0x13) {
        *param_4 = param_2 + 2;
        return 0x20;
      }
    }
switchD_00d42d2c_caseD_5:
    *param_4 = param_2;
    return 0;
  }
  if (uVar6 - 0xd8 < 4) {
switchD_00d42c04_caseD_7:
    if ((long)param_3 - (long)param_2 < 4) {
      return 0xfffffffe;
    }
  }
  else {
    if (uVar6 != 0) goto LAB_00d42c4c;
    uVar9 = (ulong)param_2[1];
    lVar1 = param_1 + 0x88;
    switch(*(undefined *)(lVar1 + uVar9)) {
    case 2:
      pbVar2 = param_2 + 2;
      if ((long)param_3 - (long)pbVar2 < 2) {
        return 0xffffffff;
      }
      bVar3 = *pbVar2;
      if (3 < bVar3 - 0xdc) {
        if (bVar3 == 0) {
          if (*(byte *)(lVar1 + (ulong)param_2[3]) < 0x1e) {
            uVar6 = (uint)*(byte *)(lVar1 + (ulong)param_2[3]);
            if ((1 << (ulong)(uVar6 & 0x1f) & 0x214000e0U) != 0) goto LAB_00d43108;
            if (uVar6 == 0xf) {
              uVar9 = FUN_00d44fcc(param_1,param_2 + 4,param_3,param_4);
              return uVar9;
            }
            if (uVar6 == 0x10) {
              uVar9 = FUN_00d44ea0(param_1,param_2 + 4,param_3,param_4);
              return uVar9;
            }
          }
        }
        else if ((bVar3 != 0xff) || (param_2[3] < 0xfe)) {
LAB_00d43108:
          *param_4 = param_2;
          return 0x1d;
        }
      }
      *param_4 = pbVar2;
      return 0;
    case 4:
      pbVar2 = param_2 + 2;
      if ((long)param_3 - (long)pbVar2 < 2) {
        return 0xffffffe6;
      }
      if ((*pbVar2 == 0) && (param_2[3] == 0x5d)) {
        if ((ulong)((long)param_3 - (long)pbVar2) < 4) {
          return 0xffffffff;
        }
        if ((param_2[4] == 0) && (param_2[5] == 0x3e)) {
          *param_4 = param_2 + 6;
          return 0x22;
        }
      }
      *param_4 = pbVar2;
      return 0x1a;
    case 5:
      if ((long)param_3 - (long)param_2 < 2) {
        return 0xfffffffe;
      }
      break;
    case 6:
      if ((long)param_3 - (long)param_2 < 3) {
        return 0xfffffffe;
      }
      break;
    case 7:
      goto switchD_00d42c04_caseD_7;
    case 9:
      if (param_2 + 2 == param_3) {
        *param_4 = param_3;
        return 0xfffffff1;
      }
    case 10:
    case 0x15:
      param_2 = param_2 + 2;
      lVar8 = (long)param_3 - (long)param_2;
      for (; ((1 < lVar8 && (*param_2 == 0)) &&
             ((cVar4 = *(char *)(lVar1 + (ulong)param_2[1]), cVar4 == '\x15' || cVar4 == '\n' ||
              (cVar4 == '\t' && param_2 + 2 != param_3)))); param_2 = param_2 + 2) {
        lVar8 = lVar8 + -2;
      }
      *param_4 = param_2;
      return 0xf;
    case 0xb:
      *param_4 = param_2 + 2;
      return 0x11;
    case 0xc:
      uVar9 = FUN_00d44d6c(0xc,param_1,param_2 + 2);
      return uVar9;
    case 0xd:
      uVar9 = FUN_00d44d6c(0xd,param_1,param_2 + 2);
      return uVar9;
    case 0x13:
      uVar9 = FUN_00d455e8(param_1,param_2 + 2,param_3,param_4);
      return uVar9;
    case 0x14:
      *param_4 = param_2 + 2;
      return 0x19;
    case 0x16:
    case 0x18:
      goto switchD_00d42c04_caseD_16;
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
      goto switchD_00d42c04_caseD_17;
    case 0x1d:
      goto switchD_00d42c04_caseD_1d;
    case 0x1e:
      uVar9 = FUN_00d453fc(param_1,param_2 + 2,param_3,param_4);
      return uVar9;
    case 0x1f:
      *param_4 = param_2 + 2;
      return 0x17;
    case 0x20:
      pbVar2 = param_2 + 2;
      if ((long)param_3 - (long)pbVar2 < 2) {
        return 0xffffffe8;
      }
      if (*pbVar2 == 0) {
        switch(*(undefined *)(lVar1 + (ulong)param_2[3])) {
        case 9:
        case 10:
        case 0xb:
        case 0x15:
        case 0x20:
        case 0x23:
        case 0x24:
          *param_4 = pbVar2;
          return 0x18;
        case 0xf:
          *param_4 = param_2 + 4;
          return 0x23;
        case 0x21:
          *param_4 = param_2 + 4;
          return 0x24;
        case 0x22:
          *param_4 = param_2 + 4;
          return 0x25;
        }
      }
      *param_4 = pbVar2;
      return 0;
    case 0x23:
      *param_4 = param_2 + 2;
      return 0x26;
    case 0x24:
      *param_4 = param_2 + 2;
      return 0x15;
    }
  }
switchD_00d42c04_caseD_3:
  *param_4 = param_2;
  return 0;
}


