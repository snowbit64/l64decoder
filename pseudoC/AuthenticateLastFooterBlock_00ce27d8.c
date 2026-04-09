// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AuthenticateLastFooterBlock
// Entry Point: 00ce27d8
// Size: 80 bytes
// Signature: undefined __thiscall AuthenticateLastFooterBlock(GCM_Base * this, uchar * param_1, ulong param_2)


/* CryptoPP::GCM_Base::AuthenticateLastFooterBlock(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::GCM_Base::AuthenticateLastFooterBlock(GCM_Base *this,uchar *param_1,ulong param_2)

{
  AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
  ::Seek((AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
          *)(this + 0x58),0);
  AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
  ::ProcessData((AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
                 *)(this + 0x58),param_1,(uchar *)(*(long *)(this + 0x30) + 0x10),param_2);
  return;
}


