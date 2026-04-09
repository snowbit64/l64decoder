// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f282dc
// Entry Point: 00f282dc
// Size: 208 bytes
// Signature: undefined FUN_00f282dc(void)


int FUN_00f282dc(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined auStack_240 [528];
  
  if (*(char *)(param_1 + 0x4d) == '\0') {
    if (*(char *)((long)param_1 + 0x26a) == '\0') {
      lVar1 = param_1[1];
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
      iVar2 = FUN_00f2877c(lVar1,uVar3,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269);
    }
    else {
      memset(auStack_240,0,0x210);
      iVar2 = FUN_00f28658(param_1,auStack_240);
    }
    if (iVar2 != 1) {
      return iVar2;
    }
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if (*(char *)(param_1 + 0x4d) == '\0') {
      return 1;
    }
  }
  return 0;
}


