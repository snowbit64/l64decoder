// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_GroupParametersImpl
// Entry Point: 00c9efd8
// Size: 76 bytes
// Signature: undefined __thiscall ~DL_GroupParametersImpl(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>> * this)


/* CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint> >::~DL_GroupParametersImpl() */

void __thiscall
CryptoPP::
DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
::~DL_GroupParametersImpl
          (DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
           *this)

{
  long *in_x1;
  long lVar1;
  
  lVar1 = *in_x1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x70)) = in_x1[7];
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::~DL_FixedBasePrecomputationImpl
            ((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(this + 0xc0));
  *(undefined ***)(this + 0x10) = &PTR__EcPrecomputation_01002c20;
  EC2N::~EC2N((EC2N *)(this + 0x18));
  return;
}


