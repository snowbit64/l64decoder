// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NumberOfMessagesInThisSeries
// Entry Point: 00d0d634
// Size: 32 bytes
// Signature: undefined NumberOfMessagesInThisSeries(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::MessageQueue::NumberOfMessagesInThisSeries() const */

undefined4 CryptoPP::MessageQueue::NumberOfMessagesInThisSeries(void)

{
  long in_x0;
  
  return *(undefined4 *)
          (*(long *)(*(long *)(in_x0 + 0x98) + (*(ulong *)(in_x0 + 0xb0) >> 7 & 0x1fffffffffffff8))
          + (*(ulong *)(in_x0 + 0xb0) & 0x3ff) * 4);
}


