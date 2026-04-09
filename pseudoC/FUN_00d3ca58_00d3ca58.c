// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3ca58
// Entry Point: 00d3ca58
// Size: 500 bytes
// Signature: undefined FUN_00d3ca58(void)


undefined8 FUN_00d3ca58(long param_1,byte *param_2,long param_3,byte **param_4)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = param_3 - (long)param_2;
  if (0 < (long)uVar3) {
    iVar4 = 0;
    do {
      switch(*(undefined *)(param_1 + 0x88 + (ulong)*param_2)) {
      case 0:
      case 1:
      case 8:
switchD_00d3cad4_caseD_0:
        *param_4 = param_2;
        return 0;
      case 2:
        pbVar2 = param_2 + 1;
        if (param_3 - (long)pbVar2 < 1) {
          return 0xffffffff;
        }
        if (*pbVar2 == 0x21) {
          pbVar2 = param_2 + 2;
          if (param_3 - (long)pbVar2 < 1) {
            return 0xffffffff;
          }
          if (*pbVar2 == 0x5b) {
            iVar4 = iVar4 + 1;
            pbVar2 = param_2 + 3;
          }
        }
        break;
      default:
        pbVar2 = param_2 + 1;
        break;
      case 4:
        pbVar2 = param_2 + 1;
        if (param_3 - (long)pbVar2 < 1) {
          return 0xffffffff;
        }
        if (*pbVar2 == 0x5d) {
          pbVar2 = param_2 + 2;
          if (param_3 - (long)pbVar2 < 1) {
            return 0xffffffff;
          }
          if (*pbVar2 == 0x3e) {
            pbVar2 = param_2 + 3;
            if (iVar4 == 0) {
              *param_4 = pbVar2;
              return 0x2a;
            }
            iVar4 = iVar4 + -1;
          }
        }
        break;
      case 5:
        if (uVar3 < 2) {
          return 0xfffffffe;
        }
        iVar1 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
        if (iVar1 != 0) goto switchD_00d3cad4_caseD_0;
        pbVar2 = param_2 + 2;
        break;
      case 6:
        if (uVar3 < 3) {
          return 0xfffffffe;
        }
        iVar1 = (**(code **)(param_1 + 0x1c0))(param_1,param_2);
        if (iVar1 != 0) goto switchD_00d3cad4_caseD_0;
        pbVar2 = param_2 + 3;
        break;
      case 7:
        if (uVar3 < 4) {
          return 0xfffffffe;
        }
        iVar1 = (**(code **)(param_1 + 0x1c8))(param_1,param_2);
        if (iVar1 != 0) goto switchD_00d3cad4_caseD_0;
        pbVar2 = param_2 + 4;
      }
      uVar3 = param_3 - (long)pbVar2;
      param_2 = pbVar2;
    } while (0 < (long)uVar3);
  }
  return 0xffffffff;
}


