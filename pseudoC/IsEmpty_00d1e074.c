// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsEmpty
// Entry Point: 00d1e074
// Size: 48 bytes
// Signature: undefined IsEmpty(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ByteQueue::IsEmpty() const */

bool CryptoPP::ByteQueue::IsEmpty(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = *(long *)(in_x0 + 0x20);
  if ((lVar1 == *(long *)(in_x0 + 0x28)) && (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x28))) {
    return *(long *)(in_x0 + 0x38) == 0;
  }
  return false;
}


