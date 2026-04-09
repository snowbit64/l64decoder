// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SLen
// Entry Point: 00cb2cd0
// Size: 40 bytes
// Signature: undefined __thiscall SLen(DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint> * this, DL_GroupParameters * param_1)


/* CryptoPP::DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint>::SLen(CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>
   const&) const */

undefined4 __thiscall
CryptoPP::DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint>::SLen
          (DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint> *this,DL_GroupParameters *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  uVar1 = Integer::ByteCount();
  return uVar1;
}


