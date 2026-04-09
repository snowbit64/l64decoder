// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GF2NP
// Entry Point: 00ce9bcc
// Size: 192 bytes
// Signature: undefined __thiscall GF2NP(GF2NP * this, GF2NP * param_1)


/* CryptoPP::GF2NP::GF2NP(CryptoPP::GF2NP const&) */

void __thiscall CryptoPP::GF2NP::GF2NP(GF2NP *this,GF2NP *param_1)

{
  void *__dest;
  void *__src;
  ulong uVar1;
  
  *(undefined ***)(this + 8) = &PTR__AbstractGroup_01002610;
  *(GF2NP **)(this + 0x10) = this;
  *(undefined ***)this = &PTR__QuotientRing_00ff3308;
  EuclideanDomainOf<CryptoPP::PolynomialMod2>::EuclideanDomainOf
            ((EuclideanDomainOf<CryptoPP::PolynomialMod2> *)(this + 0x18),
             (EuclideanDomainOf *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x78) = 0x3fffffffffffffff;
  *(ulong *)(this + 0x80) = uVar1;
                    /* try { // try from 00ce9c1c to 00ce9c2f has its CatchHandler @ 00ce9c8c */
  AllocatorBase<unsigned_int>::CheckSize(uVar1);
  if (uVar1 == 0) {
    __dest = (void *)0x0;
    *(undefined8 *)(this + 0x88) = 0;
    __src = *(void **)(param_1 + 0x88);
    if (__src == (void *)0x0) goto LAB_00ce9c4c;
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar1 << 2);
    *(void **)(this + 0x88) = __dest;
    __src = *(void **)(param_1 + 0x88);
    if (__dest == __src) goto LAB_00ce9c4c;
  }
  memcpy(__dest,__src,*(long *)(this + 0x80) << 2);
LAB_00ce9c4c:
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined ***)this = &PTR__QuotientRing_010093a8;
  return;
}


