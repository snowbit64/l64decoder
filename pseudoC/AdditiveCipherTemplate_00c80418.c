// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AdditiveCipherTemplate
// Entry Point: 00c80418
// Size: 120 bytes
// Signature: undefined __thiscall ~AdditiveCipherTemplate(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>> * this)


/* non-virtual thunk to
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >::~AdditiveCipherTemplate() */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
::~AdditiveCipherTemplate
          (AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
           *this)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__AdditiveCipherTemplate_00ff1588;
  *(undefined ***)(this + 0x58) = &PTR__AdditiveCipherTemplate_00ff16a0;
  uVar1 = *(ulong *)(this + 0x68);
  if (*(ulong *)(this + 0x70) <= *(ulong *)(this + 0x68)) {
    uVar1 = *(ulong *)(this + 0x70);
  }
  *(undefined ***)(this + 0x30) = &PTR__AdditiveCipherTemplate_00ff1620;
  pvVar2 = *(void **)(this + 0x78);
  *(undefined ***)(this + -8) = &PTR__AdditiveCipherTemplate_00ff1438;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00c8047c to 00c8047f has its CatchHandler @ 00c80490 */
  UnalignedDeallocate(pvVar2);
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)(this + -8));
  return;
}


