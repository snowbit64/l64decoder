// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~QuotientRing
// Entry Point: 00cbb004
// Size: 208 bytes
// Signature: undefined __thiscall ~QuotientRing(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> * this)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2> >::~QuotientRing()
    */

void __thiscall
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::~QuotientRing
          (QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x88);
  *(undefined ***)this = &PTR__QuotientRing_00ff3308;
  uVar1 = *(ulong *)(this + 0x78);
  if (*(ulong *)(this + 0x80) <= *(ulong *)(this + 0x78)) {
    uVar1 = *(ulong *)(this + 0x80);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbb04c to 00cbb04f has its CatchHandler @ 00cbb0dc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x68);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  *(undefined ***)(this + 0x18) = &PTR__EuclideanDomainOf_00ff3220;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbb088 to 00cbb08b has its CatchHandler @ 00cbb0d8 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x48);
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  *(undefined ***)(this + 0x18) = &PTR__AbstractEuclideanDomain_00ff9230;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbb0c4 to 00cbb0c7 has its CatchHandler @ 00cbb0d4 */
  UnalignedDeallocate(pvVar2);
  return;
}


