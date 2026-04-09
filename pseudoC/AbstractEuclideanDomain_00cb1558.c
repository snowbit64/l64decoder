// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AbstractEuclideanDomain
// Entry Point: 00cb1558
// Size: 80 bytes
// Signature: undefined __thiscall ~AbstractEuclideanDomain(AbstractEuclideanDomain<CryptoPP::PolynomialMod2> * this)


/* CryptoPP::AbstractEuclideanDomain<CryptoPP::PolynomialMod2>::~AbstractEuclideanDomain() */

void __thiscall
CryptoPP::AbstractEuclideanDomain<CryptoPP::PolynomialMod2>::~AbstractEuclideanDomain
          (AbstractEuclideanDomain<CryptoPP::PolynomialMod2> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__AbstractEuclideanDomain_00ff9230;
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb159c to 00cb159f has its CatchHandler @ 00cb15a8 */
  UnalignedDeallocate(pvVar2);
  return;
}


