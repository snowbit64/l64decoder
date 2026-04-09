// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnyRetrievable
// Entry Point: 00cb336c
// Size: 28 bytes
// Signature: undefined AnyRetrievable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ByteQueue::AnyRetrievable() const */

uint CryptoPP::ByteQueue::AnyRetrievable(void)

{
  uint uVar1;
  
  uVar1 = IsEmpty();
  return ~uVar1 & 1;
}


