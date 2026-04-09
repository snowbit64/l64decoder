// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_CipherHolder
// Entry Point: 00d20c48
// Size: 152 bytes
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
  
  CFB_ModePolicy::~CFB_ModePolicy((CFB_ModePolicy *)(this + -8));
  pvVar2 = *(void **)(this + 0xb0);
  *(undefined ***)(this + 0x68) = &PTR__Enc_0100f810;
  *(undefined ***)(this + 0x70) = &PTR__Enc_0100f8c8;
  uVar1 = *(ulong *)(this + 0xa0);
  if (*(ulong *)(this + 0xa8) <= *(ulong *)(this + 0xa0)) {
    uVar1 = *(ulong *)(this + 0xa8);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20ca0 to 00d20ca3 has its CatchHandler @ 00d20ce4 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x90);
  uVar1 = *(ulong *)(this + 0x80);
  if (*(ulong *)(this + 0x88) <= *(ulong *)(this + 0x80)) {
    uVar1 = *(ulong *)(this + 0x88);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20ccc to 00d20ccf has its CatchHandler @ 00d20ce0 */
  UnalignedDeallocate(pvVar2);
  operator_delete((CFB_ModePolicy *)(this + -8));
  return;
}


