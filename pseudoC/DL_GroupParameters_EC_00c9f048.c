// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParameters_EC
// Entry Point: 00c9f048
// Size: 44 bytes
// Signature: undefined __thiscall ~DL_GroupParameters_EC(DL_GroupParameters_EC<CryptoPP::EC2N> * this)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC() */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this)

{
  ~DL_GroupParameters_EC(this);
  operator_delete(this);
  return;
}


