// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateByte
// Entry Point: 00c79238
// Size: 88 bytes
// Signature: undefined GenerateByte(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::RandomNumberGenerator::GenerateByte() */

void CryptoPP::RandomNumberGenerator::GenerateByte(void)

{
  long lVar1;
  long *in_x0;
  undefined local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*in_x0 + 0x50))(in_x0,local_2c,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c[0]);
}


