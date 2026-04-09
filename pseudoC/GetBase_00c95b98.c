// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBase
// Entry Point: 00c95b98
// Size: 60 bytes
// Signature: undefined __thiscall GetBase(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> * this, DL_GroupPrecomputation * param_1)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::GetBase(CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>
   const&) const */

DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> * __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::GetBase
          (DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *this,DL_GroupPrecomputation *param_1
          )

{
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *pDVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  pDVar1 = this + 8;
  if ((uVar2 & 1) == 0) {
    pDVar1 = *(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> **)(this + 0x90);
  }
  return pDVar1;
}


