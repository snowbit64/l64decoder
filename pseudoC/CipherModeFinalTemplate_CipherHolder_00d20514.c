// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_CipherHolder
// Entry Point: 00d20514
// Size: 148 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_CipherHolder(CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>,CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>,CryptoPP::CFB_CipherAbstractPolicy>> * this)


/* non-virtual thunk to
   CryptoPP::CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
   CryptoPP::MDC<CryptoPP::SHA1>::Enc>, CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,
   CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >, CryptoPP::CFB_CipherAbstractPolicy>
   >::~CipherModeFinalTemplate_CipherHolder() */

void __thiscall
CryptoPP::
CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>,CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>,CryptoPP::CFB_CipherAbstractPolicy>>
::~CipherModeFinalTemplate_CipherHolder
          (CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>,CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>,CryptoPP::CFB_CipherAbstractPolicy>>
           *this)

{
  ulong uVar1;
  void *pvVar2;
  
  CFB_ModePolicy::~CFB_ModePolicy((CFB_ModePolicy *)(this + -0x38));
  pvVar2 = *(void **)(this + 0x80);
  *(undefined ***)(this + 0x38) = &PTR__Enc_0100f810;
  *(undefined ***)(this + 0x40) = &PTR__Enc_0100f8c8;
  uVar1 = *(ulong *)(this + 0x70);
  if (*(ulong *)(this + 0x78) <= *(ulong *)(this + 0x70)) {
    uVar1 = *(ulong *)(this + 0x78);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d2056c to 00d2056f has its CatchHandler @ 00d205ac */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x60);
  uVar1 = *(ulong *)(this + 0x50);
  if (*(ulong *)(this + 0x58) <= *(ulong *)(this + 0x50)) {
    uVar1 = *(ulong *)(this + 0x58);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20598 to 00d2059b has its CatchHandler @ 00d205a8 */
  UnalignedDeallocate(pvVar2);
  return;
}


