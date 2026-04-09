// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecodePoint
// Entry Point: 00cd20a0
// Size: 8 bytes
// Signature: undefined __thiscall DecodePoint(ECP * this, ECPPoint * param_1, BufferedTransformation * param_2, ulong param_3)


/* non-virtual thunk to CryptoPP::ECP::DecodePoint(CryptoPP::ECPPoint&,
   CryptoPP::BufferedTransformation&, unsigned long) const */

void __thiscall
CryptoPP::ECP::DecodePoint
          (ECP *this,ECPPoint *param_1,BufferedTransformation *param_2,ulong param_3)

{
  DecodePoint(this + -8,param_1,param_2,param_3);
  return;
}


