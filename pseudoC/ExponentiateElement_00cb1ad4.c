// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ExponentiateElement
// Entry Point: 00cb1ad4
// Size: 136 bytes
// Signature: undefined __cdecl ExponentiateElement(ECPPoint * param_1, Integer * param_2)


/* CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::ExponentiateElement(CryptoPP::ECPPoint const&,
   CryptoPP::Integer const&) const */

void CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>::ExponentiateElement
               (ECPPoint *param_1,Integer *param_2)

{
  undefined8 *in_x8;
  long lVar1;
  
  *in_x8 = &PTR__ECPPoint_00fe9fd8;
  Integer::Integer((Integer *)(in_x8 + 1));
                    /* try { // try from 00cb1b18 to 00cb1b1f has its CatchHandler @ 00cb1b70 */
  Integer::Integer((Integer *)(in_x8 + 7));
  lVar1 = *(long *)param_1;
  *(undefined *)(in_x8 + 0xd) = 1;
                    /* try { // try from 00cb1b30 to 00cb1b47 has its CatchHandler @ 00cb1b5c */
  (**(code **)(lVar1 + 0x100))(param_1);
  return;
}


