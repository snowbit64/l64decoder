// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accumulate
// Entry Point: 00c84214
// Size: 52 bytes
// Signature: undefined __cdecl Accumulate(Integer * param_1, Integer * param_2)


/* CryptoPP::AbstractRing<CryptoPP::Integer>::MultiplicativeGroupT::Accumulate(CryptoPP::Integer&,
   CryptoPP::Integer const&) const */

void CryptoPP::AbstractRing<CryptoPP::Integer>::MultiplicativeGroupT::Accumulate
               (Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(**(long **)(param_1 + 8) + 0x80))();
  Integer::operator=(param_2,pIVar1);
  return;
}


