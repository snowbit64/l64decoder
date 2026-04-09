// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AuthenticatedSymmetricCipherBase
// Entry Point: 00be84fc
// Size: 92 bytes
// Signature: undefined __thiscall ~AuthenticatedSymmetricCipherBase(AuthenticatedSymmetricCipherBase * this)


/* CryptoPP::AuthenticatedSymmetricCipherBase::~AuthenticatedSymmetricCipherBase() */

void __thiscall
CryptoPP::AuthenticatedSymmetricCipherBase::~AuthenticatedSymmetricCipherBase
          (AuthenticatedSymmetricCipherBase *this)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__AuthenticatedSymmetricCipherBase_00feebe0;
  *(undefined ***)(this + 8) = &PTR__AuthenticatedSymmetricCipherBase_00feed28;
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  *(undefined ***)(this + 0x10) = &PTR__AuthenticatedSymmetricCipherBase_00feedd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00be854c to 00be854f has its CatchHandler @ 00be8558 */
  UnalignedDeallocate(pvVar2);
  return;
}


