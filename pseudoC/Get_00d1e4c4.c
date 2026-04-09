// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Get
// Entry Point: 00d1e4c4
// Size: 164 bytes
// Signature: undefined __thiscall Get(ByteQueue * this, uchar * param_1)


/* CryptoPP::ByteQueue::Get(unsigned char&) */

undefined8 __thiscall CryptoPP::ByteQueue::Get(ByteQueue *this,uchar *param_1)

{
  long lVar1;
  uchar *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x20);
  if (*(long *)(lVar1 + 0x30) != *(long *)(lVar1 + 0x28)) {
    *param_1 = *(uchar *)(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28));
    lVar3 = *(long *)(this + 0x20);
    *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x28) + 1;
    if (*(long *)(lVar3 + 0x28) == *(long *)(lVar3 + 0x18)) {
      CleanupUsedNodes();
    }
    return 1;
  }
  lVar3 = *(long *)(this + 0x38);
  *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x30);
  if (lVar3 != 0) {
    puVar2 = *(uchar **)(this + 0x30);
    *(uchar **)(this + 0x30) = puVar2 + 1;
    *param_1 = *puVar2;
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + -1;
    return 1;
  }
  return 0;
}


