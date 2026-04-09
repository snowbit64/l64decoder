// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reduce
// Entry Point: 00c828d0
// Size: 48 bytes
// Signature: undefined __cdecl Reduce(Integer * param_1, Integer * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::Integer>::Reduce(CryptoPP::Integer&, CryptoPP::Integer const&)
   const */

void CryptoPP::AbstractGroup<CryptoPP::Integer>::Reduce(Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(*(long *)param_1 + 0x40))();
  Integer::operator=(param_2,pIVar1);
  return;
}


