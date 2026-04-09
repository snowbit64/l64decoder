// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00cc27e8
// Size: 124 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>&> * this)


/* std::__ndk1::__split_buffer<CryptoPP::PolynomialMod2,
   std::__ndk1::allocator<CryptoPP::PolynomialMod2>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>&>::
~__split_buffer(__split_buffer<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>&>
                *this)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 8);
  while (lVar3 = *(long *)(this + 0x10), lVar3 != lVar4) {
    pvVar2 = *(void **)(lVar3 + -8);
    *(long *)(this + 0x10) = lVar3 + -0x20;
    uVar1 = *(ulong *)(lVar3 + -0x18);
    if (*(ulong *)(lVar3 + -0x10) <= *(ulong *)(lVar3 + -0x18)) {
      uVar1 = *(ulong *)(lVar3 + -0x10);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00cc2800 to 00cc2803 has its CatchHandler @ 00cc2864 */
    CryptoPP::UnalignedDeallocate(pvVar2);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


