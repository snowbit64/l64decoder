// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d383f0
// Entry Point: 00d383f0
// Size: 328 bytes
// Signature: undefined FUN_00d383f0(void)


undefined8
FUN_00d383f0(code **param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = 7;
  uVar2 = 3;
  pcVar4 = FUN_00d38538;
  switch(param_2) {
  case 0xf:
    goto switchD_00d38434_caseD_f;
  default:
    if ((param_2 != 0x1c) || (*(int *)((long)param_1 + 0x14) != 0)) {
LAB_00d38514:
      *param_1 = FUN_00d383e8;
      return 0xffffffff;
    }
    uVar2 = 0x3b;
switchD_00d38434_caseD_f:
    return uVar2;
  case 0x11:
    *param_1 = FUN_00d38740;
    return 8;
  case 0x12:
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"SYSTEM");
    if (iVar1 == 0) {
      iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"PUBLIC");
      if (iVar1 != 0) {
        *param_1 = FUN_00d3880c;
        return 3;
      }
      goto LAB_00d38514;
    }
    uVar3 = 3;
    pcVar4 = FUN_00d387b4;
  case 0x19:
    *param_1 = pcVar4;
    return uVar3;
  }
}


