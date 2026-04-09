// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Exponentiate
// Entry Point: 00c840c0
// Size: 88 bytes
// Signature: undefined __cdecl Exponentiate(Integer * param_1, Integer * param_2)


/* CryptoPP::AbstractRing<CryptoPP::Integer>::Exponentiate(CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

void CryptoPP::AbstractRing<CryptoPP::Integer>::Exponentiate(Integer *param_1,Integer *param_2)

{
  Integer *in_x8;
  
  Integer::Integer(in_x8);
                    /* try { // try from 00c840f0 to 00c84107 has its CatchHandler @ 00c84118 */
  (**(code **)(*(long *)param_1 + 0xb0))(param_1);
  return;
}


