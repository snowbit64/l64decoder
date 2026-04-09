// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: what
// Entry Point: 0093dcb0
// Size: 24 bytes
// Signature: undefined what(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Exception::what() const */

long CryptoPP::Exception::what(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x11;
  if ((*(byte *)(in_x0 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x20);
  }
  return lVar1;
}


