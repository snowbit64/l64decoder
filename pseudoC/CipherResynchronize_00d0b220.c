// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherResynchronize
// Entry Point: 00d0b220
// Size: 184 bytes
// Signature: undefined __thiscall CipherResynchronize(CTR_ModePolicy * this, uchar * param_1, uchar * param_2, ulong param_3)


/* non-virtual thunk to CryptoPP::CTR_ModePolicy::CipherResynchronize(unsigned char*, unsigned char
   const*, unsigned long) */

void __thiscall
CryptoPP::CTR_ModePolicy::CipherResynchronize
          (CTR_ModePolicy *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar1;
  ulong *puVar2;
  
  CopyOrZero(*(void **)(this + -8),*(ulong *)(this + -0x10),param_2,param_3);
  __n = *(ulong *)(this + -0x10);
  __src = *(void **)(this + -8);
  puVar2 = (ulong *)(this + 0x18);
  uVar1 = *puVar2;
  __dest = *(void **)(this + 0x20);
  if (uVar1 != __n) {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)__dest + (uVar1 - 1)) = 0;
    }
    UnalignedDeallocate(__dest);
    if (__n == 0) {
      *puVar2 = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
      return;
    }
    __dest = (void *)UnalignedAllocate(__n);
  }
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *puVar2 = __n;
  *(void **)(this + 0x20) = __dest;
  if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
    memcpy(__dest,__src,__n);
  }
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  return;
}


