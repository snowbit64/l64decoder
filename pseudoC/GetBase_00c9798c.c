// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBase
// Entry Point: 00c9798c
// Size: 60 bytes
// Signature: undefined __thiscall GetBase(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * this, DL_GroupPrecomputation * param_1)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::GetBase(CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>
   const&) const */

DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::GetBase
          (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *this,DL_GroupPrecomputation *param_1)

{
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *pDVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  pDVar1 = this + 8;
  if ((uVar2 & 1) == 0) {
    pDVar1 = *(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> **)(this + 0xb0);
  }
  return pDVar1;
}


