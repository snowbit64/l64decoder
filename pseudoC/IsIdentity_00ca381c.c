// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsIdentity
// Entry Point: 00ca381c
// Size: 8 bytes
// Signature: undefined __thiscall IsIdentity(DL_GroupParameters_EC<CryptoPP::EC2N> * this, EC2NPoint * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::IsIdentity(CryptoPP::EC2NPoint const&) const */

EC2NPoint __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::IsIdentity
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,EC2NPoint *param_1)

{
  return param_1[0x48];
}


