// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AdditiveCipherTemplate
// Entry Point: 00caeb78
// Size: 112 bytes
// Signature: undefined __thiscall ~AdditiveCipherTemplate(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>> * this)


/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
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
                    /* try { // try from 00caebd4 to 00caebd7 has its CatchHandler @ 00caebe8 */
  UnalignedDeallocate(pvVar2);
  CTR_ModePolicy::~CTR_ModePolicy((CTR_ModePolicy *)this);
  return;
}


