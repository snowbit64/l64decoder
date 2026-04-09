// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeAlgorithmParameters
// Entry Point: 00cb2b80
// Size: 28 bytes
// Signature: undefined __thiscall DEREncodeAlgorithmParameters(DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey, CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,
   CryptoPP::OID>::DEREncodeAlgorithmParameters(CryptoPP::BufferedTransformation&) const */

undefined8 __thiscall
CryptoPP::
DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>
::DEREncodeAlgorithmParameters
          (DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>
           *this,BufferedTransformation *param_1)

{
  DL_GroupParameters_EC<CryptoPP::EC2N>::DEREncode
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x58),param_1);
  return 1;
}


