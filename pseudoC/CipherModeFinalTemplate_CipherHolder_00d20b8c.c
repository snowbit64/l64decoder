// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CipherModeFinalTemplate_CipherHolder
// Entry Point: 00d20b8c
// Size: 144 bytes
// Signature: undefined __thiscall ~CipherModeFinalTemplate_CipherHolder(CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::MDC<CryptoPP::SHA1>::Enc>,CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::CFB_EncryptionTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>,CryptoPP::CFB_CipherAbstractPolicy>> * this)


/* CryptoPP::CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,
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
  
  CFB_ModePolicy::~CFB_ModePolicy((CFB_ModePolicy *)this);
  pvVar2 = *(void **)(this + 0xb8);
  *(undefined ***)(this + 0x70) = &PTR__Enc_0100f810;
  *(undefined ***)(this + 0x78) = &PTR__Enc_0100f8c8;
  uVar1 = *(ulong *)(this + 0xa8);
  if (*(ulong *)(this + 0xb0) <= *(ulong *)(this + 0xa8)) {
    uVar1 = *(ulong *)(this + 0xb0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20bdc to 00d20bdf has its CatchHandler @ 00d20c20 */
  UnalignedDeallocate(pvVar2);
  pvVar2 = *(void **)(this + 0x98);
  uVar1 = *(ulong *)(this + 0x88);
  if (*(ulong *)(this + 0x90) <= *(ulong *)(this + 0x88)) {
    uVar1 = *(ulong *)(this + 0x90);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
  }
                    /* try { // try from 00d20c08 to 00d20c0b has its CatchHandler @ 00d20c1c */
  UnalignedDeallocate(pvVar2);
  operator_delete(this);
  return;
}


