// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d4063c
// Entry Point: 00d4063c
// Size: 328 bytes
// Signature: undefined FUN_00d4063c(void)


ulong FUN_00d4063c(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if ((long)param_3 - (long)param_2 < 2) {
    return 0xffffffff;
  }
  pbVar5 = param_2;
  do {
    if (pbVar5[1] - 0xd8 < 4) {
switchD_00d406b8_caseD_7:
      lVar6 = 4;
    }
    else if (pbVar5[1] == 0) {
      lVar6 = 2;
      switch(*(undefined *)(param_1 + 0x88 + (ulong)*pbVar5)) {
      case 3:
        if (pbVar5 == param_2) {
          uVar4 = FUN_00d41f18(param_1,param_2 + 2);
          return uVar4;
        }
        goto LAB_00d40750;
      case 6:
        lVar6 = 3;
        break;
      case 7:
        goto switchD_00d406b8_caseD_7;
      case 9:
        if (pbVar5 == param_2) {
          pbVar1 = param_2 + 2;
          if ((long)param_3 - (long)pbVar1 < 2) {
            return 0xfffffffd;
          }
          pbVar5 = pbVar1;
          if ((param_2[3] == 0) &&
             (pbVar5 = param_2 + 4, *(char *)(param_1 + 0x88 + (ulong)param_2[2]) != '\n')) {
            pbVar5 = pbVar1;
          }
          uVar4 = 7;
          goto LAB_00d40754;
        }
        goto LAB_00d40750;
      case 10:
        if (pbVar5 == param_2) {
          pbVar5 = param_2 + 2;
          uVar4 = 7;
          goto LAB_00d40754;
        }
        goto LAB_00d40750;
      case 0x1e:
        if (pbVar5 == param_2) {
          uVar3 = FUN_00d4193c(param_1,param_2 + 2);
          uVar2 = 0;
          if (uVar3 != 0x16) {
            uVar2 = uVar3;
          }
          return (ulong)uVar2;
        }
        goto LAB_00d40750;
      }
    }
    else {
      lVar6 = 2;
    }
    pbVar5 = pbVar5 + lVar6;
  } while (1 < (long)param_3 - (long)pbVar5);
LAB_00d40750:
  uVar4 = 6;
LAB_00d40754:
  *param_4 = pbVar5;
  return uVar4;
}


