// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBufferByteSize
// Entry Point: 00c80d2c
// Size: 68 bytes
// Signature: undefined __thiscall GetBufferByteSize(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>> * this, AdditiveCipherAbstractPolicy * param_1)


/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >::GetBufferByteSize(CryptoPP::AdditiveCipherAbstractPolicy const&)
   const */

int __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
::GetBufferByteSize(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>
                    *this,AdditiveCipherAbstractPolicy *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
  return iVar2 * iVar1;
}


