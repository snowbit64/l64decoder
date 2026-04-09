// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4efe4
// Entry Point: 00e4efe4
// Size: 84 bytes
// Signature: undefined FUN_00e4efe4(void)


void * FUN_00e4efe4(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  
  uVar2 = param_2 + 7U & 0xfffffff8;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar2;
  if (*(long *)(param_1 + 0x80) == 0) {
    if (uVar2 != 0) {
      pvVar4 = malloc((long)(int)uVar2);
      return pvVar4;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x90);
    iVar1 = iVar3 + uVar2;
    if (iVar1 <= *(int *)(param_1 + 0x94)) {
      *(int *)(param_1 + 0x90) = iVar1;
      return (void *)(*(long *)(param_1 + 0x80) + (long)iVar3);
    }
  }
  return (void *)0x0;
}


