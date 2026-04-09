// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generate
// Entry Point: 00be6284
// Size: 80 bytes
// Signature: undefined generate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SecureRandomGenerator::generate() */

void SecureRandomGenerator::generate(void)

{
  long lVar1;
  SecureRandomGenerator *in_x0;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  generate(in_x0,&local_2c,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}


