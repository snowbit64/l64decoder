// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AssignFrom
// Entry Point: 00c87b6c
// Size: 96 bytes
// Signature: undefined __thiscall AssignFrom(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>> * this, NameValuePairs * param_1)


/* CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>
   >::AssignFrom(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
::AssignFrom(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
             *this,NameValuePairs *param_1)

{
  bool bVar1;
  
  bVar1 = NameValuePairs::
          GetThisObject<CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>>
                    (param_1,(DL_GroupParameters_IntegerBasedImpl *)this);
  if (bVar1) {
    return;
  }
  DL_GroupParameters_IntegerBased::AssignFrom((DL_GroupParameters_IntegerBased *)this,param_1);
  return;
}


