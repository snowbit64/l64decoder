// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 00cc24f0
// Size: 232 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<std::__ndk1::vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>,std::__ndk1::allocator<std::__ndk1::vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>>> * this)


/* std::__ndk1::__vector_base<std::__ndk1::vector<CryptoPP::PolynomialMod2,
   std::__ndk1::allocator<CryptoPP::PolynomialMod2> >,
   std::__ndk1::allocator<std::__ndk1::vector<CryptoPP::PolynomialMod2,
   std::__ndk1::allocator<CryptoPP::PolynomialMod2> > > >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<std::__ndk1::vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>,std::__ndk1::allocator<std::__ndk1::vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>>>
::~__vector_base(__vector_base<std::__ndk1::vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>,std::__ndk1::allocator<std::__ndk1::vector<CryptoPP::PolynomialMod2,std::__ndk1::allocator<CryptoPP::PolynomialMod2>>>>
                 *this)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  plVar6 = *(long **)(this + 8);
  if (plVar6 != plVar4) {
    do {
      plVar5 = plVar6 + -3;
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        lVar3 = plVar6[-2];
        while (lVar3 != lVar7) {
          pvVar2 = *(void **)(lVar3 + -8);
          uVar1 = *(ulong *)(lVar3 + -0x18);
          if (*(ulong *)(lVar3 + -0x10) <= *(ulong *)(lVar3 + -0x18)) {
            uVar1 = *(ulong *)(lVar3 + -0x10);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
          }
                    /* try { // try from 00cc254c to 00cc254f has its CatchHandler @ 00cc25d8 */
          CryptoPP::UnalignedDeallocate(pvVar2);
          lVar3 = lVar3 + -0x20;
        }
        plVar6[-2] = lVar7;
        operator_delete((void *)plVar6[-3]);
      }
      plVar6 = plVar5;
    } while (plVar5 != plVar4);
    *(long **)(this + 8) = plVar4;
    operator_delete(*(void **)this);
    return;
  }
  *(long **)(this + 8) = plVar4;
  operator_delete(plVar4);
  return;
}


