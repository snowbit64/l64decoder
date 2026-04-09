// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetAlgorithmID
// Entry Point: 00cb0cd0
// Size: 8 bytes
// Signature: undefined GetAlgorithmID(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey, CryptoPP::DL_GroupParameters_DSA,
   CryptoPP::OID>::GetAlgorithmID() const */

void CryptoPP::DL_KeyImpl<CryptoPP::PKCS8PrivateKey,CryptoPP::DL_GroupParameters_DSA,CryptoPP::OID>
     ::GetAlgorithmID(void)

{
  DL_GroupParameters_IntegerBased::GetAlgorithmID();
  return;
}


