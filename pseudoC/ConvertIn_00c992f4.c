// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertIn
// Entry Point: 00c992f4
// Size: 92 bytes
// Signature: undefined __cdecl ConvertIn(ECPPoint * param_1)


/* CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>::ConvertIn(CryptoPP::ECPPoint const&) const
    */

void CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>::ConvertIn(ECPPoint *param_1)

{
  long in_x1;
  undefined8 *in_x8;
  
  *in_x8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(in_x8 + 1),(Integer *)(in_x1 + 8));
                    /* try { // try from 00c99330 to 00c99337 has its CatchHandler @ 00c99350 */
  Integer::Integer((Integer *)(in_x8 + 7),(Integer *)(in_x1 + 0x38));
  *(undefined *)(in_x8 + 0xd) = *(undefined *)(in_x1 + 0x68);
  return;
}


