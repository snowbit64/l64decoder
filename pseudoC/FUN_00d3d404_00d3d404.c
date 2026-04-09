// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d404
// Entry Point: 00d3d404
// Size: 212 bytes
// Signature: undefined FUN_00d3d404(void)


void FUN_00d3d404(long param_1,byte *param_2,long param_3,long *param_4)

{
  byte *pbVar1;
  char cVar2;
  
  if (0 < param_3 - (long)param_2) {
    do {
      switch(*(undefined *)(param_1 + 0x88 + (ulong)*param_2)) {
      case 5:
        param_2 = param_2 + 2;
        break;
      case 6:
        param_2 = param_2 + 3;
        break;
      case 7:
        param_2 = param_2 + 4;
        break;
      default:
        param_2 = param_2 + 1;
        break;
      case 9:
        pbVar1 = param_2 + 1;
        *param_4 = *param_4 + 1;
        if (param_3 - (long)pbVar1 < 1) {
          param_4[1] = -1;
          param_2 = pbVar1;
        }
        else {
          cVar2 = *(char *)(param_1 + 0x88 + (ulong)param_2[1]);
          param_4[1] = -1;
          param_2 = param_2 + 2;
          if (cVar2 != '\n') {
            param_2 = pbVar1;
          }
        }
        break;
      case 10:
        *param_4 = *param_4 + 1;
        param_4[1] = -1;
        param_2 = param_2 + 1;
      }
      param_4[1] = param_4[1] + 1;
    } while (0 < param_3 - (long)param_2);
  }
  return;
}


