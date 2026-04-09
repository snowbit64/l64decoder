// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator!=
// Entry Point: 00c87e54
// Size: 28 bytes
// Signature: undefined __thiscall operator!=(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>> * this, DL_GroupParameters_IntegerBasedImpl * param_1)


/* CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer> > const&) const */

uint __thiscall
CryptoPP::
DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
::operator!=(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
             *this,DL_GroupParameters_IntegerBasedImpl *param_1)

{
  uint uVar1;
  
  uVar1 = operator==(this,param_1);
  return ~uVar1 & 1;
}


