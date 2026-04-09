// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Peek
// Entry Point: 00d1e610
// Size: 76 bytes
// Signature: undefined __thiscall Peek(ByteQueue * this, uchar * param_1)


/* CryptoPP::ByteQueue::Peek(unsigned char&) const */

undefined8 __thiscall CryptoPP::ByteQueue::Peek(ByteQueue *this,uchar *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x20);
  if (*(long *)(lVar1 + 0x30) != *(long *)(lVar1 + 0x28)) {
    *param_1 = *(uchar *)(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28));
    return 1;
  }
  if (*(long *)(this + 0x38) != 0) {
    *param_1 = **(uchar **)(this + 0x30);
    return 1;
  }
  return 0;
}


