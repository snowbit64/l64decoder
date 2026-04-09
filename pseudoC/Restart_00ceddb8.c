// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Restart
// Entry Point: 00ceddb8
// Size: 64 bytes
// Signature: undefined Restart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::HMAC_Base::Restart() */

void CryptoPP::HMAC_Base::Restart(void)

{
  long *in_x0;
  long *plVar1;
  
  if (*(char *)(in_x0 + 6) != '\0') {
    plVar1 = (long *)(**(code **)(*in_x0 + 0xa8))();
    (**(code **)(*plVar1 + 0x40))();
    *(undefined *)(in_x0 + 6) = 0;
  }
  return;
}


