// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3dd1c
// Entry Point: 00d3dd1c
// Size: 512 bytes
// Signature: undefined FUN_00d3dd1c(void)


undefined8 FUN_00d3dd1c(long param_1,byte *param_2,long param_3,byte **param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_3 - (long)param_2;
  if (0 < (long)uVar2) {
    uVar1 = 0;
    lVar3 = 1;
    switch(*(undefined *)(param_1 + 0x88 + (ulong)*param_2)) {
    case 5:
      if (uVar2 < 2) {
        return 0xfffffffe;
      }
      uVar1 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if ((int)uVar1 == 0) goto switchD_00d3dd80_caseD_8;
      lVar3 = 2;
      break;
    case 6:
      if (uVar2 < 3) {
        return 0xfffffffe;
      }
      uVar1 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
      if ((int)uVar1 == 0) goto switchD_00d3dd80_caseD_8;
      lVar3 = 3;
      break;
    case 7:
      if (uVar2 < 4) {
        return 0xfffffffe;
      }
      uVar1 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
      if ((int)uVar1 == 0) goto switchD_00d3dd80_caseD_8;
      lVar3 = 4;
      break;
    case 9:
    case 10:
    case 0x15:
    case 0x1e:
      uVar1 = 0x16;
    default:
switchD_00d3dd80_caseD_8:
      *param_4 = param_2;
      return uVar1;
    case 0x16:
    case 0x18:
      break;
    }
    for (param_2 = param_2 + lVar3; uVar2 = param_3 - (long)param_2, 0 < (long)uVar2;
        param_2 = param_2 + lVar3) {
      uVar1 = 0;
      lVar3 = 1;
      switch(*(undefined *)(param_1 + 0x88 + (ulong)*param_2)) {
      case 5:
        if (uVar2 < 2) {
          return 0xfffffffe;
        }
        uVar1 = (**(code **)(param_1 + 0x188))(param_1,param_2);
        if ((int)uVar1 == 0) goto switchD_00d3dd80_caseD_8;
        lVar3 = 2;
        break;
      case 6:
        if (uVar2 < 3) {
          return 0xfffffffe;
        }
        uVar1 = (**(code **)(param_1 + 400))(param_1,param_2);
        if ((int)uVar1 == 0) goto switchD_00d3dd80_caseD_8;
        lVar3 = 3;
        break;
      case 7:
        if (uVar2 < 4) {
          return 0xfffffffe;
        }
        uVar1 = (**(code **)(param_1 + 0x198))(param_1,param_2);
        if ((int)uVar1 == 0) goto switchD_00d3dd80_caseD_8;
        lVar3 = 4;
        break;
      default:
        goto switchD_00d3dd80_caseD_8;
      case 0x12:
        *param_4 = param_2 + 1;
        return 0x1c;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        break;
      }
    }
  }
  return 0xffffffff;
}


