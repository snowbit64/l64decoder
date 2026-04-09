// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RLen
// Entry Point: 00cafccc
// Size: 40 bytes
// Signature: undefined __thiscall RLen(DL_ElgamalLikeSignatureAlgorithm<CryptoPP::Integer> * this, DL_GroupParameters * param_1)


/* CryptoPP::DL_ElgamalLikeSignatureAlgorithm<CryptoPP::Integer>::RLen(CryptoPP::DL_GroupParameters<CryptoPP::Integer>
   const&) const */

undefined4 __thiscall
CryptoPP::DL_ElgamalLikeSignatureAlgorithm<CryptoPP::Integer>::RLen
          (DL_ElgamalLikeSignatureAlgorithm<CryptoPP::Integer> *this,DL_GroupParameters *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  uVar1 = Integer::ByteCount();
  return uVar1;
}


