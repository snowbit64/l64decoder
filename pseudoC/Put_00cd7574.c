// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put
// Entry Point: 00cd7574
// Size: 148 bytes
// Signature: undefined __thiscall Put(BlockQueue * this, uchar * param_1, ulong param_2)


/* CryptoPP::FilterWithBufferedInput::BlockQueue::Put(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::FilterWithBufferedInput::BlockQueue::Put(BlockQueue *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  void *__dest;
  long lVar2;
  size_t __n;
  ulong uVar3;
  
  if ((param_1 != (uchar *)0x0) && (param_2 != 0)) {
    lVar1 = *(long *)(this + 0x18) + *(long *)(this + 0x10);
    lVar2 = 0;
    if ((ulong)(lVar1 - *(long *)(this + 0x38)) <= *(ulong *)(this + 0x30)) {
      lVar2 = *(long *)(this + 0x10);
    }
    __dest = (void *)(*(long *)(this + 0x38) + (*(ulong *)(this + 0x30) - lVar2));
    uVar3 = lVar1 - (long)__dest;
    __n = uVar3;
    if (param_2 <= uVar3) {
      __n = param_2;
    }
    memcpy(__dest,param_1,__n);
    if (uVar3 < param_2) {
      memcpy(*(void **)(this + 0x18),param_1 + __n,param_2 - __n);
    }
    *(ulong *)(this + 0x30) = *(long *)(this + 0x30) + param_2;
  }
  return;
}


