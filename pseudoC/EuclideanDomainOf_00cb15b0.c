// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EuclideanDomainOf
// Entry Point: 00cb15b0
// Size: 152 bytes
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
                    /* try { // try from 00cb15f8 to 00cb15fb has its CatchHandler @ 00cb164c */
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
                    /* try { // try from 00cb1634 to 00cb1637 has its CatchHandler @ 00cb1648 */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


