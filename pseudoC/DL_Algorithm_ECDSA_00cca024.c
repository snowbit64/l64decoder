// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_Algorithm_ECDSA
// Entry Point: 00cca024
// Size: 4 bytes
// Signature: undefined __thiscall ~DL_Algorithm_ECDSA(DL_Algorithm_ECDSA<CryptoPP::EC2N> * this)


/* CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>::~DL_Algorithm_ECDSA() */

void __thiscall
CryptoPP::DL_Algorithm_ECDSA<CryptoPP::EC2N>::~DL_Algorithm_ECDSA
          (DL_Algorithm_ECDSA<CryptoPP::EC2N> *this)

{
  operator_delete(this);
  return;
}


