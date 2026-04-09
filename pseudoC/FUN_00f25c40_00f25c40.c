// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f25c40
// Entry Point: 00f25c40
// Size: 172 bytes
// Signature: undefined FUN_00f25c40(void)


long * FUN_00f25c40(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)((long)param_1 + 0xc) == 3) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return param_1;
    }
  }
  else if ((*(int *)((long)param_1 + 0xc) == 5) &&
          (iVar2 = FUN_00f11180(*param_1 + 0x18,&local_30), iVar2 != 0)) {
    *param_2 = local_30;
    *(undefined4 *)((long)param_2 + 0xc) = 3;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return param_2;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
    return (long *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


