// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00c814d0
// Size: 288 bytes
// Signature: undefined __thiscall CipherModeFinalTemplate_ExternalCipher(CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>,CryptoPP::AdditiveCipherAbstractPolicy>> * this, BlockCipher * param_1, uchar * param_2, int param_3)


/* CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,
   CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::CTR_ModePolicy> >, CryptoPP::AdditiveCipherAbstractPolicy>
   >::CipherModeFinalTemplate_ExternalCipher(CryptoPP::BlockCipher&, unsigned char const*, int) */

void __thiscall
CryptoPP::
CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>,CryptoPP::AdditiveCipherAbstractPolicy>>
::CipherModeFinalTemplate_ExternalCipher
          (CipherModeFinalTemplate_ExternalCipher<CryptoPP::ConcretePolicyHolder<CryptoPP::Empty,CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::CTR_ModePolicy>>,CryptoPP::AdditiveCipherAbstractPolicy>>
           *this,BlockCipher *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(this + 8),true);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__CTR_ModePolicy_00fec7b8;
  *(undefined ***)(this + 8) = &PTR__AbstractPolicyHolder_00fec8d0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)(this + 0x38) = &PTR__AbstractPolicyHolder_00fec968;
                    /* try { // try from 00c81544 to 00c8154b has its CatchHandler @ 00c815f0 */
  Algorithm::Algorithm((Algorithm *)(this + 0x60),true);
  *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined ***)this = &PTR__AdditiveCipherTemplate_00ff1718;
  *(undefined ***)(this + 8) = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff1870;
  *(undefined ***)(this + 0x38) = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff1908;
  *(undefined ***)(this + 0x60) = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff1988;
                    /* try { // try from 00c81578 to 00c815db has its CatchHandler @ 00c81604 */
  SimpleKeyingInterface::ThrowIfInvalidIV((SimpleKeyingInterface *)this,param_2);
  *(BlockCipher **)(this + 0x10) = param_1;
  (**(code **)(*(long *)this + 0x98))(this);
  (**(code **)(*(long *)this + 0x90))(this,param_3);
  iVar1 = (**(code **)(*(long *)this + 0x40))(this);
  if (iVar1 < 4) {
    (**(code **)(*(long *)this + 0x60))(this,param_2,0xffffffff);
  }
  return;
}


