// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44998
// Entry Point: 00d44998
// Size: 224 bytes
// Signature: undefined FUN_00d44998(void)


void FUN_00d44998(long param_1,byte *param_2,long param_3,long *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (1 < param_3 - (long)param_2) {
    do {
      if (*param_2 - 0xd8 < 4) {
switchD_00d44a08_caseD_7:
        param_2 = param_2 + 4;
        goto LAB_00d449bc;
      }
      if (*param_2 == 0) {
        switch(*(undefined *)(param_1 + 0x88 + (ulong)param_2[1])) {
        default:
          goto switchD_00d44a08_caseD_5;
        case 6:
          param_2 = param_2 + 3;
          break;
        case 7:
          goto switchD_00d44a08_caseD_7;
        case 9:
          pbVar1 = param_2 + 2;
          *param_4 = *param_4 + 1;
          pbVar2 = pbVar1;
          if (((1 < param_3 - (long)pbVar1) && (*pbVar1 == 0)) &&
             (pbVar2 = param_2 + 4, *(char *)(param_1 + 0x88 + (ulong)param_2[3]) != '\n')) {
            pbVar2 = pbVar1;
          }
          param_2 = pbVar2;
          param_4[1] = -1;
          break;
        case 10:
          param_2 = param_2 + 2;
          *param_4 = *param_4 + 1;
          param_4[1] = -1;
        }
      }
      else {
switchD_00d44a08_caseD_5:
        param_2 = param_2 + 2;
      }
LAB_00d449bc:
      param_4[1] = param_4[1] + 1;
    } while (1 < param_3 - (long)param_2);
  }
  return;
}


