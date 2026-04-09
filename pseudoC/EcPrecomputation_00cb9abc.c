// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EcPrecomputation
// Entry Point: 00cb9abc
// Size: 52 bytes
// Signature: undefined __thiscall ~EcPrecomputation(EcPrecomputation<CryptoPP::EC2N> * this)


/* CryptoPP::EcPrecomputation<CryptoPP::EC2N>::~EcPrecomputation() */

void __thiscall
CryptoPP::EcPrecomputation<CryptoPP::EC2N>::~EcPrecomputation
          (EcPrecomputation<CryptoPP::EC2N> *this)

{
  *(undefined ***)this = &PTR__EcPrecomputation_01002c20;
  EC2N::~EC2N((EC2N *)(this + 8));
  operator_delete(this);
  return;
}


