// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f12b6c
// Entry Point: 00f12b6c
// Size: 112 bytes
// Signature: undefined FUN_00f12b6c(void)


void FUN_00f12b6c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(**(long **)(param_1 + 0x18) +
                   (long)(int)(*(uint *)(param_2 + 0x10) &
                              *(int *)((long)*(long **)(param_1 + 0x18) + 0xc) - 1U) * 8);
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    if (lVar1 != param_2) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 8);
        if (lVar1 == 0) goto LAB_00f12bcc;
      } while (lVar1 != param_2);
      plVar3 = (long *)(lVar2 + 8);
    }
    *plVar3 = *(long *)(param_2 + 8);
    *(int *)(*(long *)(param_1 + 0x18) + 8) = *(int *)(*(long *)(param_1 + 0x18) + 8) + -1;
  }
LAB_00f12bcc:
  FUN_00f10568(param_1,param_2,(ulong)*(uint *)(param_2 + 0x14) + 0x19,*(undefined *)(param_2 + 2),
               param_3);
  return;
}


