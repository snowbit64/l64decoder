// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsIdentity
// Entry Point: 00c9e8ec
// Size: 8 bytes
// Signature: undefined __thiscall IsIdentity(DL_GroupParameters_EC<CryptoPP::ECP> * this, ECPPoint * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::IsIdentity(CryptoPP::ECPPoint const&) const */

ECPPoint __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::IsIdentity
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,ECPPoint *param_1)

{
  return param_1[0x68];
}


