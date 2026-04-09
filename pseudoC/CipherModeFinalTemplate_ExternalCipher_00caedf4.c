// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00caedf4
// Size: 128 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_ExternalCipher(CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>,CryptoPP::AdditiveCipherAbstractPolicy>> * this)


/* non-virtual thunk to
   CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >, CryptoPP::AdditiveCipherAbstractPolicy>
   >::~CipherModeFinalTemplate_ExternalCipher() */

void __thiscall
CryptoPP::
CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>,CryptoPP::AdditiveCipherAbstractPolicy>>
::~CipherModeFinalTemplate_ExternalCipher
          (CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>,CryptoPP::AdditiveCipherAbstractPolicy>>
           *this)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *this_00;
  
  *(undefined ***)(this + -0x30) = &PTR__AdditiveCipherTemplate_00ff1588;
  *(undefined ***)(this + 0x28) = &PTR__AdditiveCipherTemplate_00ff16a0;
  uVar1 = *(ulong *)(this + 0x38);
  if (*(ulong *)(this + 0x40) <= *(ulong *)(this + 0x38)) {
    uVar1 = *(ulong *)(this + 0x40);
  }
  *(undefined ***)this = &PTR__AdditiveCipherTemplate_00ff1620;
  pvVar2 = *(void **)(this + 0x48);
  this_00 = (undefined8 *)(this + -0x38);
  *this_00 = &PTR__AdditiveCipherTemplate_00ff1438;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00caee58 to 00caee5b has its CatchHandler @ 00caee74 */
  UnalignedDeallocate(pvVar2);
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)this_00);
  operator_delete(this_00);
  return;
}


