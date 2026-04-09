// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WordCount
// Entry Point: 00ce3c4c
// Size: 32 bytes
// Signature: undefined WordCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PolynomialMod2::WordCount() const */

void CryptoPP::PolynomialMod2::WordCount(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  
  lVar2 = *(long *)(in_x0 + 0x10);
  do {
    if (lVar2 == 0) {
      return;
    }
    lVar1 = lVar2 * 4;
    lVar2 = lVar2 + -1;
  } while (*(int *)(*(long *)(in_x0 + 0x18) + -4 + lVar1) == 0);
  return;
}


