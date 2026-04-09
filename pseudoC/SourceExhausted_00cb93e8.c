// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SourceExhausted
// Entry Point: 00cb93e8
// Size: 76 bytes
// Signature: undefined SourceExhausted(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::SourceTemplate<CryptoPP::StringStore>::SourceExhausted() const */

uint CryptoPP::SourceTemplate<CryptoPP::StringStore>::SourceExhausted(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = BufferedTransformation::AnyRetrievable();
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar1 = BufferedTransformation::AnyMessages();
  return (uVar1 ^ 1) & 1;
}


