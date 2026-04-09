// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reduce
// Entry Point: 00c84268
// Size: 52 bytes
// Signature: undefined __cdecl Reduce(Integer * param_1, Integer * param_2)


/* CryptoPP::AbstractRing<CryptoPP::Integer>::MultiplicativeGroupT::Reduce(CryptoPP::Integer&,
   CryptoPP::Integer const&) const */

void CryptoPP::AbstractRing<CryptoPP::Integer>::MultiplicativeGroupT::Reduce
               (Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(**(long **)(param_1 + 8) + 0x98))();
  Integer::operator=(param_2,pIVar1);
  return;
}


