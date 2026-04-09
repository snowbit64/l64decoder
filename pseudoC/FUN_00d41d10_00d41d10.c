// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d41d10
// Entry Point: 00d41d10
// Size: 348 bytes
// Signature: undefined FUN_00d41d10(void)


undefined4 FUN_00d41d10(long param_1,byte *param_2,long param_3,byte **param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_3 - (long)param_2 < 2) {
    return 0xffffffff;
  }
  if ((param_2[1] != 0) || (*param_2 != 0x2d)) {
LAB_00d41e3c:
    uVar4 = 0;
    pbVar3 = param_2;
switchD_00d41dc8_caseD_0:
    *param_4 = pbVar3;
    return uVar4;
  }
  param_2 = param_2 + 2;
  uVar5 = param_3 - (long)param_2;
  if ((long)uVar5 < 2) {
    return 0xffffffff;
  }
LAB_00d41d7c:
  bVar2 = param_2[1];
  uVar6 = (uint)bVar2;
  if (uVar6 < 0xdc) {
    if (uVar6 - 0xd8 < 4) {
switchD_00d41dc8_caseD_7:
      if (uVar5 < 4) {
        return 0xfffffffe;
      }
      pbVar3 = param_2 + 4;
      goto LAB_00d41d68;
    }
    if (uVar6 == 0) {
      uVar4 = 0;
      pbVar3 = param_2;
      switch(*(undefined *)(param_1 + 0x88 + (ulong)*param_2)) {
      case 0:
      case 1:
      case 8:
        goto switchD_00d41dc8_caseD_0;
      default:
        goto switchD_00d41dc8_caseD_2;
      case 6:
        if (uVar5 < 3) {
          return 0xfffffffe;
        }
        pbVar3 = param_2 + 3;
        break;
      case 7:
        goto switchD_00d41dc8_caseD_7;
      case 0x1b:
        pbVar3 = param_2 + 2;
        if (param_3 - (long)pbVar3 < 2) {
          return 0xffffffff;
        }
        if ((param_2[3] == 0) && (*pbVar3 == 0x2d)) {
          pbVar1 = param_2 + 4;
          if (param_3 - (long)pbVar1 < 2) {
            return 0xffffffff;
          }
          if (param_2[5] == 0) {
            pbVar3 = param_2 + 6;
            if (param_2[4] != 0x3e) {
              pbVar3 = pbVar1;
            }
            uVar4 = 0xd;
            if (param_2[4] != 0x3e) {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 0;
            pbVar3 = pbVar1;
          }
          goto switchD_00d41dc8_caseD_0;
        }
      }
      goto LAB_00d41d68;
    }
  }
  else {
    if (bVar2 != 0xff) {
      if (3 < bVar2 - 0xdc) goto switchD_00d41dc8_caseD_2;
      goto LAB_00d41e3c;
    }
    if (0xfd < *param_2) goto LAB_00d41e3c;
  }
switchD_00d41dc8_caseD_2:
  pbVar3 = param_2 + 2;
LAB_00d41d68:
  param_2 = pbVar3;
  uVar5 = param_3 - (long)param_2;
  if ((long)uVar5 < 2) {
    return 0xffffffff;
  }
  goto LAB_00d41d7c;
}


