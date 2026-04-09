// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3cc4c
// Entry Point: 00d3cc4c
// Size: 284 bytes
// Signature: undefined FUN_00d3cc4c(void)


undefined8 FUN_00d3cc4c(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  long lVar3;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if ((long)param_3 - (long)param_2 < 1) {
    return 0xffffffff;
  }
  pbVar2 = param_2;
  do {
    lVar3 = 2;
    switch(*(undefined *)(param_1 + 0x88 + (ulong)*pbVar2)) {
    case 2:
      *param_4 = pbVar2;
      return 0;
    case 3:
      if (pbVar2 == param_2) {
        uVar1 = FUN_00d3e180(param_1,param_2 + 1);
        return uVar1;
      }
      goto LAB_00d3cd44;
    default:
      lVar3 = 1;
      break;
    case 5:
      break;
    case 6:
      lVar3 = 3;
      break;
    case 7:
      lVar3 = 4;
      break;
    case 9:
      if (pbVar2 == param_2) {
        if (0 < (long)param_3 - (long)(param_2 + 1)) {
          pbVar2 = param_2 + 2;
          if (*(char *)(param_1 + 0x88 + (ulong)param_2[1]) != '\n') {
            pbVar2 = param_2 + 1;
          }
          *param_4 = pbVar2;
          return 7;
        }
        return 0xfffffffd;
      }
      goto LAB_00d3cd44;
    case 10:
      if (pbVar2 == param_2) {
        *param_4 = param_2 + 1;
        return 7;
      }
      goto LAB_00d3cd44;
    case 0x15:
      if (pbVar2 == param_2) {
        *param_4 = param_2 + 1;
        return 0x27;
      }
      goto LAB_00d3cd44;
    }
    pbVar2 = pbVar2 + lVar3;
  } while (0 < (long)param_3 - (long)pbVar2);
LAB_00d3cd44:
  *param_4 = pbVar2;
  return 6;
}


