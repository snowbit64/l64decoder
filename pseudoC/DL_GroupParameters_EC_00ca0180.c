// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00ca0180
// Size: 160 bytes
// Signature: undefined __thiscall DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::EC2N> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC(CryptoPP::BufferedTransformation&)
    */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,BufferedTransformation *param_1)

{
  *(undefined ***)this = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::DL_GroupParametersImpl();
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined ***)this = &PTR__DL_GroupParameters_EC_00ff36f0;
  *(undefined ***)(this + 0x168) = &PTR__OID_00fecd98;
  *(undefined8 *)(this + 0x170) = 0;
                    /* try { // try from 00ca01e4 to 00ca01eb has its CatchHandler @ 00ca0240 */
  Integer::Integer((Integer *)(this + 0x188));
                    /* try { // try from 00ca01f0 to 00ca01f7 has its CatchHandler @ 00ca0230 */
  Integer::Integer((Integer *)(this + 0x1b8));
  *(undefined2 *)(this + 0x1e8) = 0x100;
                    /* try { // try from 00ca0200 to 00ca020b has its CatchHandler @ 00ca0220 */
  BERDecode(this,param_1);
  return;
}


