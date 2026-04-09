// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IncrementCounterBy256
// Entry Point: 00ce134c
// Size: 60 bytes
// Signature: undefined IncrementCounterBy256(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::GCM_Base::GCTR::IncrementCounterBy256() */

void CryptoPP::GCM_Base::GCTR::IncrementCounterBy256(void)

{
  uint uVar1;
  long lVar2;
  long in_x0;
  
  lVar2 = *(long *)(in_x0 + 0x58) + (ulong)*(uint *)(in_x0 + 0x28);
  uVar1 = *(byte *)(lVar2 + -2) + 1;
  *(char *)(lVar2 + -2) = (char)uVar1;
  if ((uVar1 >> 8 != 0) &&
     (uVar1 = *(byte *)(lVar2 + -3) + 1, *(char *)(lVar2 + -3) = (char)uVar1, uVar1 >> 8 != 0)) {
    *(char *)(lVar2 + -4) = *(char *)(lVar2 + -4) + '\x01';
  }
  return;
}


