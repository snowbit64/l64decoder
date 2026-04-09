// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AdditiveCipherTemplate
// Entry Point: 00c7d470
// Size: 92 bytes
// Signature: undefined __thiscall ~AdditiveCipherTemplate(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this)


/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
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
  
  pvVar2 = *(void **)(this + 0x30);
  *(undefined ***)this = &PTR__AdditiveCipherTemplate_00ff0b58;
  *(undefined ***)(this + 8) = &PTR__AdditiveCipherTemplate_00ff0c40;
  uVar1 = *(ulong *)(this + 0x20);
  if (*(ulong *)(this + 0x28) <= *(ulong *)(this + 0x20)) {
    uVar1 = *(ulong *)(this + 0x28);
  }
  *(undefined ***)(this + 0x10) = &PTR__AdditiveCipherTemplate_00ff0cd8;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c7d4c0 to 00c7d4c3 has its CatchHandler @ 00c7d4cc */
  UnalignedDeallocate(pvVar2);
  return;
}


