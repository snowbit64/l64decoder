// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePoint
// Entry Point: 00cd26ac
// Size: 8 bytes
// Signature: undefined __thiscall DEREncodePoint(ECP * this, BufferedTransformation * param_1, ECPPoint * param_2, bool param_3)


/* non-virtual thunk to CryptoPP::ECP::DEREncodePoint(CryptoPP::BufferedTransformation&,
   CryptoPP::ECPPoint const&, bool) const */

void __thiscall
CryptoPP::ECP::DEREncodePoint
          (ECP *this,BufferedTransformation *param_1,ECPPoint *param_2,bool param_3)

{
  DEREncodePoint(this + -8,param_1,param_2,param_3);
  return;
}


