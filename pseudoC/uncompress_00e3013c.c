// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: uncompress
// Entry Point: 00e3013c
// Size: 76 bytes
// Signature: undefined uncompress(void)


void uncompress(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uncompress2();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


