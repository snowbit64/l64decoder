// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d455e8
// Entry Point: 00d455e8
// Size: 488 bytes
// Signature: undefined FUN_00d455e8(void)


undefined8 FUN_00d455e8(long param_1,byte *param_2,long param_3,byte **param_4)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = param_3 - (long)param_2;
  if ((long)uVar4 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  uVar5 = (uint)bVar1;
  if (bVar1 < 0xdc) {
    if (uVar5 - 0xd8 < 4) {
switchD_00d45674_caseD_7:
      if (uVar4 < 4) {
        return 0xfffffffe;
      }
    }
    else {
      if (uVar5 == 0) {
        uVar3 = (ulong)param_2[1];
        uVar2 = 0;
        switch(*(undefined *)(param_1 + uVar3 + 0x88)) {
        case 6:
          if (uVar4 < 3) {
            return 0xfffffffe;
          }
          goto LAB_00d45634;
        case 7:
          goto switchD_00d45674_caseD_7;
        default:
          goto switchD_00d45674_caseD_8;
        case 0x16:
        case 0x18:
          goto switchD_00d45674_caseD_16;
        case 0x1d:
          goto switchD_00d45674_caseD_1d;
        }
      }
LAB_00d456a0:
      uVar3 = (ulong)param_2[1];
switchD_00d45674_caseD_1d:
      if ((*(uint *)(&DAT_0054734c + (uVar3 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054784c)[bVar1] << 5))
           >> (ulong)((uint)uVar3 & 0x1f) & 1) == 0) goto LAB_00d45634;
switchD_00d45674_caseD_16:
      param_2 = param_2 + 2;
      uVar4 = param_3 - (long)param_2;
      if ((long)uVar4 < 2) {
        return 0xffffffec;
      }
      while( true ) {
        bVar1 = *param_2;
        uVar5 = (uint)bVar1;
        if (uVar5 < 0xdc) break;
        if (bVar1 == 0xff) {
          uVar3 = (ulong)param_2[1];
          if (0xfd < param_2[1]) goto LAB_00d45634;
        }
        else {
          if (bVar1 - 0xdc < 4) goto LAB_00d45634;
LAB_00d45798:
          uVar3 = (ulong)param_2[1];
        }
switchD_00d45778_caseD_1d:
        if ((*(uint *)(&DAT_0054734c +
                      (uVar3 >> 3 & 0x1c | (ulong)(byte)(&DAT_0054794c)[bVar1] << 5)) >>
             (ulong)((uint)uVar3 & 0x1f) & 1) == 0) goto LAB_00d45634;
switchD_00d45778_caseD_16:
        param_2 = param_2 + 2;
        uVar4 = uVar4 - 2;
        if ((long)uVar4 < 2) {
          return 0xffffffec;
        }
      }
      if (uVar5 == 0) {
        uVar3 = (ulong)param_2[1];
        uVar2 = 0;
        switch(*(undefined *)(param_1 + 0x88 + uVar3)) {
        case 6:
          if (uVar4 < 3) {
            return 0xfffffffe;
          }
          goto LAB_00d45634;
        case 7:
          goto switchD_00d45778_caseD_7;
        default:
          goto switchD_00d45674_caseD_8;
        case 9:
        case 10:
        case 0xb:
        case 0x15:
        case 0x1e:
        case 0x20:
        case 0x24:
          uVar2 = 0x14;
          goto switchD_00d45674_caseD_8;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_00d45778_caseD_16;
        case 0x1d:
          goto switchD_00d45778_caseD_1d;
        }
      }
      if (3 < uVar5 - 0xd8) goto LAB_00d45798;
switchD_00d45778_caseD_7:
      if (uVar4 < 4) {
        return 0xfffffffe;
      }
    }
  }
  else if (3 < uVar5 - 0xdc) {
    if (uVar5 != 0xff) goto LAB_00d456a0;
    uVar3 = (ulong)param_2[1];
    if (param_2[1] < 0xfe) goto switchD_00d45674_caseD_1d;
  }
LAB_00d45634:
  uVar2 = 0;
switchD_00d45674_caseD_8:
  *param_4 = param_2;
  return uVar2;
}


