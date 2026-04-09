// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ab3c
// Entry Point: 00f0ab3c
// Size: 216 bytes
// Signature: undefined FUN_00f0ab3c(void)


void FUN_00f0ab3c(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (0x57e3 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00f0a90c(param_1,5);
  }
  uVar3 = iVar2 * 2;
  if (19999 < (int)uVar3) {
    uVar3 = 20000;
  }
  uVar1 = 0x57e4;
  if (iVar2 < 20000) {
    uVar1 = uVar3;
  }
  if (-1 < (int)uVar1) {
    lVar5 = *(long *)(param_1 + 0x40);
    lVar4 = FUN_00f10724(param_1,lVar5,(long)iVar2 * 0x28,(ulong)uVar1 * 0x28,
                         *(undefined *)(param_1 + 2));
    *(uint *)(param_1 + 0x4c) = uVar1;
    lVar5 = lVar4 + (*(long *)(param_1 + 0x20) - lVar5);
    *(ulong *)(param_1 + 0x38) = lVar4 + (ulong)uVar1 * 0x28 + -0x28;
    *(long *)(param_1 + 0x40) = lVar4;
    *(long *)(param_1 + 0x20) = lVar5;
    if (iVar2 < 20000) {
      *(long *)(param_1 + 0x20) = lVar5 + 0x28;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00f09b70(param_1,"stack overflow");
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f1007c(param_1);
}


