// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d43e20
// Entry Point: 00d43e20
// Size: 416 bytes
// Signature: undefined FUN_00d43e20(void)


undefined8 FUN_00d43e20(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  if (((long)param_3 - (long)param_2 & 1U) != 0) {
    param_3 = param_2 + ((long)param_3 - (long)param_2 & 0xfffffffffffffffe);
  }
  uVar5 = (long)param_3 - (long)param_2;
  if (1 < (long)uVar5) {
    iVar3 = 0;
    do {
      bVar2 = *param_2;
      uVar4 = (uint)bVar2;
      if (0xdb < uVar4) {
        if (bVar2 == 0xff) {
          if (0xfd < param_2[1]) {
switchD_00d43ec8_caseD_0:
            *param_4 = param_2;
            return 0;
          }
        }
        else if (bVar2 - 0xdc < 4) goto switchD_00d43ec8_caseD_0;
        goto switchD_00d43ec8_caseD_3;
      }
      if (uVar4 - 0xd8 < 4) {
switchD_00d43ec8_caseD_7:
        if (uVar5 < 4) {
          return 0xfffffffe;
        }
        pbVar1 = param_2 + 4;
        goto LAB_00d43e6c;
      }
      if (uVar4 == 0) {
        switch(*(undefined *)(param_1 + 0x88 + (ulong)param_2[1])) {
        case 0:
        case 1:
        case 8:
          goto switchD_00d43ec8_caseD_0;
        case 2:
          pbVar1 = param_2 + 2;
          if ((long)param_3 - (long)pbVar1 < 2) {
            return 0xffffffff;
          }
          if ((*pbVar1 == 0) && (param_2[3] == 0x21)) {
            pbVar1 = param_2 + 4;
            if ((long)param_3 - (long)pbVar1 < 2) {
              return 0xffffffff;
            }
            if ((*pbVar1 == 0) && (param_2[5] == 0x5b)) {
              iVar3 = iVar3 + 1;
              pbVar1 = param_2 + 6;
            }
          }
          break;
        default:
          goto switchD_00d43ec8_caseD_3;
        case 4:
          pbVar1 = param_2 + 2;
          if ((long)param_3 - (long)pbVar1 < 2) {
            return 0xffffffff;
          }
          if ((*pbVar1 == 0) && (param_2[3] == 0x5d)) {
            pbVar1 = param_2 + 4;
            if ((long)param_3 - (long)pbVar1 < 2) {
              return 0xffffffff;
            }
            if ((*pbVar1 == 0) && (param_2[5] == 0x3e)) {
              if (iVar3 == 0) {
                *param_4 = param_2 + 6;
                return 0x2a;
              }
              iVar3 = iVar3 + -1;
              pbVar1 = param_2 + 6;
            }
          }
          break;
        case 6:
          if (uVar5 < 3) {
            return 0xfffffffe;
          }
          pbVar1 = param_2 + 3;
          break;
        case 7:
          goto switchD_00d43ec8_caseD_7;
        }
      }
      else {
switchD_00d43ec8_caseD_3:
        pbVar1 = param_2 + 2;
      }
LAB_00d43e6c:
      param_2 = pbVar1;
      uVar5 = (long)param_3 - (long)param_2;
    } while (1 < (long)uVar5);
  }
  return 0xffffffff;
}


