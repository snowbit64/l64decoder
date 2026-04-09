// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedSymmetricCipherBase
// Entry Point: 00c75294
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
  
  pvVar2 = *(void **)(this + 0x20);
  *(undefined ***)(this + -0x10) = &PTR__AuthenticatedSymmetricCipherBase_00feebe0;
  *(undefined ***)(this + -8) = &PTR__AuthenticatedSymmetricCipherBase_00feed28;
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) <= *(ulong *)(this + 0x10)) {
    uVar1 = *(ulong *)(this + 0x18);
  }
  *(undefined ***)this = &PTR__AuthenticatedSymmetricCipherBase_00feedd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c752e4 to 00c752e7 has its CatchHandler @ 00c752f0 */
  UnalignedDeallocate(pvVar2);
  return;
}


