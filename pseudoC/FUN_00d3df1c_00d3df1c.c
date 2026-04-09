// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3df1c
// Entry Point: 00d3df1c
// Size: 452 bytes
// Signature: undefined FUN_00d3df1c(void)


undefined4 FUN_00d3df1c(long param_1,byte *param_2,long param_3,byte **param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  
  if (0 < param_3 - (long)param_2) {
    if (*param_2 != 0x2d) {
switchD_00d3dfac_caseD_0:
      *param_4 = param_2;
      return 0;
    }
    uVar2 = param_3 - (long)(param_2 + 1);
    if (0 < (long)uVar2) {
      param_2 = param_2 + 1;
      do {
        switch(*(undefined *)(param_1 + 0x88 + (ulong)*param_2)) {
        case 0:
        case 1:
        case 8:
          goto switchD_00d3dfac_caseD_0;
        default:
          pbVar4 = param_2 + 1;
          break;
        case 5:
          if (uVar2 < 2) {
            return 0xfffffffe;
          }
          iVar1 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
          if (iVar1 != 0) {
LAB_00d3e0c4:
            *param_4 = param_2;
            return 0;
          }
          pbVar4 = param_2 + 2;
          break;
        case 6:
          if (uVar2 < 3) {
            return 0xfffffffe;
          }
          iVar1 = (**(code **)(param_1 + 0x1c0))(param_1,param_2);
          if (iVar1 != 0) goto LAB_00d3e0c4;
          pbVar4 = param_2 + 3;
          break;
        case 7:
          if (uVar2 < 4) {
            return 0xfffffffe;
          }
          iVar1 = (**(code **)(param_1 + 0x1c8))(param_1,param_2);
          if (iVar1 != 0) goto LAB_00d3e0c4;
          pbVar4 = param_2 + 4;
          break;
        case 0x1b:
          pbVar4 = param_2 + 1;
          if (param_3 - (long)pbVar4 < 1) {
            return 0xffffffff;
          }
          if (*pbVar4 == 0x2d) {
            if (param_3 - (long)(param_2 + 2) < 1) {
              return 0xffffffff;
            }
            pbVar4 = param_2 + 3;
            if (param_2[2] != 0x3e) {
              pbVar4 = param_2 + 2;
            }
            uVar3 = 0xd;
            if (param_2[2] != 0x3e) {
              uVar3 = 0;
            }
            *param_4 = pbVar4;
            return uVar3;
          }
        }
        uVar2 = param_3 - (long)pbVar4;
        param_2 = pbVar4;
      } while (0 < (long)uVar2);
    }
  }
  return 0xffffffff;
}


