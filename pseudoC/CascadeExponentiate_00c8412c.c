// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeExponentiate
// Entry Point: 00c8412c
// Size: 92 bytes
// Signature: undefined __cdecl CascadeExponentiate(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::AbstractRing<CryptoPP::Integer>::CascadeExponentiate(CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&) const */

void CryptoPP::AbstractRing<CryptoPP::Integer>::CascadeExponentiate
               (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(*(long *)param_1 + 0xb8))();
  AbstractGroup<CryptoPP::Integer>::CascadeScalarMultiply(pIVar1,param_2,param_3,param_4);
  return;
}


