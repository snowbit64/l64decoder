// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RLen
// Entry Point: 00cb2ca8
// Size: 40 bytes
// Signature: undefined __thiscall RLen(DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint> * this, DL_GroupParameters * param_1)


/* CryptoPP::DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint>::RLen(CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>
   const&) const */

undefined4 __thiscall
CryptoPP::DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint>::RLen
          (DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint> *this,DL_GroupParameters *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  uVar1 = Integer::ByteCount();
  return uVar1;
}


