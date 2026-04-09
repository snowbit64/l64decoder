// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9fc40
// Size: 200 bytes
// Signature: undefined __thiscall DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::EC2N> * this, EC2N * param_1, EC2NPoint * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(CryptoPP::EC2N const&,
   CryptoPP::EC2NPoint const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,EC2N *param_1,EC2NPoint *param_2,
          Integer *param_3,Integer *param_4)

{
  *(undefined ***)this = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::DL_GroupParametersImpl();
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__DL_GroupParameters_EC_00ff36f0;
  *(undefined ***)(this + 0x168) = &PTR__OID_00fecd98;
  *(undefined8 *)(this + 0x170) = 0;
                    /* try { // try from 00c9fcb8 to 00c9fcbf has its CatchHandler @ 00c9fd28 */
  Integer::Integer((Integer *)(this + 0x188));
                    /* try { // try from 00c9fcc4 to 00c9fccb has its CatchHandler @ 00c9fd18 */
  Integer::Integer((Integer *)(this + 0x1b8));
  *(undefined2 *)(this + 0x1e8) = 0x100;
                    /* try { // try from 00c9fcd4 to 00c9fceb has its CatchHandler @ 00c9fd08 */
  Initialize(this,param_1,param_2,param_3,param_4);
  return;
}


