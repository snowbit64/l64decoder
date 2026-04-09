// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedSymmetricCipherBase
// Entry Point: 00c75230
// Size: 92 bytes
// Signature: undefined __thiscall ~AuthenticatedSymmetricCipherBase(AuthenticatedSymmetricCipherBase * this)


/* non-virtual thunk to
   CryptoPP::AuthenticatedSymmetricCipherBase::~AuthenticatedSymmetricCipherBase() */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::~AuthenticatedSymmetricCipherBase
          (AuthenticatedSymmetricCipherBase *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)(this + -8) = &PTR__AuthenticatedSymmetricCipherBase_00feebe0;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)this = &PTR__AuthenticatedSymmetricCipherBase_00feed28;
  *(undefined ***)(this + 8) = &PTR__AuthenticatedSymmetricCipherBase_00feedd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c75280 to 00c75283 has its CatchHandler @ 00c7528c */
  UnalignedDeallocate(pvVar2);
  return;
}


