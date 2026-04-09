// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateByte
// Entry Point: 00d201a4
// Size: 72 bytes
// Signature: undefined GenerateByte(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::OldRandomPool::GenerateByte() */

undefined CryptoPP::OldRandomPool::GenerateByte(void)

{
  long in_x0;
  long lVar1;
  
  lVar1 = *(long *)(in_x0 + 0x50);
  if (lVar1 == *(long *)(in_x0 + 0x18)) {
    Stir();
    lVar1 = *(long *)(in_x0 + 0x50);
  }
  *(long *)(in_x0 + 0x50) = lVar1 + 1;
  return *(undefined *)(*(long *)(in_x0 + 0x20) + lVar1);
}


