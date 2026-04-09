// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d457d0
// Entry Point: 00d457d0
// Size: 348 bytes
// Signature: undefined FUN_00d457d0(void)


undefined4 FUN_00d457d0(long param_1,byte *param_2,long param_3,byte **param_4)

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
  if ((*param_2 != 0) || (param_2[1] != 0x2d)) {
LAB_00d458fc:
    uVar4 = 0;
    pbVar3 = param_2;
switchD_00d45888_caseD_0:
    *param_4 = pbVar3;
    return uVar4;
  }
  param_2 = param_2 + 2;
  uVar5 = param_3 - (long)param_2;
  if ((long)uVar5 < 2) {
    return 0xffffffff;
  }
LAB_00d4583c:
  bVar2 = *param_2;
  uVar6 = (uint)bVar2;
  if (uVar6 < 0xdc) {
    if (uVar6 - 0xd8 < 4) {
switchD_00d45888_caseD_7:
      if (uVar5 < 4) {
        return 0xfffffffe;
      }
      pbVar3 = param_2 + 4;
      goto LAB_00d45828;
    }
    if (uVar6 == 0) {
      uVar4 = 0;
      pbVar3 = param_2;
      switch(*(undefined *)(param_1 + 0x88 + (ulong)param_2[1])) {
      case 0:
      case 1:
      case 8:
        goto switchD_00d45888_caseD_0;
      default:
        goto switchD_00d45888_caseD_2;
      case 6:
        if (uVar5 < 3) {
          return 0xfffffffe;
        }
        pbVar3 = param_2 + 3;
        break;
      case 7:
        goto switchD_00d45888_caseD_7;
      case 0x1b:
        pbVar3 = param_2 + 2;
        if (param_3 - (long)pbVar3 < 2) {
          return 0xffffffff;
        }
        if ((*pbVar3 == 0) && (param_2[3] == 0x2d)) {
          pbVar1 = param_2 + 4;
          if (param_3 - (long)pbVar1 < 2) {
            return 0xffffffff;
          }
          if (*pbVar1 == 0) {
            pbVar3 = param_2 + 6;
            if (param_2[5] != 0x3e) {
              pbVar3 = pbVar1;
            }
            uVar4 = 0xd;
            if (param_2[5] != 0x3e) {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 0;
            pbVar3 = pbVar1;
          }
          goto switchD_00d45888_caseD_0;
        }
      }
      goto LAB_00d45828;
    }
  }
  else {
    if (bVar2 != 0xff) {
      if (3 < bVar2 - 0xdc) goto switchD_00d45888_caseD_2;
      goto LAB_00d458fc;
    }
    if (0xfd < param_2[1]) goto LAB_00d458fc;
  }
switchD_00d45888_caseD_2:
  pbVar3 = param_2 + 2;
LAB_00d45828:
  param_2 = pbVar3;
  uVar5 = param_3 - (long)param_2;
  if ((long)uVar5 < 2) {
    return 0xffffffff;
  }
  goto LAB_00d4583c;
}


