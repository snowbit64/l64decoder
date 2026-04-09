// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherResynchronize
// Entry Point: 00d0b170
// Size: 176 bytes
// Signature: undefined __thiscall CipherResynchronize(CTR_ModePolicy * this, uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::CTR_ModePolicy::CipherResynchronize(unsigned char*, unsigned char const*, unsigned
   long) */

void __thiscall
CryptoPP::CTR_ModePolicy::CipherResynchronize
          (CTR_ModePolicy *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  ulong __n;
  ulong uVar1;
  void *__src;
  void *__dest;
  
  CopyOrZero(*(void **)(this + 0x30),*(ulong *)(this + 0x28),param_2,param_3);
  __n = *(ulong *)(this + 0x28);
  __src = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x50);
  __dest = *(void **)(this + 0x58);
  if (uVar1 != __n) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)__dest + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(__dest);
    if (__n == 0) {
      *(ulong *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
      return;
    }
    __dest = (void *)UnalignedAllocate(__n);
  }
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(ulong *)(this + 0x50) = __n;
  *(void **)(this + 0x58) = __dest;
  if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
    memcpy(__dest,__src,__n);
  }
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  return;
}


