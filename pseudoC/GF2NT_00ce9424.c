// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GF2NT
// Entry Point: 00ce9424
// Size: 100 bytes
// Signature: undefined __thiscall ~GF2NT(GF2NT * this)


/* CryptoPP::GF2NT::~GF2NT() */

void __thiscall CryptoPP::GF2NT::~GF2NT(GF2NT *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0xb8);
  *(undefined ***)this = &PTR__GF2NT_01009488;
  uVar1 = *(ulong *)(this + 0xa8);
  if (*(ulong *)(this + 0xb0) <= *(ulong *)(this + 0xa8)) {
    uVar1 = *(ulong *)(this + 0xb0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce946c to 00ce946f has its CatchHandler @ 00ce9488 */
  UnalignedDeallocate(pvVar2);
  QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::~QuotientRing
            ((QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *)this);
  operator_delete(this);
  return;
}


