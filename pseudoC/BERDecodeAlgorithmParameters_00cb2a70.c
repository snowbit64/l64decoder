// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeAlgorithmParameters
// Entry Point: 00cb2a70
// Size: 28 bytes
// Signature: undefined __thiscall BERDecodeAlgorithmParameters(DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::OID> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey, CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,
   CryptoPP::OID>::BERDecodeAlgorithmParameters(CryptoPP::BufferedTransformation&) */

undefined8 __thiscall
CryptoPP::
DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::OID>::
BERDecodeAlgorithmParameters
          (DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::OID>
           *this,BufferedTransformation *param_1)

{
  DL_GroupParameters_EC<CryptoPP::ECP>::BERDecode
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x58),param_1);
  return 1;
}


