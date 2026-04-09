// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3c724
// Entry Point: 00d3c724
// Size: 820 bytes
// Signature: undefined FUN_00d3c724(void)


undefined8 FUN_00d3c724(long param_1,byte *param_2,byte *param_3,byte **param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar1 = param_1 + 0x88;
  uVar3 = 0;
  pbVar4 = param_2;
  switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
  case 0:
  case 1:
  case 8:
switchD_00d3c77c_caseD_0:
    *param_4 = pbVar4;
    return uVar3;
  default:
    pbVar4 = param_2 + 1;
    break;
  case 4:
    pbVar4 = param_2 + 1;
    if ((long)param_3 - (long)pbVar4 < 1) {
      return 0xffffffff;
    }
    if (*pbVar4 == 0x5d) {
      if ((long)param_3 - (long)(param_2 + 2) < 1) {
        return 0xffffffff;
      }
      if (param_2[2] == 0x3e) {
        *param_4 = param_2 + 3;
        return 0x28;
      }
    }
    break;
  case 5:
    if ((long)param_3 - (long)param_2 < 2) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar2 != 0) {
LAB_00d3c940:
      *param_4 = param_2;
      return 0;
    }
    pbVar4 = param_2 + 2;
    break;
  case 6:
    if ((long)param_3 - (long)param_2 < 3) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1c0))(param_1,param_2);
    if (iVar2 != 0) goto LAB_00d3c940;
    pbVar4 = param_2 + 3;
    break;
  case 7:
    if ((long)param_3 - (long)param_2 < 4) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1c8))(param_1,param_2);
    if (iVar2 != 0) goto LAB_00d3c940;
    pbVar4 = param_2 + 4;
    break;
  case 9:
    if ((long)param_3 - (long)(param_2 + 1) < 1) {
      return 0xffffffff;
    }
    pbVar4 = param_2 + 2;
    if (*(char *)(lVar1 + (ulong)param_2[1]) != '\n') {
      pbVar4 = param_2 + 1;
    }
    *param_4 = pbVar4;
    return 7;
  case 10:
    *param_4 = param_2 + 1;
    return 7;
  }
  uVar6 = (long)param_3 - (long)pbVar4;
  if ((long)uVar6 < 1) {
    *param_4 = pbVar4;
    return 6;
  }
  do {
    lVar5 = 1;
    uVar3 = 6;
    switch(*(undefined *)(lVar1 + (ulong)*pbVar4)) {
    case 0:
    case 1:
    case 4:
    case 8:
    case 9:
    case 10:
      goto switchD_00d3c77c_caseD_0;
    case 5:
      if ((uVar6 < 2) || (iVar2 = (**(code **)(param_1 + 0x1b8))(param_1,pbVar4), iVar2 != 0))
      goto LAB_00d3ca1c;
      lVar5 = 2;
      break;
    case 6:
      if ((uVar6 < 3) || (iVar2 = (**(code **)(param_1 + 0x1c0))(param_1,pbVar4), iVar2 != 0))
      goto LAB_00d3ca1c;
      lVar5 = 3;
      break;
    case 7:
      if ((uVar6 < 4) || (iVar2 = (**(code **)(param_1 + 0x1c8))(param_1,pbVar4), iVar2 != 0))
      goto LAB_00d3ca1c;
      lVar5 = 4;
    }
    pbVar4 = pbVar4 + lVar5;
    uVar6 = (long)param_3 - (long)pbVar4;
  } while (0 < (long)uVar6);
LAB_00d3ca1c:
  *param_4 = pbVar4;
  return 6;
}


