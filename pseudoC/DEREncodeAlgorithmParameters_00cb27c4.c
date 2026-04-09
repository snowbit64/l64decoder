// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeAlgorithmParameters
// Entry Point: 00cb27c4
// Size: 28 bytes
// Signature: undefined __thiscall DEREncodeAlgorithmParameters(DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_KeyImpl<CryptoPP::X509PublicKey, CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,
   CryptoPP::OID>::DEREncodeAlgorithmParameters(CryptoPP::BufferedTransformation&) const */

undefined8 __thiscall
CryptoPP::
DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>::
DEREncodeAlgorithmParameters
          (DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>
           *this,BufferedTransformation *param_1)

{
  DL_GroupParameters_EC<CryptoPP::EC2N>::DEREncode
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x10),param_1);
  return 1;
}


