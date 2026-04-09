// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_WithSignaturePairwiseConsistencyTest
// Entry Point: 00cad768
// Size: 60 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_WithSignaturePairwiseConsistencyTest(DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>> * this)


/* virtual thunk to
   CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,
   CryptoPP::ECDSA<CryptoPP::EC2N, CryptoPP::SHA256>
   >::~DL_PrivateKey_WithSignaturePairwiseConsistencyTest() */

void __thiscall
CryptoPP::
DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>
::~DL_PrivateKey_WithSignaturePairwiseConsistencyTest
          (DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>,CryptoPP::ECDSA<CryptoPP::EC2N,CryptoPP::SHA256>>
           *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)(this + lVar1));
  operator_delete((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)
                  (this + lVar1));
  return;
}


