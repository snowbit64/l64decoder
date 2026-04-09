// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f19868
// Entry Point: 00f19868
// Size: 164 bytes
// Signature: undefined FUN_00f19868(void)


undefined8 FUN_00f19868(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (((*(int *)((long)param_2 + 0xc) == 8) && (*(char *)(*param_2 + 3) != -0x7f)) &&
     (lVar2 = *(long *)(*param_2 + 8), lVar2 != 0)) {
    puVar3 = (undefined8 *)FUN_00f17180(lVar2,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xbd0));
    iVar1 = *(int *)((long)puVar3 + 0xc);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + (long)*(int *)((long)param_2 + 0xc) * 8 + 0xaa0);
    if (lVar2 == 0) goto LAB_00f198ec;
    puVar3 = (undefined8 *)FUN_00f17180(lVar2,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xbd0));
    iVar1 = *(int *)((long)puVar3 + 0xc);
  }
  if (iVar1 == 5) {
    return *puVar3;
  }
LAB_00f198ec:
  return *(undefined8 *)
          (*(long *)(param_1 + 0x18) + (long)*(int *)((long)param_2 + 0xc) * 8 + 0xaf0);
}


