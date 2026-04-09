// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EuclideanDomainOf
// Entry Point: 00d0103c
// Size: 172 bytes
// Signature: undefined __thiscall ~EuclideanDomainOf(EuclideanDomainOf<CryptoPP::Integer> * this)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::~EuclideanDomainOf() */

void __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::~EuclideanDomainOf
          (EuclideanDomainOf<CryptoPP::Integer> *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x68);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x60) <= *(ulong *)(this + 0x58)) {
    uVar1 = *(ulong *)(this + 0x60);
  }
  *(undefined ***)this = &PTR__EuclideanDomainOf_0100cc70;
  *(undefined ***)(this + 0x48) = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d01094 to 00d01097 has its CatchHandler @ 00d010ec */
  UnalignedDeallocate(pvVar2);
  *(undefined ***)(this + 0x18) = &PTR__Integer_0100c890;
  pvVar2 = *(void **)(this + 0x38);
  *(undefined ***)this = &PTR__AbstractEuclideanDomain_00ff6440;
  uVar1 = *(ulong *)(this + 0x28);
  if (*(ulong *)(this + 0x30) <= *(ulong *)(this + 0x28)) {
    uVar1 = *(ulong *)(this + 0x30);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)pvVar2 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d010d8 to 00d010db has its CatchHandler @ 00d010e8 */
  UnalignedDeallocate(pvVar2);
  return;
}


