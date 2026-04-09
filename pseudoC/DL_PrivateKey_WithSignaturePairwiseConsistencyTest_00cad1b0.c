// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DL_PrivateKey_WithSignaturePairwiseConsistencyTest
// Entry Point: 00cad1b0
// Size: 28 bytes
// Signature: undefined __thiscall ~DL_PrivateKey_WithSignaturePairwiseConsistencyTest(DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>> * this)


/* virtual thunk to
   CryptoPP::DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,
   CryptoPP::ECDSA<CryptoPP::ECP, CryptoPP::SHA256>
   >::~DL_PrivateKey_WithSignaturePairwiseConsistencyTest() */

void __thiscall
CryptoPP::
DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>>
::~DL_PrivateKey_WithSignaturePairwiseConsistencyTest
          (DL_PrivateKey_WithSignaturePairwiseConsistencyTest<CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>,CryptoPP::ECDSA<CryptoPP::ECP,CryptoPP::SHA256>>
           *this)

{
  DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::~DL_PrivateKeyImpl
            ((DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)
             (this + *(long *)(*(long *)this + -0x18)));
  return;
}


