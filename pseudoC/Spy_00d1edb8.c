// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Spy
// Entry Point: 00d1edb8
// Size: 52 bytes
// Signature: undefined __thiscall Spy(ByteQueue * this, ulong * param_1)


/* CryptoPP::ByteQueue::Spy(unsigned long&) const */

long __thiscall CryptoPP::ByteQueue::Spy(ByteQueue *this,ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x20);
  uVar1 = *(long *)(lVar2 + 0x30) - *(long *)(lVar2 + 0x28);
  *param_1 = uVar1;
  if ((uVar1 == 0) && (*(ulong *)(this + 0x38) != 0)) {
    lVar2 = *(long *)(this + 0x30);
    *param_1 = *(ulong *)(this + 0x38);
    return lVar2;
  }
  return *(long *)(lVar2 + 0x20) + *(long *)(lVar2 + 0x28);
}


