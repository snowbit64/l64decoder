// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24da0
// Entry Point: 00f24da0
// Size: 232 bytes
// Signature: undefined FUN_00f24da0(void)


undefined8
FUN_00f24da0(long param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,int param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0xffffffff;
  if ((param_4 < 2) && (0 < param_6)) {
    iVar1 = *(int *)((long)param_3 + 0xc);
    if (iVar1 == 8) {
      lVar4 = *(long *)(*param_3 + 8);
    }
    else if (iVar1 == 6) {
      lVar4 = *(long *)(*param_3 + 0x10);
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0xaa0);
    }
    if (lVar4 == 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 0;
      return 1;
    }
    plVar2 = (long *)FUN_00f17180(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xbd8));
    if (*(int *)((long)plVar2 + 0xc) != 0) {
      lVar4 = *plVar2;
      param_2[1] = plVar2[1];
      *param_2 = lVar4;
      return 1;
    }
    uVar3 = 1;
    *param_2 = lVar4;
    *(undefined4 *)((long)param_2 + 0xc) = 6;
  }
  return uVar3;
}


