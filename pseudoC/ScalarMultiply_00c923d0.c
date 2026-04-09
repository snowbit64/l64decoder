// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScalarMultiply
// Entry Point: 00c923d0
// Size: 136 bytes
// Signature: undefined __cdecl ScalarMultiply(ECPPoint * param_1, Integer * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::ScalarMultiply(CryptoPP::ECPPoint const&,
   CryptoPP::Integer const&) const */

void CryptoPP::AbstractGroup<CryptoPP::ECPPoint>::ScalarMultiply(ECPPoint *param_1,Integer *param_2)

{
  undefined8 *in_x8;
  long lVar1;
  
  *in_x8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(in_x8 + 1));
                    /* try { // try from 00c92414 to 00c9241b has its CatchHandler @ 00c9246c */
  Integer::Integer((Integer *)(in_x8 + 7));
  lVar1 = *(long *)param_1;
  *(undefined *)(in_x8 + 0xd) = 1;
                    /* try { // try from 00c9242c to 00c92443 has its CatchHandler @ 00c92458 */
  (**(code **)(lVar1 + 0x68))(param_1);
  return;
}


