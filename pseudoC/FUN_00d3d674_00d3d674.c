// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d674
// Entry Point: 00d3d674
// Size: 472 bytes
// Signature: undefined FUN_00d3d674(void)


undefined8 FUN_00d3d674(uint param_1,long param_2,byte *param_3,long param_4,byte **param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_4 - (long)param_3;
  if (0 < (long)uVar3) {
    do {
      bVar1 = *(byte *)(param_2 + 0x88 + (ulong)*param_3);
      switch(bVar1) {
      case 0:
      case 1:
      case 8:
switchD_00d3d6e8_caseD_0:
        *param_5 = param_3;
        return 0;
      default:
        param_3 = param_3 + 1;
        break;
      case 5:
        if (uVar3 < 2) {
          return 0xfffffffe;
        }
        iVar2 = (**(code **)(param_2 + 0x1b8))(param_2,param_3);
        if (iVar2 != 0) goto switchD_00d3d6e8_caseD_0;
        param_3 = param_3 + 2;
        break;
      case 6:
        if (uVar3 < 3) {
          return 0xfffffffe;
        }
        iVar2 = (**(code **)(param_2 + 0x1c0))(param_2,param_3);
        if (iVar2 != 0) goto switchD_00d3d6e8_caseD_0;
        param_3 = param_3 + 3;
        break;
      case 7:
        if (uVar3 < 4) {
          return 0xfffffffe;
        }
        iVar2 = (**(code **)(param_2 + 0x1c8))(param_2,param_3);
        if (iVar2 != 0) goto switchD_00d3d6e8_caseD_0;
        param_3 = param_3 + 4;
        break;
      case 0xc:
      case 0xd:
        param_3 = param_3 + 1;
        if (bVar1 == param_1) {
          if (param_4 - (long)param_3 < 1) {
            return 0xffffffe5;
          }
          *param_5 = param_3;
          bVar1 = *(byte *)(param_2 + 0x88 + (ulong)*param_3);
          if ((bVar1 < 0x1f) && ((1 << (ulong)(bVar1 & 0x1f) & 0x40300e00U) != 0)) {
            return 0x1b;
          }
          return 0;
        }
      }
      uVar3 = param_4 - (long)param_3;
    } while (0 < (long)uVar3);
  }
  return 0xffffffff;
}


