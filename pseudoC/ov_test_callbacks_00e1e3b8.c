// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_test_callbacks
// Entry Point: 00e1e3b8
// Size: 80 bytes
// Signature: undefined ov_test_callbacks(void)


void ov_test_callbacks(void)

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


