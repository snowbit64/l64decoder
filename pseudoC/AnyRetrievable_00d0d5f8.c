// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnyRetrievable
// Entry Point: 00d0d5f8
// Size: 40 bytes
// Signature: undefined AnyRetrievable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::MessageQueue::AnyRetrievable() const */

bool CryptoPP::MessageQueue::AnyRetrievable(void)

{
  long in_x0;
  
  return *(long *)(*(long *)(*(long *)(in_x0 + 0x68) +
                            (*(ulong *)(in_x0 + 0x80) >> 6 & 0x3fffffffffffff8)) +
                  (*(ulong *)(in_x0 + 0x80) & 0x1ff) * 8) != 0;
}


