// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ExponentiateElement
// Entry Point: 00c8765c
// Size: 88 bytes
// Signature: undefined __cdecl ExponentiateElement(Integer * param_1, Integer * param_2)


/* CryptoPP::DL_GroupParameters<CryptoPP::Integer>::ExponentiateElement(CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

void CryptoPP::DL_GroupParameters<CryptoPP::Integer>::ExponentiateElement
               (Integer *param_1,Integer *param_2)

{
  Integer *in_x8;
  
  Integer::Integer(in_x8);
                    /* try { // try from 00c8768c to 00c876a3 has its CatchHandler @ 00c876b4 */
  (**(code **)(*(long *)param_1 + 0x100))(param_1);
  return;
}


