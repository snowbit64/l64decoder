// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WordCount
// Entry Point: 00cf4ef4
// Size: 32 bytes
// Signature: undefined WordCount(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Integer::WordCount() const */

void CryptoPP::Integer::WordCount(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  
  lVar2 = *(long *)(in_x0 + 0x18);
  do {
    if (lVar2 == 0) {
      return;
    }
    lVar1 = lVar2 * 4;
    lVar2 = lVar2 + -1;
  } while (*(int *)(*(long *)(in_x0 + 0x20) + -4 + lVar1) == 0);
  return;
}


