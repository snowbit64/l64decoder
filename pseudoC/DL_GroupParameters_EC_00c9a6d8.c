// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DL_GroupParameters_EC
// Entry Point: 00c9a6d8
// Size: 160 bytes
// Signature: undefined __thiscall DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::ECP> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC(CryptoPP::BufferedTransformation&)
    */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,BufferedTransformation *param_1)

{
  *(undefined ***)this = &PTR__NameValuePairs_00fecdc8;
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::DL_GroupParametersImpl();
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined ***)this = &PTR__DL_GroupParameters_EC_00ff34f8;
  *(undefined ***)(this + 0xf0) = &PTR__OID_00fecd98;
  *(undefined8 *)(this + 0xf8) = 0;
                    /* try { // try from 00c9a73c to 00c9a743 has its CatchHandler @ 00c9a798 */
  Integer::Integer((Integer *)(this + 0x110));
                    /* try { // try from 00c9a748 to 00c9a74f has its CatchHandler @ 00c9a788 */
  Integer::Integer((Integer *)(this + 0x140));
  *(undefined2 *)(this + 0x170) = 0x100;
                    /* try { // try from 00c9a758 to 00c9a763 has its CatchHandler @ 00c9a778 */
  BERDecode(this,param_1);
  return;
}


