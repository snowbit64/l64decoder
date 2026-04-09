// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00cc2460
// Size: 140 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>> * this)


/* std::__ndk1::__vector_base<CryptoPP::PolynomialMod2,
   std::__ndk1::allocator<CryptoPP::PolynomialMod2> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>::
~__vector_base(__vector_base<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>
               *this)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)this;
  if (lVar4 != 0) {
    lVar3 = *(long *)(this + 8);
    while (lVar3 != lVar4) {
      pvVar2 = *(void **)(lVar3 + -8);
      uVar1 = *(ulong *)(lVar3 + -0x18);
      if (*(ulong *)(lVar3 + -0x10) <= *(ulong *)(lVar3 + -0x18)) {
        uVar1 = *(ulong *)(lVar3 + -0x10);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
      }
                    /* try { // try from 00cc2484 to 00cc2487 has its CatchHandler @ 00cc24ec */
      CryptoPP::UnalignedDeallocate(pvVar2);
      lVar3 = lVar3 + -0x20;
    }
    *(long *)(this + 8) = lVar4;
    operator_delete(*(void **)this);
    return;
  }
  return;
}


