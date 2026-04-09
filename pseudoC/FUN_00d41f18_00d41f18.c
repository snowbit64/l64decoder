// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d41f18
// Entry Point: 00d41f18
// Size: 748 bytes
// Signature: undefined FUN_00d41f18(void)


undefined8 FUN_00d41f18(long param_1,byte *param_2,long param_3,byte **param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = param_3 - (long)param_2;
  if ((long)uVar7 < 2) {
    return 0xffffffff;
  }
  bVar2 = param_2[1];
  uVar8 = (uint)bVar2;
  if (0xdb < bVar2) {
    if (3 < uVar8 - 0xdc) {
      if (uVar8 != 0xff) goto LAB_00d41fc8;
      uVar6 = (ulong)*param_2;
      if (*param_2 < 0xfe) goto switchD_00d41f9c_caseD_1d;
    }
    goto LAB_00d41f5c;
  }
  if (uVar8 - 0xd8 < 4) {
switchD_00d41f9c_caseD_7:
    if (uVar7 < 4) {
      return 0xfffffffe;
    }
    goto LAB_00d41f5c;
  }
  if (uVar8 == 0) {
    uVar6 = (ulong)*param_2;
    lVar1 = param_1 + 0x88;
    uVar3 = 0;
    pbVar5 = param_2;
    switch(*(undefined *)(lVar1 + uVar6)) {
    case 6:
      if (uVar7 < 3) {
        return 0xfffffffe;
      }
      break;
    case 7:
      goto switchD_00d41f9c_caseD_7;
    default:
      goto switchD_00d41f9c_caseD_8;
    case 0x13:
      pbVar5 = param_2 + 2;
      lVar4 = param_3 - (long)pbVar5;
      if (lVar4 < 2) {
        return 0xffffffff;
      }
      if (param_2[3] != 0) {
LAB_00d420f0:
        uVar3 = 0;
        goto switchD_00d41f9c_caseD_8;
      }
      if ((ulong)*pbVar5 == 0x78) {
        pbVar5 = param_2 + 4;
        if (param_3 - (long)pbVar5 < 2) {
          return 0xffffffff;
        }
        if ((param_2[5] != 0) || ((*(byte *)(lVar1 + (ulong)*pbVar5) & 0xfe) != 0x18)) {
          uVar3 = 0;
          goto switchD_00d41f9c_caseD_8;
        }
        param_2 = param_2 + 6;
        param_3 = param_3 - (long)param_2;
        while( true ) {
          if (param_3 < 2) {
            return 0xffffffff;
          }
          if (param_2[1] != 0) goto LAB_00d41f5c;
          if (1 < *(byte *)(lVar1 + (ulong)*param_2) - 0x18) break;
          param_2 = param_2 + 2;
          param_3 = param_3 + -2;
        }
        if (*(byte *)(lVar1 + (ulong)*param_2) == 0x12) {
          pbVar5 = param_2 + 2;
          uVar3 = 10;
          goto switchD_00d41f9c_caseD_8;
        }
      }
      else {
        if (*(char *)(lVar1 + (ulong)*pbVar5) != '\x19') goto LAB_00d420f0;
        pbVar5 = param_2 + 4;
        do {
          param_2 = pbVar5;
          lVar4 = lVar4 + -2;
          if (lVar4 < 2) {
            return 0xffffffff;
          }
          if (param_2[1] != 0) goto LAB_00d41f5c;
          pbVar5 = param_2 + 2;
        } while (*(char *)(lVar1 + (ulong)*param_2) == '\x19');
        if (*(char *)(lVar1 + (ulong)*param_2) == '\x12') {
          uVar3 = 10;
          goto switchD_00d41f9c_caseD_8;
        }
      }
      break;
    case 0x16:
    case 0x18:
      goto switchD_00d41f9c_caseD_16;
    case 0x1d:
      goto switchD_00d41f9c_caseD_1d;
    }
  }
  else {
LAB_00d41fc8:
    uVar6 = (ulong)*param_2;
switchD_00d41f9c_caseD_1d:
    if ((*(uint *)(&DAT_0054734c + (uVar6 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar2] << 5))
         >> (ulong)((uint)uVar6 & 0x1f) & 1) != 0) {
switchD_00d41f9c_caseD_16:
      pbVar5 = param_2 + 2;
      uVar7 = param_3 - (long)pbVar5;
      if ((long)uVar7 < 2) {
        return 0xffffffff;
      }
      while( true ) {
        bVar2 = pbVar5[1];
        uVar8 = (uint)bVar2;
        param_2 = pbVar5;
        if (uVar8 < 0xdc) break;
        if (bVar2 == 0xff) {
          uVar6 = (ulong)*pbVar5;
          if (0xfd < *pbVar5) goto LAB_00d41f5c;
        }
        else {
          if (bVar2 - 0xdc < 4) goto LAB_00d41f5c;
LAB_00d420c0:
          uVar6 = (ulong)*pbVar5;
        }
switchD_00d420a0_caseD_1d:
        if ((*(uint *)(&DAT_0054734c +
                      (uVar6 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar2] << 5)) >>
             (ulong)((uint)uVar6 & 0x1f) & 1) == 0) goto LAB_00d41f5c;
switchD_00d420a0_caseD_16:
        pbVar5 = pbVar5 + 2;
        uVar7 = uVar7 - 2;
        if ((long)uVar7 < 2) {
          return 0xffffffff;
        }
      }
      if (uVar8 == 0) {
        uVar6 = (ulong)*pbVar5;
        uVar3 = 0;
        switch(*(undefined *)(param_1 + 0x88 + uVar6)) {
        case 6:
          if (uVar7 < 3) {
            return 0xfffffffe;
          }
          goto LAB_00d41f5c;
        case 7:
          goto switchD_00d420a0_caseD_7;
        default:
          goto switchD_00d41f9c_caseD_8;
        case 0x12:
          pbVar5 = pbVar5 + 2;
          uVar3 = 9;
          goto switchD_00d41f9c_caseD_8;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_00d420a0_caseD_16;
        case 0x1d:
          goto switchD_00d420a0_caseD_1d;
        }
      }
      if (3 < uVar8 - 0xd8) goto LAB_00d420c0;
switchD_00d420a0_caseD_7:
      if (uVar7 < 4) {
        return 0xfffffffe;
      }
    }
  }
LAB_00d41f5c:
  uVar3 = 0;
  pbVar5 = param_2;
switchD_00d41f9c_caseD_8:
  *param_4 = pbVar5;
  return uVar3;
}


