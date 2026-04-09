// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0aaa4
// Entry Point: 00f0aaa4
// Size: 128 bytes
// Signature: undefined FUN_00f0aaa4(void)


void FUN_00f0aaa4(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (-1 < (int)param_2) {
    lVar2 = *(long *)(param_1 + 0x40);
    lVar1 = FUN_00f10724(param_1,lVar2,(long)*(int *)(param_1 + 0x4c) * 0x28,(ulong)param_2 * 0x28,
                         *(undefined *)(param_1 + 2));
    *(uint *)(param_1 + 0x4c) = param_2;
    *(ulong *)(param_1 + 0x38) = lVar1 + (ulong)param_2 * 0x28 + -0x28;
    *(long *)(param_1 + 0x40) = lVar1;
    *(long *)(param_1 + 0x20) = lVar1 + (*(long *)(param_1 + 0x20) - lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f1007c(param_1);
}


