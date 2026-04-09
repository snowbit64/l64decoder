// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f197f8
// Entry Point: 00f197f8
// Size: 112 bytes
// Signature: undefined FUN_00f197f8(void)


undefined * FUN_00f197f8(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = *(int *)((long)param_2 + 0xc);
  if (iVar1 == 8) {
    lVar3 = *(long *)(*param_2 + 8);
  }
  else if (iVar1 == 6) {
    lVar3 = *(long *)(*param_2 + 0x10);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8 + 0xaa0);
  }
  if (lVar3 != 0) {
    puVar2 = (undefined *)
             FUN_00f17180(lVar3,*(undefined8 *)
                                 (*(long *)(param_1 + 0x18) + (ulong)param_3 * 8 + 0xb40));
    return puVar2;
  }
  return &DAT_0056fdf8;
}


