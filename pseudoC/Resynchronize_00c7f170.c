// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Resynchronize
// Entry Point: 00c7f170
// Size: 120 bytes
// Signature: undefined __thiscall Resynchronize(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>> * this, uchar * param_1, int param_2)


/* CryptoPP::CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,
   CryptoPP::CFB_ModePolicy> >::Resynchronize(unsigned char const*, int) */

void __thiscall
CryptoPP::
CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
::Resynchronize(CFB_CipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::CFB_CipherAbstractPolicy,CryptoPP::CFB_ModePolicy>>
                *this,uchar *param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0xe8))();
  uVar2 = SimpleKeyingInterface::ThrowIfInvalidIVLength((SimpleKeyingInterface *)this,param_2);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_1,uVar2);
  uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
  *(ulong *)(this + 0x68) = uVar3 & 0xffffffff;
  return;
}


