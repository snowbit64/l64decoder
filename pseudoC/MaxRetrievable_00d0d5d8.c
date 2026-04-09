// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxRetrievable
// Entry Point: 00d0d5d8
// Size: 32 bytes
// Signature: undefined MaxRetrievable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::MessageQueue::MaxRetrievable() const */

undefined8 CryptoPP::MessageQueue::MaxRetrievable(void)

{
  long in_x0;
  
  return *(undefined8 *)
          (*(long *)(*(long *)(in_x0 + 0x68) + (*(ulong *)(in_x0 + 0x80) >> 6 & 0x3fffffffffffff8))
          + (*(ulong *)(in_x0 + 0x80) & 0x1ff) * 8);
}


