// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00caebec
// Size: 120 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_ExternalCipher(CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>,CryptoPP::AdditiveCipherAbstractPolicy>> * this)


/* CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,
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
  
  *(undefined ***)this = &PTR__AdditiveCipherTemplate_00ff1438;
  *(undefined ***)(this + 8) = &PTR__AdditiveCipherTemplate_00ff1588;
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  pvVar2 = *(void **)(this + 0x80);
  *(undefined ***)(this + 0x38) = &PTR__AdditiveCipherTemplate_00ff1620;
  *(undefined ***)(this + 0x60) = &PTR__AdditiveCipherTemplate_00ff16a0;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00caec48 to 00caec4b has its CatchHandler @ 00caec64 */
  UnalignedDeallocate(pvVar2);
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)this);
  operator_delete(this);
  return;
}


