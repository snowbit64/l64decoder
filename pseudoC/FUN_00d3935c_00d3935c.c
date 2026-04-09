// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3935c
// Entry Point: 00d3935c
// Size: 732 bytes
// Signature: undefined FUN_00d3935c(void)


undefined8
FUN_00d3935c(code **param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return 0x21;
  }
  if (param_2 == 0x17) {
    *param_1 = FUN_00d39804;
    return 0x21;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"CDATA");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39638;
      return 0x17;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&DAT_00546857);
    if (iVar1 != 0) {
      *param_1 = FUN_00d39638;
      return 0x18;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"IDREF");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39638;
      return 0x19;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"IDREFS");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39638;
      return 0x1a;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"ENTITY");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39638;
      return 0x1b;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"ENTITIES");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39638;
      return 0x1c;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"NMTOKEN");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39638;
      return 0x1d;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"NMTOKENS");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39638;
      return 0x1e;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"NOTATION");
    if (iVar1 != 0) {
      *param_1 = FUN_00d397b4;
      return 0x21;
    }
  }
  else if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


