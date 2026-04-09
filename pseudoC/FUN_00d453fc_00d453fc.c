// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d453fc
// Entry Point: 00d453fc
// Size: 492 bytes
// Signature: undefined FUN_00d453fc(void)


undefined8 FUN_00d453fc(long param_1,byte *param_2,long param_3,byte **param_4)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = param_3 - (long)param_2;
  uVar3 = uVar5 - 2;
  if ((long)uVar5 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  uVar6 = (uint)bVar1;
  if (bVar1 < 0xdc) {
    if (uVar6 - 0xd8 < 4) {
switchD_00d45480_caseD_7:
      if (uVar5 < 4) {
        return 0xfffffffe;
      }
    }
    else {
      if (uVar6 == 0) {
        uVar4 = (ulong)param_2[1];
        uVar2 = 0;
        switch(*(undefined *)(param_1 + uVar4 + 0x88)) {
        case 6:
          if (uVar5 < 3) {
            return 0xfffffffe;
          }
          goto LAB_00d45440;
        case 7:
          goto switchD_00d45480_caseD_7;
        case 9:
        case 10:
        case 0x15:
        case 0x1e:
          uVar2 = 0x16;
          break;
        case 0x16:
        case 0x18:
          goto switchD_00d45480_caseD_16;
        case 0x1d:
          goto switchD_00d45480_caseD_1d;
        }
        goto switchD_00d45480_caseD_8;
      }
LAB_00d454a4:
      uVar4 = (ulong)param_2[1];
switchD_00d45480_caseD_1d:
      if ((*(uint *)(&DAT_0054734c + (uVar4 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar1] << 5))
           >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0) {
switchD_00d45480_caseD_16:
        if ((long)uVar3 < 2) {
          return 0xffffffff;
        }
        param_2 = param_2 + 4;
LAB_00d4554c:
        bVar1 = param_2[-2];
        uVar6 = (uint)bVar1;
        if (0xdb < uVar6) {
          if (bVar1 == 0xff) {
            uVar5 = (ulong)param_2[-1];
            if (param_2[-1] < 0xfe) goto switchD_00d4557c_caseD_1d;
          }
          else if (3 < bVar1 - 0xdc) goto LAB_00d4559c;
          goto switchD_00d4557c_caseD_8;
        }
        if (uVar6 != 0) {
          if (3 < uVar6 - 0xd8) {
LAB_00d4559c:
            uVar5 = (ulong)param_2[-1];
            goto switchD_00d4557c_caseD_1d;
          }
switchD_00d4557c_caseD_7:
          if (uVar3 < 4) {
            return 0xfffffffe;
          }
          goto switchD_00d4557c_caseD_8;
        }
        uVar5 = (ulong)param_2[-1];
        switch(*(undefined *)(param_1 + 0x88 + uVar5)) {
        case 6:
          if (uVar3 < 3) {
            return 0xfffffffe;
          }
          break;
        case 7:
          goto switchD_00d4557c_caseD_7;
        case 0x12:
          uVar2 = 0x1c;
          goto switchD_00d45480_caseD_8;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_00d4557c_caseD_16;
        case 0x1d:
switchD_00d4557c_caseD_1d:
          if ((*(uint *)(&DAT_0054734c +
                        (uVar5 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar1] << 5)) >>
               (ulong)((uint)uVar5 & 0x1f) & 1) != 0) goto switchD_00d4557c_caseD_16;
        }
switchD_00d4557c_caseD_8:
        uVar2 = 0;
        param_2 = param_2 + -2;
        goto switchD_00d45480_caseD_8;
      }
    }
  }
  else if (3 < uVar6 - 0xdc) {
    if (uVar6 != 0xff) goto LAB_00d454a4;
    uVar4 = (ulong)param_2[1];
    if (param_2[1] < 0xfe) goto switchD_00d45480_caseD_1d;
  }
LAB_00d45440:
  uVar2 = 0;
switchD_00d45480_caseD_8:
  *param_4 = param_2;
  return uVar2;
switchD_00d4557c_caseD_16:
  uVar3 = uVar3 - 2;
  param_2 = param_2 + 2;
  if ((long)uVar3 < 2) {
    return 0xffffffff;
  }
  goto LAB_00d4554c;
}


