// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_test
// Entry Point: 00e1e408
// Size: 88 bytes
// Signature: undefined ov_test(void)


void ov_test(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00e1d970();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


