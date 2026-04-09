// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1990c
// Entry Point: 00f1990c
// Size: 172 bytes
// Signature: undefined FUN_00f1990c(void)


long FUN_00f1990c(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (((*(int *)((long)param_2 + 0xc) == 8) && (*(char *)(*param_2 + 3) != -0x7f)) &&
     (lVar2 = *(long *)(*param_2 + 8), lVar2 != 0)) {
    plVar3 = (long *)FUN_00f17180(lVar2,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xbd0));
    iVar1 = *(int *)((long)plVar3 + 0xc);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + (long)*(int *)((long)param_2 + 0xc) * 8 + 0xaa0);
    if (lVar2 == 0) goto LAB_00f19994;
    plVar3 = (long *)FUN_00f17180(lVar2,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xbd0));
    iVar1 = *(int *)((long)plVar3 + 0xc);
  }
  if (iVar1 == 5) {
    return *plVar3 + 0x18;
  }
LAB_00f19994:
  return *(long *)(*(long *)(param_1 + 0x18) + (long)*(int *)((long)param_2 + 0xc) * 8 + 0xaf0) +
         0x18;
}


