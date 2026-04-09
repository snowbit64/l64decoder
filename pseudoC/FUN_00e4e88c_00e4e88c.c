// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4e88c
// Entry Point: 00e4e88c
// Size: 72 bytes
// Signature: undefined FUN_00e4e88c(void)


void * FUN_00e4e88c(long param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (long)param_2 + 7U & 0xfffffffffffffff8;
  if (*(long *)(param_1 + 0x80) == 0) {
    pvVar1 = malloc((long)(int)uVar3);
    return pvVar1;
  }
  lVar4 = (long)*(int *)(param_1 + 0x94) - uVar3;
  iVar2 = (int)lVar4;
  if (iVar2 < *(int *)(param_1 + 0x90)) {
    return (void *)0x0;
  }
  *(int *)(param_1 + 0x94) = iVar2;
  return (void *)(*(long *)(param_1 + 0x80) + lVar4);
}


