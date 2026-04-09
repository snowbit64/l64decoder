// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnyRetrievable
// Entry Point: 00cddea0
// Size: 36 bytes
// Signature: undefined AnyRetrievable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::RandomNumberStore::AnyRetrievable() const */

bool CryptoPP::RandomNumberStore::AnyRetrievable(void)

{
  long *in_x0;
  long lVar1;
  
  lVar1 = (**(code **)(*in_x0 + 0x98))();
  return lVar1 != 0;
}


