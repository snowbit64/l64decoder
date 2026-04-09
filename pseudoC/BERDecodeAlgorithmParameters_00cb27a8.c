// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeAlgorithmParameters
// Entry Point: 00cb27a8
// Size: 28 bytes
// Signature: undefined __thiscall BERDecodeAlgorithmParameters(DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_KeyImpl<CryptoPP::X509PublicKey, CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,
   CryptoPP::OID>::BERDecodeAlgorithmParameters(CryptoPP::BufferedTransformation&) */

undefined8 __thiscall
CryptoPP::
DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>::
BERDecodeAlgorithmParameters
          (DL_KeyImpl<CryptoPP::X509PublicKey,CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>,CryptoPP::OID>
           *this,BufferedTransformation *param_1)

{
  DL_GroupParameters_EC<CryptoPP::EC2N>::BERDecode
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x10),param_1);
  return 1;
}


