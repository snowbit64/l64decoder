// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AdditiveCipherTemplate
// Entry Point: 00c7d4d0
// Size: 92 bytes
// Signature: undefined __thiscall ~AdditiveCipherTemplate(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this)


/* non-virtual thunk to
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::~AdditiveCipherTemplate() */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::~AdditiveCipherTemplate
          (AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
           *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)(this + -8) = &PTR__AdditiveCipherTemplate_00ff0b58;
  uVar1 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x20) <= *(ulong *)(this + 0x18)) {
    uVar1 = *(ulong *)(this + 0x20);
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined ***)this = &PTR__AdditiveCipherTemplate_00ff0c40;
  *(undefined ***)(this + 8) = &PTR__AdditiveCipherTemplate_00ff0cd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c7d520 to 00c7d523 has its CatchHandler @ 00c7d52c */
  UnalignedDeallocate(pvVar2);
  return;
}


