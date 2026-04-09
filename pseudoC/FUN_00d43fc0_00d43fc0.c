// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d43fc0
// Entry Point: 00d43fc0
// Size: 312 bytes
// Signature: undefined FUN_00d43fc0(void)


undefined8 FUN_00d43fc0(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if ((long)param_3 - (long)param_2 < 2) {
    return 0xffffffff;
  }
  pbVar2 = param_2;
  do {
    if (*pbVar2 - 0xd8 < 4) {
switchD_00d44034_caseD_7:
      lVar4 = 4;
    }
    else if (*pbVar2 == 0) {
      lVar4 = 2;
      switch(*(undefined *)(param_1 + 0x88 + (ulong)pbVar2[1])) {
      case 2:
        *param_4 = pbVar2;
        return 0;
      case 3:
        if (pbVar2 == param_2) {
          uVar1 = FUN_00d459d8(param_1,param_2 + 2);
          return uVar1;
        }
        goto LAB_00d440d4;
      case 6:
        lVar4 = 3;
        break;
      case 7:
        goto switchD_00d44034_caseD_7;
      case 9:
        if (pbVar2 == param_2) {
          pbVar2 = param_2 + 2;
          if (1 < (long)param_3 - (long)pbVar2) {
            pbVar3 = pbVar2;
            if ((*pbVar2 == 0) &&
               (pbVar3 = param_2 + 4, *(char *)(param_1 + 0x88 + (ulong)param_2[3]) != '\n')) {
              pbVar3 = pbVar2;
            }
            *param_4 = pbVar3;
            return 7;
          }
          return 0xfffffffd;
        }
        goto LAB_00d440d4;
      case 10:
        if (pbVar2 == param_2) {
          *param_4 = param_2 + 2;
          return 7;
        }
        goto LAB_00d440d4;
      case 0x15:
        if (pbVar2 == param_2) {
          *param_4 = param_2 + 2;
          return 0x27;
        }
        goto LAB_00d440d4;
      }
    }
    else {
      lVar4 = 2;
    }
    pbVar2 = pbVar2 + lVar4;
  } while (1 < (long)param_3 - (long)pbVar2);
LAB_00d440d4:
  *param_4 = pbVar2;
  return 6;
}


