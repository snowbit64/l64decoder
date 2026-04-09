// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SimultaneousExponentiate
// Entry Point: 00d036e8
// Size: 4 bytes
// Signature: undefined __cdecl SimultaneousExponentiate(Integer * param_1, Integer * param_2, Integer * param_3, uint param_4)


/* CryptoPP::MontgomeryRepresentation::SimultaneousExponentiate(CryptoPP::Integer*,
   CryptoPP::Integer const&, CryptoPP::Integer const*, unsigned int) const */

void CryptoPP::MontgomeryRepresentation::SimultaneousExponentiate
               (Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  uint in_w4;
  
  AbstractRing<CryptoPP::Integer>::SimultaneousExponentiate
            ((AbstractRing<CryptoPP::Integer> *)param_1,param_2,param_3,(Integer *)(ulong)param_4,
             in_w4);
  return;
}


