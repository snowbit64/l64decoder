// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertOut
// Entry Point: 00c993a0
// Size: 92 bytes
// Signature: undefined __cdecl ConvertOut(ECPPoint * param_1)


/* CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>::ConvertOut(CryptoPP::ECPPoint const&) const
    */

void CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>::ConvertOut(ECPPoint *param_1)

{
  long in_x1;
  undefined8 *in_x8;
  
  *in_x8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(in_x8 + 1),(Integer *)(in_x1 + 8));
                    /* try { // try from 00c993dc to 00c993e3 has its CatchHandler @ 00c993fc */
  Integer::Integer((Integer *)(in_x8 + 7),(Integer *)(in_x1 + 0x38));
  *(undefined *)(in_x8 + 0xd) = *(undefined *)(in_x1 + 0x68);
  return;
}


