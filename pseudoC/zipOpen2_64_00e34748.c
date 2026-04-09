// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zipOpen2_64
// Entry Point: 00e34748
// Size: 96 bytes
// Signature: undefined zipOpen2_64(void)


void zipOpen2_64(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  zipOpen3();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


