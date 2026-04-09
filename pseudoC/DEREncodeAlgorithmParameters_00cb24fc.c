// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodeAlgorithmParameters
// Entry Point: 00cb24fc
// Size: 28 bytes
// Signature: undefined __thiscall DEREncodeAlgorithmParameters(DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::OID> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_KeyImpl<CryptoPP::X509PublicKey, CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,
   CryptoPP::OID>::DEREncodeAlgorithmParameters(CryptoPP::BufferedTransformation&) const */

undefined8 __thiscall
CryptoPP::
DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::OID>::
DEREncodeAlgorithmParameters
          (DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::OID>
           *this,BufferedTransformation *param_1)

{
  DL_GroupParameters_EC<CryptoPP::ECP>::DEREncode
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x10),param_1);
  return 1;
}


