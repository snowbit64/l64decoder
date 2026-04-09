// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateMark
// Entry Point: 00e2d0a8
// Size: 140 bytes
// Signature: undefined inflateMark(void)


long inflateMark(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) ||
     (((plVar2 = *(long **)(param_1 + 0x38), plVar2 == (long *)0x0 || (*plVar2 != param_1)) ||
      (iVar1 = *(int *)(plVar2 + 1), 0x1f < iVar1 - 0x3f34U)))) {
    return -0x10000;
  }
  lVar3 = (long)*(int *)((long)plVar2 + 0x1bec) * 0x10000;
  if (iVar1 == 0x3f4c) {
    return lVar3 + (ulong)(uint)(*(int *)(plVar2 + 0x37e) - *(int *)((long)plVar2 + 0x5c));
  }
  if (iVar1 == 0x3f43) {
    return lVar3 + (ulong)*(uint *)((long)plVar2 + 0x5c);
  }
  return lVar3;
}


