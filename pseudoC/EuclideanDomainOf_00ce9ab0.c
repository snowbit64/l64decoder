// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EuclideanDomainOf
// Entry Point: 00ce9ab0
// Size: 264 bytes
// Signature: undefined __thiscall EuclideanDomainOf(EuclideanDomainOf<CryptoPP::PolynomialMod2> * this, EuclideanDomainOf * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::EuclideanDomainOf(CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   const&) */

void __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::EuclideanDomainOf
          (EuclideanDomainOf<CryptoPP::PolynomialMod2> *this,EuclideanDomainOf *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  
  *(EuclideanDomainOf<CryptoPP::PolynomialMod2> **)(this + 0x10) = this;
  uVar3 = *(ulong *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = 0x3fffffffffffffff;
  *(ulong *)(this + 0x28) = uVar3;
  *(undefined ***)this = &PTR__AbstractEuclideanDomain_00ff9230;
  *(undefined ***)(this + 8) = &PTR__AbstractGroup_01002610;
  AllocatorBase<unsigned_int>::CheckSize(uVar3);
  if (uVar3 == 0) {
    pvVar1 = (void *)0x0;
    *(undefined8 *)(this + 0x30) = 0;
    pvVar2 = *(void **)(param_1 + 0x30);
    if (pvVar2 == (void *)0x0) goto LAB_00ce9b24;
  }
  else {
    pvVar1 = (void *)UnalignedAllocate(uVar3 << 2);
    *(void **)(this + 0x30) = pvVar1;
    pvVar2 = *(void **)(param_1 + 0x30);
    if (pvVar1 == pvVar2) goto LAB_00ce9b24;
  }
  memcpy(pvVar1,pvVar2,*(long *)(this + 0x28) << 2);
LAB_00ce9b24:
  uVar3 = *(ulong *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = 0x3fffffffffffffff;
  *(ulong *)(this + 0x48) = uVar3;
  *(undefined ***)this = &PTR__EuclideanDomainOf_00ff3220;
                    /* try { // try from 00ce9b40 to 00ce9b53 has its CatchHandler @ 00ce9bb8 */
  AllocatorBase<unsigned_int>::CheckSize(uVar3);
  if (uVar3 == 0) {
    pvVar1 = (void *)0x0;
    *(undefined8 *)(this + 0x50) = 0;
    pvVar2 = *(void **)(param_1 + 0x50);
    if (pvVar2 == (void *)0x0) {
      return;
    }
  }
  else {
    pvVar1 = (void *)UnalignedAllocate(uVar3 << 2);
    *(void **)(this + 0x50) = pvVar1;
    pvVar2 = *(void **)(param_1 + 0x50);
    if (pvVar1 == pvVar2) {
      return;
    }
  }
  memcpy(pvVar1,pvVar2,*(long *)(this + 0x48) << 2);
  return;
}


