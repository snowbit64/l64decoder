// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetBase
// Entry Point: 00c852f4
// Size: 60 bytes
// Signature: undefined __thiscall GetBase(DL_FixedBasePrecomputationImpl<CryptoPP::Integer> * this, DL_GroupPrecomputation * param_1)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::GetBase(CryptoPP::DL_GroupPrecomputation<CryptoPP::Integer>
   const&) const */

DL_FixedBasePrecomputationImpl<CryptoPP::Integer> * __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::GetBase
          (DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *this,DL_GroupPrecomputation *param_1)

{
  DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *pDVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  pDVar1 = this + 8;
  if ((uVar2 & 1) == 0) {
    pDVar1 = *(DL_FixedBasePrecomputationImpl<CryptoPP::Integer> **)(this + 0x70);
  }
  return pDVar1;
}


