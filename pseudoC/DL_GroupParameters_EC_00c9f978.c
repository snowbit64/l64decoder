// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9f978
// Size: 160 bytes
// Signature: undefined __thiscall DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::EC2N> * this, OID * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(CryptoPP::OID const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,OID *param_1)

{
  *(undefined ***)this = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::DL_GroupParametersImpl();
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__DL_GroupParameters_EC_00ff36f0;
  *(undefined ***)(this + 0x168) = &PTR__OID_00fecd98;
  *(undefined8 *)(this + 0x170) = 0;
                    /* try { // try from 00c9f9dc to 00c9f9e3 has its CatchHandler @ 00c9fa38 */
  Integer::Integer((Integer *)(this + 0x188));
                    /* try { // try from 00c9f9e8 to 00c9f9ef has its CatchHandler @ 00c9fa28 */
  Integer::Integer((Integer *)(this + 0x1b8));
  *(undefined2 *)(this + 0x1e8) = 0x100;
                    /* try { // try from 00c9f9f8 to 00c9fa03 has its CatchHandler @ 00c9fa18 */
  Initialize(this,param_1);
  return;
}


