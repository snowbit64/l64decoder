// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d459d8
// Entry Point: 00d459d8
// Size: 752 bytes
// Signature: undefined FUN_00d459d8(void)


undefined8 FUN_00d459d8(long param_1,byte *param_2,long param_3,byte **param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = param_3 - (long)param_2;
  uVar6 = uVar9 - 2;
  if ((long)uVar9 < 2) {
    return 0xffffffff;
  }
  bVar2 = *param_2;
  uVar8 = (uint)bVar2;
  if (0xdb < bVar2) {
    if (3 < uVar8 - 0xdc) {
      if (uVar8 != 0xff) goto LAB_00d45a88;
      uVar7 = (ulong)param_2[1];
      if (param_2[1] < 0xfe) goto switchD_00d45a5c_caseD_1d;
    }
    goto LAB_00d45a1c;
  }
  if (uVar8 - 0xd8 < 4) {
switchD_00d45a5c_caseD_7:
    if (uVar9 < 4) {
      return 0xfffffffe;
    }
    goto LAB_00d45a1c;
  }
  if (uVar8 == 0) {
    uVar7 = (ulong)param_2[1];
    lVar1 = param_1 + 0x88;
    uVar3 = 0;
    pbVar4 = param_2;
    switch(*(undefined *)(lVar1 + uVar7)) {
    case 6:
      if (uVar9 < 3) {
        return 0xfffffffe;
      }
      break;
    case 7:
      goto switchD_00d45a5c_caseD_7;
    default:
      goto switchD_00d45a5c_caseD_8;
    case 0x13:
      pbVar4 = param_2 + 2;
      lVar5 = param_3 - (long)pbVar4;
      if (lVar5 < 2) {
        return 0xffffffff;
      }
      if (*pbVar4 != 0) {
LAB_00d45ba8:
        uVar3 = 0;
        goto switchD_00d45a5c_caseD_8;
      }
      if ((ulong)param_2[3] == 0x78) {
        pbVar4 = param_2 + 4;
        if (param_3 - (long)pbVar4 < 2) {
          return 0xffffffff;
        }
        if ((*pbVar4 != 0) || ((*(byte *)(lVar1 + (ulong)param_2[5]) & 0xfe) != 0x18)) {
          uVar3 = 0;
          goto switchD_00d45a5c_caseD_8;
        }
        param_2 = param_2 + 6;
        param_3 = param_3 - (long)param_2;
        while( true ) {
          if (param_3 < 2) {
            return 0xffffffff;
          }
          if (*param_2 != 0) goto LAB_00d45a1c;
          if (1 < *(byte *)(lVar1 + (ulong)param_2[1]) - 0x18) break;
          param_2 = param_2 + 2;
          param_3 = param_3 + -2;
        }
        if (*(byte *)(lVar1 + (ulong)param_2[1]) == 0x12) {
          pbVar4 = param_2 + 2;
          uVar3 = 10;
          goto switchD_00d45a5c_caseD_8;
        }
      }
      else {
        if (*(char *)(lVar1 + (ulong)param_2[3]) != '\x19') goto LAB_00d45ba8;
        pbVar4 = param_2 + 4;
        do {
          param_2 = pbVar4;
          lVar5 = lVar5 + -2;
          if (lVar5 < 2) {
            return 0xffffffff;
          }
          if (*param_2 != 0) goto LAB_00d45a1c;
          pbVar4 = param_2 + 2;
        } while (*(char *)(lVar1 + (ulong)param_2[1]) == '\x19');
        if (*(char *)(lVar1 + (ulong)param_2[1]) == '\x12') {
          uVar3 = 10;
          goto switchD_00d45a5c_caseD_8;
        }
      }
      break;
    case 0x16:
    case 0x18:
      goto switchD_00d45a5c_caseD_16;
    case 0x1d:
      goto switchD_00d45a5c_caseD_1d;
    }
  }
  else {
LAB_00d45a88:
    uVar7 = (ulong)param_2[1];
switchD_00d45a5c_caseD_1d:
    if ((*(uint *)(&DAT_0054734c + (uVar7 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar2] << 5))
         >> (ulong)((uint)uVar7 & 0x1f) & 1) != 0) {
switchD_00d45a5c_caseD_16:
      if ((long)uVar6 < 2) {
        return 0xffffffff;
      }
      pbVar4 = param_2 + 4;
LAB_00d45b28:
      bVar2 = pbVar4[-2];
      uVar8 = (uint)bVar2;
      if (0xdb < uVar8) {
        if (bVar2 == 0xff) {
          uVar9 = (ulong)pbVar4[-1];
          if (pbVar4[-1] < 0xfe) goto switchD_00d45b58_caseD_1d;
        }
        else if (3 < bVar2 - 0xdc) goto LAB_00d45b78;
        goto switchD_00d45b58_caseD_8;
      }
      if (uVar8 != 0) {
        if (3 < uVar8 - 0xd8) {
LAB_00d45b78:
          uVar9 = (ulong)pbVar4[-1];
          goto switchD_00d45b58_caseD_1d;
        }
switchD_00d45b58_caseD_7:
        if (uVar6 < 4) {
          return 0xfffffffe;
        }
        goto switchD_00d45b58_caseD_8;
      }
      uVar9 = (ulong)pbVar4[-1];
      switch(*(undefined *)(param_1 + 0x88 + uVar9)) {
      case 6:
        if (uVar6 < 3) {
          return 0xfffffffe;
        }
        break;
      case 7:
        goto switchD_00d45b58_caseD_7;
      case 0x12:
        uVar3 = 9;
        goto switchD_00d45a5c_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        goto switchD_00d45b58_caseD_16;
      case 0x1d:
switchD_00d45b58_caseD_1d:
        if ((*(uint *)(&DAT_0054734c +
                      (uVar9 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar2] << 5)) >>
             (ulong)((uint)uVar9 & 0x1f) & 1) != 0) goto switchD_00d45b58_caseD_16;
      }
switchD_00d45b58_caseD_8:
      uVar3 = 0;
      pbVar4 = pbVar4 + -2;
      goto switchD_00d45a5c_caseD_8;
    }
  }
LAB_00d45a1c:
  uVar3 = 0;
  pbVar4 = param_2;
switchD_00d45a5c_caseD_8:
  *param_4 = pbVar4;
  return uVar3;
switchD_00d45b58_caseD_16:
  uVar6 = uVar6 - 2;
  pbVar4 = pbVar4 + 2;
  if ((long)uVar6 < 2) {
    return 0xffffffff;
  }
  goto LAB_00d45b28;
}


