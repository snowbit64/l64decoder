// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EuclideanDomainOf
// Entry Point: 00c91524
// Size: 148 bytes
// Signature: undefined __thiscall ~EuclideanDomainOf(EuclideanDomainOf<CryptoPP::PolynomialMod2> * this)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::~EuclideanDomainOf() */

void __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::~EuclideanDomainOf
          (EuclideanDomainOf<CryptoPP::PolynomialMod2> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)this = &PTR__EuclideanDomainOf_00ff3220;
  uVar1 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x48) <= *(ulong *)(this + 0x40)) {
    uVar1 = *(ulong *)(this + 0x48);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9156c to 00c9156f has its CatchHandler @ 00c915bc */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  *(undefined ***)this = &PTR__AbstractEuclideanDomain_00ff9230;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c915a8 to 00c915ab has its CatchHandler @ 00c915b8 */
  UnalignedDeallocate(pvVar2);
  return;
}


