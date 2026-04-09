// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f248d4
// Entry Point: 00f248d4
// Size: 208 bytes
// Signature: undefined FUN_00f248d4(void)


undefined8
FUN_00f248d4(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,long *param_5,
            int param_6)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((param_4 < 1) && (param_6 == 2)) {
    if (*(int *)((long)param_3 + 0xc) != 6) {
      return 0xffffffff;
    }
    lVar3 = *param_3;
    if (*(char *)(lVar3 + 4) == '\0') {
      iVar1 = FUN_00f17aac(lVar3);
      plVar2 = (long *)FUN_00f178d4(param_1,lVar3,iVar1 + 1);
      lVar4 = *param_5;
      plVar2[1] = param_5[1];
      *plVar2 = lVar4;
      if (((4 < *(int *)((long)param_5 + 0xc)) && ((*(byte *)(lVar3 + 1) >> 2 & 1) != 0)) &&
         ((*(byte *)(*param_5 + 1) & 3) != 0)) {
        FUN_00f0c9ec(param_1,lVar3);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


