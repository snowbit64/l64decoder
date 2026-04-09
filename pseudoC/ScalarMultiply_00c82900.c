// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScalarMultiply
// Entry Point: 00c82900
// Size: 88 bytes
// Signature: undefined __cdecl ScalarMultiply(Integer * param_1, Integer * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::Integer>::ScalarMultiply(CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

void CryptoPP::AbstractGroup<CryptoPP::Integer>::ScalarMultiply(Integer *param_1,Integer *param_2)

{
  Integer *in_x8;
  
  Integer::Integer(in_x8);
                    /* try { // try from 00c82930 to 00c82947 has its CatchHandler @ 00c82958 */
  (**(code **)(*(long *)param_1 + 0x68))(param_1);
  return;
}


