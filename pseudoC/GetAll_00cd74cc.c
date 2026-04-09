// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetAll
// Entry Point: 00cd74cc
// Size: 168 bytes
// Signature: undefined __thiscall GetAll(BlockQueue * this, uchar * param_1)


/* CryptoPP::FilterWithBufferedInput::BlockQueue::GetAll(unsigned char*) */

ulong __thiscall
CryptoPP::FilterWithBufferedInput::BlockQueue::GetAll(BlockQueue *this,uchar *param_1)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  
  if (param_1 != (uchar *)0x0) {
    uVar2 = *(ulong *)(this + 0x30);
    __src = *(void **)(this + 0x38);
    lVar1 = *(long *)(this + 0x18) + *(long *)(this + 0x10);
    uVar3 = lVar1 - (long)__src;
    __n = uVar2;
    if (uVar3 <= uVar2) {
      __n = uVar3;
    }
    if ((ulong)(*(long *)(this + 0x20) * *(long *)(this + 0x28)) <= __n) {
      __n = *(long *)(this + 0x20) * *(long *)(this + 0x28);
    }
    *(ulong *)(this + 0x30) = uVar2 - __n;
    *(size_t *)(this + 0x38) = (long)__src + __n;
    if (uVar2 - __n == 0 || (long)__src + __n == lVar1) {
      *(long *)(this + 0x38) = *(long *)(this + 0x18);
    }
    memcpy(param_1,__src,__n);
    memcpy(param_1 + __n,*(void **)(this + 0x38),*(size_t *)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
    return uVar2;
  }
  return 0;
}


