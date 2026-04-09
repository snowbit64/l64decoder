// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AbstractEuclideanDomain
// Entry Point: 00caf774
// Size: 96 bytes
// Signature: undefined __thiscall ~AbstractEuclideanDomain(AbstractEuclideanDomain<CryptoPP::Integer> * this)


/* CryptoPP::AbstractEuclideanDomain<CryptoPP::Integer>::~AbstractEuclideanDomain() */

void __thiscall
CryptoPP::AbstractEuclideanDomain<CryptoPP::Integer>::~AbstractEuclideanDomain
          (AbstractEuclideanDomain<CryptoPP::Integer> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x38);
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  *(undefined ***)this = &PTR__AbstractEuclideanDomain_00ff6440;
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00caf7c8 to 00caf7cb has its CatchHandler @ 00caf7d4 */
  UnalignedDeallocate(pvVar2);
  return;
}


