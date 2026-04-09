// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_Algorithm_ECDSA
// Entry Point: 00cc9764
// Size: 4 bytes
// Signature: undefined __thiscall ~DL_Algorithm_ECDSA(DL_Algorithm_ECDSA<CryptoPP::ECP> * this)


/* CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>::~DL_Algorithm_ECDSA() */

void __thiscall
CryptoPP::DL_Algorithm_ECDSA<CryptoPP::ECP>::~DL_Algorithm_ECDSA
          (DL_Algorithm_ECDSA<CryptoPP::ECP> *this)

{
  operator_delete(this);
  return;
}


