// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_FixedBasePrecomputationImpl
// Entry Point: 00c95828
// Size: 36 bytes
// Signature: undefined __thiscall ~DL_FixedBasePrecomputationImpl(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> * this)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl()
    */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
          (DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *this)

{
  ~DL_FixedBasePrecomputationImpl(this);
  operator_delete(this);
  return;
}


