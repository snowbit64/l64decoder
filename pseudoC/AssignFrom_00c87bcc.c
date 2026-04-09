// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00c87bcc
// Size: 104 bytes
// Signature: undefined __thiscall AssignFrom(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>> * this, NameValuePairs * param_1)


/* virtual thunk to CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>
   >::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
::AssignFrom(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
             *this,NameValuePairs *param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)this + -0x28);
  bVar1 = NameValuePairs::
          GetThisObject<CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>>
                    (param_1,(DL_GroupParameters_IntegerBasedImpl *)
                             (DL_GroupParameters_IntegerBased *)(this + lVar2));
  if (bVar1) {
    return;
  }
  DL_GroupParameters_IntegerBased::AssignFrom
            ((DL_GroupParameters_IntegerBased *)(this + lVar2),param_1);
  return;
}


