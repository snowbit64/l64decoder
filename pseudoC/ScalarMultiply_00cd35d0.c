// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScalarMultiply
// Entry Point: 00cd35d0
// Size: 172 bytes
// Signature: undefined __cdecl ScalarMultiply(ECPPoint * param_1, Integer * param_2)


/* CryptoPP::ECP::ScalarMultiply(CryptoPP::ECPPoint const&, CryptoPP::Integer const&) const */

void CryptoPP::ECP::ScalarMultiply(ECPPoint *param_1,Integer *param_2)

{
  uint uVar1;
  Integer *in_x2;
  undefined8 *in_x8;
  
  *in_x8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(in_x8 + 1));
                    /* try { // try from 00cd3614 to 00cd361b has its CatchHandler @ 00cd367c */
  Integer::Integer((Integer *)(in_x8 + 7));
  *(undefined *)(in_x8 + 0xd) = 1;
                    /* try { // try from 00cd3624 to 00cd3667 has its CatchHandler @ 00cd3690 */
  uVar1 = Integer::BitCount();
  if (uVar1 < 6) {
    AbstractGroup<CryptoPP::ECPPoint>::SimultaneousMultiply
              ((AbstractGroup<CryptoPP::ECPPoint> *)param_1,(ECPPoint *)in_x8,(ECPPoint *)param_2,
               in_x2,1);
  }
  else {
    SimultaneousMultiply((ECP *)param_1,(ECPPoint *)in_x8,(ECPPoint *)param_2,in_x2,1);
  }
  return;
}


