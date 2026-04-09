// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3e180
// Entry Point: 00d3e180
// Size: 824 bytes
// Signature: undefined FUN_00d3e180(void)


undefined8 FUN_00d3e180(long param_1,byte *param_2,long param_3,byte **param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  
  uVar3 = param_3 - (long)param_2;
  if ((long)uVar3 < 1) {
    return 0xffffffff;
  }
  lVar1 = param_1 + 0x88;
  uVar2 = 0;
  lVar5 = 1;
  switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
  case 5:
    if (uVar3 < 2) {
      return 0xfffffffe;
    }
    uVar2 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
    if ((int)uVar2 != 0) {
      lVar5 = 2;
      goto switchD_00d3e1e4_caseD_16;
    }
    break;
  case 6:
    if (uVar3 < 3) {
      return 0xfffffffe;
    }
    uVar2 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if ((int)uVar2 != 0) {
      lVar5 = 3;
      goto switchD_00d3e1e4_caseD_16;
    }
    break;
  case 7:
    if (uVar3 < 4) {
      return 0xfffffffe;
    }
    uVar2 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if ((int)uVar2 != 0) {
      lVar5 = 4;
      goto switchD_00d3e1e4_caseD_16;
    }
    break;
  case 0x13:
    pbVar4 = param_2 + 1;
    if (param_3 - (long)pbVar4 < 1) {
      return 0xffffffff;
    }
    if ((ulong)*pbVar4 == 0x78) {
      pbVar4 = param_2 + 2;
      if (param_3 - (long)pbVar4 < 1) {
        return 0xffffffff;
      }
      if ((*(byte *)(lVar1 + (ulong)*pbVar4) & 0xfe) == 0x18) {
        param_2 = param_2 + 3;
        param_3 = param_3 - (long)param_2;
        while( true ) {
          if (param_3 < 1) {
            return 0xffffffff;
          }
          if (1 < *(byte *)(lVar1 + (ulong)*param_2) - 0x18) break;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        }
        if (*(byte *)(lVar1 + (ulong)*param_2) != 0x12) {
          *param_4 = param_2;
          return 0;
        }
        param_2 = param_2 + 1;
LAB_00d3e480:
        *param_4 = param_2;
        return 10;
      }
    }
    else if (*(char *)(lVar1 + (ulong)*pbVar4) == '\x19') {
      lVar5 = ~(ulong)pbVar4 + param_3;
      param_2 = param_2 + 2;
      do {
        pbVar4 = param_2;
        if (lVar5 < 1) {
          return 0xffffffff;
        }
        param_2 = pbVar4 + 1;
        lVar5 = lVar5 + -1;
      } while (*(char *)(lVar1 + (ulong)*pbVar4) == '\x19');
      if (*(char *)(lVar1 + (ulong)*pbVar4) != '\x12') {
        *param_4 = pbVar4;
        return 0;
      }
      goto LAB_00d3e480;
    }
    uVar2 = 0;
    param_2 = pbVar4;
    break;
  case 0x16:
  case 0x18:
switchD_00d3e1e4_caseD_16:
    param_2 = param_2 + lVar5;
    do {
      uVar3 = param_3 - (long)param_2;
      if ((long)uVar3 < 1) {
        return 0xffffffff;
      }
      uVar2 = 0;
      lVar5 = 1;
      switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
      case 5:
        if (uVar3 < 2) {
          return 0xfffffffe;
        }
        uVar2 = (**(code **)(param_1 + 0x188))(param_1,param_2);
        if ((int)uVar2 == 0) goto switchD_00d3e1e4_caseD_8;
        lVar5 = 2;
        break;
      case 6:
        if (uVar3 < 3) {
          return 0xfffffffe;
        }
        uVar2 = (**(code **)(param_1 + 400))(param_1,param_2);
        if ((int)uVar2 == 0) goto switchD_00d3e1e4_caseD_8;
        lVar5 = 3;
        break;
      case 7:
        if (uVar3 < 4) {
          return 0xfffffffe;
        }
        uVar2 = (**(code **)(param_1 + 0x198))(param_1,param_2);
        if ((int)uVar2 == 0) goto switchD_00d3e1e4_caseD_8;
        lVar5 = 4;
        break;
      default:
        goto switchD_00d3e1e4_caseD_8;
      case 0x12:
        *param_4 = param_2 + 1;
        return 9;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        break;
      }
      param_2 = param_2 + lVar5;
    } while( true );
  }
switchD_00d3e1e4_caseD_8:
  *param_4 = param_2;
  return uVar2;
}


