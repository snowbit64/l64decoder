// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6c4c8
// Entry Point: 00d6c4c8
// Size: 84 bytes
// Signature: undefined FUN_00d6c4c8(void)


void FUN_00d6c4c8(long *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code **ppcVar3;
  long lVar4;
  
  lVar4 = param_1[0x3e];
  if (param_2 != 0) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 3;
    (**ppcVar3)(param_1);
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x34);
  *(undefined4 *)(lVar4 + 100) = 0;
  *(undefined4 *)(lVar4 + 0x68) = 0;
  iVar2 = *(int *)((long)param_1 + 0x154);
  *(undefined4 *)(lVar4 + 0x60) = uVar1;
  *(int *)(lVar4 + 0x6c) = iVar2 << 1;
  return;
}


