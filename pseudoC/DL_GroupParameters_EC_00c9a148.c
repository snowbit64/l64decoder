// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9a148
// Size: 232 bytes
// Signature: undefined __thiscall DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::ECP> * this, ECP * param_1, ECPPoint * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC(CryptoPP::ECP const&,
   CryptoPP::ECPPoint const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,ECP *param_1,ECPPoint *param_2,
          Integer *param_3,Integer *param_4)

{
  *(undefined ***)this = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::DL_GroupParametersImpl();
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined ***)this = &PTR__DL_GroupParameters_EC_00ff34f8;
  *(undefined ***)(this + 0xf0) = &PTR__OID_00fecd98;
  *(undefined8 *)(this + 0xf8) = 0;
                    /* try { // try from 00c9a1c0 to 00c9a1c7 has its CatchHandler @ 00c9a238 */
  Integer::Integer((Integer *)(this + 0x110));
                    /* try { // try from 00c9a1cc to 00c9a1d3 has its CatchHandler @ 00c9a230 */
  Integer::Integer((Integer *)(this + 0x140));
  *(undefined2 *)(this + 0x170) = 0x100;
                    /* try { // try from 00c9a1e0 to 00c9a213 has its CatchHandler @ 00c9a240 */
  EcPrecomputation<CryptoPP::ECP>::SetCurve
            ((EcPrecomputation<CryptoPP::ECP> *)(this + 0x10),param_1);
  (**(code **)(*(long *)this + 0x70))(this,param_2);
  Integer::operator=((Integer *)(this + 0x110),param_3);
  Integer::operator=((Integer *)(this + 0x140),param_4);
  return;
}


