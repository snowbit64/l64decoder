// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c99ecc
// Size: 160 bytes
// Signature: undefined __thiscall DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::ECP> * this, OID * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC(CryptoPP::OID const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,OID *param_1)

{
  *(undefined ***)this = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::DL_GroupParametersImpl();
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined ***)this = &PTR__DL_GroupParameters_EC_00ff34f8;
  *(undefined ***)(this + 0xf0) = &PTR__OID_00fecd98;
  *(undefined8 *)(this + 0xf8) = 0;
                    /* try { // try from 00c99f30 to 00c99f37 has its CatchHandler @ 00c99f8c */
  Integer::Integer((Integer *)(this + 0x110));
                    /* try { // try from 00c99f3c to 00c99f43 has its CatchHandler @ 00c99f7c */
  Integer::Integer((Integer *)(this + 0x140));
  *(undefined2 *)(this + 0x170) = 0x100;
                    /* try { // try from 00c99f4c to 00c99f57 has its CatchHandler @ 00c99f6c */
  Initialize(this,param_1);
  return;
}


