// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3cd68
// Entry Point: 00d3cd68
// Size: 300 bytes
// Signature: undefined FUN_00d3cd68(void)


ulong FUN_00d3cd68(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if ((long)param_3 - (long)param_2 < 1) {
    return 0xffffffff;
  }
  pbVar4 = param_2;
  do {
    lVar5 = 2;
    switch(*(undefined *)(param_1 + 0x88 + (ulong)*pbVar4)) {
    case 3:
      if (pbVar4 == param_2) {
        uVar3 = FUN_00d3e180(param_1,param_2 + 1);
        return uVar3;
      }
      goto LAB_00d3ce60;
    default:
      lVar5 = 1;
      break;
    case 5:
      break;
    case 6:
      lVar5 = 3;
      break;
    case 7:
      lVar5 = 4;
      break;
    case 9:
      if (pbVar4 == param_2) {
        if ((long)param_3 - (long)(param_2 + 1) < 1) {
          return 0xfffffffd;
        }
        uVar3 = 7;
        pbVar4 = param_2 + 2;
        if (*(char *)(param_1 + 0x88 + (ulong)param_2[1]) != '\n') {
          pbVar4 = param_2 + 1;
        }
        goto LAB_00d3ce64;
      }
      goto LAB_00d3ce60;
    case 10:
      if (pbVar4 == param_2) {
        uVar3 = 7;
        pbVar4 = param_2 + 1;
        goto LAB_00d3ce64;
      }
      goto LAB_00d3ce60;
    case 0x1e:
      if (pbVar4 == param_2) {
        uVar2 = FUN_00d3dd1c(param_1,param_2 + 1);
        uVar1 = 0;
        if (uVar2 != 0x16) {
          uVar1 = uVar2;
        }
        return (ulong)uVar1;
      }
      goto LAB_00d3ce60;
    }
    pbVar4 = pbVar4 + lVar5;
  } while (0 < (long)param_3 - (long)pbVar4);
LAB_00d3ce60:
  uVar3 = 6;
LAB_00d3ce64:
  *param_4 = pbVar4;
  return uVar3;
}


